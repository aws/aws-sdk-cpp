/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/finspace/model/DnsStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace finspace
  {
    namespace Model
    {
      namespace DnsStatusMapper
      {

        static const int NONE_HASH = HashingUtils::HashString("NONE");
        static const int UPDATE_REQUESTED_HASH = HashingUtils::HashString("UPDATE_REQUESTED");
        static const int UPDATING_HASH = HashingUtils::HashString("UPDATING");
        static const int FAILED_UPDATE_HASH = HashingUtils::HashString("FAILED_UPDATE");
        static const int SUCCESSFULLY_UPDATED_HASH = HashingUtils::HashString("SUCCESSFULLY_UPDATED");


        DnsStatus GetDnsStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NONE_HASH)
          {
            return DnsStatus::NONE;
          }
          else if (hashCode == UPDATE_REQUESTED_HASH)
          {
            return DnsStatus::UPDATE_REQUESTED;
          }
          else if (hashCode == UPDATING_HASH)
          {
            return DnsStatus::UPDATING;
          }
          else if (hashCode == FAILED_UPDATE_HASH)
          {
            return DnsStatus::FAILED_UPDATE;
          }
          else if (hashCode == SUCCESSFULLY_UPDATED_HASH)
          {
            return DnsStatus::SUCCESSFULLY_UPDATED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DnsStatus>(hashCode);
          }

          return DnsStatus::NOT_SET;
        }

        Aws::String GetNameForDnsStatus(DnsStatus enumValue)
        {
          switch(enumValue)
          {
          case DnsStatus::NOT_SET:
            return {};
          case DnsStatus::NONE:
            return "NONE";
          case DnsStatus::UPDATE_REQUESTED:
            return "UPDATE_REQUESTED";
          case DnsStatus::UPDATING:
            return "UPDATING";
          case DnsStatus::FAILED_UPDATE:
            return "FAILED_UPDATE";
          case DnsStatus::SUCCESSFULLY_UPDATED:
            return "SUCCESSFULLY_UPDATED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DnsStatusMapper
    } // namespace Model
  } // namespace finspace
} // namespace Aws

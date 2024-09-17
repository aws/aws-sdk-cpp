/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/account/model/PrimaryEmailUpdateStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Account
  {
    namespace Model
    {
      namespace PrimaryEmailUpdateStatusMapper
      {

        static const int PENDING_HASH = HashingUtils::HashString("PENDING");
        static const int ACCEPTED_HASH = HashingUtils::HashString("ACCEPTED");


        PrimaryEmailUpdateStatus GetPrimaryEmailUpdateStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PENDING_HASH)
          {
            return PrimaryEmailUpdateStatus::PENDING;
          }
          else if (hashCode == ACCEPTED_HASH)
          {
            return PrimaryEmailUpdateStatus::ACCEPTED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PrimaryEmailUpdateStatus>(hashCode);
          }

          return PrimaryEmailUpdateStatus::NOT_SET;
        }

        Aws::String GetNameForPrimaryEmailUpdateStatus(PrimaryEmailUpdateStatus enumValue)
        {
          switch(enumValue)
          {
          case PrimaryEmailUpdateStatus::NOT_SET:
            return {};
          case PrimaryEmailUpdateStatus::PENDING:
            return "PENDING";
          case PrimaryEmailUpdateStatus::ACCEPTED:
            return "ACCEPTED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PrimaryEmailUpdateStatusMapper
    } // namespace Model
  } // namespace Account
} // namespace Aws

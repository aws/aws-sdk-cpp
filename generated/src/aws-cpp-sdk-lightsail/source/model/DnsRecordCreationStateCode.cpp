/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lightsail/model/DnsRecordCreationStateCode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Lightsail
  {
    namespace Model
    {
      namespace DnsRecordCreationStateCodeMapper
      {

        static const int SUCCEEDED_HASH = HashingUtils::HashString("SUCCEEDED");
        static const int STARTED_HASH = HashingUtils::HashString("STARTED");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");


        DnsRecordCreationStateCode GetDnsRecordCreationStateCodeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SUCCEEDED_HASH)
          {
            return DnsRecordCreationStateCode::SUCCEEDED;
          }
          else if (hashCode == STARTED_HASH)
          {
            return DnsRecordCreationStateCode::STARTED;
          }
          else if (hashCode == FAILED_HASH)
          {
            return DnsRecordCreationStateCode::FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DnsRecordCreationStateCode>(hashCode);
          }

          return DnsRecordCreationStateCode::NOT_SET;
        }

        Aws::String GetNameForDnsRecordCreationStateCode(DnsRecordCreationStateCode enumValue)
        {
          switch(enumValue)
          {
          case DnsRecordCreationStateCode::SUCCEEDED:
            return "SUCCEEDED";
          case DnsRecordCreationStateCode::STARTED:
            return "STARTED";
          case DnsRecordCreationStateCode::FAILED:
            return "FAILED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DnsRecordCreationStateCodeMapper
    } // namespace Model
  } // namespace Lightsail
} // namespace Aws

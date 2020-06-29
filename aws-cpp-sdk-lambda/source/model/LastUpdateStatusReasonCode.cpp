/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lambda/model/LastUpdateStatusReasonCode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Lambda
  {
    namespace Model
    {
      namespace LastUpdateStatusReasonCodeMapper
      {

        static const int EniLimitExceeded_HASH = HashingUtils::HashString("EniLimitExceeded");
        static const int InsufficientRolePermissions_HASH = HashingUtils::HashString("InsufficientRolePermissions");
        static const int InvalidConfiguration_HASH = HashingUtils::HashString("InvalidConfiguration");
        static const int InternalError_HASH = HashingUtils::HashString("InternalError");
        static const int SubnetOutOfIPAddresses_HASH = HashingUtils::HashString("SubnetOutOfIPAddresses");
        static const int InvalidSubnet_HASH = HashingUtils::HashString("InvalidSubnet");
        static const int InvalidSecurityGroup_HASH = HashingUtils::HashString("InvalidSecurityGroup");


        LastUpdateStatusReasonCode GetLastUpdateStatusReasonCodeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == EniLimitExceeded_HASH)
          {
            return LastUpdateStatusReasonCode::EniLimitExceeded;
          }
          else if (hashCode == InsufficientRolePermissions_HASH)
          {
            return LastUpdateStatusReasonCode::InsufficientRolePermissions;
          }
          else if (hashCode == InvalidConfiguration_HASH)
          {
            return LastUpdateStatusReasonCode::InvalidConfiguration;
          }
          else if (hashCode == InternalError_HASH)
          {
            return LastUpdateStatusReasonCode::InternalError;
          }
          else if (hashCode == SubnetOutOfIPAddresses_HASH)
          {
            return LastUpdateStatusReasonCode::SubnetOutOfIPAddresses;
          }
          else if (hashCode == InvalidSubnet_HASH)
          {
            return LastUpdateStatusReasonCode::InvalidSubnet;
          }
          else if (hashCode == InvalidSecurityGroup_HASH)
          {
            return LastUpdateStatusReasonCode::InvalidSecurityGroup;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<LastUpdateStatusReasonCode>(hashCode);
          }

          return LastUpdateStatusReasonCode::NOT_SET;
        }

        Aws::String GetNameForLastUpdateStatusReasonCode(LastUpdateStatusReasonCode enumValue)
        {
          switch(enumValue)
          {
          case LastUpdateStatusReasonCode::EniLimitExceeded:
            return "EniLimitExceeded";
          case LastUpdateStatusReasonCode::InsufficientRolePermissions:
            return "InsufficientRolePermissions";
          case LastUpdateStatusReasonCode::InvalidConfiguration:
            return "InvalidConfiguration";
          case LastUpdateStatusReasonCode::InternalError:
            return "InternalError";
          case LastUpdateStatusReasonCode::SubnetOutOfIPAddresses:
            return "SubnetOutOfIPAddresses";
          case LastUpdateStatusReasonCode::InvalidSubnet:
            return "InvalidSubnet";
          case LastUpdateStatusReasonCode::InvalidSecurityGroup:
            return "InvalidSecurityGroup";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace LastUpdateStatusReasonCodeMapper
    } // namespace Model
  } // namespace Lambda
} // namespace Aws

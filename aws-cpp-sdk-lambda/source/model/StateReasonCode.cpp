/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/lambda/model/StateReasonCode.h>
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
      namespace StateReasonCodeMapper
      {

        static const int Idle_HASH = HashingUtils::HashString("Idle");
        static const int Creating_HASH = HashingUtils::HashString("Creating");
        static const int Restoring_HASH = HashingUtils::HashString("Restoring");
        static const int EniLimitExceeded_HASH = HashingUtils::HashString("EniLimitExceeded");
        static const int InsufficientRolePermissions_HASH = HashingUtils::HashString("InsufficientRolePermissions");
        static const int InvalidConfiguration_HASH = HashingUtils::HashString("InvalidConfiguration");
        static const int InternalError_HASH = HashingUtils::HashString("InternalError");
        static const int SubnetOutOfIPAddresses_HASH = HashingUtils::HashString("SubnetOutOfIPAddresses");
        static const int InvalidSubnet_HASH = HashingUtils::HashString("InvalidSubnet");
        static const int InvalidSecurityGroup_HASH = HashingUtils::HashString("InvalidSecurityGroup");


        StateReasonCode GetStateReasonCodeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Idle_HASH)
          {
            return StateReasonCode::Idle;
          }
          else if (hashCode == Creating_HASH)
          {
            return StateReasonCode::Creating;
          }
          else if (hashCode == Restoring_HASH)
          {
            return StateReasonCode::Restoring;
          }
          else if (hashCode == EniLimitExceeded_HASH)
          {
            return StateReasonCode::EniLimitExceeded;
          }
          else if (hashCode == InsufficientRolePermissions_HASH)
          {
            return StateReasonCode::InsufficientRolePermissions;
          }
          else if (hashCode == InvalidConfiguration_HASH)
          {
            return StateReasonCode::InvalidConfiguration;
          }
          else if (hashCode == InternalError_HASH)
          {
            return StateReasonCode::InternalError;
          }
          else if (hashCode == SubnetOutOfIPAddresses_HASH)
          {
            return StateReasonCode::SubnetOutOfIPAddresses;
          }
          else if (hashCode == InvalidSubnet_HASH)
          {
            return StateReasonCode::InvalidSubnet;
          }
          else if (hashCode == InvalidSecurityGroup_HASH)
          {
            return StateReasonCode::InvalidSecurityGroup;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<StateReasonCode>(hashCode);
          }

          return StateReasonCode::NOT_SET;
        }

        Aws::String GetNameForStateReasonCode(StateReasonCode enumValue)
        {
          switch(enumValue)
          {
          case StateReasonCode::Idle:
            return "Idle";
          case StateReasonCode::Creating:
            return "Creating";
          case StateReasonCode::Restoring:
            return "Restoring";
          case StateReasonCode::EniLimitExceeded:
            return "EniLimitExceeded";
          case StateReasonCode::InsufficientRolePermissions:
            return "InsufficientRolePermissions";
          case StateReasonCode::InvalidConfiguration:
            return "InvalidConfiguration";
          case StateReasonCode::InternalError:
            return "InternalError";
          case StateReasonCode::SubnetOutOfIPAddresses:
            return "SubnetOutOfIPAddresses";
          case StateReasonCode::InvalidSubnet:
            return "InvalidSubnet";
          case StateReasonCode::InvalidSecurityGroup:
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

      } // namespace StateReasonCodeMapper
    } // namespace Model
  } // namespace Lambda
} // namespace Aws

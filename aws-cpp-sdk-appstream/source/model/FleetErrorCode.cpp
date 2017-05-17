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

#include <aws/appstream/model/FleetErrorCode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace AppStream
  {
    namespace Model
    {
      namespace FleetErrorCodeMapper
      {

        static const int IAM_SERVICE_ROLE_MISSING_ENI_DESCRIBE_ACTION_HASH = HashingUtils::HashString("IAM_SERVICE_ROLE_MISSING_ENI_DESCRIBE_ACTION");
        static const int IAM_SERVICE_ROLE_MISSING_ENI_CREATE_ACTION_HASH = HashingUtils::HashString("IAM_SERVICE_ROLE_MISSING_ENI_CREATE_ACTION");
        static const int IAM_SERVICE_ROLE_MISSING_ENI_DELETE_ACTION_HASH = HashingUtils::HashString("IAM_SERVICE_ROLE_MISSING_ENI_DELETE_ACTION");
        static const int NETWORK_INTERFACE_LIMIT_EXCEEDED_HASH = HashingUtils::HashString("NETWORK_INTERFACE_LIMIT_EXCEEDED");
        static const int INTERNAL_SERVICE_ERROR_HASH = HashingUtils::HashString("INTERNAL_SERVICE_ERROR");
        static const int IAM_SERVICE_ROLE_IS_MISSING_HASH = HashingUtils::HashString("IAM_SERVICE_ROLE_IS_MISSING");
        static const int SUBNET_HAS_INSUFFICIENT_IP_ADDRESSES_HASH = HashingUtils::HashString("SUBNET_HAS_INSUFFICIENT_IP_ADDRESSES");
        static const int IAM_SERVICE_ROLE_MISSING_DESCRIBE_SUBNET_ACTION_HASH = HashingUtils::HashString("IAM_SERVICE_ROLE_MISSING_DESCRIBE_SUBNET_ACTION");
        static const int SUBNET_NOT_FOUND_HASH = HashingUtils::HashString("SUBNET_NOT_FOUND");
        static const int IMAGE_NOT_FOUND_HASH = HashingUtils::HashString("IMAGE_NOT_FOUND");
        static const int INVALID_SUBNET_CONFIGURATION_HASH = HashingUtils::HashString("INVALID_SUBNET_CONFIGURATION");


        FleetErrorCode GetFleetErrorCodeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == IAM_SERVICE_ROLE_MISSING_ENI_DESCRIBE_ACTION_HASH)
          {
            return FleetErrorCode::IAM_SERVICE_ROLE_MISSING_ENI_DESCRIBE_ACTION;
          }
          else if (hashCode == IAM_SERVICE_ROLE_MISSING_ENI_CREATE_ACTION_HASH)
          {
            return FleetErrorCode::IAM_SERVICE_ROLE_MISSING_ENI_CREATE_ACTION;
          }
          else if (hashCode == IAM_SERVICE_ROLE_MISSING_ENI_DELETE_ACTION_HASH)
          {
            return FleetErrorCode::IAM_SERVICE_ROLE_MISSING_ENI_DELETE_ACTION;
          }
          else if (hashCode == NETWORK_INTERFACE_LIMIT_EXCEEDED_HASH)
          {
            return FleetErrorCode::NETWORK_INTERFACE_LIMIT_EXCEEDED;
          }
          else if (hashCode == INTERNAL_SERVICE_ERROR_HASH)
          {
            return FleetErrorCode::INTERNAL_SERVICE_ERROR;
          }
          else if (hashCode == IAM_SERVICE_ROLE_IS_MISSING_HASH)
          {
            return FleetErrorCode::IAM_SERVICE_ROLE_IS_MISSING;
          }
          else if (hashCode == SUBNET_HAS_INSUFFICIENT_IP_ADDRESSES_HASH)
          {
            return FleetErrorCode::SUBNET_HAS_INSUFFICIENT_IP_ADDRESSES;
          }
          else if (hashCode == IAM_SERVICE_ROLE_MISSING_DESCRIBE_SUBNET_ACTION_HASH)
          {
            return FleetErrorCode::IAM_SERVICE_ROLE_MISSING_DESCRIBE_SUBNET_ACTION;
          }
          else if (hashCode == SUBNET_NOT_FOUND_HASH)
          {
            return FleetErrorCode::SUBNET_NOT_FOUND;
          }
          else if (hashCode == IMAGE_NOT_FOUND_HASH)
          {
            return FleetErrorCode::IMAGE_NOT_FOUND;
          }
          else if (hashCode == INVALID_SUBNET_CONFIGURATION_HASH)
          {
            return FleetErrorCode::INVALID_SUBNET_CONFIGURATION;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<FleetErrorCode>(hashCode);
          }

          return FleetErrorCode::NOT_SET;
        }

        Aws::String GetNameForFleetErrorCode(FleetErrorCode enumValue)
        {
          switch(enumValue)
          {
          case FleetErrorCode::IAM_SERVICE_ROLE_MISSING_ENI_DESCRIBE_ACTION:
            return "IAM_SERVICE_ROLE_MISSING_ENI_DESCRIBE_ACTION";
          case FleetErrorCode::IAM_SERVICE_ROLE_MISSING_ENI_CREATE_ACTION:
            return "IAM_SERVICE_ROLE_MISSING_ENI_CREATE_ACTION";
          case FleetErrorCode::IAM_SERVICE_ROLE_MISSING_ENI_DELETE_ACTION:
            return "IAM_SERVICE_ROLE_MISSING_ENI_DELETE_ACTION";
          case FleetErrorCode::NETWORK_INTERFACE_LIMIT_EXCEEDED:
            return "NETWORK_INTERFACE_LIMIT_EXCEEDED";
          case FleetErrorCode::INTERNAL_SERVICE_ERROR:
            return "INTERNAL_SERVICE_ERROR";
          case FleetErrorCode::IAM_SERVICE_ROLE_IS_MISSING:
            return "IAM_SERVICE_ROLE_IS_MISSING";
          case FleetErrorCode::SUBNET_HAS_INSUFFICIENT_IP_ADDRESSES:
            return "SUBNET_HAS_INSUFFICIENT_IP_ADDRESSES";
          case FleetErrorCode::IAM_SERVICE_ROLE_MISSING_DESCRIBE_SUBNET_ACTION:
            return "IAM_SERVICE_ROLE_MISSING_DESCRIBE_SUBNET_ACTION";
          case FleetErrorCode::SUBNET_NOT_FOUND:
            return "SUBNET_NOT_FOUND";
          case FleetErrorCode::IMAGE_NOT_FOUND:
            return "IMAGE_NOT_FOUND";
          case FleetErrorCode::INVALID_SUBNET_CONFIGURATION:
            return "INVALID_SUBNET_CONFIGURATION";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace FleetErrorCodeMapper
    } // namespace Model
  } // namespace AppStream
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
        static const int MACHINE_ROLE_IS_MISSING_HASH = HashingUtils::HashString("MACHINE_ROLE_IS_MISSING");
        static const int STS_DISABLED_IN_REGION_HASH = HashingUtils::HashString("STS_DISABLED_IN_REGION");
        static const int SUBNET_HAS_INSUFFICIENT_IP_ADDRESSES_HASH = HashingUtils::HashString("SUBNET_HAS_INSUFFICIENT_IP_ADDRESSES");
        static const int IAM_SERVICE_ROLE_MISSING_DESCRIBE_SUBNET_ACTION_HASH = HashingUtils::HashString("IAM_SERVICE_ROLE_MISSING_DESCRIBE_SUBNET_ACTION");
        static const int SUBNET_NOT_FOUND_HASH = HashingUtils::HashString("SUBNET_NOT_FOUND");
        static const int IMAGE_NOT_FOUND_HASH = HashingUtils::HashString("IMAGE_NOT_FOUND");
        static const int INVALID_SUBNET_CONFIGURATION_HASH = HashingUtils::HashString("INVALID_SUBNET_CONFIGURATION");
        static const int SECURITY_GROUPS_NOT_FOUND_HASH = HashingUtils::HashString("SECURITY_GROUPS_NOT_FOUND");
        static const int IGW_NOT_ATTACHED_HASH = HashingUtils::HashString("IGW_NOT_ATTACHED");
        static const int IAM_SERVICE_ROLE_MISSING_DESCRIBE_SECURITY_GROUPS_ACTION_HASH = HashingUtils::HashString("IAM_SERVICE_ROLE_MISSING_DESCRIBE_SECURITY_GROUPS_ACTION");
        static const int DOMAIN_JOIN_ERROR_FILE_NOT_FOUND_HASH = HashingUtils::HashString("DOMAIN_JOIN_ERROR_FILE_NOT_FOUND");
        static const int DOMAIN_JOIN_ERROR_ACCESS_DENIED_HASH = HashingUtils::HashString("DOMAIN_JOIN_ERROR_ACCESS_DENIED");
        static const int DOMAIN_JOIN_ERROR_LOGON_FAILURE_HASH = HashingUtils::HashString("DOMAIN_JOIN_ERROR_LOGON_FAILURE");
        static const int DOMAIN_JOIN_ERROR_INVALID_PARAMETER_HASH = HashingUtils::HashString("DOMAIN_JOIN_ERROR_INVALID_PARAMETER");
        static const int DOMAIN_JOIN_ERROR_MORE_DATA_HASH = HashingUtils::HashString("DOMAIN_JOIN_ERROR_MORE_DATA");
        static const int DOMAIN_JOIN_ERROR_NO_SUCH_DOMAIN_HASH = HashingUtils::HashString("DOMAIN_JOIN_ERROR_NO_SUCH_DOMAIN");
        static const int DOMAIN_JOIN_ERROR_NOT_SUPPORTED_HASH = HashingUtils::HashString("DOMAIN_JOIN_ERROR_NOT_SUPPORTED");
        static const int DOMAIN_JOIN_NERR_INVALID_WORKGROUP_NAME_HASH = HashingUtils::HashString("DOMAIN_JOIN_NERR_INVALID_WORKGROUP_NAME");
        static const int DOMAIN_JOIN_NERR_WORKSTATION_NOT_STARTED_HASH = HashingUtils::HashString("DOMAIN_JOIN_NERR_WORKSTATION_NOT_STARTED");
        static const int DOMAIN_JOIN_ERROR_DS_MACHINE_ACCOUNT_QUOTA_EXCEEDED_HASH = HashingUtils::HashString("DOMAIN_JOIN_ERROR_DS_MACHINE_ACCOUNT_QUOTA_EXCEEDED");
        static const int DOMAIN_JOIN_NERR_PASSWORD_EXPIRED_HASH = HashingUtils::HashString("DOMAIN_JOIN_NERR_PASSWORD_EXPIRED");
        static const int DOMAIN_JOIN_INTERNAL_SERVICE_ERROR_HASH = HashingUtils::HashString("DOMAIN_JOIN_INTERNAL_SERVICE_ERROR");


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
          else if (hashCode == MACHINE_ROLE_IS_MISSING_HASH)
          {
            return FleetErrorCode::MACHINE_ROLE_IS_MISSING;
          }
          else if (hashCode == STS_DISABLED_IN_REGION_HASH)
          {
            return FleetErrorCode::STS_DISABLED_IN_REGION;
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
          else if (hashCode == SECURITY_GROUPS_NOT_FOUND_HASH)
          {
            return FleetErrorCode::SECURITY_GROUPS_NOT_FOUND;
          }
          else if (hashCode == IGW_NOT_ATTACHED_HASH)
          {
            return FleetErrorCode::IGW_NOT_ATTACHED;
          }
          else if (hashCode == IAM_SERVICE_ROLE_MISSING_DESCRIBE_SECURITY_GROUPS_ACTION_HASH)
          {
            return FleetErrorCode::IAM_SERVICE_ROLE_MISSING_DESCRIBE_SECURITY_GROUPS_ACTION;
          }
          else if (hashCode == DOMAIN_JOIN_ERROR_FILE_NOT_FOUND_HASH)
          {
            return FleetErrorCode::DOMAIN_JOIN_ERROR_FILE_NOT_FOUND;
          }
          else if (hashCode == DOMAIN_JOIN_ERROR_ACCESS_DENIED_HASH)
          {
            return FleetErrorCode::DOMAIN_JOIN_ERROR_ACCESS_DENIED;
          }
          else if (hashCode == DOMAIN_JOIN_ERROR_LOGON_FAILURE_HASH)
          {
            return FleetErrorCode::DOMAIN_JOIN_ERROR_LOGON_FAILURE;
          }
          else if (hashCode == DOMAIN_JOIN_ERROR_INVALID_PARAMETER_HASH)
          {
            return FleetErrorCode::DOMAIN_JOIN_ERROR_INVALID_PARAMETER;
          }
          else if (hashCode == DOMAIN_JOIN_ERROR_MORE_DATA_HASH)
          {
            return FleetErrorCode::DOMAIN_JOIN_ERROR_MORE_DATA;
          }
          else if (hashCode == DOMAIN_JOIN_ERROR_NO_SUCH_DOMAIN_HASH)
          {
            return FleetErrorCode::DOMAIN_JOIN_ERROR_NO_SUCH_DOMAIN;
          }
          else if (hashCode == DOMAIN_JOIN_ERROR_NOT_SUPPORTED_HASH)
          {
            return FleetErrorCode::DOMAIN_JOIN_ERROR_NOT_SUPPORTED;
          }
          else if (hashCode == DOMAIN_JOIN_NERR_INVALID_WORKGROUP_NAME_HASH)
          {
            return FleetErrorCode::DOMAIN_JOIN_NERR_INVALID_WORKGROUP_NAME;
          }
          else if (hashCode == DOMAIN_JOIN_NERR_WORKSTATION_NOT_STARTED_HASH)
          {
            return FleetErrorCode::DOMAIN_JOIN_NERR_WORKSTATION_NOT_STARTED;
          }
          else if (hashCode == DOMAIN_JOIN_ERROR_DS_MACHINE_ACCOUNT_QUOTA_EXCEEDED_HASH)
          {
            return FleetErrorCode::DOMAIN_JOIN_ERROR_DS_MACHINE_ACCOUNT_QUOTA_EXCEEDED;
          }
          else if (hashCode == DOMAIN_JOIN_NERR_PASSWORD_EXPIRED_HASH)
          {
            return FleetErrorCode::DOMAIN_JOIN_NERR_PASSWORD_EXPIRED;
          }
          else if (hashCode == DOMAIN_JOIN_INTERNAL_SERVICE_ERROR_HASH)
          {
            return FleetErrorCode::DOMAIN_JOIN_INTERNAL_SERVICE_ERROR;
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
          case FleetErrorCode::MACHINE_ROLE_IS_MISSING:
            return "MACHINE_ROLE_IS_MISSING";
          case FleetErrorCode::STS_DISABLED_IN_REGION:
            return "STS_DISABLED_IN_REGION";
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
          case FleetErrorCode::SECURITY_GROUPS_NOT_FOUND:
            return "SECURITY_GROUPS_NOT_FOUND";
          case FleetErrorCode::IGW_NOT_ATTACHED:
            return "IGW_NOT_ATTACHED";
          case FleetErrorCode::IAM_SERVICE_ROLE_MISSING_DESCRIBE_SECURITY_GROUPS_ACTION:
            return "IAM_SERVICE_ROLE_MISSING_DESCRIBE_SECURITY_GROUPS_ACTION";
          case FleetErrorCode::DOMAIN_JOIN_ERROR_FILE_NOT_FOUND:
            return "DOMAIN_JOIN_ERROR_FILE_NOT_FOUND";
          case FleetErrorCode::DOMAIN_JOIN_ERROR_ACCESS_DENIED:
            return "DOMAIN_JOIN_ERROR_ACCESS_DENIED";
          case FleetErrorCode::DOMAIN_JOIN_ERROR_LOGON_FAILURE:
            return "DOMAIN_JOIN_ERROR_LOGON_FAILURE";
          case FleetErrorCode::DOMAIN_JOIN_ERROR_INVALID_PARAMETER:
            return "DOMAIN_JOIN_ERROR_INVALID_PARAMETER";
          case FleetErrorCode::DOMAIN_JOIN_ERROR_MORE_DATA:
            return "DOMAIN_JOIN_ERROR_MORE_DATA";
          case FleetErrorCode::DOMAIN_JOIN_ERROR_NO_SUCH_DOMAIN:
            return "DOMAIN_JOIN_ERROR_NO_SUCH_DOMAIN";
          case FleetErrorCode::DOMAIN_JOIN_ERROR_NOT_SUPPORTED:
            return "DOMAIN_JOIN_ERROR_NOT_SUPPORTED";
          case FleetErrorCode::DOMAIN_JOIN_NERR_INVALID_WORKGROUP_NAME:
            return "DOMAIN_JOIN_NERR_INVALID_WORKGROUP_NAME";
          case FleetErrorCode::DOMAIN_JOIN_NERR_WORKSTATION_NOT_STARTED:
            return "DOMAIN_JOIN_NERR_WORKSTATION_NOT_STARTED";
          case FleetErrorCode::DOMAIN_JOIN_ERROR_DS_MACHINE_ACCOUNT_QUOTA_EXCEEDED:
            return "DOMAIN_JOIN_ERROR_DS_MACHINE_ACCOUNT_QUOTA_EXCEEDED";
          case FleetErrorCode::DOMAIN_JOIN_NERR_PASSWORD_EXPIRED:
            return "DOMAIN_JOIN_NERR_PASSWORD_EXPIRED";
          case FleetErrorCode::DOMAIN_JOIN_INTERNAL_SERVICE_ERROR:
            return "DOMAIN_JOIN_INTERNAL_SERVICE_ERROR";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace FleetErrorCodeMapper
    } // namespace Model
  } // namespace AppStream
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/firehose/model/DeliveryStreamFailureType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Firehose
  {
    namespace Model
    {
      namespace DeliveryStreamFailureTypeMapper
      {

        static const int RETIRE_KMS_GRANT_FAILED_HASH = HashingUtils::HashString("RETIRE_KMS_GRANT_FAILED");
        static const int CREATE_KMS_GRANT_FAILED_HASH = HashingUtils::HashString("CREATE_KMS_GRANT_FAILED");
        static const int KMS_ACCESS_DENIED_HASH = HashingUtils::HashString("KMS_ACCESS_DENIED");
        static const int DISABLED_KMS_KEY_HASH = HashingUtils::HashString("DISABLED_KMS_KEY");
        static const int INVALID_KMS_KEY_HASH = HashingUtils::HashString("INVALID_KMS_KEY");
        static const int KMS_KEY_NOT_FOUND_HASH = HashingUtils::HashString("KMS_KEY_NOT_FOUND");
        static const int KMS_OPT_IN_REQUIRED_HASH = HashingUtils::HashString("KMS_OPT_IN_REQUIRED");
        static const int CREATE_ENI_FAILED_HASH = HashingUtils::HashString("CREATE_ENI_FAILED");
        static const int DELETE_ENI_FAILED_HASH = HashingUtils::HashString("DELETE_ENI_FAILED");
        static const int SUBNET_NOT_FOUND_HASH = HashingUtils::HashString("SUBNET_NOT_FOUND");
        static const int SECURITY_GROUP_NOT_FOUND_HASH = HashingUtils::HashString("SECURITY_GROUP_NOT_FOUND");
        static const int ENI_ACCESS_DENIED_HASH = HashingUtils::HashString("ENI_ACCESS_DENIED");
        static const int SUBNET_ACCESS_DENIED_HASH = HashingUtils::HashString("SUBNET_ACCESS_DENIED");
        static const int SECURITY_GROUP_ACCESS_DENIED_HASH = HashingUtils::HashString("SECURITY_GROUP_ACCESS_DENIED");
        static const int UNKNOWN_ERROR_HASH = HashingUtils::HashString("UNKNOWN_ERROR");


        DeliveryStreamFailureType GetDeliveryStreamFailureTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == RETIRE_KMS_GRANT_FAILED_HASH)
          {
            return DeliveryStreamFailureType::RETIRE_KMS_GRANT_FAILED;
          }
          else if (hashCode == CREATE_KMS_GRANT_FAILED_HASH)
          {
            return DeliveryStreamFailureType::CREATE_KMS_GRANT_FAILED;
          }
          else if (hashCode == KMS_ACCESS_DENIED_HASH)
          {
            return DeliveryStreamFailureType::KMS_ACCESS_DENIED;
          }
          else if (hashCode == DISABLED_KMS_KEY_HASH)
          {
            return DeliveryStreamFailureType::DISABLED_KMS_KEY;
          }
          else if (hashCode == INVALID_KMS_KEY_HASH)
          {
            return DeliveryStreamFailureType::INVALID_KMS_KEY;
          }
          else if (hashCode == KMS_KEY_NOT_FOUND_HASH)
          {
            return DeliveryStreamFailureType::KMS_KEY_NOT_FOUND;
          }
          else if (hashCode == KMS_OPT_IN_REQUIRED_HASH)
          {
            return DeliveryStreamFailureType::KMS_OPT_IN_REQUIRED;
          }
          else if (hashCode == CREATE_ENI_FAILED_HASH)
          {
            return DeliveryStreamFailureType::CREATE_ENI_FAILED;
          }
          else if (hashCode == DELETE_ENI_FAILED_HASH)
          {
            return DeliveryStreamFailureType::DELETE_ENI_FAILED;
          }
          else if (hashCode == SUBNET_NOT_FOUND_HASH)
          {
            return DeliveryStreamFailureType::SUBNET_NOT_FOUND;
          }
          else if (hashCode == SECURITY_GROUP_NOT_FOUND_HASH)
          {
            return DeliveryStreamFailureType::SECURITY_GROUP_NOT_FOUND;
          }
          else if (hashCode == ENI_ACCESS_DENIED_HASH)
          {
            return DeliveryStreamFailureType::ENI_ACCESS_DENIED;
          }
          else if (hashCode == SUBNET_ACCESS_DENIED_HASH)
          {
            return DeliveryStreamFailureType::SUBNET_ACCESS_DENIED;
          }
          else if (hashCode == SECURITY_GROUP_ACCESS_DENIED_HASH)
          {
            return DeliveryStreamFailureType::SECURITY_GROUP_ACCESS_DENIED;
          }
          else if (hashCode == UNKNOWN_ERROR_HASH)
          {
            return DeliveryStreamFailureType::UNKNOWN_ERROR;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DeliveryStreamFailureType>(hashCode);
          }

          return DeliveryStreamFailureType::NOT_SET;
        }

        Aws::String GetNameForDeliveryStreamFailureType(DeliveryStreamFailureType enumValue)
        {
          switch(enumValue)
          {
          case DeliveryStreamFailureType::RETIRE_KMS_GRANT_FAILED:
            return "RETIRE_KMS_GRANT_FAILED";
          case DeliveryStreamFailureType::CREATE_KMS_GRANT_FAILED:
            return "CREATE_KMS_GRANT_FAILED";
          case DeliveryStreamFailureType::KMS_ACCESS_DENIED:
            return "KMS_ACCESS_DENIED";
          case DeliveryStreamFailureType::DISABLED_KMS_KEY:
            return "DISABLED_KMS_KEY";
          case DeliveryStreamFailureType::INVALID_KMS_KEY:
            return "INVALID_KMS_KEY";
          case DeliveryStreamFailureType::KMS_KEY_NOT_FOUND:
            return "KMS_KEY_NOT_FOUND";
          case DeliveryStreamFailureType::KMS_OPT_IN_REQUIRED:
            return "KMS_OPT_IN_REQUIRED";
          case DeliveryStreamFailureType::CREATE_ENI_FAILED:
            return "CREATE_ENI_FAILED";
          case DeliveryStreamFailureType::DELETE_ENI_FAILED:
            return "DELETE_ENI_FAILED";
          case DeliveryStreamFailureType::SUBNET_NOT_FOUND:
            return "SUBNET_NOT_FOUND";
          case DeliveryStreamFailureType::SECURITY_GROUP_NOT_FOUND:
            return "SECURITY_GROUP_NOT_FOUND";
          case DeliveryStreamFailureType::ENI_ACCESS_DENIED:
            return "ENI_ACCESS_DENIED";
          case DeliveryStreamFailureType::SUBNET_ACCESS_DENIED:
            return "SUBNET_ACCESS_DENIED";
          case DeliveryStreamFailureType::SECURITY_GROUP_ACCESS_DENIED:
            return "SECURITY_GROUP_ACCESS_DENIED";
          case DeliveryStreamFailureType::UNKNOWN_ERROR:
            return "UNKNOWN_ERROR";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DeliveryStreamFailureTypeMapper
    } // namespace Model
  } // namespace Firehose
} // namespace Aws

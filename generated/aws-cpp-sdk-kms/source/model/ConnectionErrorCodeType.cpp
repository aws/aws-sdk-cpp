/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kms/model/ConnectionErrorCodeType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace KMS
  {
    namespace Model
    {
      namespace ConnectionErrorCodeTypeMapper
      {

        static const int INVALID_CREDENTIALS_HASH = HashingUtils::HashString("INVALID_CREDENTIALS");
        static const int CLUSTER_NOT_FOUND_HASH = HashingUtils::HashString("CLUSTER_NOT_FOUND");
        static const int NETWORK_ERRORS_HASH = HashingUtils::HashString("NETWORK_ERRORS");
        static const int INTERNAL_ERROR_HASH = HashingUtils::HashString("INTERNAL_ERROR");
        static const int INSUFFICIENT_CLOUDHSM_HSMS_HASH = HashingUtils::HashString("INSUFFICIENT_CLOUDHSM_HSMS");
        static const int USER_LOCKED_OUT_HASH = HashingUtils::HashString("USER_LOCKED_OUT");
        static const int USER_NOT_FOUND_HASH = HashingUtils::HashString("USER_NOT_FOUND");
        static const int USER_LOGGED_IN_HASH = HashingUtils::HashString("USER_LOGGED_IN");
        static const int SUBNET_NOT_FOUND_HASH = HashingUtils::HashString("SUBNET_NOT_FOUND");


        ConnectionErrorCodeType GetConnectionErrorCodeTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == INVALID_CREDENTIALS_HASH)
          {
            return ConnectionErrorCodeType::INVALID_CREDENTIALS;
          }
          else if (hashCode == CLUSTER_NOT_FOUND_HASH)
          {
            return ConnectionErrorCodeType::CLUSTER_NOT_FOUND;
          }
          else if (hashCode == NETWORK_ERRORS_HASH)
          {
            return ConnectionErrorCodeType::NETWORK_ERRORS;
          }
          else if (hashCode == INTERNAL_ERROR_HASH)
          {
            return ConnectionErrorCodeType::INTERNAL_ERROR;
          }
          else if (hashCode == INSUFFICIENT_CLOUDHSM_HSMS_HASH)
          {
            return ConnectionErrorCodeType::INSUFFICIENT_CLOUDHSM_HSMS;
          }
          else if (hashCode == USER_LOCKED_OUT_HASH)
          {
            return ConnectionErrorCodeType::USER_LOCKED_OUT;
          }
          else if (hashCode == USER_NOT_FOUND_HASH)
          {
            return ConnectionErrorCodeType::USER_NOT_FOUND;
          }
          else if (hashCode == USER_LOGGED_IN_HASH)
          {
            return ConnectionErrorCodeType::USER_LOGGED_IN;
          }
          else if (hashCode == SUBNET_NOT_FOUND_HASH)
          {
            return ConnectionErrorCodeType::SUBNET_NOT_FOUND;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ConnectionErrorCodeType>(hashCode);
          }

          return ConnectionErrorCodeType::NOT_SET;
        }

        Aws::String GetNameForConnectionErrorCodeType(ConnectionErrorCodeType enumValue)
        {
          switch(enumValue)
          {
          case ConnectionErrorCodeType::INVALID_CREDENTIALS:
            return "INVALID_CREDENTIALS";
          case ConnectionErrorCodeType::CLUSTER_NOT_FOUND:
            return "CLUSTER_NOT_FOUND";
          case ConnectionErrorCodeType::NETWORK_ERRORS:
            return "NETWORK_ERRORS";
          case ConnectionErrorCodeType::INTERNAL_ERROR:
            return "INTERNAL_ERROR";
          case ConnectionErrorCodeType::INSUFFICIENT_CLOUDHSM_HSMS:
            return "INSUFFICIENT_CLOUDHSM_HSMS";
          case ConnectionErrorCodeType::USER_LOCKED_OUT:
            return "USER_LOCKED_OUT";
          case ConnectionErrorCodeType::USER_NOT_FOUND:
            return "USER_NOT_FOUND";
          case ConnectionErrorCodeType::USER_LOGGED_IN:
            return "USER_LOGGED_IN";
          case ConnectionErrorCodeType::SUBNET_NOT_FOUND:
            return "SUBNET_NOT_FOUND";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ConnectionErrorCodeTypeMapper
    } // namespace Model
  } // namespace KMS
} // namespace Aws

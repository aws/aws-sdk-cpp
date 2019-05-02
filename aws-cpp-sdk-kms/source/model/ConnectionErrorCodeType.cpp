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

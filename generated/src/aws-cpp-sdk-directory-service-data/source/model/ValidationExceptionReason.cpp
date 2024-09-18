/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/directory-service-data/model/ValidationExceptionReason.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace DirectoryServiceData
  {
    namespace Model
    {
      namespace ValidationExceptionReasonMapper
      {

        static const int INVALID_REALM_HASH = HashingUtils::HashString("INVALID_REALM");
        static const int INVALID_DIRECTORY_TYPE_HASH = HashingUtils::HashString("INVALID_DIRECTORY_TYPE");
        static const int INVALID_SECONDARY_REGION_HASH = HashingUtils::HashString("INVALID_SECONDARY_REGION");
        static const int INVALID_NEXT_TOKEN_HASH = HashingUtils::HashString("INVALID_NEXT_TOKEN");
        static const int INVALID_ATTRIBUTE_VALUE_HASH = HashingUtils::HashString("INVALID_ATTRIBUTE_VALUE");
        static const int INVALID_ATTRIBUTE_NAME_HASH = HashingUtils::HashString("INVALID_ATTRIBUTE_NAME");
        static const int INVALID_ATTRIBUTE_FOR_USER_HASH = HashingUtils::HashString("INVALID_ATTRIBUTE_FOR_USER");
        static const int INVALID_ATTRIBUTE_FOR_GROUP_HASH = HashingUtils::HashString("INVALID_ATTRIBUTE_FOR_GROUP");
        static const int INVALID_ATTRIBUTE_FOR_SEARCH_HASH = HashingUtils::HashString("INVALID_ATTRIBUTE_FOR_SEARCH");
        static const int INVALID_ATTRIBUTE_FOR_MODIFY_HASH = HashingUtils::HashString("INVALID_ATTRIBUTE_FOR_MODIFY");
        static const int DUPLICATE_ATTRIBUTE_HASH = HashingUtils::HashString("DUPLICATE_ATTRIBUTE");
        static const int MISSING_ATTRIBUTE_HASH = HashingUtils::HashString("MISSING_ATTRIBUTE");
        static const int ATTRIBUTE_EXISTS_HASH = HashingUtils::HashString("ATTRIBUTE_EXISTS");
        static const int LDAP_SIZE_LIMIT_EXCEEDED_HASH = HashingUtils::HashString("LDAP_SIZE_LIMIT_EXCEEDED");
        static const int LDAP_UNSUPPORTED_OPERATION_HASH = HashingUtils::HashString("LDAP_UNSUPPORTED_OPERATION");


        ValidationExceptionReason GetValidationExceptionReasonForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == INVALID_REALM_HASH)
          {
            return ValidationExceptionReason::INVALID_REALM;
          }
          else if (hashCode == INVALID_DIRECTORY_TYPE_HASH)
          {
            return ValidationExceptionReason::INVALID_DIRECTORY_TYPE;
          }
          else if (hashCode == INVALID_SECONDARY_REGION_HASH)
          {
            return ValidationExceptionReason::INVALID_SECONDARY_REGION;
          }
          else if (hashCode == INVALID_NEXT_TOKEN_HASH)
          {
            return ValidationExceptionReason::INVALID_NEXT_TOKEN;
          }
          else if (hashCode == INVALID_ATTRIBUTE_VALUE_HASH)
          {
            return ValidationExceptionReason::INVALID_ATTRIBUTE_VALUE;
          }
          else if (hashCode == INVALID_ATTRIBUTE_NAME_HASH)
          {
            return ValidationExceptionReason::INVALID_ATTRIBUTE_NAME;
          }
          else if (hashCode == INVALID_ATTRIBUTE_FOR_USER_HASH)
          {
            return ValidationExceptionReason::INVALID_ATTRIBUTE_FOR_USER;
          }
          else if (hashCode == INVALID_ATTRIBUTE_FOR_GROUP_HASH)
          {
            return ValidationExceptionReason::INVALID_ATTRIBUTE_FOR_GROUP;
          }
          else if (hashCode == INVALID_ATTRIBUTE_FOR_SEARCH_HASH)
          {
            return ValidationExceptionReason::INVALID_ATTRIBUTE_FOR_SEARCH;
          }
          else if (hashCode == INVALID_ATTRIBUTE_FOR_MODIFY_HASH)
          {
            return ValidationExceptionReason::INVALID_ATTRIBUTE_FOR_MODIFY;
          }
          else if (hashCode == DUPLICATE_ATTRIBUTE_HASH)
          {
            return ValidationExceptionReason::DUPLICATE_ATTRIBUTE;
          }
          else if (hashCode == MISSING_ATTRIBUTE_HASH)
          {
            return ValidationExceptionReason::MISSING_ATTRIBUTE;
          }
          else if (hashCode == ATTRIBUTE_EXISTS_HASH)
          {
            return ValidationExceptionReason::ATTRIBUTE_EXISTS;
          }
          else if (hashCode == LDAP_SIZE_LIMIT_EXCEEDED_HASH)
          {
            return ValidationExceptionReason::LDAP_SIZE_LIMIT_EXCEEDED;
          }
          else if (hashCode == LDAP_UNSUPPORTED_OPERATION_HASH)
          {
            return ValidationExceptionReason::LDAP_UNSUPPORTED_OPERATION;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ValidationExceptionReason>(hashCode);
          }

          return ValidationExceptionReason::NOT_SET;
        }

        Aws::String GetNameForValidationExceptionReason(ValidationExceptionReason enumValue)
        {
          switch(enumValue)
          {
          case ValidationExceptionReason::NOT_SET:
            return {};
          case ValidationExceptionReason::INVALID_REALM:
            return "INVALID_REALM";
          case ValidationExceptionReason::INVALID_DIRECTORY_TYPE:
            return "INVALID_DIRECTORY_TYPE";
          case ValidationExceptionReason::INVALID_SECONDARY_REGION:
            return "INVALID_SECONDARY_REGION";
          case ValidationExceptionReason::INVALID_NEXT_TOKEN:
            return "INVALID_NEXT_TOKEN";
          case ValidationExceptionReason::INVALID_ATTRIBUTE_VALUE:
            return "INVALID_ATTRIBUTE_VALUE";
          case ValidationExceptionReason::INVALID_ATTRIBUTE_NAME:
            return "INVALID_ATTRIBUTE_NAME";
          case ValidationExceptionReason::INVALID_ATTRIBUTE_FOR_USER:
            return "INVALID_ATTRIBUTE_FOR_USER";
          case ValidationExceptionReason::INVALID_ATTRIBUTE_FOR_GROUP:
            return "INVALID_ATTRIBUTE_FOR_GROUP";
          case ValidationExceptionReason::INVALID_ATTRIBUTE_FOR_SEARCH:
            return "INVALID_ATTRIBUTE_FOR_SEARCH";
          case ValidationExceptionReason::INVALID_ATTRIBUTE_FOR_MODIFY:
            return "INVALID_ATTRIBUTE_FOR_MODIFY";
          case ValidationExceptionReason::DUPLICATE_ATTRIBUTE:
            return "DUPLICATE_ATTRIBUTE";
          case ValidationExceptionReason::MISSING_ATTRIBUTE:
            return "MISSING_ATTRIBUTE";
          case ValidationExceptionReason::ATTRIBUTE_EXISTS:
            return "ATTRIBUTE_EXISTS";
          case ValidationExceptionReason::LDAP_SIZE_LIMIT_EXCEEDED:
            return "LDAP_SIZE_LIMIT_EXCEEDED";
          case ValidationExceptionReason::LDAP_UNSUPPORTED_OPERATION:
            return "LDAP_UNSUPPORTED_OPERATION";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ValidationExceptionReasonMapper
    } // namespace Model
  } // namespace DirectoryServiceData
} // namespace Aws

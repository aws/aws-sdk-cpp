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

#include <aws/organizations/model/InvalidInputExceptionReason.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Organizations
  {
    namespace Model
    {
      namespace InvalidInputExceptionReasonMapper
      {

        static const int INVALID_PARTY_TYPE_TARGET_HASH = HashingUtils::HashString("INVALID_PARTY_TYPE_TARGET");
        static const int INVALID_SYNTAX_ORGANIZATION_ARN_HASH = HashingUtils::HashString("INVALID_SYNTAX_ORGANIZATION_ARN");
        static const int INVALID_SYNTAX_POLICY_ID_HASH = HashingUtils::HashString("INVALID_SYNTAX_POLICY_ID");
        static const int INVALID_ENUM_HASH = HashingUtils::HashString("INVALID_ENUM");
        static const int INVALID_LIST_MEMBER_HASH = HashingUtils::HashString("INVALID_LIST_MEMBER");
        static const int MAX_LENGTH_EXCEEDED_HASH = HashingUtils::HashString("MAX_LENGTH_EXCEEDED");
        static const int MAX_VALUE_EXCEEDED_HASH = HashingUtils::HashString("MAX_VALUE_EXCEEDED");
        static const int MIN_LENGTH_EXCEEDED_HASH = HashingUtils::HashString("MIN_LENGTH_EXCEEDED");
        static const int MIN_VALUE_EXCEEDED_HASH = HashingUtils::HashString("MIN_VALUE_EXCEEDED");
        static const int IMMUTABLE_POLICY_HASH = HashingUtils::HashString("IMMUTABLE_POLICY");
        static const int INVALID_PATTERN_HASH = HashingUtils::HashString("INVALID_PATTERN");
        static const int INVALID_PATTERN_TARGET_ID_HASH = HashingUtils::HashString("INVALID_PATTERN_TARGET_ID");
        static const int INPUT_REQUIRED_HASH = HashingUtils::HashString("INPUT_REQUIRED");
        static const int INVALID_NEXT_TOKEN_HASH = HashingUtils::HashString("INVALID_NEXT_TOKEN");
        static const int MAX_LIMIT_EXCEEDED_FILTER_HASH = HashingUtils::HashString("MAX_LIMIT_EXCEEDED_FILTER");
        static const int MOVING_ACCOUNT_BETWEEN_DIFFERENT_ROOTS_HASH = HashingUtils::HashString("MOVING_ACCOUNT_BETWEEN_DIFFERENT_ROOTS");
        static const int INVALID_FULL_NAME_TARGET_HASH = HashingUtils::HashString("INVALID_FULL_NAME_TARGET");
        static const int UNRECOGNIZED_SERVICE_PRINCIPAL_HASH = HashingUtils::HashString("UNRECOGNIZED_SERVICE_PRINCIPAL");
        static const int INVALID_ROLE_NAME_HASH = HashingUtils::HashString("INVALID_ROLE_NAME");
        static const int INVALID_SYSTEM_TAGS_PARAMETER_HASH = HashingUtils::HashString("INVALID_SYSTEM_TAGS_PARAMETER");


        InvalidInputExceptionReason GetInvalidInputExceptionReasonForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == INVALID_PARTY_TYPE_TARGET_HASH)
          {
            return InvalidInputExceptionReason::INVALID_PARTY_TYPE_TARGET;
          }
          else if (hashCode == INVALID_SYNTAX_ORGANIZATION_ARN_HASH)
          {
            return InvalidInputExceptionReason::INVALID_SYNTAX_ORGANIZATION_ARN;
          }
          else if (hashCode == INVALID_SYNTAX_POLICY_ID_HASH)
          {
            return InvalidInputExceptionReason::INVALID_SYNTAX_POLICY_ID;
          }
          else if (hashCode == INVALID_ENUM_HASH)
          {
            return InvalidInputExceptionReason::INVALID_ENUM;
          }
          else if (hashCode == INVALID_LIST_MEMBER_HASH)
          {
            return InvalidInputExceptionReason::INVALID_LIST_MEMBER;
          }
          else if (hashCode == MAX_LENGTH_EXCEEDED_HASH)
          {
            return InvalidInputExceptionReason::MAX_LENGTH_EXCEEDED;
          }
          else if (hashCode == MAX_VALUE_EXCEEDED_HASH)
          {
            return InvalidInputExceptionReason::MAX_VALUE_EXCEEDED;
          }
          else if (hashCode == MIN_LENGTH_EXCEEDED_HASH)
          {
            return InvalidInputExceptionReason::MIN_LENGTH_EXCEEDED;
          }
          else if (hashCode == MIN_VALUE_EXCEEDED_HASH)
          {
            return InvalidInputExceptionReason::MIN_VALUE_EXCEEDED;
          }
          else if (hashCode == IMMUTABLE_POLICY_HASH)
          {
            return InvalidInputExceptionReason::IMMUTABLE_POLICY;
          }
          else if (hashCode == INVALID_PATTERN_HASH)
          {
            return InvalidInputExceptionReason::INVALID_PATTERN;
          }
          else if (hashCode == INVALID_PATTERN_TARGET_ID_HASH)
          {
            return InvalidInputExceptionReason::INVALID_PATTERN_TARGET_ID;
          }
          else if (hashCode == INPUT_REQUIRED_HASH)
          {
            return InvalidInputExceptionReason::INPUT_REQUIRED;
          }
          else if (hashCode == INVALID_NEXT_TOKEN_HASH)
          {
            return InvalidInputExceptionReason::INVALID_NEXT_TOKEN;
          }
          else if (hashCode == MAX_LIMIT_EXCEEDED_FILTER_HASH)
          {
            return InvalidInputExceptionReason::MAX_LIMIT_EXCEEDED_FILTER;
          }
          else if (hashCode == MOVING_ACCOUNT_BETWEEN_DIFFERENT_ROOTS_HASH)
          {
            return InvalidInputExceptionReason::MOVING_ACCOUNT_BETWEEN_DIFFERENT_ROOTS;
          }
          else if (hashCode == INVALID_FULL_NAME_TARGET_HASH)
          {
            return InvalidInputExceptionReason::INVALID_FULL_NAME_TARGET;
          }
          else if (hashCode == UNRECOGNIZED_SERVICE_PRINCIPAL_HASH)
          {
            return InvalidInputExceptionReason::UNRECOGNIZED_SERVICE_PRINCIPAL;
          }
          else if (hashCode == INVALID_ROLE_NAME_HASH)
          {
            return InvalidInputExceptionReason::INVALID_ROLE_NAME;
          }
          else if (hashCode == INVALID_SYSTEM_TAGS_PARAMETER_HASH)
          {
            return InvalidInputExceptionReason::INVALID_SYSTEM_TAGS_PARAMETER;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<InvalidInputExceptionReason>(hashCode);
          }

          return InvalidInputExceptionReason::NOT_SET;
        }

        Aws::String GetNameForInvalidInputExceptionReason(InvalidInputExceptionReason enumValue)
        {
          switch(enumValue)
          {
          case InvalidInputExceptionReason::INVALID_PARTY_TYPE_TARGET:
            return "INVALID_PARTY_TYPE_TARGET";
          case InvalidInputExceptionReason::INVALID_SYNTAX_ORGANIZATION_ARN:
            return "INVALID_SYNTAX_ORGANIZATION_ARN";
          case InvalidInputExceptionReason::INVALID_SYNTAX_POLICY_ID:
            return "INVALID_SYNTAX_POLICY_ID";
          case InvalidInputExceptionReason::INVALID_ENUM:
            return "INVALID_ENUM";
          case InvalidInputExceptionReason::INVALID_LIST_MEMBER:
            return "INVALID_LIST_MEMBER";
          case InvalidInputExceptionReason::MAX_LENGTH_EXCEEDED:
            return "MAX_LENGTH_EXCEEDED";
          case InvalidInputExceptionReason::MAX_VALUE_EXCEEDED:
            return "MAX_VALUE_EXCEEDED";
          case InvalidInputExceptionReason::MIN_LENGTH_EXCEEDED:
            return "MIN_LENGTH_EXCEEDED";
          case InvalidInputExceptionReason::MIN_VALUE_EXCEEDED:
            return "MIN_VALUE_EXCEEDED";
          case InvalidInputExceptionReason::IMMUTABLE_POLICY:
            return "IMMUTABLE_POLICY";
          case InvalidInputExceptionReason::INVALID_PATTERN:
            return "INVALID_PATTERN";
          case InvalidInputExceptionReason::INVALID_PATTERN_TARGET_ID:
            return "INVALID_PATTERN_TARGET_ID";
          case InvalidInputExceptionReason::INPUT_REQUIRED:
            return "INPUT_REQUIRED";
          case InvalidInputExceptionReason::INVALID_NEXT_TOKEN:
            return "INVALID_NEXT_TOKEN";
          case InvalidInputExceptionReason::MAX_LIMIT_EXCEEDED_FILTER:
            return "MAX_LIMIT_EXCEEDED_FILTER";
          case InvalidInputExceptionReason::MOVING_ACCOUNT_BETWEEN_DIFFERENT_ROOTS:
            return "MOVING_ACCOUNT_BETWEEN_DIFFERENT_ROOTS";
          case InvalidInputExceptionReason::INVALID_FULL_NAME_TARGET:
            return "INVALID_FULL_NAME_TARGET";
          case InvalidInputExceptionReason::UNRECOGNIZED_SERVICE_PRINCIPAL:
            return "UNRECOGNIZED_SERVICE_PRINCIPAL";
          case InvalidInputExceptionReason::INVALID_ROLE_NAME:
            return "INVALID_ROLE_NAME";
          case InvalidInputExceptionReason::INVALID_SYSTEM_TAGS_PARAMETER:
            return "INVALID_SYSTEM_TAGS_PARAMETER";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace InvalidInputExceptionReasonMapper
    } // namespace Model
  } // namespace Organizations
} // namespace Aws

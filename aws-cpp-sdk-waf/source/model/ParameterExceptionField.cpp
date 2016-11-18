/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/waf/model/ParameterExceptionField.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace WAF
  {
    namespace Model
    {
      namespace ParameterExceptionFieldMapper
      {

        static const int CHANGE_ACTION_HASH = HashingUtils::HashString("CHANGE_ACTION");
        static const int WAF_ACTION_HASH = HashingUtils::HashString("WAF_ACTION");
        static const int PREDICATE_TYPE_HASH = HashingUtils::HashString("PREDICATE_TYPE");
        static const int IPSET_TYPE_HASH = HashingUtils::HashString("IPSET_TYPE");
        static const int BYTE_MATCH_FIELD_TYPE_HASH = HashingUtils::HashString("BYTE_MATCH_FIELD_TYPE");
        static const int SQL_INJECTION_MATCH_FIELD_TYPE_HASH = HashingUtils::HashString("SQL_INJECTION_MATCH_FIELD_TYPE");
        static const int BYTE_MATCH_TEXT_TRANSFORMATION_HASH = HashingUtils::HashString("BYTE_MATCH_TEXT_TRANSFORMATION");
        static const int BYTE_MATCH_POSITIONAL_CONSTRAINT_HASH = HashingUtils::HashString("BYTE_MATCH_POSITIONAL_CONSTRAINT");
        static const int SIZE_CONSTRAINT_COMPARISON_OPERATOR_HASH = HashingUtils::HashString("SIZE_CONSTRAINT_COMPARISON_OPERATOR");


        ParameterExceptionField GetParameterExceptionFieldForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CHANGE_ACTION_HASH)
          {
            return ParameterExceptionField::CHANGE_ACTION;
          }
          else if (hashCode == WAF_ACTION_HASH)
          {
            return ParameterExceptionField::WAF_ACTION;
          }
          else if (hashCode == PREDICATE_TYPE_HASH)
          {
            return ParameterExceptionField::PREDICATE_TYPE;
          }
          else if (hashCode == IPSET_TYPE_HASH)
          {
            return ParameterExceptionField::IPSET_TYPE;
          }
          else if (hashCode == BYTE_MATCH_FIELD_TYPE_HASH)
          {
            return ParameterExceptionField::BYTE_MATCH_FIELD_TYPE;
          }
          else if (hashCode == SQL_INJECTION_MATCH_FIELD_TYPE_HASH)
          {
            return ParameterExceptionField::SQL_INJECTION_MATCH_FIELD_TYPE;
          }
          else if (hashCode == BYTE_MATCH_TEXT_TRANSFORMATION_HASH)
          {
            return ParameterExceptionField::BYTE_MATCH_TEXT_TRANSFORMATION;
          }
          else if (hashCode == BYTE_MATCH_POSITIONAL_CONSTRAINT_HASH)
          {
            return ParameterExceptionField::BYTE_MATCH_POSITIONAL_CONSTRAINT;
          }
          else if (hashCode == SIZE_CONSTRAINT_COMPARISON_OPERATOR_HASH)
          {
            return ParameterExceptionField::SIZE_CONSTRAINT_COMPARISON_OPERATOR;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ParameterExceptionField>(hashCode);
          }

          return ParameterExceptionField::NOT_SET;
        }

        Aws::String GetNameForParameterExceptionField(ParameterExceptionField enumValue)
        {
          switch(enumValue)
          {
          case ParameterExceptionField::CHANGE_ACTION:
            return "CHANGE_ACTION";
          case ParameterExceptionField::WAF_ACTION:
            return "WAF_ACTION";
          case ParameterExceptionField::PREDICATE_TYPE:
            return "PREDICATE_TYPE";
          case ParameterExceptionField::IPSET_TYPE:
            return "IPSET_TYPE";
          case ParameterExceptionField::BYTE_MATCH_FIELD_TYPE:
            return "BYTE_MATCH_FIELD_TYPE";
          case ParameterExceptionField::SQL_INJECTION_MATCH_FIELD_TYPE:
            return "SQL_INJECTION_MATCH_FIELD_TYPE";
          case ParameterExceptionField::BYTE_MATCH_TEXT_TRANSFORMATION:
            return "BYTE_MATCH_TEXT_TRANSFORMATION";
          case ParameterExceptionField::BYTE_MATCH_POSITIONAL_CONSTRAINT:
            return "BYTE_MATCH_POSITIONAL_CONSTRAINT";
          case ParameterExceptionField::SIZE_CONSTRAINT_COMPARISON_OPERATOR:
            return "SIZE_CONSTRAINT_COMPARISON_OPERATOR";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace ParameterExceptionFieldMapper
    } // namespace Model
  } // namespace WAF
} // namespace Aws

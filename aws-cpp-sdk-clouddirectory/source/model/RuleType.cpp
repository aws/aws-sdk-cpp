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
#include <aws/clouddirectory/model/RuleType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CloudDirectory
  {
    namespace Model
    {
      namespace RuleTypeMapper
      {

        static const int BINARY_LENGTH_HASH = HashingUtils::HashString("BINARY_LENGTH");
        static const int NUMBER_COMPARISON_HASH = HashingUtils::HashString("NUMBER_COMPARISON");
        static const int STRING_FROM_SET_HASH = HashingUtils::HashString("STRING_FROM_SET");
        static const int STRING_LENGTH_HASH = HashingUtils::HashString("STRING_LENGTH");


        RuleType GetRuleTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == BINARY_LENGTH_HASH)
          {
            return RuleType::BINARY_LENGTH;
          }
          else if (hashCode == NUMBER_COMPARISON_HASH)
          {
            return RuleType::NUMBER_COMPARISON;
          }
          else if (hashCode == STRING_FROM_SET_HASH)
          {
            return RuleType::STRING_FROM_SET;
          }
          else if (hashCode == STRING_LENGTH_HASH)
          {
            return RuleType::STRING_LENGTH;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RuleType>(hashCode);
          }

          return RuleType::NOT_SET;
        }

        Aws::String GetNameForRuleType(RuleType enumValue)
        {
          switch(enumValue)
          {
          case RuleType::BINARY_LENGTH:
            return "BINARY_LENGTH";
          case RuleType::NUMBER_COMPARISON:
            return "NUMBER_COMPARISON";
          case RuleType::STRING_FROM_SET:
            return "STRING_FROM_SET";
          case RuleType::STRING_LENGTH:
            return "STRING_LENGTH";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace RuleTypeMapper
    } // namespace Model
  } // namespace CloudDirectory
} // namespace Aws

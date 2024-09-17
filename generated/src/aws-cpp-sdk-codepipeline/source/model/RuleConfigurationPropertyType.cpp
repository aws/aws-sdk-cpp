/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codepipeline/model/RuleConfigurationPropertyType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CodePipeline
  {
    namespace Model
    {
      namespace RuleConfigurationPropertyTypeMapper
      {

        static const int String_HASH = HashingUtils::HashString("String");
        static const int Number_HASH = HashingUtils::HashString("Number");
        static const int Boolean_HASH = HashingUtils::HashString("Boolean");


        RuleConfigurationPropertyType GetRuleConfigurationPropertyTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == String_HASH)
          {
            return RuleConfigurationPropertyType::String;
          }
          else if (hashCode == Number_HASH)
          {
            return RuleConfigurationPropertyType::Number;
          }
          else if (hashCode == Boolean_HASH)
          {
            return RuleConfigurationPropertyType::Boolean;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RuleConfigurationPropertyType>(hashCode);
          }

          return RuleConfigurationPropertyType::NOT_SET;
        }

        Aws::String GetNameForRuleConfigurationPropertyType(RuleConfigurationPropertyType enumValue)
        {
          switch(enumValue)
          {
          case RuleConfigurationPropertyType::NOT_SET:
            return {};
          case RuleConfigurationPropertyType::String:
            return "String";
          case RuleConfigurationPropertyType::Number:
            return "Number";
          case RuleConfigurationPropertyType::Boolean:
            return "Boolean";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RuleConfigurationPropertyTypeMapper
    } // namespace Model
  } // namespace CodePipeline
} // namespace Aws

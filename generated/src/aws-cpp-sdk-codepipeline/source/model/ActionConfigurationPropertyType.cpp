/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codepipeline/model/ActionConfigurationPropertyType.h>
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
      namespace ActionConfigurationPropertyTypeMapper
      {

        static const int String_HASH = HashingUtils::HashString("String");
        static const int Number_HASH = HashingUtils::HashString("Number");
        static const int Boolean_HASH = HashingUtils::HashString("Boolean");


        ActionConfigurationPropertyType GetActionConfigurationPropertyTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == String_HASH)
          {
            return ActionConfigurationPropertyType::String;
          }
          else if (hashCode == Number_HASH)
          {
            return ActionConfigurationPropertyType::Number;
          }
          else if (hashCode == Boolean_HASH)
          {
            return ActionConfigurationPropertyType::Boolean;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ActionConfigurationPropertyType>(hashCode);
          }

          return ActionConfigurationPropertyType::NOT_SET;
        }

        Aws::String GetNameForActionConfigurationPropertyType(ActionConfigurationPropertyType enumValue)
        {
          switch(enumValue)
          {
          case ActionConfigurationPropertyType::String:
            return "String";
          case ActionConfigurationPropertyType::Number:
            return "Number";
          case ActionConfigurationPropertyType::Boolean:
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

      } // namespace ActionConfigurationPropertyTypeMapper
    } // namespace Model
  } // namespace CodePipeline
} // namespace Aws

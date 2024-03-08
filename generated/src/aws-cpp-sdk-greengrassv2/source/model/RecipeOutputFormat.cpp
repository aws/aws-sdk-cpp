/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/greengrassv2/model/RecipeOutputFormat.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace GreengrassV2
  {
    namespace Model
    {
      namespace RecipeOutputFormatMapper
      {

        static const int JSON_HASH = HashingUtils::HashString("JSON");
        static const int YAML_HASH = HashingUtils::HashString("YAML");


        RecipeOutputFormat GetRecipeOutputFormatForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == JSON_HASH)
          {
            return RecipeOutputFormat::JSON;
          }
          else if (hashCode == YAML_HASH)
          {
            return RecipeOutputFormat::YAML;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RecipeOutputFormat>(hashCode);
          }

          return RecipeOutputFormat::NOT_SET;
        }

        Aws::String GetNameForRecipeOutputFormat(RecipeOutputFormat enumValue)
        {
          switch(enumValue)
          {
          case RecipeOutputFormat::NOT_SET:
            return {};
          case RecipeOutputFormat::JSON:
            return "JSON";
          case RecipeOutputFormat::YAML:
            return "YAML";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RecipeOutputFormatMapper
    } // namespace Model
  } // namespace GreengrassV2
} // namespace Aws

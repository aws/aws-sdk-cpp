/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudformation/model/TemplateFormat.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CloudFormation
  {
    namespace Model
    {
      namespace TemplateFormatMapper
      {

        static const int JSON_HASH = HashingUtils::HashString("JSON");
        static const int YAML_HASH = HashingUtils::HashString("YAML");


        TemplateFormat GetTemplateFormatForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == JSON_HASH)
          {
            return TemplateFormat::JSON;
          }
          else if (hashCode == YAML_HASH)
          {
            return TemplateFormat::YAML;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TemplateFormat>(hashCode);
          }

          return TemplateFormat::NOT_SET;
        }

        Aws::String GetNameForTemplateFormat(TemplateFormat enumValue)
        {
          switch(enumValue)
          {
          case TemplateFormat::NOT_SET:
            return {};
          case TemplateFormat::JSON:
            return "JSON";
          case TemplateFormat::YAML:
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

      } // namespace TemplateFormatMapper
    } // namespace Model
  } // namespace CloudFormation
} // namespace Aws

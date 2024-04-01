/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/deadline/model/EnvironmentTemplateType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace deadline
  {
    namespace Model
    {
      namespace EnvironmentTemplateTypeMapper
      {

        static const int JSON_HASH = HashingUtils::HashString("JSON");
        static const int YAML_HASH = HashingUtils::HashString("YAML");


        EnvironmentTemplateType GetEnvironmentTemplateTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == JSON_HASH)
          {
            return EnvironmentTemplateType::JSON;
          }
          else if (hashCode == YAML_HASH)
          {
            return EnvironmentTemplateType::YAML;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<EnvironmentTemplateType>(hashCode);
          }

          return EnvironmentTemplateType::NOT_SET;
        }

        Aws::String GetNameForEnvironmentTemplateType(EnvironmentTemplateType enumValue)
        {
          switch(enumValue)
          {
          case EnvironmentTemplateType::NOT_SET:
            return {};
          case EnvironmentTemplateType::JSON:
            return "JSON";
          case EnvironmentTemplateType::YAML:
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

      } // namespace EnvironmentTemplateTypeMapper
    } // namespace Model
  } // namespace deadline
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/deadline/model/JobTemplateType.h>
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
      namespace JobTemplateTypeMapper
      {

        static const int JSON_HASH = HashingUtils::HashString("JSON");
        static const int YAML_HASH = HashingUtils::HashString("YAML");


        JobTemplateType GetJobTemplateTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == JSON_HASH)
          {
            return JobTemplateType::JSON;
          }
          else if (hashCode == YAML_HASH)
          {
            return JobTemplateType::YAML;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<JobTemplateType>(hashCode);
          }

          return JobTemplateType::NOT_SET;
        }

        Aws::String GetNameForJobTemplateType(JobTemplateType enumValue)
        {
          switch(enumValue)
          {
          case JobTemplateType::NOT_SET:
            return {};
          case JobTemplateType::JSON:
            return "JSON";
          case JobTemplateType::YAML:
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

      } // namespace JobTemplateTypeMapper
    } // namespace Model
  } // namespace deadline
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/entityresolution/model/IdMappingWorkflowRuleDefinitionType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace EntityResolution
  {
    namespace Model
    {
      namespace IdMappingWorkflowRuleDefinitionTypeMapper
      {

        static const int SOURCE_HASH = HashingUtils::HashString("SOURCE");
        static const int TARGET_HASH = HashingUtils::HashString("TARGET");


        IdMappingWorkflowRuleDefinitionType GetIdMappingWorkflowRuleDefinitionTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SOURCE_HASH)
          {
            return IdMappingWorkflowRuleDefinitionType::SOURCE;
          }
          else if (hashCode == TARGET_HASH)
          {
            return IdMappingWorkflowRuleDefinitionType::TARGET;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<IdMappingWorkflowRuleDefinitionType>(hashCode);
          }

          return IdMappingWorkflowRuleDefinitionType::NOT_SET;
        }

        Aws::String GetNameForIdMappingWorkflowRuleDefinitionType(IdMappingWorkflowRuleDefinitionType enumValue)
        {
          switch(enumValue)
          {
          case IdMappingWorkflowRuleDefinitionType::NOT_SET:
            return {};
          case IdMappingWorkflowRuleDefinitionType::SOURCE:
            return "SOURCE";
          case IdMappingWorkflowRuleDefinitionType::TARGET:
            return "TARGET";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace IdMappingWorkflowRuleDefinitionTypeMapper
    } // namespace Model
  } // namespace EntityResolution
} // namespace Aws

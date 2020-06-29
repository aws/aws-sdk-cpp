/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/imagebuilder/model/PipelineExecutionStartCondition.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace imagebuilder
  {
    namespace Model
    {
      namespace PipelineExecutionStartConditionMapper
      {

        static const int EXPRESSION_MATCH_ONLY_HASH = HashingUtils::HashString("EXPRESSION_MATCH_ONLY");
        static const int EXPRESSION_MATCH_AND_DEPENDENCY_UPDATES_AVAILABLE_HASH = HashingUtils::HashString("EXPRESSION_MATCH_AND_DEPENDENCY_UPDATES_AVAILABLE");


        PipelineExecutionStartCondition GetPipelineExecutionStartConditionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == EXPRESSION_MATCH_ONLY_HASH)
          {
            return PipelineExecutionStartCondition::EXPRESSION_MATCH_ONLY;
          }
          else if (hashCode == EXPRESSION_MATCH_AND_DEPENDENCY_UPDATES_AVAILABLE_HASH)
          {
            return PipelineExecutionStartCondition::EXPRESSION_MATCH_AND_DEPENDENCY_UPDATES_AVAILABLE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PipelineExecutionStartCondition>(hashCode);
          }

          return PipelineExecutionStartCondition::NOT_SET;
        }

        Aws::String GetNameForPipelineExecutionStartCondition(PipelineExecutionStartCondition enumValue)
        {
          switch(enumValue)
          {
          case PipelineExecutionStartCondition::EXPRESSION_MATCH_ONLY:
            return "EXPRESSION_MATCH_ONLY";
          case PipelineExecutionStartCondition::EXPRESSION_MATCH_AND_DEPENDENCY_UPDATES_AVAILABLE:
            return "EXPRESSION_MATCH_AND_DEPENDENCY_UPDATES_AVAILABLE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PipelineExecutionStartConditionMapper
    } // namespace Model
  } // namespace imagebuilder
} // namespace Aws

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
#include <aws/codepipeline/model/PipelineExecutionStatus.h>
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
      namespace PipelineExecutionStatusMapper
      {

        static const int InProgress_HASH = HashingUtils::HashString("InProgress");
        static const int Succeeded_HASH = HashingUtils::HashString("Succeeded");
        static const int Superseded_HASH = HashingUtils::HashString("Superseded");
        static const int Failed_HASH = HashingUtils::HashString("Failed");


        PipelineExecutionStatus GetPipelineExecutionStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == InProgress_HASH)
          {
            return PipelineExecutionStatus::InProgress;
          }
          else if (hashCode == Succeeded_HASH)
          {
            return PipelineExecutionStatus::Succeeded;
          }
          else if (hashCode == Superseded_HASH)
          {
            return PipelineExecutionStatus::Superseded;
          }
          else if (hashCode == Failed_HASH)
          {
            return PipelineExecutionStatus::Failed;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PipelineExecutionStatus>(hashCode);
          }

          return PipelineExecutionStatus::NOT_SET;
        }

        Aws::String GetNameForPipelineExecutionStatus(PipelineExecutionStatus enumValue)
        {
          switch(enumValue)
          {
          case PipelineExecutionStatus::InProgress:
            return "InProgress";
          case PipelineExecutionStatus::Succeeded:
            return "Succeeded";
          case PipelineExecutionStatus::Superseded:
            return "Superseded";
          case PipelineExecutionStatus::Failed:
            return "Failed";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace PipelineExecutionStatusMapper
    } // namespace Model
  } // namespace CodePipeline
} // namespace Aws

/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

#include <aws/sagemaker/model/CandidateStepType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SageMaker
  {
    namespace Model
    {
      namespace CandidateStepTypeMapper
      {

        static const int AWS_SageMaker_TrainingJob_HASH = HashingUtils::HashString("AWS::SageMaker::TrainingJob");
        static const int AWS_SageMaker_TransformJob_HASH = HashingUtils::HashString("AWS::SageMaker::TransformJob");
        static const int AWS_SageMaker_ProcessingJob_HASH = HashingUtils::HashString("AWS::SageMaker::ProcessingJob");


        CandidateStepType GetCandidateStepTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AWS_SageMaker_TrainingJob_HASH)
          {
            return CandidateStepType::AWS_SageMaker_TrainingJob;
          }
          else if (hashCode == AWS_SageMaker_TransformJob_HASH)
          {
            return CandidateStepType::AWS_SageMaker_TransformJob;
          }
          else if (hashCode == AWS_SageMaker_ProcessingJob_HASH)
          {
            return CandidateStepType::AWS_SageMaker_ProcessingJob;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CandidateStepType>(hashCode);
          }

          return CandidateStepType::NOT_SET;
        }

        Aws::String GetNameForCandidateStepType(CandidateStepType enumValue)
        {
          switch(enumValue)
          {
          case CandidateStepType::AWS_SageMaker_TrainingJob:
            return "AWS::SageMaker::TrainingJob";
          case CandidateStepType::AWS_SageMaker_TransformJob:
            return "AWS::SageMaker::TransformJob";
          case CandidateStepType::AWS_SageMaker_ProcessingJob:
            return "AWS::SageMaker::ProcessingJob";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CandidateStepTypeMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws

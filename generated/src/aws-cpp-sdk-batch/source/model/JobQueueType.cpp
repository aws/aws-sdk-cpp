/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/batch/model/JobQueueType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Batch
  {
    namespace Model
    {
      namespace JobQueueTypeMapper
      {

        static const int EKS_HASH = HashingUtils::HashString("EKS");
        static const int ECS_HASH = HashingUtils::HashString("ECS");
        static const int ECS_FARGATE_HASH = HashingUtils::HashString("ECS_FARGATE");
        static const int SAGEMAKER_TRAINING_HASH = HashingUtils::HashString("SAGEMAKER_TRAINING");


        JobQueueType GetJobQueueTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == EKS_HASH)
          {
            return JobQueueType::EKS;
          }
          else if (hashCode == ECS_HASH)
          {
            return JobQueueType::ECS;
          }
          else if (hashCode == ECS_FARGATE_HASH)
          {
            return JobQueueType::ECS_FARGATE;
          }
          else if (hashCode == SAGEMAKER_TRAINING_HASH)
          {
            return JobQueueType::SAGEMAKER_TRAINING;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<JobQueueType>(hashCode);
          }

          return JobQueueType::NOT_SET;
        }

        Aws::String GetNameForJobQueueType(JobQueueType enumValue)
        {
          switch(enumValue)
          {
          case JobQueueType::NOT_SET:
            return {};
          case JobQueueType::EKS:
            return "EKS";
          case JobQueueType::ECS:
            return "ECS";
          case JobQueueType::ECS_FARGATE:
            return "ECS_FARGATE";
          case JobQueueType::SAGEMAKER_TRAINING:
            return "SAGEMAKER_TRAINING";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace JobQueueTypeMapper
    } // namespace Model
  } // namespace Batch
} // namespace Aws

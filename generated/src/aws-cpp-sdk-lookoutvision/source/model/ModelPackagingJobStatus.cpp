/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lookoutvision/model/ModelPackagingJobStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace LookoutforVision
  {
    namespace Model
    {
      namespace ModelPackagingJobStatusMapper
      {

        static constexpr uint32_t CREATED_HASH = ConstExprHashingUtils::HashString("CREATED");
        static constexpr uint32_t RUNNING_HASH = ConstExprHashingUtils::HashString("RUNNING");
        static constexpr uint32_t SUCCEEDED_HASH = ConstExprHashingUtils::HashString("SUCCEEDED");
        static constexpr uint32_t FAILED_HASH = ConstExprHashingUtils::HashString("FAILED");


        ModelPackagingJobStatus GetModelPackagingJobStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATED_HASH)
          {
            return ModelPackagingJobStatus::CREATED;
          }
          else if (hashCode == RUNNING_HASH)
          {
            return ModelPackagingJobStatus::RUNNING;
          }
          else if (hashCode == SUCCEEDED_HASH)
          {
            return ModelPackagingJobStatus::SUCCEEDED;
          }
          else if (hashCode == FAILED_HASH)
          {
            return ModelPackagingJobStatus::FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ModelPackagingJobStatus>(hashCode);
          }

          return ModelPackagingJobStatus::NOT_SET;
        }

        Aws::String GetNameForModelPackagingJobStatus(ModelPackagingJobStatus enumValue)
        {
          switch(enumValue)
          {
          case ModelPackagingJobStatus::NOT_SET:
            return {};
          case ModelPackagingJobStatus::CREATED:
            return "CREATED";
          case ModelPackagingJobStatus::RUNNING:
            return "RUNNING";
          case ModelPackagingJobStatus::SUCCEEDED:
            return "SUCCEEDED";
          case ModelPackagingJobStatus::FAILED:
            return "FAILED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ModelPackagingJobStatusMapper
    } // namespace Model
  } // namespace LookoutforVision
} // namespace Aws

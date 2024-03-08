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

        static const int CREATED_HASH = HashingUtils::HashString("CREATED");
        static const int RUNNING_HASH = HashingUtils::HashString("RUNNING");
        static const int SUCCEEDED_HASH = HashingUtils::HashString("SUCCEEDED");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");


        ModelPackagingJobStatus GetModelPackagingJobStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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

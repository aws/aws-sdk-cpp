/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/ModelCardProcessingStatus.h>
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
      namespace ModelCardProcessingStatusMapper
      {

        static const int DeleteInProgress_HASH = HashingUtils::HashString("DeleteInProgress");
        static const int DeletePending_HASH = HashingUtils::HashString("DeletePending");
        static const int ContentDeleted_HASH = HashingUtils::HashString("ContentDeleted");
        static const int ExportJobsDeleted_HASH = HashingUtils::HashString("ExportJobsDeleted");
        static const int DeleteCompleted_HASH = HashingUtils::HashString("DeleteCompleted");
        static const int DeleteFailed_HASH = HashingUtils::HashString("DeleteFailed");


        ModelCardProcessingStatus GetModelCardProcessingStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DeleteInProgress_HASH)
          {
            return ModelCardProcessingStatus::DeleteInProgress;
          }
          else if (hashCode == DeletePending_HASH)
          {
            return ModelCardProcessingStatus::DeletePending;
          }
          else if (hashCode == ContentDeleted_HASH)
          {
            return ModelCardProcessingStatus::ContentDeleted;
          }
          else if (hashCode == ExportJobsDeleted_HASH)
          {
            return ModelCardProcessingStatus::ExportJobsDeleted;
          }
          else if (hashCode == DeleteCompleted_HASH)
          {
            return ModelCardProcessingStatus::DeleteCompleted;
          }
          else if (hashCode == DeleteFailed_HASH)
          {
            return ModelCardProcessingStatus::DeleteFailed;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ModelCardProcessingStatus>(hashCode);
          }

          return ModelCardProcessingStatus::NOT_SET;
        }

        Aws::String GetNameForModelCardProcessingStatus(ModelCardProcessingStatus enumValue)
        {
          switch(enumValue)
          {
          case ModelCardProcessingStatus::DeleteInProgress:
            return "DeleteInProgress";
          case ModelCardProcessingStatus::DeletePending:
            return "DeletePending";
          case ModelCardProcessingStatus::ContentDeleted:
            return "ContentDeleted";
          case ModelCardProcessingStatus::ExportJobsDeleted:
            return "ExportJobsDeleted";
          case ModelCardProcessingStatus::DeleteCompleted:
            return "DeleteCompleted";
          case ModelCardProcessingStatus::DeleteFailed:
            return "DeleteFailed";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ModelCardProcessingStatusMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws

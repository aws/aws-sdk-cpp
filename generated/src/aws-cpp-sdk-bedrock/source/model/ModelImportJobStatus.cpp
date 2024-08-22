/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/ModelImportJobStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Bedrock
  {
    namespace Model
    {
      namespace ModelImportJobStatusMapper
      {

        static const int InProgress_HASH = HashingUtils::HashString("InProgress");
        static const int Completed_HASH = HashingUtils::HashString("Completed");
        static const int Failed_HASH = HashingUtils::HashString("Failed");


        ModelImportJobStatus GetModelImportJobStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == InProgress_HASH)
          {
            return ModelImportJobStatus::InProgress;
          }
          else if (hashCode == Completed_HASH)
          {
            return ModelImportJobStatus::Completed;
          }
          else if (hashCode == Failed_HASH)
          {
            return ModelImportJobStatus::Failed;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ModelImportJobStatus>(hashCode);
          }

          return ModelImportJobStatus::NOT_SET;
        }

        Aws::String GetNameForModelImportJobStatus(ModelImportJobStatus enumValue)
        {
          switch(enumValue)
          {
          case ModelImportJobStatus::NOT_SET:
            return {};
          case ModelImportJobStatus::InProgress:
            return "InProgress";
          case ModelImportJobStatus::Completed:
            return "Completed";
          case ModelImportJobStatus::Failed:
            return "Failed";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ModelImportJobStatusMapper
    } // namespace Model
  } // namespace Bedrock
} // namespace Aws

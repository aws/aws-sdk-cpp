/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/ModelCopyJobStatus.h>
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
      namespace ModelCopyJobStatusMapper
      {

        static const int InProgress_HASH = HashingUtils::HashString("InProgress");
        static const int Completed_HASH = HashingUtils::HashString("Completed");
        static const int Failed_HASH = HashingUtils::HashString("Failed");


        ModelCopyJobStatus GetModelCopyJobStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == InProgress_HASH)
          {
            return ModelCopyJobStatus::InProgress;
          }
          else if (hashCode == Completed_HASH)
          {
            return ModelCopyJobStatus::Completed;
          }
          else if (hashCode == Failed_HASH)
          {
            return ModelCopyJobStatus::Failed;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ModelCopyJobStatus>(hashCode);
          }

          return ModelCopyJobStatus::NOT_SET;
        }

        Aws::String GetNameForModelCopyJobStatus(ModelCopyJobStatus enumValue)
        {
          switch(enumValue)
          {
          case ModelCopyJobStatus::NOT_SET:
            return {};
          case ModelCopyJobStatus::InProgress:
            return "InProgress";
          case ModelCopyJobStatus::Completed:
            return "Completed";
          case ModelCopyJobStatus::Failed:
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

      } // namespace ModelCopyJobStatusMapper
    } // namespace Model
  } // namespace Bedrock
} // namespace Aws

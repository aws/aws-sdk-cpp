/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/ModelCustomizationJobStatus.h>
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
      namespace ModelCustomizationJobStatusMapper
      {

        static const int InProgress_HASH = HashingUtils::HashString("InProgress");
        static const int Completed_HASH = HashingUtils::HashString("Completed");
        static const int Failed_HASH = HashingUtils::HashString("Failed");
        static const int Stopping_HASH = HashingUtils::HashString("Stopping");
        static const int Stopped_HASH = HashingUtils::HashString("Stopped");


        ModelCustomizationJobStatus GetModelCustomizationJobStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == InProgress_HASH)
          {
            return ModelCustomizationJobStatus::InProgress;
          }
          else if (hashCode == Completed_HASH)
          {
            return ModelCustomizationJobStatus::Completed;
          }
          else if (hashCode == Failed_HASH)
          {
            return ModelCustomizationJobStatus::Failed;
          }
          else if (hashCode == Stopping_HASH)
          {
            return ModelCustomizationJobStatus::Stopping;
          }
          else if (hashCode == Stopped_HASH)
          {
            return ModelCustomizationJobStatus::Stopped;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ModelCustomizationJobStatus>(hashCode);
          }

          return ModelCustomizationJobStatus::NOT_SET;
        }

        Aws::String GetNameForModelCustomizationJobStatus(ModelCustomizationJobStatus enumValue)
        {
          switch(enumValue)
          {
          case ModelCustomizationJobStatus::NOT_SET:
            return {};
          case ModelCustomizationJobStatus::InProgress:
            return "InProgress";
          case ModelCustomizationJobStatus::Completed:
            return "Completed";
          case ModelCustomizationJobStatus::Failed:
            return "Failed";
          case ModelCustomizationJobStatus::Stopping:
            return "Stopping";
          case ModelCustomizationJobStatus::Stopped:
            return "Stopped";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ModelCustomizationJobStatusMapper
    } // namespace Model
  } // namespace Bedrock
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/InferenceExperimentStopDesiredState.h>
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
      namespace InferenceExperimentStopDesiredStateMapper
      {

        static const int Completed_HASH = HashingUtils::HashString("Completed");
        static const int Cancelled_HASH = HashingUtils::HashString("Cancelled");


        InferenceExperimentStopDesiredState GetInferenceExperimentStopDesiredStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Completed_HASH)
          {
            return InferenceExperimentStopDesiredState::Completed;
          }
          else if (hashCode == Cancelled_HASH)
          {
            return InferenceExperimentStopDesiredState::Cancelled;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<InferenceExperimentStopDesiredState>(hashCode);
          }

          return InferenceExperimentStopDesiredState::NOT_SET;
        }

        Aws::String GetNameForInferenceExperimentStopDesiredState(InferenceExperimentStopDesiredState enumValue)
        {
          switch(enumValue)
          {
          case InferenceExperimentStopDesiredState::Completed:
            return "Completed";
          case InferenceExperimentStopDesiredState::Cancelled:
            return "Cancelled";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace InferenceExperimentStopDesiredStateMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws

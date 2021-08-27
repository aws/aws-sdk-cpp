/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/AutoMLJobSecondaryStatus.h>
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
      namespace AutoMLJobSecondaryStatusMapper
      {

        static const int Starting_HASH = HashingUtils::HashString("Starting");
        static const int AnalyzingData_HASH = HashingUtils::HashString("AnalyzingData");
        static const int FeatureEngineering_HASH = HashingUtils::HashString("FeatureEngineering");
        static const int ModelTuning_HASH = HashingUtils::HashString("ModelTuning");
        static const int MaxCandidatesReached_HASH = HashingUtils::HashString("MaxCandidatesReached");
        static const int Failed_HASH = HashingUtils::HashString("Failed");
        static const int Stopped_HASH = HashingUtils::HashString("Stopped");
        static const int MaxAutoMLJobRuntimeReached_HASH = HashingUtils::HashString("MaxAutoMLJobRuntimeReached");
        static const int Stopping_HASH = HashingUtils::HashString("Stopping");
        static const int CandidateDefinitionsGenerated_HASH = HashingUtils::HashString("CandidateDefinitionsGenerated");


        AutoMLJobSecondaryStatus GetAutoMLJobSecondaryStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Starting_HASH)
          {
            return AutoMLJobSecondaryStatus::Starting;
          }
          else if (hashCode == AnalyzingData_HASH)
          {
            return AutoMLJobSecondaryStatus::AnalyzingData;
          }
          else if (hashCode == FeatureEngineering_HASH)
          {
            return AutoMLJobSecondaryStatus::FeatureEngineering;
          }
          else if (hashCode == ModelTuning_HASH)
          {
            return AutoMLJobSecondaryStatus::ModelTuning;
          }
          else if (hashCode == MaxCandidatesReached_HASH)
          {
            return AutoMLJobSecondaryStatus::MaxCandidatesReached;
          }
          else if (hashCode == Failed_HASH)
          {
            return AutoMLJobSecondaryStatus::Failed;
          }
          else if (hashCode == Stopped_HASH)
          {
            return AutoMLJobSecondaryStatus::Stopped;
          }
          else if (hashCode == MaxAutoMLJobRuntimeReached_HASH)
          {
            return AutoMLJobSecondaryStatus::MaxAutoMLJobRuntimeReached;
          }
          else if (hashCode == Stopping_HASH)
          {
            return AutoMLJobSecondaryStatus::Stopping;
          }
          else if (hashCode == CandidateDefinitionsGenerated_HASH)
          {
            return AutoMLJobSecondaryStatus::CandidateDefinitionsGenerated;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AutoMLJobSecondaryStatus>(hashCode);
          }

          return AutoMLJobSecondaryStatus::NOT_SET;
        }

        Aws::String GetNameForAutoMLJobSecondaryStatus(AutoMLJobSecondaryStatus enumValue)
        {
          switch(enumValue)
          {
          case AutoMLJobSecondaryStatus::Starting:
            return "Starting";
          case AutoMLJobSecondaryStatus::AnalyzingData:
            return "AnalyzingData";
          case AutoMLJobSecondaryStatus::FeatureEngineering:
            return "FeatureEngineering";
          case AutoMLJobSecondaryStatus::ModelTuning:
            return "ModelTuning";
          case AutoMLJobSecondaryStatus::MaxCandidatesReached:
            return "MaxCandidatesReached";
          case AutoMLJobSecondaryStatus::Failed:
            return "Failed";
          case AutoMLJobSecondaryStatus::Stopped:
            return "Stopped";
          case AutoMLJobSecondaryStatus::MaxAutoMLJobRuntimeReached:
            return "MaxAutoMLJobRuntimeReached";
          case AutoMLJobSecondaryStatus::Stopping:
            return "Stopping";
          case AutoMLJobSecondaryStatus::CandidateDefinitionsGenerated:
            return "CandidateDefinitionsGenerated";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AutoMLJobSecondaryStatusMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws

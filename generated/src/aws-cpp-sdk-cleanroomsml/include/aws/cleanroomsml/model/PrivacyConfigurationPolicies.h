/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanroomsml/CleanRoomsML_EXPORTS.h>
#include <aws/cleanroomsml/model/TrainedModelsConfigurationPolicy.h>
#include <aws/cleanroomsml/model/TrainedModelExportsConfigurationPolicy.h>
#include <aws/cleanroomsml/model/TrainedModelInferenceJobsConfigurationPolicy.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace CleanRoomsML
{
namespace Model
{

  /**
   * <p>Information about the privacy configuration policies for a configured model
   * algorithm association.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cleanroomsml-2023-09-06/PrivacyConfigurationPolicies">AWS
   * API Reference</a></p>
   */
  class PrivacyConfigurationPolicies
  {
  public:
    AWS_CLEANROOMSML_API PrivacyConfigurationPolicies();
    AWS_CLEANROOMSML_API PrivacyConfigurationPolicies(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMSML_API PrivacyConfigurationPolicies& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMSML_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies who will receive the trained models.</p>
     */
    inline const TrainedModelsConfigurationPolicy& GetTrainedModels() const{ return m_trainedModels; }
    inline bool TrainedModelsHasBeenSet() const { return m_trainedModelsHasBeenSet; }
    inline void SetTrainedModels(const TrainedModelsConfigurationPolicy& value) { m_trainedModelsHasBeenSet = true; m_trainedModels = value; }
    inline void SetTrainedModels(TrainedModelsConfigurationPolicy&& value) { m_trainedModelsHasBeenSet = true; m_trainedModels = std::move(value); }
    inline PrivacyConfigurationPolicies& WithTrainedModels(const TrainedModelsConfigurationPolicy& value) { SetTrainedModels(value); return *this;}
    inline PrivacyConfigurationPolicies& WithTrainedModels(TrainedModelsConfigurationPolicy&& value) { SetTrainedModels(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies who will receive the trained model export.</p>
     */
    inline const TrainedModelExportsConfigurationPolicy& GetTrainedModelExports() const{ return m_trainedModelExports; }
    inline bool TrainedModelExportsHasBeenSet() const { return m_trainedModelExportsHasBeenSet; }
    inline void SetTrainedModelExports(const TrainedModelExportsConfigurationPolicy& value) { m_trainedModelExportsHasBeenSet = true; m_trainedModelExports = value; }
    inline void SetTrainedModelExports(TrainedModelExportsConfigurationPolicy&& value) { m_trainedModelExportsHasBeenSet = true; m_trainedModelExports = std::move(value); }
    inline PrivacyConfigurationPolicies& WithTrainedModelExports(const TrainedModelExportsConfigurationPolicy& value) { SetTrainedModelExports(value); return *this;}
    inline PrivacyConfigurationPolicies& WithTrainedModelExports(TrainedModelExportsConfigurationPolicy&& value) { SetTrainedModelExports(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies who will receive the trained model inference jobs.</p>
     */
    inline const TrainedModelInferenceJobsConfigurationPolicy& GetTrainedModelInferenceJobs() const{ return m_trainedModelInferenceJobs; }
    inline bool TrainedModelInferenceJobsHasBeenSet() const { return m_trainedModelInferenceJobsHasBeenSet; }
    inline void SetTrainedModelInferenceJobs(const TrainedModelInferenceJobsConfigurationPolicy& value) { m_trainedModelInferenceJobsHasBeenSet = true; m_trainedModelInferenceJobs = value; }
    inline void SetTrainedModelInferenceJobs(TrainedModelInferenceJobsConfigurationPolicy&& value) { m_trainedModelInferenceJobsHasBeenSet = true; m_trainedModelInferenceJobs = std::move(value); }
    inline PrivacyConfigurationPolicies& WithTrainedModelInferenceJobs(const TrainedModelInferenceJobsConfigurationPolicy& value) { SetTrainedModelInferenceJobs(value); return *this;}
    inline PrivacyConfigurationPolicies& WithTrainedModelInferenceJobs(TrainedModelInferenceJobsConfigurationPolicy&& value) { SetTrainedModelInferenceJobs(std::move(value)); return *this;}
    ///@}
  private:

    TrainedModelsConfigurationPolicy m_trainedModels;
    bool m_trainedModelsHasBeenSet = false;

    TrainedModelExportsConfigurationPolicy m_trainedModelExports;
    bool m_trainedModelExportsHasBeenSet = false;

    TrainedModelInferenceJobsConfigurationPolicy m_trainedModelInferenceJobs;
    bool m_trainedModelInferenceJobsHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRoomsML
} // namespace Aws

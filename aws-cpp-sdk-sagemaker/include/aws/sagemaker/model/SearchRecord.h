/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/TrainingJob.h>
#include <aws/sagemaker/model/Experiment.h>
#include <aws/sagemaker/model/Trial.h>
#include <aws/sagemaker/model/TrialComponent.h>
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
namespace SageMaker
{
namespace Model
{

  /**
   * <p>An individual search result record that contains a single resource
   * object.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/SearchRecord">AWS
   * API Reference</a></p>
   */
  class AWS_SAGEMAKER_API SearchRecord
  {
  public:
    SearchRecord();
    SearchRecord(Aws::Utils::Json::JsonView jsonValue);
    SearchRecord& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A <code>TrainingJob</code> object that is returned as part of a
     * <code>Search</code> request.</p>
     */
    inline const TrainingJob& GetTrainingJob() const{ return m_trainingJob; }

    /**
     * <p>A <code>TrainingJob</code> object that is returned as part of a
     * <code>Search</code> request.</p>
     */
    inline bool TrainingJobHasBeenSet() const { return m_trainingJobHasBeenSet; }

    /**
     * <p>A <code>TrainingJob</code> object that is returned as part of a
     * <code>Search</code> request.</p>
     */
    inline void SetTrainingJob(const TrainingJob& value) { m_trainingJobHasBeenSet = true; m_trainingJob = value; }

    /**
     * <p>A <code>TrainingJob</code> object that is returned as part of a
     * <code>Search</code> request.</p>
     */
    inline void SetTrainingJob(TrainingJob&& value) { m_trainingJobHasBeenSet = true; m_trainingJob = std::move(value); }

    /**
     * <p>A <code>TrainingJob</code> object that is returned as part of a
     * <code>Search</code> request.</p>
     */
    inline SearchRecord& WithTrainingJob(const TrainingJob& value) { SetTrainingJob(value); return *this;}

    /**
     * <p>A <code>TrainingJob</code> object that is returned as part of a
     * <code>Search</code> request.</p>
     */
    inline SearchRecord& WithTrainingJob(TrainingJob&& value) { SetTrainingJob(std::move(value)); return *this;}


    /**
     * <p>A summary of the properties of an experiment.</p>
     */
    inline const Experiment& GetExperiment() const{ return m_experiment; }

    /**
     * <p>A summary of the properties of an experiment.</p>
     */
    inline bool ExperimentHasBeenSet() const { return m_experimentHasBeenSet; }

    /**
     * <p>A summary of the properties of an experiment.</p>
     */
    inline void SetExperiment(const Experiment& value) { m_experimentHasBeenSet = true; m_experiment = value; }

    /**
     * <p>A summary of the properties of an experiment.</p>
     */
    inline void SetExperiment(Experiment&& value) { m_experimentHasBeenSet = true; m_experiment = std::move(value); }

    /**
     * <p>A summary of the properties of an experiment.</p>
     */
    inline SearchRecord& WithExperiment(const Experiment& value) { SetExperiment(value); return *this;}

    /**
     * <p>A summary of the properties of an experiment.</p>
     */
    inline SearchRecord& WithExperiment(Experiment&& value) { SetExperiment(std::move(value)); return *this;}


    /**
     * <p>A summary of the properties of a trial.</p>
     */
    inline const Trial& GetTrial() const{ return m_trial; }

    /**
     * <p>A summary of the properties of a trial.</p>
     */
    inline bool TrialHasBeenSet() const { return m_trialHasBeenSet; }

    /**
     * <p>A summary of the properties of a trial.</p>
     */
    inline void SetTrial(const Trial& value) { m_trialHasBeenSet = true; m_trial = value; }

    /**
     * <p>A summary of the properties of a trial.</p>
     */
    inline void SetTrial(Trial&& value) { m_trialHasBeenSet = true; m_trial = std::move(value); }

    /**
     * <p>A summary of the properties of a trial.</p>
     */
    inline SearchRecord& WithTrial(const Trial& value) { SetTrial(value); return *this;}

    /**
     * <p>A summary of the properties of a trial.</p>
     */
    inline SearchRecord& WithTrial(Trial&& value) { SetTrial(std::move(value)); return *this;}


    /**
     * <p>A summary of the properties of a trial component.</p>
     */
    inline const TrialComponent& GetTrialComponent() const{ return m_trialComponent; }

    /**
     * <p>A summary of the properties of a trial component.</p>
     */
    inline bool TrialComponentHasBeenSet() const { return m_trialComponentHasBeenSet; }

    /**
     * <p>A summary of the properties of a trial component.</p>
     */
    inline void SetTrialComponent(const TrialComponent& value) { m_trialComponentHasBeenSet = true; m_trialComponent = value; }

    /**
     * <p>A summary of the properties of a trial component.</p>
     */
    inline void SetTrialComponent(TrialComponent&& value) { m_trialComponentHasBeenSet = true; m_trialComponent = std::move(value); }

    /**
     * <p>A summary of the properties of a trial component.</p>
     */
    inline SearchRecord& WithTrialComponent(const TrialComponent& value) { SetTrialComponent(value); return *this;}

    /**
     * <p>A summary of the properties of a trial component.</p>
     */
    inline SearchRecord& WithTrialComponent(TrialComponent&& value) { SetTrialComponent(std::move(value)); return *this;}

  private:

    TrainingJob m_trainingJob;
    bool m_trainingJobHasBeenSet;

    Experiment m_experiment;
    bool m_experimentHasBeenSet;

    Trial m_trial;
    bool m_trialHasBeenSet;

    TrialComponent m_trialComponent;
    bool m_trialComponentHasBeenSet;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws

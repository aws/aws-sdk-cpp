/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
   * <p>A single resource returned as part of the <a>Search</a> API
   * response.</p><p><h3>See Also:</h3>   <a
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
     * <p>The properties of a training job.</p>
     */
    inline const TrainingJob& GetTrainingJob() const{ return m_trainingJob; }

    /**
     * <p>The properties of a training job.</p>
     */
    inline bool TrainingJobHasBeenSet() const { return m_trainingJobHasBeenSet; }

    /**
     * <p>The properties of a training job.</p>
     */
    inline void SetTrainingJob(const TrainingJob& value) { m_trainingJobHasBeenSet = true; m_trainingJob = value; }

    /**
     * <p>The properties of a training job.</p>
     */
    inline void SetTrainingJob(TrainingJob&& value) { m_trainingJobHasBeenSet = true; m_trainingJob = std::move(value); }

    /**
     * <p>The properties of a training job.</p>
     */
    inline SearchRecord& WithTrainingJob(const TrainingJob& value) { SetTrainingJob(value); return *this;}

    /**
     * <p>The properties of a training job.</p>
     */
    inline SearchRecord& WithTrainingJob(TrainingJob&& value) { SetTrainingJob(std::move(value)); return *this;}


    /**
     * <p>The properties of an experiment.</p>
     */
    inline const Experiment& GetExperiment() const{ return m_experiment; }

    /**
     * <p>The properties of an experiment.</p>
     */
    inline bool ExperimentHasBeenSet() const { return m_experimentHasBeenSet; }

    /**
     * <p>The properties of an experiment.</p>
     */
    inline void SetExperiment(const Experiment& value) { m_experimentHasBeenSet = true; m_experiment = value; }

    /**
     * <p>The properties of an experiment.</p>
     */
    inline void SetExperiment(Experiment&& value) { m_experimentHasBeenSet = true; m_experiment = std::move(value); }

    /**
     * <p>The properties of an experiment.</p>
     */
    inline SearchRecord& WithExperiment(const Experiment& value) { SetExperiment(value); return *this;}

    /**
     * <p>The properties of an experiment.</p>
     */
    inline SearchRecord& WithExperiment(Experiment&& value) { SetExperiment(std::move(value)); return *this;}


    /**
     * <p>The properties of a trial.</p>
     */
    inline const Trial& GetTrial() const{ return m_trial; }

    /**
     * <p>The properties of a trial.</p>
     */
    inline bool TrialHasBeenSet() const { return m_trialHasBeenSet; }

    /**
     * <p>The properties of a trial.</p>
     */
    inline void SetTrial(const Trial& value) { m_trialHasBeenSet = true; m_trial = value; }

    /**
     * <p>The properties of a trial.</p>
     */
    inline void SetTrial(Trial&& value) { m_trialHasBeenSet = true; m_trial = std::move(value); }

    /**
     * <p>The properties of a trial.</p>
     */
    inline SearchRecord& WithTrial(const Trial& value) { SetTrial(value); return *this;}

    /**
     * <p>The properties of a trial.</p>
     */
    inline SearchRecord& WithTrial(Trial&& value) { SetTrial(std::move(value)); return *this;}


    /**
     * <p>The properties of a trial component.</p>
     */
    inline const TrialComponent& GetTrialComponent() const{ return m_trialComponent; }

    /**
     * <p>The properties of a trial component.</p>
     */
    inline bool TrialComponentHasBeenSet() const { return m_trialComponentHasBeenSet; }

    /**
     * <p>The properties of a trial component.</p>
     */
    inline void SetTrialComponent(const TrialComponent& value) { m_trialComponentHasBeenSet = true; m_trialComponent = value; }

    /**
     * <p>The properties of a trial component.</p>
     */
    inline void SetTrialComponent(TrialComponent&& value) { m_trialComponentHasBeenSet = true; m_trialComponent = std::move(value); }

    /**
     * <p>The properties of a trial component.</p>
     */
    inline SearchRecord& WithTrialComponent(const TrialComponent& value) { SetTrialComponent(value); return *this;}

    /**
     * <p>The properties of a trial component.</p>
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

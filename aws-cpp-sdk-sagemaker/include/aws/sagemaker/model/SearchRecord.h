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
#include <aws/sagemaker/model/Endpoint.h>
#include <aws/sagemaker/model/ModelPackage.h>
#include <aws/sagemaker/model/ModelPackageGroup.h>
#include <aws/sagemaker/model/Pipeline.h>
#include <aws/sagemaker/model/PipelineExecution.h>
#include <aws/sagemaker/model/FeatureGroup.h>
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


    
    inline const Endpoint& GetEndpoint() const{ return m_endpoint; }

    
    inline bool EndpointHasBeenSet() const { return m_endpointHasBeenSet; }

    
    inline void SetEndpoint(const Endpoint& value) { m_endpointHasBeenSet = true; m_endpoint = value; }

    
    inline void SetEndpoint(Endpoint&& value) { m_endpointHasBeenSet = true; m_endpoint = std::move(value); }

    
    inline SearchRecord& WithEndpoint(const Endpoint& value) { SetEndpoint(value); return *this;}

    
    inline SearchRecord& WithEndpoint(Endpoint&& value) { SetEndpoint(std::move(value)); return *this;}


    
    inline const ModelPackage& GetModelPackage() const{ return m_modelPackage; }

    
    inline bool ModelPackageHasBeenSet() const { return m_modelPackageHasBeenSet; }

    
    inline void SetModelPackage(const ModelPackage& value) { m_modelPackageHasBeenSet = true; m_modelPackage = value; }

    
    inline void SetModelPackage(ModelPackage&& value) { m_modelPackageHasBeenSet = true; m_modelPackage = std::move(value); }

    
    inline SearchRecord& WithModelPackage(const ModelPackage& value) { SetModelPackage(value); return *this;}

    
    inline SearchRecord& WithModelPackage(ModelPackage&& value) { SetModelPackage(std::move(value)); return *this;}


    
    inline const ModelPackageGroup& GetModelPackageGroup() const{ return m_modelPackageGroup; }

    
    inline bool ModelPackageGroupHasBeenSet() const { return m_modelPackageGroupHasBeenSet; }

    
    inline void SetModelPackageGroup(const ModelPackageGroup& value) { m_modelPackageGroupHasBeenSet = true; m_modelPackageGroup = value; }

    
    inline void SetModelPackageGroup(ModelPackageGroup&& value) { m_modelPackageGroupHasBeenSet = true; m_modelPackageGroup = std::move(value); }

    
    inline SearchRecord& WithModelPackageGroup(const ModelPackageGroup& value) { SetModelPackageGroup(value); return *this;}

    
    inline SearchRecord& WithModelPackageGroup(ModelPackageGroup&& value) { SetModelPackageGroup(std::move(value)); return *this;}


    
    inline const Pipeline& GetPipeline() const{ return m_pipeline; }

    
    inline bool PipelineHasBeenSet() const { return m_pipelineHasBeenSet; }

    
    inline void SetPipeline(const Pipeline& value) { m_pipelineHasBeenSet = true; m_pipeline = value; }

    
    inline void SetPipeline(Pipeline&& value) { m_pipelineHasBeenSet = true; m_pipeline = std::move(value); }

    
    inline SearchRecord& WithPipeline(const Pipeline& value) { SetPipeline(value); return *this;}

    
    inline SearchRecord& WithPipeline(Pipeline&& value) { SetPipeline(std::move(value)); return *this;}


    
    inline const PipelineExecution& GetPipelineExecution() const{ return m_pipelineExecution; }

    
    inline bool PipelineExecutionHasBeenSet() const { return m_pipelineExecutionHasBeenSet; }

    
    inline void SetPipelineExecution(const PipelineExecution& value) { m_pipelineExecutionHasBeenSet = true; m_pipelineExecution = value; }

    
    inline void SetPipelineExecution(PipelineExecution&& value) { m_pipelineExecutionHasBeenSet = true; m_pipelineExecution = std::move(value); }

    
    inline SearchRecord& WithPipelineExecution(const PipelineExecution& value) { SetPipelineExecution(value); return *this;}

    
    inline SearchRecord& WithPipelineExecution(PipelineExecution&& value) { SetPipelineExecution(std::move(value)); return *this;}


    
    inline const FeatureGroup& GetFeatureGroup() const{ return m_featureGroup; }

    
    inline bool FeatureGroupHasBeenSet() const { return m_featureGroupHasBeenSet; }

    
    inline void SetFeatureGroup(const FeatureGroup& value) { m_featureGroupHasBeenSet = true; m_featureGroup = value; }

    
    inline void SetFeatureGroup(FeatureGroup&& value) { m_featureGroupHasBeenSet = true; m_featureGroup = std::move(value); }

    
    inline SearchRecord& WithFeatureGroup(const FeatureGroup& value) { SetFeatureGroup(value); return *this;}

    
    inline SearchRecord& WithFeatureGroup(FeatureGroup&& value) { SetFeatureGroup(std::move(value)); return *this;}

  private:

    TrainingJob m_trainingJob;
    bool m_trainingJobHasBeenSet;

    Experiment m_experiment;
    bool m_experimentHasBeenSet;

    Trial m_trial;
    bool m_trialHasBeenSet;

    TrialComponent m_trialComponent;
    bool m_trialComponentHasBeenSet;

    Endpoint m_endpoint;
    bool m_endpointHasBeenSet;

    ModelPackage m_modelPackage;
    bool m_modelPackageHasBeenSet;

    ModelPackageGroup m_modelPackageGroup;
    bool m_modelPackageGroupHasBeenSet;

    Pipeline m_pipeline;
    bool m_pipelineHasBeenSet;

    PipelineExecution m_pipelineExecution;
    bool m_pipelineExecutionHasBeenSet;

    FeatureGroup m_featureGroup;
    bool m_featureGroupHasBeenSet;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws

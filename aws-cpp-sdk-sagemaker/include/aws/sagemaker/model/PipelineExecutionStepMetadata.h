/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/TrainingJobStepMetadata.h>
#include <aws/sagemaker/model/ProcessingJobStepMetadata.h>
#include <aws/sagemaker/model/TransformJobStepMetadata.h>
#include <aws/sagemaker/model/ModelStepMetadata.h>
#include <aws/sagemaker/model/RegisterModelStepMetadata.h>
#include <aws/sagemaker/model/ConditionStepMetadata.h>
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
   * <p>Metadata for a step execution.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/PipelineExecutionStepMetadata">AWS
   * API Reference</a></p>
   */
  class AWS_SAGEMAKER_API PipelineExecutionStepMetadata
  {
  public:
    PipelineExecutionStepMetadata();
    PipelineExecutionStepMetadata(Aws::Utils::Json::JsonView jsonValue);
    PipelineExecutionStepMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of the training job that was run by this step
     * execution.</p>
     */
    inline const TrainingJobStepMetadata& GetTrainingJob() const{ return m_trainingJob; }

    /**
     * <p>The Amazon Resource Name (ARN) of the training job that was run by this step
     * execution.</p>
     */
    inline bool TrainingJobHasBeenSet() const { return m_trainingJobHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the training job that was run by this step
     * execution.</p>
     */
    inline void SetTrainingJob(const TrainingJobStepMetadata& value) { m_trainingJobHasBeenSet = true; m_trainingJob = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the training job that was run by this step
     * execution.</p>
     */
    inline void SetTrainingJob(TrainingJobStepMetadata&& value) { m_trainingJobHasBeenSet = true; m_trainingJob = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the training job that was run by this step
     * execution.</p>
     */
    inline PipelineExecutionStepMetadata& WithTrainingJob(const TrainingJobStepMetadata& value) { SetTrainingJob(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the training job that was run by this step
     * execution.</p>
     */
    inline PipelineExecutionStepMetadata& WithTrainingJob(TrainingJobStepMetadata&& value) { SetTrainingJob(std::move(value)); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the processing job that was run by this
     * step execution.</p>
     */
    inline const ProcessingJobStepMetadata& GetProcessingJob() const{ return m_processingJob; }

    /**
     * <p>The Amazon Resource Name (ARN) of the processing job that was run by this
     * step execution.</p>
     */
    inline bool ProcessingJobHasBeenSet() const { return m_processingJobHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the processing job that was run by this
     * step execution.</p>
     */
    inline void SetProcessingJob(const ProcessingJobStepMetadata& value) { m_processingJobHasBeenSet = true; m_processingJob = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the processing job that was run by this
     * step execution.</p>
     */
    inline void SetProcessingJob(ProcessingJobStepMetadata&& value) { m_processingJobHasBeenSet = true; m_processingJob = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the processing job that was run by this
     * step execution.</p>
     */
    inline PipelineExecutionStepMetadata& WithProcessingJob(const ProcessingJobStepMetadata& value) { SetProcessingJob(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the processing job that was run by this
     * step execution.</p>
     */
    inline PipelineExecutionStepMetadata& WithProcessingJob(ProcessingJobStepMetadata&& value) { SetProcessingJob(std::move(value)); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the transform job that was run by this step
     * execution.</p>
     */
    inline const TransformJobStepMetadata& GetTransformJob() const{ return m_transformJob; }

    /**
     * <p>The Amazon Resource Name (ARN) of the transform job that was run by this step
     * execution.</p>
     */
    inline bool TransformJobHasBeenSet() const { return m_transformJobHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the transform job that was run by this step
     * execution.</p>
     */
    inline void SetTransformJob(const TransformJobStepMetadata& value) { m_transformJobHasBeenSet = true; m_transformJob = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the transform job that was run by this step
     * execution.</p>
     */
    inline void SetTransformJob(TransformJobStepMetadata&& value) { m_transformJobHasBeenSet = true; m_transformJob = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the transform job that was run by this step
     * execution.</p>
     */
    inline PipelineExecutionStepMetadata& WithTransformJob(const TransformJobStepMetadata& value) { SetTransformJob(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the transform job that was run by this step
     * execution.</p>
     */
    inline PipelineExecutionStepMetadata& WithTransformJob(TransformJobStepMetadata&& value) { SetTransformJob(std::move(value)); return *this;}


    /**
     * <p>Metadata for the Model step.</p>
     */
    inline const ModelStepMetadata& GetModel() const{ return m_model; }

    /**
     * <p>Metadata for the Model step.</p>
     */
    inline bool ModelHasBeenSet() const { return m_modelHasBeenSet; }

    /**
     * <p>Metadata for the Model step.</p>
     */
    inline void SetModel(const ModelStepMetadata& value) { m_modelHasBeenSet = true; m_model = value; }

    /**
     * <p>Metadata for the Model step.</p>
     */
    inline void SetModel(ModelStepMetadata&& value) { m_modelHasBeenSet = true; m_model = std::move(value); }

    /**
     * <p>Metadata for the Model step.</p>
     */
    inline PipelineExecutionStepMetadata& WithModel(const ModelStepMetadata& value) { SetModel(value); return *this;}

    /**
     * <p>Metadata for the Model step.</p>
     */
    inline PipelineExecutionStepMetadata& WithModel(ModelStepMetadata&& value) { SetModel(std::move(value)); return *this;}


    /**
     * <p>Metadata for the RegisterModel step.</p>
     */
    inline const RegisterModelStepMetadata& GetRegisterModel() const{ return m_registerModel; }

    /**
     * <p>Metadata for the RegisterModel step.</p>
     */
    inline bool RegisterModelHasBeenSet() const { return m_registerModelHasBeenSet; }

    /**
     * <p>Metadata for the RegisterModel step.</p>
     */
    inline void SetRegisterModel(const RegisterModelStepMetadata& value) { m_registerModelHasBeenSet = true; m_registerModel = value; }

    /**
     * <p>Metadata for the RegisterModel step.</p>
     */
    inline void SetRegisterModel(RegisterModelStepMetadata&& value) { m_registerModelHasBeenSet = true; m_registerModel = std::move(value); }

    /**
     * <p>Metadata for the RegisterModel step.</p>
     */
    inline PipelineExecutionStepMetadata& WithRegisterModel(const RegisterModelStepMetadata& value) { SetRegisterModel(value); return *this;}

    /**
     * <p>Metadata for the RegisterModel step.</p>
     */
    inline PipelineExecutionStepMetadata& WithRegisterModel(RegisterModelStepMetadata&& value) { SetRegisterModel(std::move(value)); return *this;}


    /**
     * <p>If this is a Condition step metadata object, details on the condition.</p>
     */
    inline const ConditionStepMetadata& GetCondition() const{ return m_condition; }

    /**
     * <p>If this is a Condition step metadata object, details on the condition.</p>
     */
    inline bool ConditionHasBeenSet() const { return m_conditionHasBeenSet; }

    /**
     * <p>If this is a Condition step metadata object, details on the condition.</p>
     */
    inline void SetCondition(const ConditionStepMetadata& value) { m_conditionHasBeenSet = true; m_condition = value; }

    /**
     * <p>If this is a Condition step metadata object, details on the condition.</p>
     */
    inline void SetCondition(ConditionStepMetadata&& value) { m_conditionHasBeenSet = true; m_condition = std::move(value); }

    /**
     * <p>If this is a Condition step metadata object, details on the condition.</p>
     */
    inline PipelineExecutionStepMetadata& WithCondition(const ConditionStepMetadata& value) { SetCondition(value); return *this;}

    /**
     * <p>If this is a Condition step metadata object, details on the condition.</p>
     */
    inline PipelineExecutionStepMetadata& WithCondition(ConditionStepMetadata&& value) { SetCondition(std::move(value)); return *this;}

  private:

    TrainingJobStepMetadata m_trainingJob;
    bool m_trainingJobHasBeenSet;

    ProcessingJobStepMetadata m_processingJob;
    bool m_processingJobHasBeenSet;

    TransformJobStepMetadata m_transformJob;
    bool m_transformJobHasBeenSet;

    ModelStepMetadata m_model;
    bool m_modelHasBeenSet;

    RegisterModelStepMetadata m_registerModel;
    bool m_registerModelHasBeenSet;

    ConditionStepMetadata m_condition;
    bool m_conditionHasBeenSet;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws

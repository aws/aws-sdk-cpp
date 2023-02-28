/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/comprehend/Comprehend_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/comprehend/model/FlywheelIterationStatus.h>
#include <aws/comprehend/model/FlywheelModelEvaluationMetrics.h>
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
namespace Comprehend
{
namespace Model
{

  /**
   * <p>The configuration properties of a flywheel iteration.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/FlywheelIterationProperties">AWS
   * API Reference</a></p>
   */
  class FlywheelIterationProperties
  {
  public:
    AWS_COMPREHEND_API FlywheelIterationProperties();
    AWS_COMPREHEND_API FlywheelIterationProperties(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPREHEND_API FlywheelIterationProperties& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPREHEND_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p/>
     */
    inline const Aws::String& GetFlywheelArn() const{ return m_flywheelArn; }

    /**
     * <p/>
     */
    inline bool FlywheelArnHasBeenSet() const { return m_flywheelArnHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetFlywheelArn(const Aws::String& value) { m_flywheelArnHasBeenSet = true; m_flywheelArn = value; }

    /**
     * <p/>
     */
    inline void SetFlywheelArn(Aws::String&& value) { m_flywheelArnHasBeenSet = true; m_flywheelArn = std::move(value); }

    /**
     * <p/>
     */
    inline void SetFlywheelArn(const char* value) { m_flywheelArnHasBeenSet = true; m_flywheelArn.assign(value); }

    /**
     * <p/>
     */
    inline FlywheelIterationProperties& WithFlywheelArn(const Aws::String& value) { SetFlywheelArn(value); return *this;}

    /**
     * <p/>
     */
    inline FlywheelIterationProperties& WithFlywheelArn(Aws::String&& value) { SetFlywheelArn(std::move(value)); return *this;}

    /**
     * <p/>
     */
    inline FlywheelIterationProperties& WithFlywheelArn(const char* value) { SetFlywheelArn(value); return *this;}


    /**
     * <p/>
     */
    inline const Aws::String& GetFlywheelIterationId() const{ return m_flywheelIterationId; }

    /**
     * <p/>
     */
    inline bool FlywheelIterationIdHasBeenSet() const { return m_flywheelIterationIdHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetFlywheelIterationId(const Aws::String& value) { m_flywheelIterationIdHasBeenSet = true; m_flywheelIterationId = value; }

    /**
     * <p/>
     */
    inline void SetFlywheelIterationId(Aws::String&& value) { m_flywheelIterationIdHasBeenSet = true; m_flywheelIterationId = std::move(value); }

    /**
     * <p/>
     */
    inline void SetFlywheelIterationId(const char* value) { m_flywheelIterationIdHasBeenSet = true; m_flywheelIterationId.assign(value); }

    /**
     * <p/>
     */
    inline FlywheelIterationProperties& WithFlywheelIterationId(const Aws::String& value) { SetFlywheelIterationId(value); return *this;}

    /**
     * <p/>
     */
    inline FlywheelIterationProperties& WithFlywheelIterationId(Aws::String&& value) { SetFlywheelIterationId(std::move(value)); return *this;}

    /**
     * <p/>
     */
    inline FlywheelIterationProperties& WithFlywheelIterationId(const char* value) { SetFlywheelIterationId(value); return *this;}


    /**
     * <p>The creation start time of the flywheel iteration.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>The creation start time of the flywheel iteration.</p>
     */
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }

    /**
     * <p>The creation start time of the flywheel iteration.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }

    /**
     * <p>The creation start time of the flywheel iteration.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }

    /**
     * <p>The creation start time of the flywheel iteration.</p>
     */
    inline FlywheelIterationProperties& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>The creation start time of the flywheel iteration.</p>
     */
    inline FlywheelIterationProperties& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p>The completion time of this flywheel iteration.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }

    /**
     * <p>The completion time of this flywheel iteration.</p>
     */
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }

    /**
     * <p>The completion time of this flywheel iteration.</p>
     */
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTimeHasBeenSet = true; m_endTime = value; }

    /**
     * <p>The completion time of this flywheel iteration.</p>
     */
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTimeHasBeenSet = true; m_endTime = std::move(value); }

    /**
     * <p>The completion time of this flywheel iteration.</p>
     */
    inline FlywheelIterationProperties& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}

    /**
     * <p>The completion time of this flywheel iteration.</p>
     */
    inline FlywheelIterationProperties& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(std::move(value)); return *this;}


    /**
     * <p>The status of the flywheel iteration.</p>
     */
    inline const FlywheelIterationStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the flywheel iteration.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the flywheel iteration.</p>
     */
    inline void SetStatus(const FlywheelIterationStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the flywheel iteration.</p>
     */
    inline void SetStatus(FlywheelIterationStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the flywheel iteration.</p>
     */
    inline FlywheelIterationProperties& WithStatus(const FlywheelIterationStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the flywheel iteration.</p>
     */
    inline FlywheelIterationProperties& WithStatus(FlywheelIterationStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>A description of the status of the flywheel iteration.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }

    /**
     * <p>A description of the status of the flywheel iteration.</p>
     */
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    /**
     * <p>A description of the status of the flywheel iteration.</p>
     */
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    /**
     * <p>A description of the status of the flywheel iteration.</p>
     */
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    /**
     * <p>A description of the status of the flywheel iteration.</p>
     */
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    /**
     * <p>A description of the status of the flywheel iteration.</p>
     */
    inline FlywheelIterationProperties& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    /**
     * <p>A description of the status of the flywheel iteration.</p>
     */
    inline FlywheelIterationProperties& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    /**
     * <p>A description of the status of the flywheel iteration.</p>
     */
    inline FlywheelIterationProperties& WithMessage(const char* value) { SetMessage(value); return *this;}


    /**
     * <p>The ARN of the evaluated model associated with this flywheel iteration.</p>
     */
    inline const Aws::String& GetEvaluatedModelArn() const{ return m_evaluatedModelArn; }

    /**
     * <p>The ARN of the evaluated model associated with this flywheel iteration.</p>
     */
    inline bool EvaluatedModelArnHasBeenSet() const { return m_evaluatedModelArnHasBeenSet; }

    /**
     * <p>The ARN of the evaluated model associated with this flywheel iteration.</p>
     */
    inline void SetEvaluatedModelArn(const Aws::String& value) { m_evaluatedModelArnHasBeenSet = true; m_evaluatedModelArn = value; }

    /**
     * <p>The ARN of the evaluated model associated with this flywheel iteration.</p>
     */
    inline void SetEvaluatedModelArn(Aws::String&& value) { m_evaluatedModelArnHasBeenSet = true; m_evaluatedModelArn = std::move(value); }

    /**
     * <p>The ARN of the evaluated model associated with this flywheel iteration.</p>
     */
    inline void SetEvaluatedModelArn(const char* value) { m_evaluatedModelArnHasBeenSet = true; m_evaluatedModelArn.assign(value); }

    /**
     * <p>The ARN of the evaluated model associated with this flywheel iteration.</p>
     */
    inline FlywheelIterationProperties& WithEvaluatedModelArn(const Aws::String& value) { SetEvaluatedModelArn(value); return *this;}

    /**
     * <p>The ARN of the evaluated model associated with this flywheel iteration.</p>
     */
    inline FlywheelIterationProperties& WithEvaluatedModelArn(Aws::String&& value) { SetEvaluatedModelArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the evaluated model associated with this flywheel iteration.</p>
     */
    inline FlywheelIterationProperties& WithEvaluatedModelArn(const char* value) { SetEvaluatedModelArn(value); return *this;}


    
    inline const FlywheelModelEvaluationMetrics& GetEvaluatedModelMetrics() const{ return m_evaluatedModelMetrics; }

    
    inline bool EvaluatedModelMetricsHasBeenSet() const { return m_evaluatedModelMetricsHasBeenSet; }

    
    inline void SetEvaluatedModelMetrics(const FlywheelModelEvaluationMetrics& value) { m_evaluatedModelMetricsHasBeenSet = true; m_evaluatedModelMetrics = value; }

    
    inline void SetEvaluatedModelMetrics(FlywheelModelEvaluationMetrics&& value) { m_evaluatedModelMetricsHasBeenSet = true; m_evaluatedModelMetrics = std::move(value); }

    
    inline FlywheelIterationProperties& WithEvaluatedModelMetrics(const FlywheelModelEvaluationMetrics& value) { SetEvaluatedModelMetrics(value); return *this;}

    
    inline FlywheelIterationProperties& WithEvaluatedModelMetrics(FlywheelModelEvaluationMetrics&& value) { SetEvaluatedModelMetrics(std::move(value)); return *this;}


    /**
     * <p>The ARN of the trained model associated with this flywheel iteration.</p>
     */
    inline const Aws::String& GetTrainedModelArn() const{ return m_trainedModelArn; }

    /**
     * <p>The ARN of the trained model associated with this flywheel iteration.</p>
     */
    inline bool TrainedModelArnHasBeenSet() const { return m_trainedModelArnHasBeenSet; }

    /**
     * <p>The ARN of the trained model associated with this flywheel iteration.</p>
     */
    inline void SetTrainedModelArn(const Aws::String& value) { m_trainedModelArnHasBeenSet = true; m_trainedModelArn = value; }

    /**
     * <p>The ARN of the trained model associated with this flywheel iteration.</p>
     */
    inline void SetTrainedModelArn(Aws::String&& value) { m_trainedModelArnHasBeenSet = true; m_trainedModelArn = std::move(value); }

    /**
     * <p>The ARN of the trained model associated with this flywheel iteration.</p>
     */
    inline void SetTrainedModelArn(const char* value) { m_trainedModelArnHasBeenSet = true; m_trainedModelArn.assign(value); }

    /**
     * <p>The ARN of the trained model associated with this flywheel iteration.</p>
     */
    inline FlywheelIterationProperties& WithTrainedModelArn(const Aws::String& value) { SetTrainedModelArn(value); return *this;}

    /**
     * <p>The ARN of the trained model associated with this flywheel iteration.</p>
     */
    inline FlywheelIterationProperties& WithTrainedModelArn(Aws::String&& value) { SetTrainedModelArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the trained model associated with this flywheel iteration.</p>
     */
    inline FlywheelIterationProperties& WithTrainedModelArn(const char* value) { SetTrainedModelArn(value); return *this;}


    /**
     * <p>The metrics associated with the trained model.</p>
     */
    inline const FlywheelModelEvaluationMetrics& GetTrainedModelMetrics() const{ return m_trainedModelMetrics; }

    /**
     * <p>The metrics associated with the trained model.</p>
     */
    inline bool TrainedModelMetricsHasBeenSet() const { return m_trainedModelMetricsHasBeenSet; }

    /**
     * <p>The metrics associated with the trained model.</p>
     */
    inline void SetTrainedModelMetrics(const FlywheelModelEvaluationMetrics& value) { m_trainedModelMetricsHasBeenSet = true; m_trainedModelMetrics = value; }

    /**
     * <p>The metrics associated with the trained model.</p>
     */
    inline void SetTrainedModelMetrics(FlywheelModelEvaluationMetrics&& value) { m_trainedModelMetricsHasBeenSet = true; m_trainedModelMetrics = std::move(value); }

    /**
     * <p>The metrics associated with the trained model.</p>
     */
    inline FlywheelIterationProperties& WithTrainedModelMetrics(const FlywheelModelEvaluationMetrics& value) { SetTrainedModelMetrics(value); return *this;}

    /**
     * <p>The metrics associated with the trained model.</p>
     */
    inline FlywheelIterationProperties& WithTrainedModelMetrics(FlywheelModelEvaluationMetrics&& value) { SetTrainedModelMetrics(std::move(value)); return *this;}


    /**
     * <p/>
     */
    inline const Aws::String& GetEvaluationManifestS3Prefix() const{ return m_evaluationManifestS3Prefix; }

    /**
     * <p/>
     */
    inline bool EvaluationManifestS3PrefixHasBeenSet() const { return m_evaluationManifestS3PrefixHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetEvaluationManifestS3Prefix(const Aws::String& value) { m_evaluationManifestS3PrefixHasBeenSet = true; m_evaluationManifestS3Prefix = value; }

    /**
     * <p/>
     */
    inline void SetEvaluationManifestS3Prefix(Aws::String&& value) { m_evaluationManifestS3PrefixHasBeenSet = true; m_evaluationManifestS3Prefix = std::move(value); }

    /**
     * <p/>
     */
    inline void SetEvaluationManifestS3Prefix(const char* value) { m_evaluationManifestS3PrefixHasBeenSet = true; m_evaluationManifestS3Prefix.assign(value); }

    /**
     * <p/>
     */
    inline FlywheelIterationProperties& WithEvaluationManifestS3Prefix(const Aws::String& value) { SetEvaluationManifestS3Prefix(value); return *this;}

    /**
     * <p/>
     */
    inline FlywheelIterationProperties& WithEvaluationManifestS3Prefix(Aws::String&& value) { SetEvaluationManifestS3Prefix(std::move(value)); return *this;}

    /**
     * <p/>
     */
    inline FlywheelIterationProperties& WithEvaluationManifestS3Prefix(const char* value) { SetEvaluationManifestS3Prefix(value); return *this;}

  private:

    Aws::String m_flywheelArn;
    bool m_flywheelArnHasBeenSet = false;

    Aws::String m_flywheelIterationId;
    bool m_flywheelIterationIdHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_endTime;
    bool m_endTimeHasBeenSet = false;

    FlywheelIterationStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    Aws::String m_evaluatedModelArn;
    bool m_evaluatedModelArnHasBeenSet = false;

    FlywheelModelEvaluationMetrics m_evaluatedModelMetrics;
    bool m_evaluatedModelMetricsHasBeenSet = false;

    Aws::String m_trainedModelArn;
    bool m_trainedModelArnHasBeenSet = false;

    FlywheelModelEvaluationMetrics m_trainedModelMetrics;
    bool m_trainedModelMetricsHasBeenSet = false;

    Aws::String m_evaluationManifestS3Prefix;
    bool m_evaluationManifestS3PrefixHasBeenSet = false;
  };

} // namespace Model
} // namespace Comprehend
} // namespace Aws

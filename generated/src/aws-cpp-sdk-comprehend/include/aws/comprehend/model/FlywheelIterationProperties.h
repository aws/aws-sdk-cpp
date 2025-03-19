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
    AWS_COMPREHEND_API FlywheelIterationProperties() = default;
    AWS_COMPREHEND_API FlywheelIterationProperties(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPREHEND_API FlywheelIterationProperties& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPREHEND_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p/>
     */
    inline const Aws::String& GetFlywheelArn() const { return m_flywheelArn; }
    inline bool FlywheelArnHasBeenSet() const { return m_flywheelArnHasBeenSet; }
    template<typename FlywheelArnT = Aws::String>
    void SetFlywheelArn(FlywheelArnT&& value) { m_flywheelArnHasBeenSet = true; m_flywheelArn = std::forward<FlywheelArnT>(value); }
    template<typename FlywheelArnT = Aws::String>
    FlywheelIterationProperties& WithFlywheelArn(FlywheelArnT&& value) { SetFlywheelArn(std::forward<FlywheelArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p/>
     */
    inline const Aws::String& GetFlywheelIterationId() const { return m_flywheelIterationId; }
    inline bool FlywheelIterationIdHasBeenSet() const { return m_flywheelIterationIdHasBeenSet; }
    template<typename FlywheelIterationIdT = Aws::String>
    void SetFlywheelIterationId(FlywheelIterationIdT&& value) { m_flywheelIterationIdHasBeenSet = true; m_flywheelIterationId = std::forward<FlywheelIterationIdT>(value); }
    template<typename FlywheelIterationIdT = Aws::String>
    FlywheelIterationProperties& WithFlywheelIterationId(FlywheelIterationIdT&& value) { SetFlywheelIterationId(std::forward<FlywheelIterationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The creation start time of the flywheel iteration.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    FlywheelIterationProperties& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The completion time of this flywheel iteration.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const { return m_endTime; }
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }
    template<typename EndTimeT = Aws::Utils::DateTime>
    void SetEndTime(EndTimeT&& value) { m_endTimeHasBeenSet = true; m_endTime = std::forward<EndTimeT>(value); }
    template<typename EndTimeT = Aws::Utils::DateTime>
    FlywheelIterationProperties& WithEndTime(EndTimeT&& value) { SetEndTime(std::forward<EndTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the flywheel iteration.</p>
     */
    inline FlywheelIterationStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(FlywheelIterationStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline FlywheelIterationProperties& WithStatus(FlywheelIterationStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the status of the flywheel iteration.</p>
     */
    inline const Aws::String& GetMessage() const { return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    template<typename MessageT = Aws::String>
    void SetMessage(MessageT&& value) { m_messageHasBeenSet = true; m_message = std::forward<MessageT>(value); }
    template<typename MessageT = Aws::String>
    FlywheelIterationProperties& WithMessage(MessageT&& value) { SetMessage(std::forward<MessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the evaluated model associated with this flywheel iteration.</p>
     */
    inline const Aws::String& GetEvaluatedModelArn() const { return m_evaluatedModelArn; }
    inline bool EvaluatedModelArnHasBeenSet() const { return m_evaluatedModelArnHasBeenSet; }
    template<typename EvaluatedModelArnT = Aws::String>
    void SetEvaluatedModelArn(EvaluatedModelArnT&& value) { m_evaluatedModelArnHasBeenSet = true; m_evaluatedModelArn = std::forward<EvaluatedModelArnT>(value); }
    template<typename EvaluatedModelArnT = Aws::String>
    FlywheelIterationProperties& WithEvaluatedModelArn(EvaluatedModelArnT&& value) { SetEvaluatedModelArn(std::forward<EvaluatedModelArnT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const FlywheelModelEvaluationMetrics& GetEvaluatedModelMetrics() const { return m_evaluatedModelMetrics; }
    inline bool EvaluatedModelMetricsHasBeenSet() const { return m_evaluatedModelMetricsHasBeenSet; }
    template<typename EvaluatedModelMetricsT = FlywheelModelEvaluationMetrics>
    void SetEvaluatedModelMetrics(EvaluatedModelMetricsT&& value) { m_evaluatedModelMetricsHasBeenSet = true; m_evaluatedModelMetrics = std::forward<EvaluatedModelMetricsT>(value); }
    template<typename EvaluatedModelMetricsT = FlywheelModelEvaluationMetrics>
    FlywheelIterationProperties& WithEvaluatedModelMetrics(EvaluatedModelMetricsT&& value) { SetEvaluatedModelMetrics(std::forward<EvaluatedModelMetricsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the trained model associated with this flywheel iteration.</p>
     */
    inline const Aws::String& GetTrainedModelArn() const { return m_trainedModelArn; }
    inline bool TrainedModelArnHasBeenSet() const { return m_trainedModelArnHasBeenSet; }
    template<typename TrainedModelArnT = Aws::String>
    void SetTrainedModelArn(TrainedModelArnT&& value) { m_trainedModelArnHasBeenSet = true; m_trainedModelArn = std::forward<TrainedModelArnT>(value); }
    template<typename TrainedModelArnT = Aws::String>
    FlywheelIterationProperties& WithTrainedModelArn(TrainedModelArnT&& value) { SetTrainedModelArn(std::forward<TrainedModelArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The metrics associated with the trained model.</p>
     */
    inline const FlywheelModelEvaluationMetrics& GetTrainedModelMetrics() const { return m_trainedModelMetrics; }
    inline bool TrainedModelMetricsHasBeenSet() const { return m_trainedModelMetricsHasBeenSet; }
    template<typename TrainedModelMetricsT = FlywheelModelEvaluationMetrics>
    void SetTrainedModelMetrics(TrainedModelMetricsT&& value) { m_trainedModelMetricsHasBeenSet = true; m_trainedModelMetrics = std::forward<TrainedModelMetricsT>(value); }
    template<typename TrainedModelMetricsT = FlywheelModelEvaluationMetrics>
    FlywheelIterationProperties& WithTrainedModelMetrics(TrainedModelMetricsT&& value) { SetTrainedModelMetrics(std::forward<TrainedModelMetricsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p/>
     */
    inline const Aws::String& GetEvaluationManifestS3Prefix() const { return m_evaluationManifestS3Prefix; }
    inline bool EvaluationManifestS3PrefixHasBeenSet() const { return m_evaluationManifestS3PrefixHasBeenSet; }
    template<typename EvaluationManifestS3PrefixT = Aws::String>
    void SetEvaluationManifestS3Prefix(EvaluationManifestS3PrefixT&& value) { m_evaluationManifestS3PrefixHasBeenSet = true; m_evaluationManifestS3Prefix = std::forward<EvaluationManifestS3PrefixT>(value); }
    template<typename EvaluationManifestS3PrefixT = Aws::String>
    FlywheelIterationProperties& WithEvaluationManifestS3Prefix(EvaluationManifestS3PrefixT&& value) { SetEvaluationManifestS3Prefix(std::forward<EvaluationManifestS3PrefixT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_flywheelArn;
    bool m_flywheelArnHasBeenSet = false;

    Aws::String m_flywheelIterationId;
    bool m_flywheelIterationIdHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_endTime{};
    bool m_endTimeHasBeenSet = false;

    FlywheelIterationStatus m_status{FlywheelIterationStatus::NOT_SET};
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

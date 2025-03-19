/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lookoutvision/LookoutforVision_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/lookoutvision/model/ModelStatus.h>
#include <aws/lookoutvision/model/ModelPerformance.h>
#include <aws/lookoutvision/model/OutputConfig.h>
#include <aws/lookoutvision/model/OutputS3Object.h>
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
namespace LookoutforVision
{
namespace Model
{

  /**
   * <p>Describes an Amazon Lookout for Vision model.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutvision-2020-11-20/ModelDescription">AWS
   * API Reference</a></p>
   */
  class ModelDescription
  {
  public:
    AWS_LOOKOUTFORVISION_API ModelDescription() = default;
    AWS_LOOKOUTFORVISION_API ModelDescription(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTFORVISION_API ModelDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTFORVISION_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The version of the model</p>
     */
    inline const Aws::String& GetModelVersion() const { return m_modelVersion; }
    inline bool ModelVersionHasBeenSet() const { return m_modelVersionHasBeenSet; }
    template<typename ModelVersionT = Aws::String>
    void SetModelVersion(ModelVersionT&& value) { m_modelVersionHasBeenSet = true; m_modelVersion = std::forward<ModelVersionT>(value); }
    template<typename ModelVersionT = Aws::String>
    ModelDescription& WithModelVersion(ModelVersionT&& value) { SetModelVersion(std::forward<ModelVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the model.</p>
     */
    inline const Aws::String& GetModelArn() const { return m_modelArn; }
    inline bool ModelArnHasBeenSet() const { return m_modelArnHasBeenSet; }
    template<typename ModelArnT = Aws::String>
    void SetModelArn(ModelArnT&& value) { m_modelArnHasBeenSet = true; m_modelArn = std::forward<ModelArnT>(value); }
    template<typename ModelArnT = Aws::String>
    ModelDescription& WithModelArn(ModelArnT&& value) { SetModelArn(std::forward<ModelArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unix timestamp for the date and time that the model was created. </p>
     */
    inline const Aws::Utils::DateTime& GetCreationTimestamp() const { return m_creationTimestamp; }
    inline bool CreationTimestampHasBeenSet() const { return m_creationTimestampHasBeenSet; }
    template<typename CreationTimestampT = Aws::Utils::DateTime>
    void SetCreationTimestamp(CreationTimestampT&& value) { m_creationTimestampHasBeenSet = true; m_creationTimestamp = std::forward<CreationTimestampT>(value); }
    template<typename CreationTimestampT = Aws::Utils::DateTime>
    ModelDescription& WithCreationTimestamp(CreationTimestampT&& value) { SetCreationTimestamp(std::forward<CreationTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description for the model.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    ModelDescription& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the model.</p>
     */
    inline ModelStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(ModelStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline ModelDescription& WithStatus(ModelStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status message for the model.</p>
     */
    inline const Aws::String& GetStatusMessage() const { return m_statusMessage; }
    inline bool StatusMessageHasBeenSet() const { return m_statusMessageHasBeenSet; }
    template<typename StatusMessageT = Aws::String>
    void SetStatusMessage(StatusMessageT&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::forward<StatusMessageT>(value); }
    template<typename StatusMessageT = Aws::String>
    ModelDescription& WithStatusMessage(StatusMessageT&& value) { SetStatusMessage(std::forward<StatusMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Performance metrics for the model. Created during training.</p>
     */
    inline const ModelPerformance& GetPerformance() const { return m_performance; }
    inline bool PerformanceHasBeenSet() const { return m_performanceHasBeenSet; }
    template<typename PerformanceT = ModelPerformance>
    void SetPerformance(PerformanceT&& value) { m_performanceHasBeenSet = true; m_performance = std::forward<PerformanceT>(value); }
    template<typename PerformanceT = ModelPerformance>
    ModelDescription& WithPerformance(PerformanceT&& value) { SetPerformance(std::forward<PerformanceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The S3 location where Amazon Lookout for Vision saves model training
     * files.</p>
     */
    inline const OutputConfig& GetOutputConfig() const { return m_outputConfig; }
    inline bool OutputConfigHasBeenSet() const { return m_outputConfigHasBeenSet; }
    template<typename OutputConfigT = OutputConfig>
    void SetOutputConfig(OutputConfigT&& value) { m_outputConfigHasBeenSet = true; m_outputConfig = std::forward<OutputConfigT>(value); }
    template<typename OutputConfigT = OutputConfig>
    ModelDescription& WithOutputConfig(OutputConfigT&& value) { SetOutputConfig(std::forward<OutputConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The S3 location where Amazon Lookout for Vision saves the manifest file that
     * was used to test the trained model and generate the performance scores.</p>
     */
    inline const OutputS3Object& GetEvaluationManifest() const { return m_evaluationManifest; }
    inline bool EvaluationManifestHasBeenSet() const { return m_evaluationManifestHasBeenSet; }
    template<typename EvaluationManifestT = OutputS3Object>
    void SetEvaluationManifest(EvaluationManifestT&& value) { m_evaluationManifestHasBeenSet = true; m_evaluationManifest = std::forward<EvaluationManifestT>(value); }
    template<typename EvaluationManifestT = OutputS3Object>
    ModelDescription& WithEvaluationManifest(EvaluationManifestT&& value) { SetEvaluationManifest(std::forward<EvaluationManifestT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The S3 location where Amazon Lookout for Vision saves the performance
     * metrics.</p>
     */
    inline const OutputS3Object& GetEvaluationResult() const { return m_evaluationResult; }
    inline bool EvaluationResultHasBeenSet() const { return m_evaluationResultHasBeenSet; }
    template<typename EvaluationResultT = OutputS3Object>
    void SetEvaluationResult(EvaluationResultT&& value) { m_evaluationResultHasBeenSet = true; m_evaluationResult = std::forward<EvaluationResultT>(value); }
    template<typename EvaluationResultT = OutputS3Object>
    ModelDescription& WithEvaluationResult(EvaluationResultT&& value) { SetEvaluationResult(std::forward<EvaluationResultT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unix timestamp for the date and time that the evaluation ended. </p>
     */
    inline const Aws::Utils::DateTime& GetEvaluationEndTimestamp() const { return m_evaluationEndTimestamp; }
    inline bool EvaluationEndTimestampHasBeenSet() const { return m_evaluationEndTimestampHasBeenSet; }
    template<typename EvaluationEndTimestampT = Aws::Utils::DateTime>
    void SetEvaluationEndTimestamp(EvaluationEndTimestampT&& value) { m_evaluationEndTimestampHasBeenSet = true; m_evaluationEndTimestamp = std::forward<EvaluationEndTimestampT>(value); }
    template<typename EvaluationEndTimestampT = Aws::Utils::DateTime>
    ModelDescription& WithEvaluationEndTimestamp(EvaluationEndTimestampT&& value) { SetEvaluationEndTimestamp(std::forward<EvaluationEndTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifer for the AWS Key Management Service (AWS KMS) key that was used
     * to encrypt the model during training.</p>
     */
    inline const Aws::String& GetKmsKeyId() const { return m_kmsKeyId; }
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }
    template<typename KmsKeyIdT = Aws::String>
    void SetKmsKeyId(KmsKeyIdT&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::forward<KmsKeyIdT>(value); }
    template<typename KmsKeyIdT = Aws::String>
    ModelDescription& WithKmsKeyId(KmsKeyIdT&& value) { SetKmsKeyId(std::forward<KmsKeyIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The minimum number of inference units used by the model. For more
     * information, see <a>StartModel</a> </p>
     */
    inline int GetMinInferenceUnits() const { return m_minInferenceUnits; }
    inline bool MinInferenceUnitsHasBeenSet() const { return m_minInferenceUnitsHasBeenSet; }
    inline void SetMinInferenceUnits(int value) { m_minInferenceUnitsHasBeenSet = true; m_minInferenceUnits = value; }
    inline ModelDescription& WithMinInferenceUnits(int value) { SetMinInferenceUnits(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of inference units Amazon Lookout for Vision uses to
     * auto-scale the model. For more information, see <a>StartModel</a>.</p>
     */
    inline int GetMaxInferenceUnits() const { return m_maxInferenceUnits; }
    inline bool MaxInferenceUnitsHasBeenSet() const { return m_maxInferenceUnitsHasBeenSet; }
    inline void SetMaxInferenceUnits(int value) { m_maxInferenceUnitsHasBeenSet = true; m_maxInferenceUnits = value; }
    inline ModelDescription& WithMaxInferenceUnits(int value) { SetMaxInferenceUnits(value); return *this;}
    ///@}
  private:

    Aws::String m_modelVersion;
    bool m_modelVersionHasBeenSet = false;

    Aws::String m_modelArn;
    bool m_modelArnHasBeenSet = false;

    Aws::Utils::DateTime m_creationTimestamp{};
    bool m_creationTimestampHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    ModelStatus m_status{ModelStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_statusMessage;
    bool m_statusMessageHasBeenSet = false;

    ModelPerformance m_performance;
    bool m_performanceHasBeenSet = false;

    OutputConfig m_outputConfig;
    bool m_outputConfigHasBeenSet = false;

    OutputS3Object m_evaluationManifest;
    bool m_evaluationManifestHasBeenSet = false;

    OutputS3Object m_evaluationResult;
    bool m_evaluationResultHasBeenSet = false;

    Aws::Utils::DateTime m_evaluationEndTimestamp{};
    bool m_evaluationEndTimestampHasBeenSet = false;

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet = false;

    int m_minInferenceUnits{0};
    bool m_minInferenceUnitsHasBeenSet = false;

    int m_maxInferenceUnits{0};
    bool m_maxInferenceUnitsHasBeenSet = false;
  };

} // namespace Model
} // namespace LookoutforVision
} // namespace Aws

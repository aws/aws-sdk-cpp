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
    AWS_LOOKOUTFORVISION_API ModelDescription();
    AWS_LOOKOUTFORVISION_API ModelDescription(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTFORVISION_API ModelDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTFORVISION_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The version of the model</p>
     */
    inline const Aws::String& GetModelVersion() const{ return m_modelVersion; }

    /**
     * <p>The version of the model</p>
     */
    inline bool ModelVersionHasBeenSet() const { return m_modelVersionHasBeenSet; }

    /**
     * <p>The version of the model</p>
     */
    inline void SetModelVersion(const Aws::String& value) { m_modelVersionHasBeenSet = true; m_modelVersion = value; }

    /**
     * <p>The version of the model</p>
     */
    inline void SetModelVersion(Aws::String&& value) { m_modelVersionHasBeenSet = true; m_modelVersion = std::move(value); }

    /**
     * <p>The version of the model</p>
     */
    inline void SetModelVersion(const char* value) { m_modelVersionHasBeenSet = true; m_modelVersion.assign(value); }

    /**
     * <p>The version of the model</p>
     */
    inline ModelDescription& WithModelVersion(const Aws::String& value) { SetModelVersion(value); return *this;}

    /**
     * <p>The version of the model</p>
     */
    inline ModelDescription& WithModelVersion(Aws::String&& value) { SetModelVersion(std::move(value)); return *this;}

    /**
     * <p>The version of the model</p>
     */
    inline ModelDescription& WithModelVersion(const char* value) { SetModelVersion(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the model.</p>
     */
    inline const Aws::String& GetModelArn() const{ return m_modelArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the model.</p>
     */
    inline bool ModelArnHasBeenSet() const { return m_modelArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the model.</p>
     */
    inline void SetModelArn(const Aws::String& value) { m_modelArnHasBeenSet = true; m_modelArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the model.</p>
     */
    inline void SetModelArn(Aws::String&& value) { m_modelArnHasBeenSet = true; m_modelArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the model.</p>
     */
    inline void SetModelArn(const char* value) { m_modelArnHasBeenSet = true; m_modelArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the model.</p>
     */
    inline ModelDescription& WithModelArn(const Aws::String& value) { SetModelArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the model.</p>
     */
    inline ModelDescription& WithModelArn(Aws::String&& value) { SetModelArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the model.</p>
     */
    inline ModelDescription& WithModelArn(const char* value) { SetModelArn(value); return *this;}


    /**
     * <p>The unix timestamp for the date and time that the model was created. </p>
     */
    inline const Aws::Utils::DateTime& GetCreationTimestamp() const{ return m_creationTimestamp; }

    /**
     * <p>The unix timestamp for the date and time that the model was created. </p>
     */
    inline bool CreationTimestampHasBeenSet() const { return m_creationTimestampHasBeenSet; }

    /**
     * <p>The unix timestamp for the date and time that the model was created. </p>
     */
    inline void SetCreationTimestamp(const Aws::Utils::DateTime& value) { m_creationTimestampHasBeenSet = true; m_creationTimestamp = value; }

    /**
     * <p>The unix timestamp for the date and time that the model was created. </p>
     */
    inline void SetCreationTimestamp(Aws::Utils::DateTime&& value) { m_creationTimestampHasBeenSet = true; m_creationTimestamp = std::move(value); }

    /**
     * <p>The unix timestamp for the date and time that the model was created. </p>
     */
    inline ModelDescription& WithCreationTimestamp(const Aws::Utils::DateTime& value) { SetCreationTimestamp(value); return *this;}

    /**
     * <p>The unix timestamp for the date and time that the model was created. </p>
     */
    inline ModelDescription& WithCreationTimestamp(Aws::Utils::DateTime&& value) { SetCreationTimestamp(std::move(value)); return *this;}


    /**
     * <p>The description for the model.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description for the model.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description for the model.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description for the model.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description for the model.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description for the model.</p>
     */
    inline ModelDescription& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description for the model.</p>
     */
    inline ModelDescription& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description for the model.</p>
     */
    inline ModelDescription& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The status of the model.</p>
     */
    inline const ModelStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the model.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the model.</p>
     */
    inline void SetStatus(const ModelStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the model.</p>
     */
    inline void SetStatus(ModelStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the model.</p>
     */
    inline ModelDescription& WithStatus(const ModelStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the model.</p>
     */
    inline ModelDescription& WithStatus(ModelStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The status message for the model.</p>
     */
    inline const Aws::String& GetStatusMessage() const{ return m_statusMessage; }

    /**
     * <p>The status message for the model.</p>
     */
    inline bool StatusMessageHasBeenSet() const { return m_statusMessageHasBeenSet; }

    /**
     * <p>The status message for the model.</p>
     */
    inline void SetStatusMessage(const Aws::String& value) { m_statusMessageHasBeenSet = true; m_statusMessage = value; }

    /**
     * <p>The status message for the model.</p>
     */
    inline void SetStatusMessage(Aws::String&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::move(value); }

    /**
     * <p>The status message for the model.</p>
     */
    inline void SetStatusMessage(const char* value) { m_statusMessageHasBeenSet = true; m_statusMessage.assign(value); }

    /**
     * <p>The status message for the model.</p>
     */
    inline ModelDescription& WithStatusMessage(const Aws::String& value) { SetStatusMessage(value); return *this;}

    /**
     * <p>The status message for the model.</p>
     */
    inline ModelDescription& WithStatusMessage(Aws::String&& value) { SetStatusMessage(std::move(value)); return *this;}

    /**
     * <p>The status message for the model.</p>
     */
    inline ModelDescription& WithStatusMessage(const char* value) { SetStatusMessage(value); return *this;}


    /**
     * <p>Performance metrics for the model. Created during training.</p>
     */
    inline const ModelPerformance& GetPerformance() const{ return m_performance; }

    /**
     * <p>Performance metrics for the model. Created during training.</p>
     */
    inline bool PerformanceHasBeenSet() const { return m_performanceHasBeenSet; }

    /**
     * <p>Performance metrics for the model. Created during training.</p>
     */
    inline void SetPerformance(const ModelPerformance& value) { m_performanceHasBeenSet = true; m_performance = value; }

    /**
     * <p>Performance metrics for the model. Created during training.</p>
     */
    inline void SetPerformance(ModelPerformance&& value) { m_performanceHasBeenSet = true; m_performance = std::move(value); }

    /**
     * <p>Performance metrics for the model. Created during training.</p>
     */
    inline ModelDescription& WithPerformance(const ModelPerformance& value) { SetPerformance(value); return *this;}

    /**
     * <p>Performance metrics for the model. Created during training.</p>
     */
    inline ModelDescription& WithPerformance(ModelPerformance&& value) { SetPerformance(std::move(value)); return *this;}


    /**
     * <p>The S3 location where Amazon Lookout for Vision saves model training
     * files.</p>
     */
    inline const OutputConfig& GetOutputConfig() const{ return m_outputConfig; }

    /**
     * <p>The S3 location where Amazon Lookout for Vision saves model training
     * files.</p>
     */
    inline bool OutputConfigHasBeenSet() const { return m_outputConfigHasBeenSet; }

    /**
     * <p>The S3 location where Amazon Lookout for Vision saves model training
     * files.</p>
     */
    inline void SetOutputConfig(const OutputConfig& value) { m_outputConfigHasBeenSet = true; m_outputConfig = value; }

    /**
     * <p>The S3 location where Amazon Lookout for Vision saves model training
     * files.</p>
     */
    inline void SetOutputConfig(OutputConfig&& value) { m_outputConfigHasBeenSet = true; m_outputConfig = std::move(value); }

    /**
     * <p>The S3 location where Amazon Lookout for Vision saves model training
     * files.</p>
     */
    inline ModelDescription& WithOutputConfig(const OutputConfig& value) { SetOutputConfig(value); return *this;}

    /**
     * <p>The S3 location where Amazon Lookout for Vision saves model training
     * files.</p>
     */
    inline ModelDescription& WithOutputConfig(OutputConfig&& value) { SetOutputConfig(std::move(value)); return *this;}


    /**
     * <p>The S3 location where Amazon Lookout for Vision saves the manifest file that
     * was used to test the trained model and generate the performance scores.</p>
     */
    inline const OutputS3Object& GetEvaluationManifest() const{ return m_evaluationManifest; }

    /**
     * <p>The S3 location where Amazon Lookout for Vision saves the manifest file that
     * was used to test the trained model and generate the performance scores.</p>
     */
    inline bool EvaluationManifestHasBeenSet() const { return m_evaluationManifestHasBeenSet; }

    /**
     * <p>The S3 location where Amazon Lookout for Vision saves the manifest file that
     * was used to test the trained model and generate the performance scores.</p>
     */
    inline void SetEvaluationManifest(const OutputS3Object& value) { m_evaluationManifestHasBeenSet = true; m_evaluationManifest = value; }

    /**
     * <p>The S3 location where Amazon Lookout for Vision saves the manifest file that
     * was used to test the trained model and generate the performance scores.</p>
     */
    inline void SetEvaluationManifest(OutputS3Object&& value) { m_evaluationManifestHasBeenSet = true; m_evaluationManifest = std::move(value); }

    /**
     * <p>The S3 location where Amazon Lookout for Vision saves the manifest file that
     * was used to test the trained model and generate the performance scores.</p>
     */
    inline ModelDescription& WithEvaluationManifest(const OutputS3Object& value) { SetEvaluationManifest(value); return *this;}

    /**
     * <p>The S3 location where Amazon Lookout for Vision saves the manifest file that
     * was used to test the trained model and generate the performance scores.</p>
     */
    inline ModelDescription& WithEvaluationManifest(OutputS3Object&& value) { SetEvaluationManifest(std::move(value)); return *this;}


    /**
     * <p>The S3 location where Amazon Lookout for Vision saves the performance
     * metrics.</p>
     */
    inline const OutputS3Object& GetEvaluationResult() const{ return m_evaluationResult; }

    /**
     * <p>The S3 location where Amazon Lookout for Vision saves the performance
     * metrics.</p>
     */
    inline bool EvaluationResultHasBeenSet() const { return m_evaluationResultHasBeenSet; }

    /**
     * <p>The S3 location where Amazon Lookout for Vision saves the performance
     * metrics.</p>
     */
    inline void SetEvaluationResult(const OutputS3Object& value) { m_evaluationResultHasBeenSet = true; m_evaluationResult = value; }

    /**
     * <p>The S3 location where Amazon Lookout for Vision saves the performance
     * metrics.</p>
     */
    inline void SetEvaluationResult(OutputS3Object&& value) { m_evaluationResultHasBeenSet = true; m_evaluationResult = std::move(value); }

    /**
     * <p>The S3 location where Amazon Lookout for Vision saves the performance
     * metrics.</p>
     */
    inline ModelDescription& WithEvaluationResult(const OutputS3Object& value) { SetEvaluationResult(value); return *this;}

    /**
     * <p>The S3 location where Amazon Lookout for Vision saves the performance
     * metrics.</p>
     */
    inline ModelDescription& WithEvaluationResult(OutputS3Object&& value) { SetEvaluationResult(std::move(value)); return *this;}


    /**
     * <p>The unix timestamp for the date and time that the evaluation ended. </p>
     */
    inline const Aws::Utils::DateTime& GetEvaluationEndTimestamp() const{ return m_evaluationEndTimestamp; }

    /**
     * <p>The unix timestamp for the date and time that the evaluation ended. </p>
     */
    inline bool EvaluationEndTimestampHasBeenSet() const { return m_evaluationEndTimestampHasBeenSet; }

    /**
     * <p>The unix timestamp for the date and time that the evaluation ended. </p>
     */
    inline void SetEvaluationEndTimestamp(const Aws::Utils::DateTime& value) { m_evaluationEndTimestampHasBeenSet = true; m_evaluationEndTimestamp = value; }

    /**
     * <p>The unix timestamp for the date and time that the evaluation ended. </p>
     */
    inline void SetEvaluationEndTimestamp(Aws::Utils::DateTime&& value) { m_evaluationEndTimestampHasBeenSet = true; m_evaluationEndTimestamp = std::move(value); }

    /**
     * <p>The unix timestamp for the date and time that the evaluation ended. </p>
     */
    inline ModelDescription& WithEvaluationEndTimestamp(const Aws::Utils::DateTime& value) { SetEvaluationEndTimestamp(value); return *this;}

    /**
     * <p>The unix timestamp for the date and time that the evaluation ended. </p>
     */
    inline ModelDescription& WithEvaluationEndTimestamp(Aws::Utils::DateTime&& value) { SetEvaluationEndTimestamp(std::move(value)); return *this;}


    /**
     * <p>The identifer for the AWS Key Management Service (AWS KMS) key that was used
     * to encrypt the model during training.</p>
     */
    inline const Aws::String& GetKmsKeyId() const{ return m_kmsKeyId; }

    /**
     * <p>The identifer for the AWS Key Management Service (AWS KMS) key that was used
     * to encrypt the model during training.</p>
     */
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }

    /**
     * <p>The identifer for the AWS Key Management Service (AWS KMS) key that was used
     * to encrypt the model during training.</p>
     */
    inline void SetKmsKeyId(const Aws::String& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = value; }

    /**
     * <p>The identifer for the AWS Key Management Service (AWS KMS) key that was used
     * to encrypt the model during training.</p>
     */
    inline void SetKmsKeyId(Aws::String&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::move(value); }

    /**
     * <p>The identifer for the AWS Key Management Service (AWS KMS) key that was used
     * to encrypt the model during training.</p>
     */
    inline void SetKmsKeyId(const char* value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId.assign(value); }

    /**
     * <p>The identifer for the AWS Key Management Service (AWS KMS) key that was used
     * to encrypt the model during training.</p>
     */
    inline ModelDescription& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}

    /**
     * <p>The identifer for the AWS Key Management Service (AWS KMS) key that was used
     * to encrypt the model during training.</p>
     */
    inline ModelDescription& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(std::move(value)); return *this;}

    /**
     * <p>The identifer for the AWS Key Management Service (AWS KMS) key that was used
     * to encrypt the model during training.</p>
     */
    inline ModelDescription& WithKmsKeyId(const char* value) { SetKmsKeyId(value); return *this;}


    /**
     * <p>The minimum number of inference units used by the model. For more
     * information, see <a>StartModel</a> </p>
     */
    inline int GetMinInferenceUnits() const{ return m_minInferenceUnits; }

    /**
     * <p>The minimum number of inference units used by the model. For more
     * information, see <a>StartModel</a> </p>
     */
    inline bool MinInferenceUnitsHasBeenSet() const { return m_minInferenceUnitsHasBeenSet; }

    /**
     * <p>The minimum number of inference units used by the model. For more
     * information, see <a>StartModel</a> </p>
     */
    inline void SetMinInferenceUnits(int value) { m_minInferenceUnitsHasBeenSet = true; m_minInferenceUnits = value; }

    /**
     * <p>The minimum number of inference units used by the model. For more
     * information, see <a>StartModel</a> </p>
     */
    inline ModelDescription& WithMinInferenceUnits(int value) { SetMinInferenceUnits(value); return *this;}


    /**
     * <p>The maximum number of inference units Amazon Lookout for Vision uses to
     * auto-scale the model. For more information, see <a>StartModel</a>.</p>
     */
    inline int GetMaxInferenceUnits() const{ return m_maxInferenceUnits; }

    /**
     * <p>The maximum number of inference units Amazon Lookout for Vision uses to
     * auto-scale the model. For more information, see <a>StartModel</a>.</p>
     */
    inline bool MaxInferenceUnitsHasBeenSet() const { return m_maxInferenceUnitsHasBeenSet; }

    /**
     * <p>The maximum number of inference units Amazon Lookout for Vision uses to
     * auto-scale the model. For more information, see <a>StartModel</a>.</p>
     */
    inline void SetMaxInferenceUnits(int value) { m_maxInferenceUnitsHasBeenSet = true; m_maxInferenceUnits = value; }

    /**
     * <p>The maximum number of inference units Amazon Lookout for Vision uses to
     * auto-scale the model. For more information, see <a>StartModel</a>.</p>
     */
    inline ModelDescription& WithMaxInferenceUnits(int value) { SetMaxInferenceUnits(value); return *this;}

  private:

    Aws::String m_modelVersion;
    bool m_modelVersionHasBeenSet = false;

    Aws::String m_modelArn;
    bool m_modelArnHasBeenSet = false;

    Aws::Utils::DateTime m_creationTimestamp;
    bool m_creationTimestampHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    ModelStatus m_status;
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

    Aws::Utils::DateTime m_evaluationEndTimestamp;
    bool m_evaluationEndTimestampHasBeenSet = false;

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet = false;

    int m_minInferenceUnits;
    bool m_minInferenceUnitsHasBeenSet = false;

    int m_maxInferenceUnits;
    bool m_maxInferenceUnitsHasBeenSet = false;
  };

} // namespace Model
} // namespace LookoutforVision
} // namespace Aws

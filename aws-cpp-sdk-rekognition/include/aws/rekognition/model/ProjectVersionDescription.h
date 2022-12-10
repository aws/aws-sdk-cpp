/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rekognition/Rekognition_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/rekognition/model/ProjectVersionStatus.h>
#include <aws/rekognition/model/OutputConfig.h>
#include <aws/rekognition/model/TrainingDataResult.h>
#include <aws/rekognition/model/TestingDataResult.h>
#include <aws/rekognition/model/EvaluationResult.h>
#include <aws/rekognition/model/GroundTruthManifest.h>
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
namespace Rekognition
{
namespace Model
{

  /**
   * <p>A description of a version of an Amazon Rekognition Custom Labels
   * model.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/ProjectVersionDescription">AWS
   * API Reference</a></p>
   */
  class ProjectVersionDescription
  {
  public:
    AWS_REKOGNITION_API ProjectVersionDescription();
    AWS_REKOGNITION_API ProjectVersionDescription(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API ProjectVersionDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of the model version. </p>
     */
    inline const Aws::String& GetProjectVersionArn() const{ return m_projectVersionArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the model version. </p>
     */
    inline bool ProjectVersionArnHasBeenSet() const { return m_projectVersionArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the model version. </p>
     */
    inline void SetProjectVersionArn(const Aws::String& value) { m_projectVersionArnHasBeenSet = true; m_projectVersionArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the model version. </p>
     */
    inline void SetProjectVersionArn(Aws::String&& value) { m_projectVersionArnHasBeenSet = true; m_projectVersionArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the model version. </p>
     */
    inline void SetProjectVersionArn(const char* value) { m_projectVersionArnHasBeenSet = true; m_projectVersionArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the model version. </p>
     */
    inline ProjectVersionDescription& WithProjectVersionArn(const Aws::String& value) { SetProjectVersionArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the model version. </p>
     */
    inline ProjectVersionDescription& WithProjectVersionArn(Aws::String&& value) { SetProjectVersionArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the model version. </p>
     */
    inline ProjectVersionDescription& WithProjectVersionArn(const char* value) { SetProjectVersionArn(value); return *this;}


    /**
     * <p>The Unix datetime for the date and time that training started.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTimestamp() const{ return m_creationTimestamp; }

    /**
     * <p>The Unix datetime for the date and time that training started.</p>
     */
    inline bool CreationTimestampHasBeenSet() const { return m_creationTimestampHasBeenSet; }

    /**
     * <p>The Unix datetime for the date and time that training started.</p>
     */
    inline void SetCreationTimestamp(const Aws::Utils::DateTime& value) { m_creationTimestampHasBeenSet = true; m_creationTimestamp = value; }

    /**
     * <p>The Unix datetime for the date and time that training started.</p>
     */
    inline void SetCreationTimestamp(Aws::Utils::DateTime&& value) { m_creationTimestampHasBeenSet = true; m_creationTimestamp = std::move(value); }

    /**
     * <p>The Unix datetime for the date and time that training started.</p>
     */
    inline ProjectVersionDescription& WithCreationTimestamp(const Aws::Utils::DateTime& value) { SetCreationTimestamp(value); return *this;}

    /**
     * <p>The Unix datetime for the date and time that training started.</p>
     */
    inline ProjectVersionDescription& WithCreationTimestamp(Aws::Utils::DateTime&& value) { SetCreationTimestamp(std::move(value)); return *this;}


    /**
     * <p>The minimum number of inference units used by the model. For more
     * information, see <a>StartProjectVersion</a>.</p>
     */
    inline int GetMinInferenceUnits() const{ return m_minInferenceUnits; }

    /**
     * <p>The minimum number of inference units used by the model. For more
     * information, see <a>StartProjectVersion</a>.</p>
     */
    inline bool MinInferenceUnitsHasBeenSet() const { return m_minInferenceUnitsHasBeenSet; }

    /**
     * <p>The minimum number of inference units used by the model. For more
     * information, see <a>StartProjectVersion</a>.</p>
     */
    inline void SetMinInferenceUnits(int value) { m_minInferenceUnitsHasBeenSet = true; m_minInferenceUnits = value; }

    /**
     * <p>The minimum number of inference units used by the model. For more
     * information, see <a>StartProjectVersion</a>.</p>
     */
    inline ProjectVersionDescription& WithMinInferenceUnits(int value) { SetMinInferenceUnits(value); return *this;}


    /**
     * <p>The current status of the model version.</p>
     */
    inline const ProjectVersionStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The current status of the model version.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The current status of the model version.</p>
     */
    inline void SetStatus(const ProjectVersionStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The current status of the model version.</p>
     */
    inline void SetStatus(ProjectVersionStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The current status of the model version.</p>
     */
    inline ProjectVersionDescription& WithStatus(const ProjectVersionStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The current status of the model version.</p>
     */
    inline ProjectVersionDescription& WithStatus(ProjectVersionStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>A descriptive message for an error or warning that occurred.</p>
     */
    inline const Aws::String& GetStatusMessage() const{ return m_statusMessage; }

    /**
     * <p>A descriptive message for an error or warning that occurred.</p>
     */
    inline bool StatusMessageHasBeenSet() const { return m_statusMessageHasBeenSet; }

    /**
     * <p>A descriptive message for an error or warning that occurred.</p>
     */
    inline void SetStatusMessage(const Aws::String& value) { m_statusMessageHasBeenSet = true; m_statusMessage = value; }

    /**
     * <p>A descriptive message for an error or warning that occurred.</p>
     */
    inline void SetStatusMessage(Aws::String&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::move(value); }

    /**
     * <p>A descriptive message for an error or warning that occurred.</p>
     */
    inline void SetStatusMessage(const char* value) { m_statusMessageHasBeenSet = true; m_statusMessage.assign(value); }

    /**
     * <p>A descriptive message for an error or warning that occurred.</p>
     */
    inline ProjectVersionDescription& WithStatusMessage(const Aws::String& value) { SetStatusMessage(value); return *this;}

    /**
     * <p>A descriptive message for an error or warning that occurred.</p>
     */
    inline ProjectVersionDescription& WithStatusMessage(Aws::String&& value) { SetStatusMessage(std::move(value)); return *this;}

    /**
     * <p>A descriptive message for an error or warning that occurred.</p>
     */
    inline ProjectVersionDescription& WithStatusMessage(const char* value) { SetStatusMessage(value); return *this;}


    /**
     * <p>The duration, in seconds, that you were billed for a successful training of
     * the model version. This value is only returned if the model version has been
     * successfully trained.</p>
     */
    inline long long GetBillableTrainingTimeInSeconds() const{ return m_billableTrainingTimeInSeconds; }

    /**
     * <p>The duration, in seconds, that you were billed for a successful training of
     * the model version. This value is only returned if the model version has been
     * successfully trained.</p>
     */
    inline bool BillableTrainingTimeInSecondsHasBeenSet() const { return m_billableTrainingTimeInSecondsHasBeenSet; }

    /**
     * <p>The duration, in seconds, that you were billed for a successful training of
     * the model version. This value is only returned if the model version has been
     * successfully trained.</p>
     */
    inline void SetBillableTrainingTimeInSeconds(long long value) { m_billableTrainingTimeInSecondsHasBeenSet = true; m_billableTrainingTimeInSeconds = value; }

    /**
     * <p>The duration, in seconds, that you were billed for a successful training of
     * the model version. This value is only returned if the model version has been
     * successfully trained.</p>
     */
    inline ProjectVersionDescription& WithBillableTrainingTimeInSeconds(long long value) { SetBillableTrainingTimeInSeconds(value); return *this;}


    /**
     * <p>The Unix date and time that training of the model ended.</p>
     */
    inline const Aws::Utils::DateTime& GetTrainingEndTimestamp() const{ return m_trainingEndTimestamp; }

    /**
     * <p>The Unix date and time that training of the model ended.</p>
     */
    inline bool TrainingEndTimestampHasBeenSet() const { return m_trainingEndTimestampHasBeenSet; }

    /**
     * <p>The Unix date and time that training of the model ended.</p>
     */
    inline void SetTrainingEndTimestamp(const Aws::Utils::DateTime& value) { m_trainingEndTimestampHasBeenSet = true; m_trainingEndTimestamp = value; }

    /**
     * <p>The Unix date and time that training of the model ended.</p>
     */
    inline void SetTrainingEndTimestamp(Aws::Utils::DateTime&& value) { m_trainingEndTimestampHasBeenSet = true; m_trainingEndTimestamp = std::move(value); }

    /**
     * <p>The Unix date and time that training of the model ended.</p>
     */
    inline ProjectVersionDescription& WithTrainingEndTimestamp(const Aws::Utils::DateTime& value) { SetTrainingEndTimestamp(value); return *this;}

    /**
     * <p>The Unix date and time that training of the model ended.</p>
     */
    inline ProjectVersionDescription& WithTrainingEndTimestamp(Aws::Utils::DateTime&& value) { SetTrainingEndTimestamp(std::move(value)); return *this;}


    /**
     * <p>The location where training results are saved.</p>
     */
    inline const OutputConfig& GetOutputConfig() const{ return m_outputConfig; }

    /**
     * <p>The location where training results are saved.</p>
     */
    inline bool OutputConfigHasBeenSet() const { return m_outputConfigHasBeenSet; }

    /**
     * <p>The location where training results are saved.</p>
     */
    inline void SetOutputConfig(const OutputConfig& value) { m_outputConfigHasBeenSet = true; m_outputConfig = value; }

    /**
     * <p>The location where training results are saved.</p>
     */
    inline void SetOutputConfig(OutputConfig&& value) { m_outputConfigHasBeenSet = true; m_outputConfig = std::move(value); }

    /**
     * <p>The location where training results are saved.</p>
     */
    inline ProjectVersionDescription& WithOutputConfig(const OutputConfig& value) { SetOutputConfig(value); return *this;}

    /**
     * <p>The location where training results are saved.</p>
     */
    inline ProjectVersionDescription& WithOutputConfig(OutputConfig&& value) { SetOutputConfig(std::move(value)); return *this;}


    /**
     * <p>Contains information about the training results.</p>
     */
    inline const TrainingDataResult& GetTrainingDataResult() const{ return m_trainingDataResult; }

    /**
     * <p>Contains information about the training results.</p>
     */
    inline bool TrainingDataResultHasBeenSet() const { return m_trainingDataResultHasBeenSet; }

    /**
     * <p>Contains information about the training results.</p>
     */
    inline void SetTrainingDataResult(const TrainingDataResult& value) { m_trainingDataResultHasBeenSet = true; m_trainingDataResult = value; }

    /**
     * <p>Contains information about the training results.</p>
     */
    inline void SetTrainingDataResult(TrainingDataResult&& value) { m_trainingDataResultHasBeenSet = true; m_trainingDataResult = std::move(value); }

    /**
     * <p>Contains information about the training results.</p>
     */
    inline ProjectVersionDescription& WithTrainingDataResult(const TrainingDataResult& value) { SetTrainingDataResult(value); return *this;}

    /**
     * <p>Contains information about the training results.</p>
     */
    inline ProjectVersionDescription& WithTrainingDataResult(TrainingDataResult&& value) { SetTrainingDataResult(std::move(value)); return *this;}


    /**
     * <p>Contains information about the testing results.</p>
     */
    inline const TestingDataResult& GetTestingDataResult() const{ return m_testingDataResult; }

    /**
     * <p>Contains information about the testing results.</p>
     */
    inline bool TestingDataResultHasBeenSet() const { return m_testingDataResultHasBeenSet; }

    /**
     * <p>Contains information about the testing results.</p>
     */
    inline void SetTestingDataResult(const TestingDataResult& value) { m_testingDataResultHasBeenSet = true; m_testingDataResult = value; }

    /**
     * <p>Contains information about the testing results.</p>
     */
    inline void SetTestingDataResult(TestingDataResult&& value) { m_testingDataResultHasBeenSet = true; m_testingDataResult = std::move(value); }

    /**
     * <p>Contains information about the testing results.</p>
     */
    inline ProjectVersionDescription& WithTestingDataResult(const TestingDataResult& value) { SetTestingDataResult(value); return *this;}

    /**
     * <p>Contains information about the testing results.</p>
     */
    inline ProjectVersionDescription& WithTestingDataResult(TestingDataResult&& value) { SetTestingDataResult(std::move(value)); return *this;}


    /**
     * <p>The training results. <code>EvaluationResult</code> is only returned if
     * training is successful.</p>
     */
    inline const EvaluationResult& GetEvaluationResult() const{ return m_evaluationResult; }

    /**
     * <p>The training results. <code>EvaluationResult</code> is only returned if
     * training is successful.</p>
     */
    inline bool EvaluationResultHasBeenSet() const { return m_evaluationResultHasBeenSet; }

    /**
     * <p>The training results. <code>EvaluationResult</code> is only returned if
     * training is successful.</p>
     */
    inline void SetEvaluationResult(const EvaluationResult& value) { m_evaluationResultHasBeenSet = true; m_evaluationResult = value; }

    /**
     * <p>The training results. <code>EvaluationResult</code> is only returned if
     * training is successful.</p>
     */
    inline void SetEvaluationResult(EvaluationResult&& value) { m_evaluationResultHasBeenSet = true; m_evaluationResult = std::move(value); }

    /**
     * <p>The training results. <code>EvaluationResult</code> is only returned if
     * training is successful.</p>
     */
    inline ProjectVersionDescription& WithEvaluationResult(const EvaluationResult& value) { SetEvaluationResult(value); return *this;}

    /**
     * <p>The training results. <code>EvaluationResult</code> is only returned if
     * training is successful.</p>
     */
    inline ProjectVersionDescription& WithEvaluationResult(EvaluationResult&& value) { SetEvaluationResult(std::move(value)); return *this;}


    /**
     * <p>The location of the summary manifest. The summary manifest provides aggregate
     * data validation results for the training and test datasets.</p>
     */
    inline const GroundTruthManifest& GetManifestSummary() const{ return m_manifestSummary; }

    /**
     * <p>The location of the summary manifest. The summary manifest provides aggregate
     * data validation results for the training and test datasets.</p>
     */
    inline bool ManifestSummaryHasBeenSet() const { return m_manifestSummaryHasBeenSet; }

    /**
     * <p>The location of the summary manifest. The summary manifest provides aggregate
     * data validation results for the training and test datasets.</p>
     */
    inline void SetManifestSummary(const GroundTruthManifest& value) { m_manifestSummaryHasBeenSet = true; m_manifestSummary = value; }

    /**
     * <p>The location of the summary manifest. The summary manifest provides aggregate
     * data validation results for the training and test datasets.</p>
     */
    inline void SetManifestSummary(GroundTruthManifest&& value) { m_manifestSummaryHasBeenSet = true; m_manifestSummary = std::move(value); }

    /**
     * <p>The location of the summary manifest. The summary manifest provides aggregate
     * data validation results for the training and test datasets.</p>
     */
    inline ProjectVersionDescription& WithManifestSummary(const GroundTruthManifest& value) { SetManifestSummary(value); return *this;}

    /**
     * <p>The location of the summary manifest. The summary manifest provides aggregate
     * data validation results for the training and test datasets.</p>
     */
    inline ProjectVersionDescription& WithManifestSummary(GroundTruthManifest&& value) { SetManifestSummary(std::move(value)); return *this;}


    /**
     * <p>The identifer for the AWS Key Management Service key (AWS KMS key) that was
     * used to encrypt the model during training. </p>
     */
    inline const Aws::String& GetKmsKeyId() const{ return m_kmsKeyId; }

    /**
     * <p>The identifer for the AWS Key Management Service key (AWS KMS key) that was
     * used to encrypt the model during training. </p>
     */
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }

    /**
     * <p>The identifer for the AWS Key Management Service key (AWS KMS key) that was
     * used to encrypt the model during training. </p>
     */
    inline void SetKmsKeyId(const Aws::String& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = value; }

    /**
     * <p>The identifer for the AWS Key Management Service key (AWS KMS key) that was
     * used to encrypt the model during training. </p>
     */
    inline void SetKmsKeyId(Aws::String&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::move(value); }

    /**
     * <p>The identifer for the AWS Key Management Service key (AWS KMS key) that was
     * used to encrypt the model during training. </p>
     */
    inline void SetKmsKeyId(const char* value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId.assign(value); }

    /**
     * <p>The identifer for the AWS Key Management Service key (AWS KMS key) that was
     * used to encrypt the model during training. </p>
     */
    inline ProjectVersionDescription& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}

    /**
     * <p>The identifer for the AWS Key Management Service key (AWS KMS key) that was
     * used to encrypt the model during training. </p>
     */
    inline ProjectVersionDescription& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(std::move(value)); return *this;}

    /**
     * <p>The identifer for the AWS Key Management Service key (AWS KMS key) that was
     * used to encrypt the model during training. </p>
     */
    inline ProjectVersionDescription& WithKmsKeyId(const char* value) { SetKmsKeyId(value); return *this;}


    /**
     * <p>The maximum number of inference units Amazon Rekognition Custom Labels uses
     * to auto-scale the model. For more information, see
     * <a>StartProjectVersion</a>.</p>
     */
    inline int GetMaxInferenceUnits() const{ return m_maxInferenceUnits; }

    /**
     * <p>The maximum number of inference units Amazon Rekognition Custom Labels uses
     * to auto-scale the model. For more information, see
     * <a>StartProjectVersion</a>.</p>
     */
    inline bool MaxInferenceUnitsHasBeenSet() const { return m_maxInferenceUnitsHasBeenSet; }

    /**
     * <p>The maximum number of inference units Amazon Rekognition Custom Labels uses
     * to auto-scale the model. For more information, see
     * <a>StartProjectVersion</a>.</p>
     */
    inline void SetMaxInferenceUnits(int value) { m_maxInferenceUnitsHasBeenSet = true; m_maxInferenceUnits = value; }

    /**
     * <p>The maximum number of inference units Amazon Rekognition Custom Labels uses
     * to auto-scale the model. For more information, see
     * <a>StartProjectVersion</a>.</p>
     */
    inline ProjectVersionDescription& WithMaxInferenceUnits(int value) { SetMaxInferenceUnits(value); return *this;}


    /**
     * <p>If the model version was copied from a different project,
     * <code>SourceProjectVersionArn</code> contains the ARN of the source model
     * version. </p>
     */
    inline const Aws::String& GetSourceProjectVersionArn() const{ return m_sourceProjectVersionArn; }

    /**
     * <p>If the model version was copied from a different project,
     * <code>SourceProjectVersionArn</code> contains the ARN of the source model
     * version. </p>
     */
    inline bool SourceProjectVersionArnHasBeenSet() const { return m_sourceProjectVersionArnHasBeenSet; }

    /**
     * <p>If the model version was copied from a different project,
     * <code>SourceProjectVersionArn</code> contains the ARN of the source model
     * version. </p>
     */
    inline void SetSourceProjectVersionArn(const Aws::String& value) { m_sourceProjectVersionArnHasBeenSet = true; m_sourceProjectVersionArn = value; }

    /**
     * <p>If the model version was copied from a different project,
     * <code>SourceProjectVersionArn</code> contains the ARN of the source model
     * version. </p>
     */
    inline void SetSourceProjectVersionArn(Aws::String&& value) { m_sourceProjectVersionArnHasBeenSet = true; m_sourceProjectVersionArn = std::move(value); }

    /**
     * <p>If the model version was copied from a different project,
     * <code>SourceProjectVersionArn</code> contains the ARN of the source model
     * version. </p>
     */
    inline void SetSourceProjectVersionArn(const char* value) { m_sourceProjectVersionArnHasBeenSet = true; m_sourceProjectVersionArn.assign(value); }

    /**
     * <p>If the model version was copied from a different project,
     * <code>SourceProjectVersionArn</code> contains the ARN of the source model
     * version. </p>
     */
    inline ProjectVersionDescription& WithSourceProjectVersionArn(const Aws::String& value) { SetSourceProjectVersionArn(value); return *this;}

    /**
     * <p>If the model version was copied from a different project,
     * <code>SourceProjectVersionArn</code> contains the ARN of the source model
     * version. </p>
     */
    inline ProjectVersionDescription& WithSourceProjectVersionArn(Aws::String&& value) { SetSourceProjectVersionArn(std::move(value)); return *this;}

    /**
     * <p>If the model version was copied from a different project,
     * <code>SourceProjectVersionArn</code> contains the ARN of the source model
     * version. </p>
     */
    inline ProjectVersionDescription& WithSourceProjectVersionArn(const char* value) { SetSourceProjectVersionArn(value); return *this;}

  private:

    Aws::String m_projectVersionArn;
    bool m_projectVersionArnHasBeenSet = false;

    Aws::Utils::DateTime m_creationTimestamp;
    bool m_creationTimestampHasBeenSet = false;

    int m_minInferenceUnits;
    bool m_minInferenceUnitsHasBeenSet = false;

    ProjectVersionStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_statusMessage;
    bool m_statusMessageHasBeenSet = false;

    long long m_billableTrainingTimeInSeconds;
    bool m_billableTrainingTimeInSecondsHasBeenSet = false;

    Aws::Utils::DateTime m_trainingEndTimestamp;
    bool m_trainingEndTimestampHasBeenSet = false;

    OutputConfig m_outputConfig;
    bool m_outputConfigHasBeenSet = false;

    TrainingDataResult m_trainingDataResult;
    bool m_trainingDataResultHasBeenSet = false;

    TestingDataResult m_testingDataResult;
    bool m_testingDataResultHasBeenSet = false;

    EvaluationResult m_evaluationResult;
    bool m_evaluationResultHasBeenSet = false;

    GroundTruthManifest m_manifestSummary;
    bool m_manifestSummaryHasBeenSet = false;

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet = false;

    int m_maxInferenceUnits;
    bool m_maxInferenceUnitsHasBeenSet = false;

    Aws::String m_sourceProjectVersionArn;
    bool m_sourceProjectVersionArnHasBeenSet = false;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws

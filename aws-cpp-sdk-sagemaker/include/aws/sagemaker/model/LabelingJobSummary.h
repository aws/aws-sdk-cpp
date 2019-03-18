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
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/sagemaker/model/LabelingJobStatus.h>
#include <aws/sagemaker/model/LabelCounters.h>
#include <aws/sagemaker/model/LabelingJobOutput.h>
#include <aws/sagemaker/model/LabelingJobInputConfig.h>
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
   * <p>Provides summary information about a labeling job.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/LabelingJobSummary">AWS
   * API Reference</a></p>
   */
  class AWS_SAGEMAKER_API LabelingJobSummary
  {
  public:
    LabelingJobSummary();
    LabelingJobSummary(Aws::Utils::Json::JsonView jsonValue);
    LabelingJobSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the labeling job.</p>
     */
    inline const Aws::String& GetLabelingJobName() const{ return m_labelingJobName; }

    /**
     * <p>The name of the labeling job.</p>
     */
    inline bool LabelingJobNameHasBeenSet() const { return m_labelingJobNameHasBeenSet; }

    /**
     * <p>The name of the labeling job.</p>
     */
    inline void SetLabelingJobName(const Aws::String& value) { m_labelingJobNameHasBeenSet = true; m_labelingJobName = value; }

    /**
     * <p>The name of the labeling job.</p>
     */
    inline void SetLabelingJobName(Aws::String&& value) { m_labelingJobNameHasBeenSet = true; m_labelingJobName = std::move(value); }

    /**
     * <p>The name of the labeling job.</p>
     */
    inline void SetLabelingJobName(const char* value) { m_labelingJobNameHasBeenSet = true; m_labelingJobName.assign(value); }

    /**
     * <p>The name of the labeling job.</p>
     */
    inline LabelingJobSummary& WithLabelingJobName(const Aws::String& value) { SetLabelingJobName(value); return *this;}

    /**
     * <p>The name of the labeling job.</p>
     */
    inline LabelingJobSummary& WithLabelingJobName(Aws::String&& value) { SetLabelingJobName(std::move(value)); return *this;}

    /**
     * <p>The name of the labeling job.</p>
     */
    inline LabelingJobSummary& WithLabelingJobName(const char* value) { SetLabelingJobName(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) assigned to the labeling job when it was
     * created.</p>
     */
    inline const Aws::String& GetLabelingJobArn() const{ return m_labelingJobArn; }

    /**
     * <p>The Amazon Resource Name (ARN) assigned to the labeling job when it was
     * created.</p>
     */
    inline bool LabelingJobArnHasBeenSet() const { return m_labelingJobArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) assigned to the labeling job when it was
     * created.</p>
     */
    inline void SetLabelingJobArn(const Aws::String& value) { m_labelingJobArnHasBeenSet = true; m_labelingJobArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) assigned to the labeling job when it was
     * created.</p>
     */
    inline void SetLabelingJobArn(Aws::String&& value) { m_labelingJobArnHasBeenSet = true; m_labelingJobArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) assigned to the labeling job when it was
     * created.</p>
     */
    inline void SetLabelingJobArn(const char* value) { m_labelingJobArnHasBeenSet = true; m_labelingJobArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) assigned to the labeling job when it was
     * created.</p>
     */
    inline LabelingJobSummary& WithLabelingJobArn(const Aws::String& value) { SetLabelingJobArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) assigned to the labeling job when it was
     * created.</p>
     */
    inline LabelingJobSummary& WithLabelingJobArn(Aws::String&& value) { SetLabelingJobArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) assigned to the labeling job when it was
     * created.</p>
     */
    inline LabelingJobSummary& WithLabelingJobArn(const char* value) { SetLabelingJobArn(value); return *this;}


    /**
     * <p>The date and time that the job was created (timestamp).</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>The date and time that the job was created (timestamp).</p>
     */
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }

    /**
     * <p>The date and time that the job was created (timestamp).</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }

    /**
     * <p>The date and time that the job was created (timestamp).</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }

    /**
     * <p>The date and time that the job was created (timestamp).</p>
     */
    inline LabelingJobSummary& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>The date and time that the job was created (timestamp).</p>
     */
    inline LabelingJobSummary& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p>The date and time that the job was last modified (timestamp).</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const{ return m_lastModifiedTime; }

    /**
     * <p>The date and time that the job was last modified (timestamp).</p>
     */
    inline bool LastModifiedTimeHasBeenSet() const { return m_lastModifiedTimeHasBeenSet; }

    /**
     * <p>The date and time that the job was last modified (timestamp).</p>
     */
    inline void SetLastModifiedTime(const Aws::Utils::DateTime& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = value; }

    /**
     * <p>The date and time that the job was last modified (timestamp).</p>
     */
    inline void SetLastModifiedTime(Aws::Utils::DateTime&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::move(value); }

    /**
     * <p>The date and time that the job was last modified (timestamp).</p>
     */
    inline LabelingJobSummary& WithLastModifiedTime(const Aws::Utils::DateTime& value) { SetLastModifiedTime(value); return *this;}

    /**
     * <p>The date and time that the job was last modified (timestamp).</p>
     */
    inline LabelingJobSummary& WithLastModifiedTime(Aws::Utils::DateTime&& value) { SetLastModifiedTime(std::move(value)); return *this;}


    /**
     * <p>The current status of the labeling job. </p>
     */
    inline const LabelingJobStatus& GetLabelingJobStatus() const{ return m_labelingJobStatus; }

    /**
     * <p>The current status of the labeling job. </p>
     */
    inline bool LabelingJobStatusHasBeenSet() const { return m_labelingJobStatusHasBeenSet; }

    /**
     * <p>The current status of the labeling job. </p>
     */
    inline void SetLabelingJobStatus(const LabelingJobStatus& value) { m_labelingJobStatusHasBeenSet = true; m_labelingJobStatus = value; }

    /**
     * <p>The current status of the labeling job. </p>
     */
    inline void SetLabelingJobStatus(LabelingJobStatus&& value) { m_labelingJobStatusHasBeenSet = true; m_labelingJobStatus = std::move(value); }

    /**
     * <p>The current status of the labeling job. </p>
     */
    inline LabelingJobSummary& WithLabelingJobStatus(const LabelingJobStatus& value) { SetLabelingJobStatus(value); return *this;}

    /**
     * <p>The current status of the labeling job. </p>
     */
    inline LabelingJobSummary& WithLabelingJobStatus(LabelingJobStatus&& value) { SetLabelingJobStatus(std::move(value)); return *this;}


    /**
     * <p>Counts showing the progress of the labeling job.</p>
     */
    inline const LabelCounters& GetLabelCounters() const{ return m_labelCounters; }

    /**
     * <p>Counts showing the progress of the labeling job.</p>
     */
    inline bool LabelCountersHasBeenSet() const { return m_labelCountersHasBeenSet; }

    /**
     * <p>Counts showing the progress of the labeling job.</p>
     */
    inline void SetLabelCounters(const LabelCounters& value) { m_labelCountersHasBeenSet = true; m_labelCounters = value; }

    /**
     * <p>Counts showing the progress of the labeling job.</p>
     */
    inline void SetLabelCounters(LabelCounters&& value) { m_labelCountersHasBeenSet = true; m_labelCounters = std::move(value); }

    /**
     * <p>Counts showing the progress of the labeling job.</p>
     */
    inline LabelingJobSummary& WithLabelCounters(const LabelCounters& value) { SetLabelCounters(value); return *this;}

    /**
     * <p>Counts showing the progress of the labeling job.</p>
     */
    inline LabelingJobSummary& WithLabelCounters(LabelCounters&& value) { SetLabelCounters(std::move(value)); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the work team assigned to the job.</p>
     */
    inline const Aws::String& GetWorkteamArn() const{ return m_workteamArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the work team assigned to the job.</p>
     */
    inline bool WorkteamArnHasBeenSet() const { return m_workteamArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the work team assigned to the job.</p>
     */
    inline void SetWorkteamArn(const Aws::String& value) { m_workteamArnHasBeenSet = true; m_workteamArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the work team assigned to the job.</p>
     */
    inline void SetWorkteamArn(Aws::String&& value) { m_workteamArnHasBeenSet = true; m_workteamArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the work team assigned to the job.</p>
     */
    inline void SetWorkteamArn(const char* value) { m_workteamArnHasBeenSet = true; m_workteamArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the work team assigned to the job.</p>
     */
    inline LabelingJobSummary& WithWorkteamArn(const Aws::String& value) { SetWorkteamArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the work team assigned to the job.</p>
     */
    inline LabelingJobSummary& WithWorkteamArn(Aws::String&& value) { SetWorkteamArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the work team assigned to the job.</p>
     */
    inline LabelingJobSummary& WithWorkteamArn(const char* value) { SetWorkteamArn(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of a Lambda function. The function is run
     * before each data object is sent to a worker.</p>
     */
    inline const Aws::String& GetPreHumanTaskLambdaArn() const{ return m_preHumanTaskLambdaArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of a Lambda function. The function is run
     * before each data object is sent to a worker.</p>
     */
    inline bool PreHumanTaskLambdaArnHasBeenSet() const { return m_preHumanTaskLambdaArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of a Lambda function. The function is run
     * before each data object is sent to a worker.</p>
     */
    inline void SetPreHumanTaskLambdaArn(const Aws::String& value) { m_preHumanTaskLambdaArnHasBeenSet = true; m_preHumanTaskLambdaArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of a Lambda function. The function is run
     * before each data object is sent to a worker.</p>
     */
    inline void SetPreHumanTaskLambdaArn(Aws::String&& value) { m_preHumanTaskLambdaArnHasBeenSet = true; m_preHumanTaskLambdaArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of a Lambda function. The function is run
     * before each data object is sent to a worker.</p>
     */
    inline void SetPreHumanTaskLambdaArn(const char* value) { m_preHumanTaskLambdaArnHasBeenSet = true; m_preHumanTaskLambdaArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of a Lambda function. The function is run
     * before each data object is sent to a worker.</p>
     */
    inline LabelingJobSummary& WithPreHumanTaskLambdaArn(const Aws::String& value) { SetPreHumanTaskLambdaArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of a Lambda function. The function is run
     * before each data object is sent to a worker.</p>
     */
    inline LabelingJobSummary& WithPreHumanTaskLambdaArn(Aws::String&& value) { SetPreHumanTaskLambdaArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of a Lambda function. The function is run
     * before each data object is sent to a worker.</p>
     */
    inline LabelingJobSummary& WithPreHumanTaskLambdaArn(const char* value) { SetPreHumanTaskLambdaArn(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the Lambda function used to consolidate the
     * annotations from individual workers into a label for a data object. For more
     * information, see <a
     * href="http://docs.aws.amazon.com/sagemaker/latest/dg/sms-annotation-consolidation.html">Annotation
     * Consolidation</a>.</p>
     */
    inline const Aws::String& GetAnnotationConsolidationLambdaArn() const{ return m_annotationConsolidationLambdaArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Lambda function used to consolidate the
     * annotations from individual workers into a label for a data object. For more
     * information, see <a
     * href="http://docs.aws.amazon.com/sagemaker/latest/dg/sms-annotation-consolidation.html">Annotation
     * Consolidation</a>.</p>
     */
    inline bool AnnotationConsolidationLambdaArnHasBeenSet() const { return m_annotationConsolidationLambdaArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Lambda function used to consolidate the
     * annotations from individual workers into a label for a data object. For more
     * information, see <a
     * href="http://docs.aws.amazon.com/sagemaker/latest/dg/sms-annotation-consolidation.html">Annotation
     * Consolidation</a>.</p>
     */
    inline void SetAnnotationConsolidationLambdaArn(const Aws::String& value) { m_annotationConsolidationLambdaArnHasBeenSet = true; m_annotationConsolidationLambdaArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Lambda function used to consolidate the
     * annotations from individual workers into a label for a data object. For more
     * information, see <a
     * href="http://docs.aws.amazon.com/sagemaker/latest/dg/sms-annotation-consolidation.html">Annotation
     * Consolidation</a>.</p>
     */
    inline void SetAnnotationConsolidationLambdaArn(Aws::String&& value) { m_annotationConsolidationLambdaArnHasBeenSet = true; m_annotationConsolidationLambdaArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Lambda function used to consolidate the
     * annotations from individual workers into a label for a data object. For more
     * information, see <a
     * href="http://docs.aws.amazon.com/sagemaker/latest/dg/sms-annotation-consolidation.html">Annotation
     * Consolidation</a>.</p>
     */
    inline void SetAnnotationConsolidationLambdaArn(const char* value) { m_annotationConsolidationLambdaArnHasBeenSet = true; m_annotationConsolidationLambdaArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Lambda function used to consolidate the
     * annotations from individual workers into a label for a data object. For more
     * information, see <a
     * href="http://docs.aws.amazon.com/sagemaker/latest/dg/sms-annotation-consolidation.html">Annotation
     * Consolidation</a>.</p>
     */
    inline LabelingJobSummary& WithAnnotationConsolidationLambdaArn(const Aws::String& value) { SetAnnotationConsolidationLambdaArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Lambda function used to consolidate the
     * annotations from individual workers into a label for a data object. For more
     * information, see <a
     * href="http://docs.aws.amazon.com/sagemaker/latest/dg/sms-annotation-consolidation.html">Annotation
     * Consolidation</a>.</p>
     */
    inline LabelingJobSummary& WithAnnotationConsolidationLambdaArn(Aws::String&& value) { SetAnnotationConsolidationLambdaArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Lambda function used to consolidate the
     * annotations from individual workers into a label for a data object. For more
     * information, see <a
     * href="http://docs.aws.amazon.com/sagemaker/latest/dg/sms-annotation-consolidation.html">Annotation
     * Consolidation</a>.</p>
     */
    inline LabelingJobSummary& WithAnnotationConsolidationLambdaArn(const char* value) { SetAnnotationConsolidationLambdaArn(value); return *this;}


    /**
     * <p>If the <code>LabelingJobStatus</code> field is <code>Failed</code>, this
     * field contains a description of the error.</p>
     */
    inline const Aws::String& GetFailureReason() const{ return m_failureReason; }

    /**
     * <p>If the <code>LabelingJobStatus</code> field is <code>Failed</code>, this
     * field contains a description of the error.</p>
     */
    inline bool FailureReasonHasBeenSet() const { return m_failureReasonHasBeenSet; }

    /**
     * <p>If the <code>LabelingJobStatus</code> field is <code>Failed</code>, this
     * field contains a description of the error.</p>
     */
    inline void SetFailureReason(const Aws::String& value) { m_failureReasonHasBeenSet = true; m_failureReason = value; }

    /**
     * <p>If the <code>LabelingJobStatus</code> field is <code>Failed</code>, this
     * field contains a description of the error.</p>
     */
    inline void SetFailureReason(Aws::String&& value) { m_failureReasonHasBeenSet = true; m_failureReason = std::move(value); }

    /**
     * <p>If the <code>LabelingJobStatus</code> field is <code>Failed</code>, this
     * field contains a description of the error.</p>
     */
    inline void SetFailureReason(const char* value) { m_failureReasonHasBeenSet = true; m_failureReason.assign(value); }

    /**
     * <p>If the <code>LabelingJobStatus</code> field is <code>Failed</code>, this
     * field contains a description of the error.</p>
     */
    inline LabelingJobSummary& WithFailureReason(const Aws::String& value) { SetFailureReason(value); return *this;}

    /**
     * <p>If the <code>LabelingJobStatus</code> field is <code>Failed</code>, this
     * field contains a description of the error.</p>
     */
    inline LabelingJobSummary& WithFailureReason(Aws::String&& value) { SetFailureReason(std::move(value)); return *this;}

    /**
     * <p>If the <code>LabelingJobStatus</code> field is <code>Failed</code>, this
     * field contains a description of the error.</p>
     */
    inline LabelingJobSummary& WithFailureReason(const char* value) { SetFailureReason(value); return *this;}


    /**
     * <p>The location of the output produced by the labeling job.</p>
     */
    inline const LabelingJobOutput& GetLabelingJobOutput() const{ return m_labelingJobOutput; }

    /**
     * <p>The location of the output produced by the labeling job.</p>
     */
    inline bool LabelingJobOutputHasBeenSet() const { return m_labelingJobOutputHasBeenSet; }

    /**
     * <p>The location of the output produced by the labeling job.</p>
     */
    inline void SetLabelingJobOutput(const LabelingJobOutput& value) { m_labelingJobOutputHasBeenSet = true; m_labelingJobOutput = value; }

    /**
     * <p>The location of the output produced by the labeling job.</p>
     */
    inline void SetLabelingJobOutput(LabelingJobOutput&& value) { m_labelingJobOutputHasBeenSet = true; m_labelingJobOutput = std::move(value); }

    /**
     * <p>The location of the output produced by the labeling job.</p>
     */
    inline LabelingJobSummary& WithLabelingJobOutput(const LabelingJobOutput& value) { SetLabelingJobOutput(value); return *this;}

    /**
     * <p>The location of the output produced by the labeling job.</p>
     */
    inline LabelingJobSummary& WithLabelingJobOutput(LabelingJobOutput&& value) { SetLabelingJobOutput(std::move(value)); return *this;}


    /**
     * <p>Input configuration for the labeling job.</p>
     */
    inline const LabelingJobInputConfig& GetInputConfig() const{ return m_inputConfig; }

    /**
     * <p>Input configuration for the labeling job.</p>
     */
    inline bool InputConfigHasBeenSet() const { return m_inputConfigHasBeenSet; }

    /**
     * <p>Input configuration for the labeling job.</p>
     */
    inline void SetInputConfig(const LabelingJobInputConfig& value) { m_inputConfigHasBeenSet = true; m_inputConfig = value; }

    /**
     * <p>Input configuration for the labeling job.</p>
     */
    inline void SetInputConfig(LabelingJobInputConfig&& value) { m_inputConfigHasBeenSet = true; m_inputConfig = std::move(value); }

    /**
     * <p>Input configuration for the labeling job.</p>
     */
    inline LabelingJobSummary& WithInputConfig(const LabelingJobInputConfig& value) { SetInputConfig(value); return *this;}

    /**
     * <p>Input configuration for the labeling job.</p>
     */
    inline LabelingJobSummary& WithInputConfig(LabelingJobInputConfig&& value) { SetInputConfig(std::move(value)); return *this;}

  private:

    Aws::String m_labelingJobName;
    bool m_labelingJobNameHasBeenSet;

    Aws::String m_labelingJobArn;
    bool m_labelingJobArnHasBeenSet;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet;

    Aws::Utils::DateTime m_lastModifiedTime;
    bool m_lastModifiedTimeHasBeenSet;

    LabelingJobStatus m_labelingJobStatus;
    bool m_labelingJobStatusHasBeenSet;

    LabelCounters m_labelCounters;
    bool m_labelCountersHasBeenSet;

    Aws::String m_workteamArn;
    bool m_workteamArnHasBeenSet;

    Aws::String m_preHumanTaskLambdaArn;
    bool m_preHumanTaskLambdaArnHasBeenSet;

    Aws::String m_annotationConsolidationLambdaArn;
    bool m_annotationConsolidationLambdaArnHasBeenSet;

    Aws::String m_failureReason;
    bool m_failureReasonHasBeenSet;

    LabelingJobOutput m_labelingJobOutput;
    bool m_labelingJobOutputHasBeenSet;

    LabelingJobInputConfig m_inputConfig;
    bool m_inputConfigHasBeenSet;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws

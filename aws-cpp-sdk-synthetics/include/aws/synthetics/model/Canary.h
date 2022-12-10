/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/synthetics/Synthetics_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/synthetics/model/CanaryCodeOutput.h>
#include <aws/synthetics/model/CanaryScheduleOutput.h>
#include <aws/synthetics/model/CanaryRunConfigOutput.h>
#include <aws/synthetics/model/CanaryStatus.h>
#include <aws/synthetics/model/CanaryTimeline.h>
#include <aws/synthetics/model/VpcConfigOutput.h>
#include <aws/synthetics/model/VisualReferenceOutput.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/synthetics/model/ArtifactConfigOutput.h>
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
namespace Synthetics
{
namespace Model
{

  /**
   * <p>This structure contains all information about one canary in your
   * account.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/synthetics-2017-10-11/Canary">AWS
   * API Reference</a></p>
   */
  class Canary
  {
  public:
    AWS_SYNTHETICS_API Canary();
    AWS_SYNTHETICS_API Canary(Aws::Utils::Json::JsonView jsonValue);
    AWS_SYNTHETICS_API Canary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SYNTHETICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The unique ID of this canary.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The unique ID of this canary.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The unique ID of this canary.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The unique ID of this canary.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The unique ID of this canary.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The unique ID of this canary.</p>
     */
    inline Canary& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The unique ID of this canary.</p>
     */
    inline Canary& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The unique ID of this canary.</p>
     */
    inline Canary& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The name of the canary.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the canary.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the canary.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the canary.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the canary.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the canary.</p>
     */
    inline Canary& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the canary.</p>
     */
    inline Canary& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the canary.</p>
     */
    inline Canary& WithName(const char* value) { SetName(value); return *this;}


    
    inline const CanaryCodeOutput& GetCode() const{ return m_code; }

    
    inline bool CodeHasBeenSet() const { return m_codeHasBeenSet; }

    
    inline void SetCode(const CanaryCodeOutput& value) { m_codeHasBeenSet = true; m_code = value; }

    
    inline void SetCode(CanaryCodeOutput&& value) { m_codeHasBeenSet = true; m_code = std::move(value); }

    
    inline Canary& WithCode(const CanaryCodeOutput& value) { SetCode(value); return *this;}

    
    inline Canary& WithCode(CanaryCodeOutput&& value) { SetCode(std::move(value)); return *this;}


    /**
     * <p>The ARN of the IAM role used to run the canary. This role must include
     * <code>lambda.amazonaws.com</code> as a principal in the trust policy.</p>
     */
    inline const Aws::String& GetExecutionRoleArn() const{ return m_executionRoleArn; }

    /**
     * <p>The ARN of the IAM role used to run the canary. This role must include
     * <code>lambda.amazonaws.com</code> as a principal in the trust policy.</p>
     */
    inline bool ExecutionRoleArnHasBeenSet() const { return m_executionRoleArnHasBeenSet; }

    /**
     * <p>The ARN of the IAM role used to run the canary. This role must include
     * <code>lambda.amazonaws.com</code> as a principal in the trust policy.</p>
     */
    inline void SetExecutionRoleArn(const Aws::String& value) { m_executionRoleArnHasBeenSet = true; m_executionRoleArn = value; }

    /**
     * <p>The ARN of the IAM role used to run the canary. This role must include
     * <code>lambda.amazonaws.com</code> as a principal in the trust policy.</p>
     */
    inline void SetExecutionRoleArn(Aws::String&& value) { m_executionRoleArnHasBeenSet = true; m_executionRoleArn = std::move(value); }

    /**
     * <p>The ARN of the IAM role used to run the canary. This role must include
     * <code>lambda.amazonaws.com</code> as a principal in the trust policy.</p>
     */
    inline void SetExecutionRoleArn(const char* value) { m_executionRoleArnHasBeenSet = true; m_executionRoleArn.assign(value); }

    /**
     * <p>The ARN of the IAM role used to run the canary. This role must include
     * <code>lambda.amazonaws.com</code> as a principal in the trust policy.</p>
     */
    inline Canary& WithExecutionRoleArn(const Aws::String& value) { SetExecutionRoleArn(value); return *this;}

    /**
     * <p>The ARN of the IAM role used to run the canary. This role must include
     * <code>lambda.amazonaws.com</code> as a principal in the trust policy.</p>
     */
    inline Canary& WithExecutionRoleArn(Aws::String&& value) { SetExecutionRoleArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the IAM role used to run the canary. This role must include
     * <code>lambda.amazonaws.com</code> as a principal in the trust policy.</p>
     */
    inline Canary& WithExecutionRoleArn(const char* value) { SetExecutionRoleArn(value); return *this;}


    /**
     * <p>A structure that contains information about how often the canary is to run,
     * and when these runs are to stop.</p>
     */
    inline const CanaryScheduleOutput& GetSchedule() const{ return m_schedule; }

    /**
     * <p>A structure that contains information about how often the canary is to run,
     * and when these runs are to stop.</p>
     */
    inline bool ScheduleHasBeenSet() const { return m_scheduleHasBeenSet; }

    /**
     * <p>A structure that contains information about how often the canary is to run,
     * and when these runs are to stop.</p>
     */
    inline void SetSchedule(const CanaryScheduleOutput& value) { m_scheduleHasBeenSet = true; m_schedule = value; }

    /**
     * <p>A structure that contains information about how often the canary is to run,
     * and when these runs are to stop.</p>
     */
    inline void SetSchedule(CanaryScheduleOutput&& value) { m_scheduleHasBeenSet = true; m_schedule = std::move(value); }

    /**
     * <p>A structure that contains information about how often the canary is to run,
     * and when these runs are to stop.</p>
     */
    inline Canary& WithSchedule(const CanaryScheduleOutput& value) { SetSchedule(value); return *this;}

    /**
     * <p>A structure that contains information about how often the canary is to run,
     * and when these runs are to stop.</p>
     */
    inline Canary& WithSchedule(CanaryScheduleOutput&& value) { SetSchedule(std::move(value)); return *this;}


    
    inline const CanaryRunConfigOutput& GetRunConfig() const{ return m_runConfig; }

    
    inline bool RunConfigHasBeenSet() const { return m_runConfigHasBeenSet; }

    
    inline void SetRunConfig(const CanaryRunConfigOutput& value) { m_runConfigHasBeenSet = true; m_runConfig = value; }

    
    inline void SetRunConfig(CanaryRunConfigOutput&& value) { m_runConfigHasBeenSet = true; m_runConfig = std::move(value); }

    
    inline Canary& WithRunConfig(const CanaryRunConfigOutput& value) { SetRunConfig(value); return *this;}

    
    inline Canary& WithRunConfig(CanaryRunConfigOutput&& value) { SetRunConfig(std::move(value)); return *this;}


    /**
     * <p>The number of days to retain data about successful runs of this canary.</p>
     */
    inline int GetSuccessRetentionPeriodInDays() const{ return m_successRetentionPeriodInDays; }

    /**
     * <p>The number of days to retain data about successful runs of this canary.</p>
     */
    inline bool SuccessRetentionPeriodInDaysHasBeenSet() const { return m_successRetentionPeriodInDaysHasBeenSet; }

    /**
     * <p>The number of days to retain data about successful runs of this canary.</p>
     */
    inline void SetSuccessRetentionPeriodInDays(int value) { m_successRetentionPeriodInDaysHasBeenSet = true; m_successRetentionPeriodInDays = value; }

    /**
     * <p>The number of days to retain data about successful runs of this canary.</p>
     */
    inline Canary& WithSuccessRetentionPeriodInDays(int value) { SetSuccessRetentionPeriodInDays(value); return *this;}


    /**
     * <p>The number of days to retain data about failed runs of this canary.</p>
     */
    inline int GetFailureRetentionPeriodInDays() const{ return m_failureRetentionPeriodInDays; }

    /**
     * <p>The number of days to retain data about failed runs of this canary.</p>
     */
    inline bool FailureRetentionPeriodInDaysHasBeenSet() const { return m_failureRetentionPeriodInDaysHasBeenSet; }

    /**
     * <p>The number of days to retain data about failed runs of this canary.</p>
     */
    inline void SetFailureRetentionPeriodInDays(int value) { m_failureRetentionPeriodInDaysHasBeenSet = true; m_failureRetentionPeriodInDays = value; }

    /**
     * <p>The number of days to retain data about failed runs of this canary.</p>
     */
    inline Canary& WithFailureRetentionPeriodInDays(int value) { SetFailureRetentionPeriodInDays(value); return *this;}


    /**
     * <p>A structure that contains information about the canary's status.</p>
     */
    inline const CanaryStatus& GetStatus() const{ return m_status; }

    /**
     * <p>A structure that contains information about the canary's status.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>A structure that contains information about the canary's status.</p>
     */
    inline void SetStatus(const CanaryStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>A structure that contains information about the canary's status.</p>
     */
    inline void SetStatus(CanaryStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>A structure that contains information about the canary's status.</p>
     */
    inline Canary& WithStatus(const CanaryStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>A structure that contains information about the canary's status.</p>
     */
    inline Canary& WithStatus(CanaryStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>A structure that contains information about when the canary was created,
     * modified, and most recently run.</p>
     */
    inline const CanaryTimeline& GetTimeline() const{ return m_timeline; }

    /**
     * <p>A structure that contains information about when the canary was created,
     * modified, and most recently run.</p>
     */
    inline bool TimelineHasBeenSet() const { return m_timelineHasBeenSet; }

    /**
     * <p>A structure that contains information about when the canary was created,
     * modified, and most recently run.</p>
     */
    inline void SetTimeline(const CanaryTimeline& value) { m_timelineHasBeenSet = true; m_timeline = value; }

    /**
     * <p>A structure that contains information about when the canary was created,
     * modified, and most recently run.</p>
     */
    inline void SetTimeline(CanaryTimeline&& value) { m_timelineHasBeenSet = true; m_timeline = std::move(value); }

    /**
     * <p>A structure that contains information about when the canary was created,
     * modified, and most recently run.</p>
     */
    inline Canary& WithTimeline(const CanaryTimeline& value) { SetTimeline(value); return *this;}

    /**
     * <p>A structure that contains information about when the canary was created,
     * modified, and most recently run.</p>
     */
    inline Canary& WithTimeline(CanaryTimeline&& value) { SetTimeline(std::move(value)); return *this;}


    /**
     * <p>The location in Amazon S3 where Synthetics stores artifacts from the runs of
     * this canary. Artifacts include the log file, screenshots, and HAR files.</p>
     */
    inline const Aws::String& GetArtifactS3Location() const{ return m_artifactS3Location; }

    /**
     * <p>The location in Amazon S3 where Synthetics stores artifacts from the runs of
     * this canary. Artifacts include the log file, screenshots, and HAR files.</p>
     */
    inline bool ArtifactS3LocationHasBeenSet() const { return m_artifactS3LocationHasBeenSet; }

    /**
     * <p>The location in Amazon S3 where Synthetics stores artifacts from the runs of
     * this canary. Artifacts include the log file, screenshots, and HAR files.</p>
     */
    inline void SetArtifactS3Location(const Aws::String& value) { m_artifactS3LocationHasBeenSet = true; m_artifactS3Location = value; }

    /**
     * <p>The location in Amazon S3 where Synthetics stores artifacts from the runs of
     * this canary. Artifacts include the log file, screenshots, and HAR files.</p>
     */
    inline void SetArtifactS3Location(Aws::String&& value) { m_artifactS3LocationHasBeenSet = true; m_artifactS3Location = std::move(value); }

    /**
     * <p>The location in Amazon S3 where Synthetics stores artifacts from the runs of
     * this canary. Artifacts include the log file, screenshots, and HAR files.</p>
     */
    inline void SetArtifactS3Location(const char* value) { m_artifactS3LocationHasBeenSet = true; m_artifactS3Location.assign(value); }

    /**
     * <p>The location in Amazon S3 where Synthetics stores artifacts from the runs of
     * this canary. Artifacts include the log file, screenshots, and HAR files.</p>
     */
    inline Canary& WithArtifactS3Location(const Aws::String& value) { SetArtifactS3Location(value); return *this;}

    /**
     * <p>The location in Amazon S3 where Synthetics stores artifacts from the runs of
     * this canary. Artifacts include the log file, screenshots, and HAR files.</p>
     */
    inline Canary& WithArtifactS3Location(Aws::String&& value) { SetArtifactS3Location(std::move(value)); return *this;}

    /**
     * <p>The location in Amazon S3 where Synthetics stores artifacts from the runs of
     * this canary. Artifacts include the log file, screenshots, and HAR files.</p>
     */
    inline Canary& WithArtifactS3Location(const char* value) { SetArtifactS3Location(value); return *this;}


    /**
     * <p>The ARN of the Lambda function that is used as your canary's engine. For more
     * information about Lambda ARN format, see <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/lambda-api-permissions-ref.html">Resources
     * and Conditions for Lambda Actions</a>.</p>
     */
    inline const Aws::String& GetEngineArn() const{ return m_engineArn; }

    /**
     * <p>The ARN of the Lambda function that is used as your canary's engine. For more
     * information about Lambda ARN format, see <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/lambda-api-permissions-ref.html">Resources
     * and Conditions for Lambda Actions</a>.</p>
     */
    inline bool EngineArnHasBeenSet() const { return m_engineArnHasBeenSet; }

    /**
     * <p>The ARN of the Lambda function that is used as your canary's engine. For more
     * information about Lambda ARN format, see <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/lambda-api-permissions-ref.html">Resources
     * and Conditions for Lambda Actions</a>.</p>
     */
    inline void SetEngineArn(const Aws::String& value) { m_engineArnHasBeenSet = true; m_engineArn = value; }

    /**
     * <p>The ARN of the Lambda function that is used as your canary's engine. For more
     * information about Lambda ARN format, see <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/lambda-api-permissions-ref.html">Resources
     * and Conditions for Lambda Actions</a>.</p>
     */
    inline void SetEngineArn(Aws::String&& value) { m_engineArnHasBeenSet = true; m_engineArn = std::move(value); }

    /**
     * <p>The ARN of the Lambda function that is used as your canary's engine. For more
     * information about Lambda ARN format, see <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/lambda-api-permissions-ref.html">Resources
     * and Conditions for Lambda Actions</a>.</p>
     */
    inline void SetEngineArn(const char* value) { m_engineArnHasBeenSet = true; m_engineArn.assign(value); }

    /**
     * <p>The ARN of the Lambda function that is used as your canary's engine. For more
     * information about Lambda ARN format, see <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/lambda-api-permissions-ref.html">Resources
     * and Conditions for Lambda Actions</a>.</p>
     */
    inline Canary& WithEngineArn(const Aws::String& value) { SetEngineArn(value); return *this;}

    /**
     * <p>The ARN of the Lambda function that is used as your canary's engine. For more
     * information about Lambda ARN format, see <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/lambda-api-permissions-ref.html">Resources
     * and Conditions for Lambda Actions</a>.</p>
     */
    inline Canary& WithEngineArn(Aws::String&& value) { SetEngineArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the Lambda function that is used as your canary's engine. For more
     * information about Lambda ARN format, see <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/lambda-api-permissions-ref.html">Resources
     * and Conditions for Lambda Actions</a>.</p>
     */
    inline Canary& WithEngineArn(const char* value) { SetEngineArn(value); return *this;}


    /**
     * <p>Specifies the runtime version to use for the canary. For more information
     * about runtime versions, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/CloudWatch_Synthetics_Canaries_Library.html">
     * Canary Runtime Versions</a>.</p>
     */
    inline const Aws::String& GetRuntimeVersion() const{ return m_runtimeVersion; }

    /**
     * <p>Specifies the runtime version to use for the canary. For more information
     * about runtime versions, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/CloudWatch_Synthetics_Canaries_Library.html">
     * Canary Runtime Versions</a>.</p>
     */
    inline bool RuntimeVersionHasBeenSet() const { return m_runtimeVersionHasBeenSet; }

    /**
     * <p>Specifies the runtime version to use for the canary. For more information
     * about runtime versions, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/CloudWatch_Synthetics_Canaries_Library.html">
     * Canary Runtime Versions</a>.</p>
     */
    inline void SetRuntimeVersion(const Aws::String& value) { m_runtimeVersionHasBeenSet = true; m_runtimeVersion = value; }

    /**
     * <p>Specifies the runtime version to use for the canary. For more information
     * about runtime versions, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/CloudWatch_Synthetics_Canaries_Library.html">
     * Canary Runtime Versions</a>.</p>
     */
    inline void SetRuntimeVersion(Aws::String&& value) { m_runtimeVersionHasBeenSet = true; m_runtimeVersion = std::move(value); }

    /**
     * <p>Specifies the runtime version to use for the canary. For more information
     * about runtime versions, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/CloudWatch_Synthetics_Canaries_Library.html">
     * Canary Runtime Versions</a>.</p>
     */
    inline void SetRuntimeVersion(const char* value) { m_runtimeVersionHasBeenSet = true; m_runtimeVersion.assign(value); }

    /**
     * <p>Specifies the runtime version to use for the canary. For more information
     * about runtime versions, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/CloudWatch_Synthetics_Canaries_Library.html">
     * Canary Runtime Versions</a>.</p>
     */
    inline Canary& WithRuntimeVersion(const Aws::String& value) { SetRuntimeVersion(value); return *this;}

    /**
     * <p>Specifies the runtime version to use for the canary. For more information
     * about runtime versions, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/CloudWatch_Synthetics_Canaries_Library.html">
     * Canary Runtime Versions</a>.</p>
     */
    inline Canary& WithRuntimeVersion(Aws::String&& value) { SetRuntimeVersion(std::move(value)); return *this;}

    /**
     * <p>Specifies the runtime version to use for the canary. For more information
     * about runtime versions, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/CloudWatch_Synthetics_Canaries_Library.html">
     * Canary Runtime Versions</a>.</p>
     */
    inline Canary& WithRuntimeVersion(const char* value) { SetRuntimeVersion(value); return *this;}


    
    inline const VpcConfigOutput& GetVpcConfig() const{ return m_vpcConfig; }

    
    inline bool VpcConfigHasBeenSet() const { return m_vpcConfigHasBeenSet; }

    
    inline void SetVpcConfig(const VpcConfigOutput& value) { m_vpcConfigHasBeenSet = true; m_vpcConfig = value; }

    
    inline void SetVpcConfig(VpcConfigOutput&& value) { m_vpcConfigHasBeenSet = true; m_vpcConfig = std::move(value); }

    
    inline Canary& WithVpcConfig(const VpcConfigOutput& value) { SetVpcConfig(value); return *this;}

    
    inline Canary& WithVpcConfig(VpcConfigOutput&& value) { SetVpcConfig(std::move(value)); return *this;}


    /**
     * <p>If this canary performs visual monitoring by comparing screenshots, this
     * structure contains the ID of the canary run to use as the baseline for
     * screenshots, and the coordinates of any parts of the screen to ignore during the
     * visual monitoring comparison.</p>
     */
    inline const VisualReferenceOutput& GetVisualReference() const{ return m_visualReference; }

    /**
     * <p>If this canary performs visual monitoring by comparing screenshots, this
     * structure contains the ID of the canary run to use as the baseline for
     * screenshots, and the coordinates of any parts of the screen to ignore during the
     * visual monitoring comparison.</p>
     */
    inline bool VisualReferenceHasBeenSet() const { return m_visualReferenceHasBeenSet; }

    /**
     * <p>If this canary performs visual monitoring by comparing screenshots, this
     * structure contains the ID of the canary run to use as the baseline for
     * screenshots, and the coordinates of any parts of the screen to ignore during the
     * visual monitoring comparison.</p>
     */
    inline void SetVisualReference(const VisualReferenceOutput& value) { m_visualReferenceHasBeenSet = true; m_visualReference = value; }

    /**
     * <p>If this canary performs visual monitoring by comparing screenshots, this
     * structure contains the ID of the canary run to use as the baseline for
     * screenshots, and the coordinates of any parts of the screen to ignore during the
     * visual monitoring comparison.</p>
     */
    inline void SetVisualReference(VisualReferenceOutput&& value) { m_visualReferenceHasBeenSet = true; m_visualReference = std::move(value); }

    /**
     * <p>If this canary performs visual monitoring by comparing screenshots, this
     * structure contains the ID of the canary run to use as the baseline for
     * screenshots, and the coordinates of any parts of the screen to ignore during the
     * visual monitoring comparison.</p>
     */
    inline Canary& WithVisualReference(const VisualReferenceOutput& value) { SetVisualReference(value); return *this;}

    /**
     * <p>If this canary performs visual monitoring by comparing screenshots, this
     * structure contains the ID of the canary run to use as the baseline for
     * screenshots, and the coordinates of any parts of the screen to ignore during the
     * visual monitoring comparison.</p>
     */
    inline Canary& WithVisualReference(VisualReferenceOutput&& value) { SetVisualReference(std::move(value)); return *this;}


    /**
     * <p>The list of key-value pairs that are associated with the canary.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>The list of key-value pairs that are associated with the canary.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The list of key-value pairs that are associated with the canary.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The list of key-value pairs that are associated with the canary.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The list of key-value pairs that are associated with the canary.</p>
     */
    inline Canary& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>The list of key-value pairs that are associated with the canary.</p>
     */
    inline Canary& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The list of key-value pairs that are associated with the canary.</p>
     */
    inline Canary& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>The list of key-value pairs that are associated with the canary.</p>
     */
    inline Canary& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The list of key-value pairs that are associated with the canary.</p>
     */
    inline Canary& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The list of key-value pairs that are associated with the canary.</p>
     */
    inline Canary& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The list of key-value pairs that are associated with the canary.</p>
     */
    inline Canary& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The list of key-value pairs that are associated with the canary.</p>
     */
    inline Canary& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The list of key-value pairs that are associated with the canary.</p>
     */
    inline Canary& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }


    /**
     * <p>A structure that contains the configuration for canary artifacts, including
     * the encryption-at-rest settings for artifacts that the canary uploads to Amazon
     * S3.</p>
     */
    inline const ArtifactConfigOutput& GetArtifactConfig() const{ return m_artifactConfig; }

    /**
     * <p>A structure that contains the configuration for canary artifacts, including
     * the encryption-at-rest settings for artifacts that the canary uploads to Amazon
     * S3.</p>
     */
    inline bool ArtifactConfigHasBeenSet() const { return m_artifactConfigHasBeenSet; }

    /**
     * <p>A structure that contains the configuration for canary artifacts, including
     * the encryption-at-rest settings for artifacts that the canary uploads to Amazon
     * S3.</p>
     */
    inline void SetArtifactConfig(const ArtifactConfigOutput& value) { m_artifactConfigHasBeenSet = true; m_artifactConfig = value; }

    /**
     * <p>A structure that contains the configuration for canary artifacts, including
     * the encryption-at-rest settings for artifacts that the canary uploads to Amazon
     * S3.</p>
     */
    inline void SetArtifactConfig(ArtifactConfigOutput&& value) { m_artifactConfigHasBeenSet = true; m_artifactConfig = std::move(value); }

    /**
     * <p>A structure that contains the configuration for canary artifacts, including
     * the encryption-at-rest settings for artifacts that the canary uploads to Amazon
     * S3.</p>
     */
    inline Canary& WithArtifactConfig(const ArtifactConfigOutput& value) { SetArtifactConfig(value); return *this;}

    /**
     * <p>A structure that contains the configuration for canary artifacts, including
     * the encryption-at-rest settings for artifacts that the canary uploads to Amazon
     * S3.</p>
     */
    inline Canary& WithArtifactConfig(ArtifactConfigOutput&& value) { SetArtifactConfig(std::move(value)); return *this;}

  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    CanaryCodeOutput m_code;
    bool m_codeHasBeenSet = false;

    Aws::String m_executionRoleArn;
    bool m_executionRoleArnHasBeenSet = false;

    CanaryScheduleOutput m_schedule;
    bool m_scheduleHasBeenSet = false;

    CanaryRunConfigOutput m_runConfig;
    bool m_runConfigHasBeenSet = false;

    int m_successRetentionPeriodInDays;
    bool m_successRetentionPeriodInDaysHasBeenSet = false;

    int m_failureRetentionPeriodInDays;
    bool m_failureRetentionPeriodInDaysHasBeenSet = false;

    CanaryStatus m_status;
    bool m_statusHasBeenSet = false;

    CanaryTimeline m_timeline;
    bool m_timelineHasBeenSet = false;

    Aws::String m_artifactS3Location;
    bool m_artifactS3LocationHasBeenSet = false;

    Aws::String m_engineArn;
    bool m_engineArnHasBeenSet = false;

    Aws::String m_runtimeVersion;
    bool m_runtimeVersionHasBeenSet = false;

    VpcConfigOutput m_vpcConfig;
    bool m_vpcConfigHasBeenSet = false;

    VisualReferenceOutput m_visualReference;
    bool m_visualReferenceHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    ArtifactConfigOutput m_artifactConfig;
    bool m_artifactConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace Synthetics
} // namespace Aws

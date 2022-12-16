/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/InferenceExperimentType.h>
#include <aws/sagemaker/model/InferenceExperimentSchedule.h>
#include <aws/sagemaker/model/InferenceExperimentStatus.h>
#include <aws/core/utils/DateTime.h>
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
   * <p>Lists a summary of properties of an inference experiment.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/InferenceExperimentSummary">AWS
   * API Reference</a></p>
   */
  class InferenceExperimentSummary
  {
  public:
    AWS_SAGEMAKER_API InferenceExperimentSummary();
    AWS_SAGEMAKER_API InferenceExperimentSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API InferenceExperimentSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the inference experiment.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the inference experiment.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the inference experiment.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the inference experiment.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the inference experiment.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the inference experiment.</p>
     */
    inline InferenceExperimentSummary& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the inference experiment.</p>
     */
    inline InferenceExperimentSummary& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the inference experiment.</p>
     */
    inline InferenceExperimentSummary& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The type of the inference experiment.</p>
     */
    inline const InferenceExperimentType& GetType() const{ return m_type; }

    /**
     * <p>The type of the inference experiment.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of the inference experiment.</p>
     */
    inline void SetType(const InferenceExperimentType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of the inference experiment.</p>
     */
    inline void SetType(InferenceExperimentType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of the inference experiment.</p>
     */
    inline InferenceExperimentSummary& WithType(const InferenceExperimentType& value) { SetType(value); return *this;}

    /**
     * <p>The type of the inference experiment.</p>
     */
    inline InferenceExperimentSummary& WithType(InferenceExperimentType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>The duration for which the inference experiment ran or will run.</p> <p>The
     * maximum duration that you can set for an inference experiment is 30 days.</p>
     */
    inline const InferenceExperimentSchedule& GetSchedule() const{ return m_schedule; }

    /**
     * <p>The duration for which the inference experiment ran or will run.</p> <p>The
     * maximum duration that you can set for an inference experiment is 30 days.</p>
     */
    inline bool ScheduleHasBeenSet() const { return m_scheduleHasBeenSet; }

    /**
     * <p>The duration for which the inference experiment ran or will run.</p> <p>The
     * maximum duration that you can set for an inference experiment is 30 days.</p>
     */
    inline void SetSchedule(const InferenceExperimentSchedule& value) { m_scheduleHasBeenSet = true; m_schedule = value; }

    /**
     * <p>The duration for which the inference experiment ran or will run.</p> <p>The
     * maximum duration that you can set for an inference experiment is 30 days.</p>
     */
    inline void SetSchedule(InferenceExperimentSchedule&& value) { m_scheduleHasBeenSet = true; m_schedule = std::move(value); }

    /**
     * <p>The duration for which the inference experiment ran or will run.</p> <p>The
     * maximum duration that you can set for an inference experiment is 30 days.</p>
     */
    inline InferenceExperimentSummary& WithSchedule(const InferenceExperimentSchedule& value) { SetSchedule(value); return *this;}

    /**
     * <p>The duration for which the inference experiment ran or will run.</p> <p>The
     * maximum duration that you can set for an inference experiment is 30 days.</p>
     */
    inline InferenceExperimentSummary& WithSchedule(InferenceExperimentSchedule&& value) { SetSchedule(std::move(value)); return *this;}


    /**
     * <p>The status of the inference experiment.</p>
     */
    inline const InferenceExperimentStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the inference experiment.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the inference experiment.</p>
     */
    inline void SetStatus(const InferenceExperimentStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the inference experiment.</p>
     */
    inline void SetStatus(InferenceExperimentStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the inference experiment.</p>
     */
    inline InferenceExperimentSummary& WithStatus(const InferenceExperimentStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the inference experiment.</p>
     */
    inline InferenceExperimentSummary& WithStatus(InferenceExperimentStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The error message for the inference experiment status result.</p>
     */
    inline const Aws::String& GetStatusReason() const{ return m_statusReason; }

    /**
     * <p>The error message for the inference experiment status result.</p>
     */
    inline bool StatusReasonHasBeenSet() const { return m_statusReasonHasBeenSet; }

    /**
     * <p>The error message for the inference experiment status result.</p>
     */
    inline void SetStatusReason(const Aws::String& value) { m_statusReasonHasBeenSet = true; m_statusReason = value; }

    /**
     * <p>The error message for the inference experiment status result.</p>
     */
    inline void SetStatusReason(Aws::String&& value) { m_statusReasonHasBeenSet = true; m_statusReason = std::move(value); }

    /**
     * <p>The error message for the inference experiment status result.</p>
     */
    inline void SetStatusReason(const char* value) { m_statusReasonHasBeenSet = true; m_statusReason.assign(value); }

    /**
     * <p>The error message for the inference experiment status result.</p>
     */
    inline InferenceExperimentSummary& WithStatusReason(const Aws::String& value) { SetStatusReason(value); return *this;}

    /**
     * <p>The error message for the inference experiment status result.</p>
     */
    inline InferenceExperimentSummary& WithStatusReason(Aws::String&& value) { SetStatusReason(std::move(value)); return *this;}

    /**
     * <p>The error message for the inference experiment status result.</p>
     */
    inline InferenceExperimentSummary& WithStatusReason(const char* value) { SetStatusReason(value); return *this;}


    /**
     * <p>The description of the inference experiment.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the inference experiment.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description of the inference experiment.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the inference experiment.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description of the inference experiment.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of the inference experiment.</p>
     */
    inline InferenceExperimentSummary& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the inference experiment.</p>
     */
    inline InferenceExperimentSummary& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the inference experiment.</p>
     */
    inline InferenceExperimentSummary& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The timestamp at which the inference experiment was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>The timestamp at which the inference experiment was created.</p>
     */
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }

    /**
     * <p>The timestamp at which the inference experiment was created.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }

    /**
     * <p>The timestamp at which the inference experiment was created.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }

    /**
     * <p>The timestamp at which the inference experiment was created.</p>
     */
    inline InferenceExperimentSummary& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>The timestamp at which the inference experiment was created.</p>
     */
    inline InferenceExperimentSummary& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p>The timestamp at which the inference experiment was completed.</p>
     */
    inline const Aws::Utils::DateTime& GetCompletionTime() const{ return m_completionTime; }

    /**
     * <p>The timestamp at which the inference experiment was completed.</p>
     */
    inline bool CompletionTimeHasBeenSet() const { return m_completionTimeHasBeenSet; }

    /**
     * <p>The timestamp at which the inference experiment was completed.</p>
     */
    inline void SetCompletionTime(const Aws::Utils::DateTime& value) { m_completionTimeHasBeenSet = true; m_completionTime = value; }

    /**
     * <p>The timestamp at which the inference experiment was completed.</p>
     */
    inline void SetCompletionTime(Aws::Utils::DateTime&& value) { m_completionTimeHasBeenSet = true; m_completionTime = std::move(value); }

    /**
     * <p>The timestamp at which the inference experiment was completed.</p>
     */
    inline InferenceExperimentSummary& WithCompletionTime(const Aws::Utils::DateTime& value) { SetCompletionTime(value); return *this;}

    /**
     * <p>The timestamp at which the inference experiment was completed.</p>
     */
    inline InferenceExperimentSummary& WithCompletionTime(Aws::Utils::DateTime&& value) { SetCompletionTime(std::move(value)); return *this;}


    /**
     * <p>The timestamp when you last modified the inference experiment.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const{ return m_lastModifiedTime; }

    /**
     * <p>The timestamp when you last modified the inference experiment.</p>
     */
    inline bool LastModifiedTimeHasBeenSet() const { return m_lastModifiedTimeHasBeenSet; }

    /**
     * <p>The timestamp when you last modified the inference experiment.</p>
     */
    inline void SetLastModifiedTime(const Aws::Utils::DateTime& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = value; }

    /**
     * <p>The timestamp when you last modified the inference experiment.</p>
     */
    inline void SetLastModifiedTime(Aws::Utils::DateTime&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::move(value); }

    /**
     * <p>The timestamp when you last modified the inference experiment.</p>
     */
    inline InferenceExperimentSummary& WithLastModifiedTime(const Aws::Utils::DateTime& value) { SetLastModifiedTime(value); return *this;}

    /**
     * <p>The timestamp when you last modified the inference experiment.</p>
     */
    inline InferenceExperimentSummary& WithLastModifiedTime(Aws::Utils::DateTime&& value) { SetLastModifiedTime(std::move(value)); return *this;}


    /**
     * <p> The ARN of the IAM role that Amazon SageMaker can assume to access model
     * artifacts and container images, and manage Amazon SageMaker Inference endpoints
     * for model deployment. </p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p> The ARN of the IAM role that Amazon SageMaker can assume to access model
     * artifacts and container images, and manage Amazon SageMaker Inference endpoints
     * for model deployment. </p>
     */
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }

    /**
     * <p> The ARN of the IAM role that Amazon SageMaker can assume to access model
     * artifacts and container images, and manage Amazon SageMaker Inference endpoints
     * for model deployment. </p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }

    /**
     * <p> The ARN of the IAM role that Amazon SageMaker can assume to access model
     * artifacts and container images, and manage Amazon SageMaker Inference endpoints
     * for model deployment. </p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }

    /**
     * <p> The ARN of the IAM role that Amazon SageMaker can assume to access model
     * artifacts and container images, and manage Amazon SageMaker Inference endpoints
     * for model deployment. </p>
     */
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }

    /**
     * <p> The ARN of the IAM role that Amazon SageMaker can assume to access model
     * artifacts and container images, and manage Amazon SageMaker Inference endpoints
     * for model deployment. </p>
     */
    inline InferenceExperimentSummary& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p> The ARN of the IAM role that Amazon SageMaker can assume to access model
     * artifacts and container images, and manage Amazon SageMaker Inference endpoints
     * for model deployment. </p>
     */
    inline InferenceExperimentSummary& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p> The ARN of the IAM role that Amazon SageMaker can assume to access model
     * artifacts and container images, and manage Amazon SageMaker Inference endpoints
     * for model deployment. </p>
     */
    inline InferenceExperimentSummary& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    InferenceExperimentType m_type;
    bool m_typeHasBeenSet = false;

    InferenceExperimentSchedule m_schedule;
    bool m_scheduleHasBeenSet = false;

    InferenceExperimentStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_statusReason;
    bool m_statusReasonHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_completionTime;
    bool m_completionTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedTime;
    bool m_lastModifiedTimeHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws

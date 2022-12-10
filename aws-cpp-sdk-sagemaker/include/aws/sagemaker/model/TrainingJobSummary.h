/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/sagemaker/model/TrainingJobStatus.h>
#include <aws/sagemaker/model/WarmPoolStatus.h>
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
   * <p>Provides summary information about a training job.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/TrainingJobSummary">AWS
   * API Reference</a></p>
   */
  class TrainingJobSummary
  {
  public:
    AWS_SAGEMAKER_API TrainingJobSummary();
    AWS_SAGEMAKER_API TrainingJobSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API TrainingJobSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the training job that you want a summary for.</p>
     */
    inline const Aws::String& GetTrainingJobName() const{ return m_trainingJobName; }

    /**
     * <p>The name of the training job that you want a summary for.</p>
     */
    inline bool TrainingJobNameHasBeenSet() const { return m_trainingJobNameHasBeenSet; }

    /**
     * <p>The name of the training job that you want a summary for.</p>
     */
    inline void SetTrainingJobName(const Aws::String& value) { m_trainingJobNameHasBeenSet = true; m_trainingJobName = value; }

    /**
     * <p>The name of the training job that you want a summary for.</p>
     */
    inline void SetTrainingJobName(Aws::String&& value) { m_trainingJobNameHasBeenSet = true; m_trainingJobName = std::move(value); }

    /**
     * <p>The name of the training job that you want a summary for.</p>
     */
    inline void SetTrainingJobName(const char* value) { m_trainingJobNameHasBeenSet = true; m_trainingJobName.assign(value); }

    /**
     * <p>The name of the training job that you want a summary for.</p>
     */
    inline TrainingJobSummary& WithTrainingJobName(const Aws::String& value) { SetTrainingJobName(value); return *this;}

    /**
     * <p>The name of the training job that you want a summary for.</p>
     */
    inline TrainingJobSummary& WithTrainingJobName(Aws::String&& value) { SetTrainingJobName(std::move(value)); return *this;}

    /**
     * <p>The name of the training job that you want a summary for.</p>
     */
    inline TrainingJobSummary& WithTrainingJobName(const char* value) { SetTrainingJobName(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the training job.</p>
     */
    inline const Aws::String& GetTrainingJobArn() const{ return m_trainingJobArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the training job.</p>
     */
    inline bool TrainingJobArnHasBeenSet() const { return m_trainingJobArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the training job.</p>
     */
    inline void SetTrainingJobArn(const Aws::String& value) { m_trainingJobArnHasBeenSet = true; m_trainingJobArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the training job.</p>
     */
    inline void SetTrainingJobArn(Aws::String&& value) { m_trainingJobArnHasBeenSet = true; m_trainingJobArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the training job.</p>
     */
    inline void SetTrainingJobArn(const char* value) { m_trainingJobArnHasBeenSet = true; m_trainingJobArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the training job.</p>
     */
    inline TrainingJobSummary& WithTrainingJobArn(const Aws::String& value) { SetTrainingJobArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the training job.</p>
     */
    inline TrainingJobSummary& WithTrainingJobArn(Aws::String&& value) { SetTrainingJobArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the training job.</p>
     */
    inline TrainingJobSummary& WithTrainingJobArn(const char* value) { SetTrainingJobArn(value); return *this;}


    /**
     * <p>A timestamp that shows when the training job was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>A timestamp that shows when the training job was created.</p>
     */
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }

    /**
     * <p>A timestamp that shows when the training job was created.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }

    /**
     * <p>A timestamp that shows when the training job was created.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }

    /**
     * <p>A timestamp that shows when the training job was created.</p>
     */
    inline TrainingJobSummary& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>A timestamp that shows when the training job was created.</p>
     */
    inline TrainingJobSummary& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p>A timestamp that shows when the training job ended. This field is set only if
     * the training job has one of the terminal statuses (<code>Completed</code>,
     * <code>Failed</code>, or <code>Stopped</code>). </p>
     */
    inline const Aws::Utils::DateTime& GetTrainingEndTime() const{ return m_trainingEndTime; }

    /**
     * <p>A timestamp that shows when the training job ended. This field is set only if
     * the training job has one of the terminal statuses (<code>Completed</code>,
     * <code>Failed</code>, or <code>Stopped</code>). </p>
     */
    inline bool TrainingEndTimeHasBeenSet() const { return m_trainingEndTimeHasBeenSet; }

    /**
     * <p>A timestamp that shows when the training job ended. This field is set only if
     * the training job has one of the terminal statuses (<code>Completed</code>,
     * <code>Failed</code>, or <code>Stopped</code>). </p>
     */
    inline void SetTrainingEndTime(const Aws::Utils::DateTime& value) { m_trainingEndTimeHasBeenSet = true; m_trainingEndTime = value; }

    /**
     * <p>A timestamp that shows when the training job ended. This field is set only if
     * the training job has one of the terminal statuses (<code>Completed</code>,
     * <code>Failed</code>, or <code>Stopped</code>). </p>
     */
    inline void SetTrainingEndTime(Aws::Utils::DateTime&& value) { m_trainingEndTimeHasBeenSet = true; m_trainingEndTime = std::move(value); }

    /**
     * <p>A timestamp that shows when the training job ended. This field is set only if
     * the training job has one of the terminal statuses (<code>Completed</code>,
     * <code>Failed</code>, or <code>Stopped</code>). </p>
     */
    inline TrainingJobSummary& WithTrainingEndTime(const Aws::Utils::DateTime& value) { SetTrainingEndTime(value); return *this;}

    /**
     * <p>A timestamp that shows when the training job ended. This field is set only if
     * the training job has one of the terminal statuses (<code>Completed</code>,
     * <code>Failed</code>, or <code>Stopped</code>). </p>
     */
    inline TrainingJobSummary& WithTrainingEndTime(Aws::Utils::DateTime&& value) { SetTrainingEndTime(std::move(value)); return *this;}


    /**
     * <p> Timestamp when the training job was last modified. </p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const{ return m_lastModifiedTime; }

    /**
     * <p> Timestamp when the training job was last modified. </p>
     */
    inline bool LastModifiedTimeHasBeenSet() const { return m_lastModifiedTimeHasBeenSet; }

    /**
     * <p> Timestamp when the training job was last modified. </p>
     */
    inline void SetLastModifiedTime(const Aws::Utils::DateTime& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = value; }

    /**
     * <p> Timestamp when the training job was last modified. </p>
     */
    inline void SetLastModifiedTime(Aws::Utils::DateTime&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::move(value); }

    /**
     * <p> Timestamp when the training job was last modified. </p>
     */
    inline TrainingJobSummary& WithLastModifiedTime(const Aws::Utils::DateTime& value) { SetLastModifiedTime(value); return *this;}

    /**
     * <p> Timestamp when the training job was last modified. </p>
     */
    inline TrainingJobSummary& WithLastModifiedTime(Aws::Utils::DateTime&& value) { SetLastModifiedTime(std::move(value)); return *this;}


    /**
     * <p>The status of the training job.</p>
     */
    inline const TrainingJobStatus& GetTrainingJobStatus() const{ return m_trainingJobStatus; }

    /**
     * <p>The status of the training job.</p>
     */
    inline bool TrainingJobStatusHasBeenSet() const { return m_trainingJobStatusHasBeenSet; }

    /**
     * <p>The status of the training job.</p>
     */
    inline void SetTrainingJobStatus(const TrainingJobStatus& value) { m_trainingJobStatusHasBeenSet = true; m_trainingJobStatus = value; }

    /**
     * <p>The status of the training job.</p>
     */
    inline void SetTrainingJobStatus(TrainingJobStatus&& value) { m_trainingJobStatusHasBeenSet = true; m_trainingJobStatus = std::move(value); }

    /**
     * <p>The status of the training job.</p>
     */
    inline TrainingJobSummary& WithTrainingJobStatus(const TrainingJobStatus& value) { SetTrainingJobStatus(value); return *this;}

    /**
     * <p>The status of the training job.</p>
     */
    inline TrainingJobSummary& WithTrainingJobStatus(TrainingJobStatus&& value) { SetTrainingJobStatus(std::move(value)); return *this;}


    /**
     * <p>The status of the warm pool associated with the training job.</p>
     */
    inline const WarmPoolStatus& GetWarmPoolStatus() const{ return m_warmPoolStatus; }

    /**
     * <p>The status of the warm pool associated with the training job.</p>
     */
    inline bool WarmPoolStatusHasBeenSet() const { return m_warmPoolStatusHasBeenSet; }

    /**
     * <p>The status of the warm pool associated with the training job.</p>
     */
    inline void SetWarmPoolStatus(const WarmPoolStatus& value) { m_warmPoolStatusHasBeenSet = true; m_warmPoolStatus = value; }

    /**
     * <p>The status of the warm pool associated with the training job.</p>
     */
    inline void SetWarmPoolStatus(WarmPoolStatus&& value) { m_warmPoolStatusHasBeenSet = true; m_warmPoolStatus = std::move(value); }

    /**
     * <p>The status of the warm pool associated with the training job.</p>
     */
    inline TrainingJobSummary& WithWarmPoolStatus(const WarmPoolStatus& value) { SetWarmPoolStatus(value); return *this;}

    /**
     * <p>The status of the warm pool associated with the training job.</p>
     */
    inline TrainingJobSummary& WithWarmPoolStatus(WarmPoolStatus&& value) { SetWarmPoolStatus(std::move(value)); return *this;}

  private:

    Aws::String m_trainingJobName;
    bool m_trainingJobNameHasBeenSet = false;

    Aws::String m_trainingJobArn;
    bool m_trainingJobArnHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_trainingEndTime;
    bool m_trainingEndTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedTime;
    bool m_lastModifiedTimeHasBeenSet = false;

    TrainingJobStatus m_trainingJobStatus;
    bool m_trainingJobStatusHasBeenSet = false;

    WarmPoolStatus m_warmPoolStatus;
    bool m_warmPoolStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws

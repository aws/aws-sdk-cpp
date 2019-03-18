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
#include <aws/sagemaker/model/TrainingJobStatus.h>
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
  class AWS_SAGEMAKER_API TrainingJobSummary
  {
  public:
    TrainingJobSummary();
    TrainingJobSummary(Aws::Utils::Json::JsonView jsonValue);
    TrainingJobSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


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

  private:

    Aws::String m_trainingJobName;
    bool m_trainingJobNameHasBeenSet;

    Aws::String m_trainingJobArn;
    bool m_trainingJobArnHasBeenSet;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet;

    Aws::Utils::DateTime m_trainingEndTime;
    bool m_trainingEndTimeHasBeenSet;

    Aws::Utils::DateTime m_lastModifiedTime;
    bool m_lastModifiedTimeHasBeenSet;

    TrainingJobStatus m_trainingJobStatus;
    bool m_trainingJobStatusHasBeenSet;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws

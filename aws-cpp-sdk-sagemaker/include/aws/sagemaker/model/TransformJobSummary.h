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
#include <aws/sagemaker/model/TransformJobStatus.h>
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
   * <p>Provides a summary of a transform job. Multiple
   * <code>TransformJobSummary</code> objects are returned as a list after in
   * response to a <a>ListTransformJobs</a> call.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/TransformJobSummary">AWS
   * API Reference</a></p>
   */
  class AWS_SAGEMAKER_API TransformJobSummary
  {
  public:
    TransformJobSummary();
    TransformJobSummary(Aws::Utils::Json::JsonView jsonValue);
    TransformJobSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the transform job.</p>
     */
    inline const Aws::String& GetTransformJobName() const{ return m_transformJobName; }

    /**
     * <p>The name of the transform job.</p>
     */
    inline bool TransformJobNameHasBeenSet() const { return m_transformJobNameHasBeenSet; }

    /**
     * <p>The name of the transform job.</p>
     */
    inline void SetTransformJobName(const Aws::String& value) { m_transformJobNameHasBeenSet = true; m_transformJobName = value; }

    /**
     * <p>The name of the transform job.</p>
     */
    inline void SetTransformJobName(Aws::String&& value) { m_transformJobNameHasBeenSet = true; m_transformJobName = std::move(value); }

    /**
     * <p>The name of the transform job.</p>
     */
    inline void SetTransformJobName(const char* value) { m_transformJobNameHasBeenSet = true; m_transformJobName.assign(value); }

    /**
     * <p>The name of the transform job.</p>
     */
    inline TransformJobSummary& WithTransformJobName(const Aws::String& value) { SetTransformJobName(value); return *this;}

    /**
     * <p>The name of the transform job.</p>
     */
    inline TransformJobSummary& WithTransformJobName(Aws::String&& value) { SetTransformJobName(std::move(value)); return *this;}

    /**
     * <p>The name of the transform job.</p>
     */
    inline TransformJobSummary& WithTransformJobName(const char* value) { SetTransformJobName(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the transform job.</p>
     */
    inline const Aws::String& GetTransformJobArn() const{ return m_transformJobArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the transform job.</p>
     */
    inline bool TransformJobArnHasBeenSet() const { return m_transformJobArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the transform job.</p>
     */
    inline void SetTransformJobArn(const Aws::String& value) { m_transformJobArnHasBeenSet = true; m_transformJobArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the transform job.</p>
     */
    inline void SetTransformJobArn(Aws::String&& value) { m_transformJobArnHasBeenSet = true; m_transformJobArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the transform job.</p>
     */
    inline void SetTransformJobArn(const char* value) { m_transformJobArnHasBeenSet = true; m_transformJobArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the transform job.</p>
     */
    inline TransformJobSummary& WithTransformJobArn(const Aws::String& value) { SetTransformJobArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the transform job.</p>
     */
    inline TransformJobSummary& WithTransformJobArn(Aws::String&& value) { SetTransformJobArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the transform job.</p>
     */
    inline TransformJobSummary& WithTransformJobArn(const char* value) { SetTransformJobArn(value); return *this;}


    /**
     * <p>A timestamp that shows when the transform Job was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>A timestamp that shows when the transform Job was created.</p>
     */
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }

    /**
     * <p>A timestamp that shows when the transform Job was created.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }

    /**
     * <p>A timestamp that shows when the transform Job was created.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }

    /**
     * <p>A timestamp that shows when the transform Job was created.</p>
     */
    inline TransformJobSummary& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>A timestamp that shows when the transform Job was created.</p>
     */
    inline TransformJobSummary& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p>Indicates when the transform job ends on compute instances. For successful
     * jobs and stopped jobs, this is the exact time recorded after the results are
     * uploaded. For failed jobs, this is when Amazon SageMaker detected that the job
     * failed.</p>
     */
    inline const Aws::Utils::DateTime& GetTransformEndTime() const{ return m_transformEndTime; }

    /**
     * <p>Indicates when the transform job ends on compute instances. For successful
     * jobs and stopped jobs, this is the exact time recorded after the results are
     * uploaded. For failed jobs, this is when Amazon SageMaker detected that the job
     * failed.</p>
     */
    inline bool TransformEndTimeHasBeenSet() const { return m_transformEndTimeHasBeenSet; }

    /**
     * <p>Indicates when the transform job ends on compute instances. For successful
     * jobs and stopped jobs, this is the exact time recorded after the results are
     * uploaded. For failed jobs, this is when Amazon SageMaker detected that the job
     * failed.</p>
     */
    inline void SetTransformEndTime(const Aws::Utils::DateTime& value) { m_transformEndTimeHasBeenSet = true; m_transformEndTime = value; }

    /**
     * <p>Indicates when the transform job ends on compute instances. For successful
     * jobs and stopped jobs, this is the exact time recorded after the results are
     * uploaded. For failed jobs, this is when Amazon SageMaker detected that the job
     * failed.</p>
     */
    inline void SetTransformEndTime(Aws::Utils::DateTime&& value) { m_transformEndTimeHasBeenSet = true; m_transformEndTime = std::move(value); }

    /**
     * <p>Indicates when the transform job ends on compute instances. For successful
     * jobs and stopped jobs, this is the exact time recorded after the results are
     * uploaded. For failed jobs, this is when Amazon SageMaker detected that the job
     * failed.</p>
     */
    inline TransformJobSummary& WithTransformEndTime(const Aws::Utils::DateTime& value) { SetTransformEndTime(value); return *this;}

    /**
     * <p>Indicates when the transform job ends on compute instances. For successful
     * jobs and stopped jobs, this is the exact time recorded after the results are
     * uploaded. For failed jobs, this is when Amazon SageMaker detected that the job
     * failed.</p>
     */
    inline TransformJobSummary& WithTransformEndTime(Aws::Utils::DateTime&& value) { SetTransformEndTime(std::move(value)); return *this;}


    /**
     * <p>Indicates when the transform job was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const{ return m_lastModifiedTime; }

    /**
     * <p>Indicates when the transform job was last modified.</p>
     */
    inline bool LastModifiedTimeHasBeenSet() const { return m_lastModifiedTimeHasBeenSet; }

    /**
     * <p>Indicates when the transform job was last modified.</p>
     */
    inline void SetLastModifiedTime(const Aws::Utils::DateTime& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = value; }

    /**
     * <p>Indicates when the transform job was last modified.</p>
     */
    inline void SetLastModifiedTime(Aws::Utils::DateTime&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::move(value); }

    /**
     * <p>Indicates when the transform job was last modified.</p>
     */
    inline TransformJobSummary& WithLastModifiedTime(const Aws::Utils::DateTime& value) { SetLastModifiedTime(value); return *this;}

    /**
     * <p>Indicates when the transform job was last modified.</p>
     */
    inline TransformJobSummary& WithLastModifiedTime(Aws::Utils::DateTime&& value) { SetLastModifiedTime(std::move(value)); return *this;}


    /**
     * <p>The status of the transform job.</p>
     */
    inline const TransformJobStatus& GetTransformJobStatus() const{ return m_transformJobStatus; }

    /**
     * <p>The status of the transform job.</p>
     */
    inline bool TransformJobStatusHasBeenSet() const { return m_transformJobStatusHasBeenSet; }

    /**
     * <p>The status of the transform job.</p>
     */
    inline void SetTransformJobStatus(const TransformJobStatus& value) { m_transformJobStatusHasBeenSet = true; m_transformJobStatus = value; }

    /**
     * <p>The status of the transform job.</p>
     */
    inline void SetTransformJobStatus(TransformJobStatus&& value) { m_transformJobStatusHasBeenSet = true; m_transformJobStatus = std::move(value); }

    /**
     * <p>The status of the transform job.</p>
     */
    inline TransformJobSummary& WithTransformJobStatus(const TransformJobStatus& value) { SetTransformJobStatus(value); return *this;}

    /**
     * <p>The status of the transform job.</p>
     */
    inline TransformJobSummary& WithTransformJobStatus(TransformJobStatus&& value) { SetTransformJobStatus(std::move(value)); return *this;}


    /**
     * <p>If the transform job failed, the reason it failed.</p>
     */
    inline const Aws::String& GetFailureReason() const{ return m_failureReason; }

    /**
     * <p>If the transform job failed, the reason it failed.</p>
     */
    inline bool FailureReasonHasBeenSet() const { return m_failureReasonHasBeenSet; }

    /**
     * <p>If the transform job failed, the reason it failed.</p>
     */
    inline void SetFailureReason(const Aws::String& value) { m_failureReasonHasBeenSet = true; m_failureReason = value; }

    /**
     * <p>If the transform job failed, the reason it failed.</p>
     */
    inline void SetFailureReason(Aws::String&& value) { m_failureReasonHasBeenSet = true; m_failureReason = std::move(value); }

    /**
     * <p>If the transform job failed, the reason it failed.</p>
     */
    inline void SetFailureReason(const char* value) { m_failureReasonHasBeenSet = true; m_failureReason.assign(value); }

    /**
     * <p>If the transform job failed, the reason it failed.</p>
     */
    inline TransformJobSummary& WithFailureReason(const Aws::String& value) { SetFailureReason(value); return *this;}

    /**
     * <p>If the transform job failed, the reason it failed.</p>
     */
    inline TransformJobSummary& WithFailureReason(Aws::String&& value) { SetFailureReason(std::move(value)); return *this;}

    /**
     * <p>If the transform job failed, the reason it failed.</p>
     */
    inline TransformJobSummary& WithFailureReason(const char* value) { SetFailureReason(value); return *this;}

  private:

    Aws::String m_transformJobName;
    bool m_transformJobNameHasBeenSet;

    Aws::String m_transformJobArn;
    bool m_transformJobArnHasBeenSet;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet;

    Aws::Utils::DateTime m_transformEndTime;
    bool m_transformEndTimeHasBeenSet;

    Aws::Utils::DateTime m_lastModifiedTime;
    bool m_lastModifiedTimeHasBeenSet;

    TransformJobStatus m_transformJobStatus;
    bool m_transformJobStatusHasBeenSet;

    Aws::String m_failureReason;
    bool m_failureReasonHasBeenSet;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws

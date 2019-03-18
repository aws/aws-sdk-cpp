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
#include <aws/sagemaker/model/TargetDevice.h>
#include <aws/sagemaker/model/CompilationJobStatus.h>
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
   * <p>A summary of a model compilation job.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/CompilationJobSummary">AWS
   * API Reference</a></p>
   */
  class AWS_SAGEMAKER_API CompilationJobSummary
  {
  public:
    CompilationJobSummary();
    CompilationJobSummary(Aws::Utils::Json::JsonView jsonValue);
    CompilationJobSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the model compilation job that you want a summary for.</p>
     */
    inline const Aws::String& GetCompilationJobName() const{ return m_compilationJobName; }

    /**
     * <p>The name of the model compilation job that you want a summary for.</p>
     */
    inline bool CompilationJobNameHasBeenSet() const { return m_compilationJobNameHasBeenSet; }

    /**
     * <p>The name of the model compilation job that you want a summary for.</p>
     */
    inline void SetCompilationJobName(const Aws::String& value) { m_compilationJobNameHasBeenSet = true; m_compilationJobName = value; }

    /**
     * <p>The name of the model compilation job that you want a summary for.</p>
     */
    inline void SetCompilationJobName(Aws::String&& value) { m_compilationJobNameHasBeenSet = true; m_compilationJobName = std::move(value); }

    /**
     * <p>The name of the model compilation job that you want a summary for.</p>
     */
    inline void SetCompilationJobName(const char* value) { m_compilationJobNameHasBeenSet = true; m_compilationJobName.assign(value); }

    /**
     * <p>The name of the model compilation job that you want a summary for.</p>
     */
    inline CompilationJobSummary& WithCompilationJobName(const Aws::String& value) { SetCompilationJobName(value); return *this;}

    /**
     * <p>The name of the model compilation job that you want a summary for.</p>
     */
    inline CompilationJobSummary& WithCompilationJobName(Aws::String&& value) { SetCompilationJobName(std::move(value)); return *this;}

    /**
     * <p>The name of the model compilation job that you want a summary for.</p>
     */
    inline CompilationJobSummary& WithCompilationJobName(const char* value) { SetCompilationJobName(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the model compilation job.</p>
     */
    inline const Aws::String& GetCompilationJobArn() const{ return m_compilationJobArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the model compilation job.</p>
     */
    inline bool CompilationJobArnHasBeenSet() const { return m_compilationJobArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the model compilation job.</p>
     */
    inline void SetCompilationJobArn(const Aws::String& value) { m_compilationJobArnHasBeenSet = true; m_compilationJobArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the model compilation job.</p>
     */
    inline void SetCompilationJobArn(Aws::String&& value) { m_compilationJobArnHasBeenSet = true; m_compilationJobArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the model compilation job.</p>
     */
    inline void SetCompilationJobArn(const char* value) { m_compilationJobArnHasBeenSet = true; m_compilationJobArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the model compilation job.</p>
     */
    inline CompilationJobSummary& WithCompilationJobArn(const Aws::String& value) { SetCompilationJobArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the model compilation job.</p>
     */
    inline CompilationJobSummary& WithCompilationJobArn(Aws::String&& value) { SetCompilationJobArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the model compilation job.</p>
     */
    inline CompilationJobSummary& WithCompilationJobArn(const char* value) { SetCompilationJobArn(value); return *this;}


    /**
     * <p>The time when the model compilation job was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>The time when the model compilation job was created.</p>
     */
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }

    /**
     * <p>The time when the model compilation job was created.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }

    /**
     * <p>The time when the model compilation job was created.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }

    /**
     * <p>The time when the model compilation job was created.</p>
     */
    inline CompilationJobSummary& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>The time when the model compilation job was created.</p>
     */
    inline CompilationJobSummary& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p>The time when the model compilation job started.</p>
     */
    inline const Aws::Utils::DateTime& GetCompilationStartTime() const{ return m_compilationStartTime; }

    /**
     * <p>The time when the model compilation job started.</p>
     */
    inline bool CompilationStartTimeHasBeenSet() const { return m_compilationStartTimeHasBeenSet; }

    /**
     * <p>The time when the model compilation job started.</p>
     */
    inline void SetCompilationStartTime(const Aws::Utils::DateTime& value) { m_compilationStartTimeHasBeenSet = true; m_compilationStartTime = value; }

    /**
     * <p>The time when the model compilation job started.</p>
     */
    inline void SetCompilationStartTime(Aws::Utils::DateTime&& value) { m_compilationStartTimeHasBeenSet = true; m_compilationStartTime = std::move(value); }

    /**
     * <p>The time when the model compilation job started.</p>
     */
    inline CompilationJobSummary& WithCompilationStartTime(const Aws::Utils::DateTime& value) { SetCompilationStartTime(value); return *this;}

    /**
     * <p>The time when the model compilation job started.</p>
     */
    inline CompilationJobSummary& WithCompilationStartTime(Aws::Utils::DateTime&& value) { SetCompilationStartTime(std::move(value)); return *this;}


    /**
     * <p>The time when the model compilation job completed.</p>
     */
    inline const Aws::Utils::DateTime& GetCompilationEndTime() const{ return m_compilationEndTime; }

    /**
     * <p>The time when the model compilation job completed.</p>
     */
    inline bool CompilationEndTimeHasBeenSet() const { return m_compilationEndTimeHasBeenSet; }

    /**
     * <p>The time when the model compilation job completed.</p>
     */
    inline void SetCompilationEndTime(const Aws::Utils::DateTime& value) { m_compilationEndTimeHasBeenSet = true; m_compilationEndTime = value; }

    /**
     * <p>The time when the model compilation job completed.</p>
     */
    inline void SetCompilationEndTime(Aws::Utils::DateTime&& value) { m_compilationEndTimeHasBeenSet = true; m_compilationEndTime = std::move(value); }

    /**
     * <p>The time when the model compilation job completed.</p>
     */
    inline CompilationJobSummary& WithCompilationEndTime(const Aws::Utils::DateTime& value) { SetCompilationEndTime(value); return *this;}

    /**
     * <p>The time when the model compilation job completed.</p>
     */
    inline CompilationJobSummary& WithCompilationEndTime(Aws::Utils::DateTime&& value) { SetCompilationEndTime(std::move(value)); return *this;}


    /**
     * <p>The type of device that the model will run on after compilation has
     * completed.</p>
     */
    inline const TargetDevice& GetCompilationTargetDevice() const{ return m_compilationTargetDevice; }

    /**
     * <p>The type of device that the model will run on after compilation has
     * completed.</p>
     */
    inline bool CompilationTargetDeviceHasBeenSet() const { return m_compilationTargetDeviceHasBeenSet; }

    /**
     * <p>The type of device that the model will run on after compilation has
     * completed.</p>
     */
    inline void SetCompilationTargetDevice(const TargetDevice& value) { m_compilationTargetDeviceHasBeenSet = true; m_compilationTargetDevice = value; }

    /**
     * <p>The type of device that the model will run on after compilation has
     * completed.</p>
     */
    inline void SetCompilationTargetDevice(TargetDevice&& value) { m_compilationTargetDeviceHasBeenSet = true; m_compilationTargetDevice = std::move(value); }

    /**
     * <p>The type of device that the model will run on after compilation has
     * completed.</p>
     */
    inline CompilationJobSummary& WithCompilationTargetDevice(const TargetDevice& value) { SetCompilationTargetDevice(value); return *this;}

    /**
     * <p>The type of device that the model will run on after compilation has
     * completed.</p>
     */
    inline CompilationJobSummary& WithCompilationTargetDevice(TargetDevice&& value) { SetCompilationTargetDevice(std::move(value)); return *this;}


    /**
     * <p>The time when the model compilation job was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const{ return m_lastModifiedTime; }

    /**
     * <p>The time when the model compilation job was last modified.</p>
     */
    inline bool LastModifiedTimeHasBeenSet() const { return m_lastModifiedTimeHasBeenSet; }

    /**
     * <p>The time when the model compilation job was last modified.</p>
     */
    inline void SetLastModifiedTime(const Aws::Utils::DateTime& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = value; }

    /**
     * <p>The time when the model compilation job was last modified.</p>
     */
    inline void SetLastModifiedTime(Aws::Utils::DateTime&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::move(value); }

    /**
     * <p>The time when the model compilation job was last modified.</p>
     */
    inline CompilationJobSummary& WithLastModifiedTime(const Aws::Utils::DateTime& value) { SetLastModifiedTime(value); return *this;}

    /**
     * <p>The time when the model compilation job was last modified.</p>
     */
    inline CompilationJobSummary& WithLastModifiedTime(Aws::Utils::DateTime&& value) { SetLastModifiedTime(std::move(value)); return *this;}


    /**
     * <p>The status of the model compilation job.</p>
     */
    inline const CompilationJobStatus& GetCompilationJobStatus() const{ return m_compilationJobStatus; }

    /**
     * <p>The status of the model compilation job.</p>
     */
    inline bool CompilationJobStatusHasBeenSet() const { return m_compilationJobStatusHasBeenSet; }

    /**
     * <p>The status of the model compilation job.</p>
     */
    inline void SetCompilationJobStatus(const CompilationJobStatus& value) { m_compilationJobStatusHasBeenSet = true; m_compilationJobStatus = value; }

    /**
     * <p>The status of the model compilation job.</p>
     */
    inline void SetCompilationJobStatus(CompilationJobStatus&& value) { m_compilationJobStatusHasBeenSet = true; m_compilationJobStatus = std::move(value); }

    /**
     * <p>The status of the model compilation job.</p>
     */
    inline CompilationJobSummary& WithCompilationJobStatus(const CompilationJobStatus& value) { SetCompilationJobStatus(value); return *this;}

    /**
     * <p>The status of the model compilation job.</p>
     */
    inline CompilationJobSummary& WithCompilationJobStatus(CompilationJobStatus&& value) { SetCompilationJobStatus(std::move(value)); return *this;}

  private:

    Aws::String m_compilationJobName;
    bool m_compilationJobNameHasBeenSet;

    Aws::String m_compilationJobArn;
    bool m_compilationJobArnHasBeenSet;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet;

    Aws::Utils::DateTime m_compilationStartTime;
    bool m_compilationStartTimeHasBeenSet;

    Aws::Utils::DateTime m_compilationEndTime;
    bool m_compilationEndTimeHasBeenSet;

    TargetDevice m_compilationTargetDevice;
    bool m_compilationTargetDeviceHasBeenSet;

    Aws::Utils::DateTime m_lastModifiedTime;
    bool m_lastModifiedTimeHasBeenSet;

    CompilationJobStatus m_compilationJobStatus;
    bool m_compilationJobStatusHasBeenSet;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws

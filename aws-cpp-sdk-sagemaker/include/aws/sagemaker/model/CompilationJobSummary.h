/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/sagemaker/model/TargetDevice.h>
#include <aws/sagemaker/model/TargetPlatformOs.h>
#include <aws/sagemaker/model/TargetPlatformArch.h>
#include <aws/sagemaker/model/TargetPlatformAccelerator.h>
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
  class CompilationJobSummary
  {
  public:
    AWS_SAGEMAKER_API CompilationJobSummary();
    AWS_SAGEMAKER_API CompilationJobSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API CompilationJobSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


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
     * <p>The type of device that the model will run on after the compilation job has
     * completed.</p>
     */
    inline const TargetDevice& GetCompilationTargetDevice() const{ return m_compilationTargetDevice; }

    /**
     * <p>The type of device that the model will run on after the compilation job has
     * completed.</p>
     */
    inline bool CompilationTargetDeviceHasBeenSet() const { return m_compilationTargetDeviceHasBeenSet; }

    /**
     * <p>The type of device that the model will run on after the compilation job has
     * completed.</p>
     */
    inline void SetCompilationTargetDevice(const TargetDevice& value) { m_compilationTargetDeviceHasBeenSet = true; m_compilationTargetDevice = value; }

    /**
     * <p>The type of device that the model will run on after the compilation job has
     * completed.</p>
     */
    inline void SetCompilationTargetDevice(TargetDevice&& value) { m_compilationTargetDeviceHasBeenSet = true; m_compilationTargetDevice = std::move(value); }

    /**
     * <p>The type of device that the model will run on after the compilation job has
     * completed.</p>
     */
    inline CompilationJobSummary& WithCompilationTargetDevice(const TargetDevice& value) { SetCompilationTargetDevice(value); return *this;}

    /**
     * <p>The type of device that the model will run on after the compilation job has
     * completed.</p>
     */
    inline CompilationJobSummary& WithCompilationTargetDevice(TargetDevice&& value) { SetCompilationTargetDevice(std::move(value)); return *this;}


    /**
     * <p>The type of OS that the model will run on after the compilation job has
     * completed.</p>
     */
    inline const TargetPlatformOs& GetCompilationTargetPlatformOs() const{ return m_compilationTargetPlatformOs; }

    /**
     * <p>The type of OS that the model will run on after the compilation job has
     * completed.</p>
     */
    inline bool CompilationTargetPlatformOsHasBeenSet() const { return m_compilationTargetPlatformOsHasBeenSet; }

    /**
     * <p>The type of OS that the model will run on after the compilation job has
     * completed.</p>
     */
    inline void SetCompilationTargetPlatformOs(const TargetPlatformOs& value) { m_compilationTargetPlatformOsHasBeenSet = true; m_compilationTargetPlatformOs = value; }

    /**
     * <p>The type of OS that the model will run on after the compilation job has
     * completed.</p>
     */
    inline void SetCompilationTargetPlatformOs(TargetPlatformOs&& value) { m_compilationTargetPlatformOsHasBeenSet = true; m_compilationTargetPlatformOs = std::move(value); }

    /**
     * <p>The type of OS that the model will run on after the compilation job has
     * completed.</p>
     */
    inline CompilationJobSummary& WithCompilationTargetPlatformOs(const TargetPlatformOs& value) { SetCompilationTargetPlatformOs(value); return *this;}

    /**
     * <p>The type of OS that the model will run on after the compilation job has
     * completed.</p>
     */
    inline CompilationJobSummary& WithCompilationTargetPlatformOs(TargetPlatformOs&& value) { SetCompilationTargetPlatformOs(std::move(value)); return *this;}


    /**
     * <p>The type of architecture that the model will run on after the compilation job
     * has completed.</p>
     */
    inline const TargetPlatformArch& GetCompilationTargetPlatformArch() const{ return m_compilationTargetPlatformArch; }

    /**
     * <p>The type of architecture that the model will run on after the compilation job
     * has completed.</p>
     */
    inline bool CompilationTargetPlatformArchHasBeenSet() const { return m_compilationTargetPlatformArchHasBeenSet; }

    /**
     * <p>The type of architecture that the model will run on after the compilation job
     * has completed.</p>
     */
    inline void SetCompilationTargetPlatformArch(const TargetPlatformArch& value) { m_compilationTargetPlatformArchHasBeenSet = true; m_compilationTargetPlatformArch = value; }

    /**
     * <p>The type of architecture that the model will run on after the compilation job
     * has completed.</p>
     */
    inline void SetCompilationTargetPlatformArch(TargetPlatformArch&& value) { m_compilationTargetPlatformArchHasBeenSet = true; m_compilationTargetPlatformArch = std::move(value); }

    /**
     * <p>The type of architecture that the model will run on after the compilation job
     * has completed.</p>
     */
    inline CompilationJobSummary& WithCompilationTargetPlatformArch(const TargetPlatformArch& value) { SetCompilationTargetPlatformArch(value); return *this;}

    /**
     * <p>The type of architecture that the model will run on after the compilation job
     * has completed.</p>
     */
    inline CompilationJobSummary& WithCompilationTargetPlatformArch(TargetPlatformArch&& value) { SetCompilationTargetPlatformArch(std::move(value)); return *this;}


    /**
     * <p>The type of accelerator that the model will run on after the compilation job
     * has completed.</p>
     */
    inline const TargetPlatformAccelerator& GetCompilationTargetPlatformAccelerator() const{ return m_compilationTargetPlatformAccelerator; }

    /**
     * <p>The type of accelerator that the model will run on after the compilation job
     * has completed.</p>
     */
    inline bool CompilationTargetPlatformAcceleratorHasBeenSet() const { return m_compilationTargetPlatformAcceleratorHasBeenSet; }

    /**
     * <p>The type of accelerator that the model will run on after the compilation job
     * has completed.</p>
     */
    inline void SetCompilationTargetPlatformAccelerator(const TargetPlatformAccelerator& value) { m_compilationTargetPlatformAcceleratorHasBeenSet = true; m_compilationTargetPlatformAccelerator = value; }

    /**
     * <p>The type of accelerator that the model will run on after the compilation job
     * has completed.</p>
     */
    inline void SetCompilationTargetPlatformAccelerator(TargetPlatformAccelerator&& value) { m_compilationTargetPlatformAcceleratorHasBeenSet = true; m_compilationTargetPlatformAccelerator = std::move(value); }

    /**
     * <p>The type of accelerator that the model will run on after the compilation job
     * has completed.</p>
     */
    inline CompilationJobSummary& WithCompilationTargetPlatformAccelerator(const TargetPlatformAccelerator& value) { SetCompilationTargetPlatformAccelerator(value); return *this;}

    /**
     * <p>The type of accelerator that the model will run on after the compilation job
     * has completed.</p>
     */
    inline CompilationJobSummary& WithCompilationTargetPlatformAccelerator(TargetPlatformAccelerator&& value) { SetCompilationTargetPlatformAccelerator(std::move(value)); return *this;}


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
    bool m_compilationJobNameHasBeenSet = false;

    Aws::String m_compilationJobArn;
    bool m_compilationJobArnHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_compilationStartTime;
    bool m_compilationStartTimeHasBeenSet = false;

    Aws::Utils::DateTime m_compilationEndTime;
    bool m_compilationEndTimeHasBeenSet = false;

    TargetDevice m_compilationTargetDevice;
    bool m_compilationTargetDeviceHasBeenSet = false;

    TargetPlatformOs m_compilationTargetPlatformOs;
    bool m_compilationTargetPlatformOsHasBeenSet = false;

    TargetPlatformArch m_compilationTargetPlatformArch;
    bool m_compilationTargetPlatformArchHasBeenSet = false;

    TargetPlatformAccelerator m_compilationTargetPlatformAccelerator;
    bool m_compilationTargetPlatformAcceleratorHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedTime;
    bool m_lastModifiedTimeHasBeenSet = false;

    CompilationJobStatus m_compilationJobStatus;
    bool m_compilationJobStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/panorama/Panorama_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/panorama/model/JobType.h>
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
namespace Panorama
{
namespace Model
{

  /**
   * <p>A job that runs on a device.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/panorama-2019-07-24/DeviceJob">AWS
   * API Reference</a></p>
   */
  class DeviceJob
  {
  public:
    AWS_PANORAMA_API DeviceJob();
    AWS_PANORAMA_API DeviceJob(Aws::Utils::Json::JsonView jsonValue);
    AWS_PANORAMA_API DeviceJob& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PANORAMA_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>When the job was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTime() const{ return m_createdTime; }

    /**
     * <p>When the job was created.</p>
     */
    inline bool CreatedTimeHasBeenSet() const { return m_createdTimeHasBeenSet; }

    /**
     * <p>When the job was created.</p>
     */
    inline void SetCreatedTime(const Aws::Utils::DateTime& value) { m_createdTimeHasBeenSet = true; m_createdTime = value; }

    /**
     * <p>When the job was created.</p>
     */
    inline void SetCreatedTime(Aws::Utils::DateTime&& value) { m_createdTimeHasBeenSet = true; m_createdTime = std::move(value); }

    /**
     * <p>When the job was created.</p>
     */
    inline DeviceJob& WithCreatedTime(const Aws::Utils::DateTime& value) { SetCreatedTime(value); return *this;}

    /**
     * <p>When the job was created.</p>
     */
    inline DeviceJob& WithCreatedTime(Aws::Utils::DateTime&& value) { SetCreatedTime(std::move(value)); return *this;}


    /**
     * <p>The ID of the target device.</p>
     */
    inline const Aws::String& GetDeviceId() const{ return m_deviceId; }

    /**
     * <p>The ID of the target device.</p>
     */
    inline bool DeviceIdHasBeenSet() const { return m_deviceIdHasBeenSet; }

    /**
     * <p>The ID of the target device.</p>
     */
    inline void SetDeviceId(const Aws::String& value) { m_deviceIdHasBeenSet = true; m_deviceId = value; }

    /**
     * <p>The ID of the target device.</p>
     */
    inline void SetDeviceId(Aws::String&& value) { m_deviceIdHasBeenSet = true; m_deviceId = std::move(value); }

    /**
     * <p>The ID of the target device.</p>
     */
    inline void SetDeviceId(const char* value) { m_deviceIdHasBeenSet = true; m_deviceId.assign(value); }

    /**
     * <p>The ID of the target device.</p>
     */
    inline DeviceJob& WithDeviceId(const Aws::String& value) { SetDeviceId(value); return *this;}

    /**
     * <p>The ID of the target device.</p>
     */
    inline DeviceJob& WithDeviceId(Aws::String&& value) { SetDeviceId(std::move(value)); return *this;}

    /**
     * <p>The ID of the target device.</p>
     */
    inline DeviceJob& WithDeviceId(const char* value) { SetDeviceId(value); return *this;}


    /**
     * <p>The name of the target device</p>
     */
    inline const Aws::String& GetDeviceName() const{ return m_deviceName; }

    /**
     * <p>The name of the target device</p>
     */
    inline bool DeviceNameHasBeenSet() const { return m_deviceNameHasBeenSet; }

    /**
     * <p>The name of the target device</p>
     */
    inline void SetDeviceName(const Aws::String& value) { m_deviceNameHasBeenSet = true; m_deviceName = value; }

    /**
     * <p>The name of the target device</p>
     */
    inline void SetDeviceName(Aws::String&& value) { m_deviceNameHasBeenSet = true; m_deviceName = std::move(value); }

    /**
     * <p>The name of the target device</p>
     */
    inline void SetDeviceName(const char* value) { m_deviceNameHasBeenSet = true; m_deviceName.assign(value); }

    /**
     * <p>The name of the target device</p>
     */
    inline DeviceJob& WithDeviceName(const Aws::String& value) { SetDeviceName(value); return *this;}

    /**
     * <p>The name of the target device</p>
     */
    inline DeviceJob& WithDeviceName(Aws::String&& value) { SetDeviceName(std::move(value)); return *this;}

    /**
     * <p>The name of the target device</p>
     */
    inline DeviceJob& WithDeviceName(const char* value) { SetDeviceName(value); return *this;}


    /**
     * <p>The job's ID.</p>
     */
    inline const Aws::String& GetJobId() const{ return m_jobId; }

    /**
     * <p>The job's ID.</p>
     */
    inline bool JobIdHasBeenSet() const { return m_jobIdHasBeenSet; }

    /**
     * <p>The job's ID.</p>
     */
    inline void SetJobId(const Aws::String& value) { m_jobIdHasBeenSet = true; m_jobId = value; }

    /**
     * <p>The job's ID.</p>
     */
    inline void SetJobId(Aws::String&& value) { m_jobIdHasBeenSet = true; m_jobId = std::move(value); }

    /**
     * <p>The job's ID.</p>
     */
    inline void SetJobId(const char* value) { m_jobIdHasBeenSet = true; m_jobId.assign(value); }

    /**
     * <p>The job's ID.</p>
     */
    inline DeviceJob& WithJobId(const Aws::String& value) { SetJobId(value); return *this;}

    /**
     * <p>The job's ID.</p>
     */
    inline DeviceJob& WithJobId(Aws::String&& value) { SetJobId(std::move(value)); return *this;}

    /**
     * <p>The job's ID.</p>
     */
    inline DeviceJob& WithJobId(const char* value) { SetJobId(value); return *this;}


    /**
     * <p>The job's type.</p>
     */
    inline const JobType& GetJobType() const{ return m_jobType; }

    /**
     * <p>The job's type.</p>
     */
    inline bool JobTypeHasBeenSet() const { return m_jobTypeHasBeenSet; }

    /**
     * <p>The job's type.</p>
     */
    inline void SetJobType(const JobType& value) { m_jobTypeHasBeenSet = true; m_jobType = value; }

    /**
     * <p>The job's type.</p>
     */
    inline void SetJobType(JobType&& value) { m_jobTypeHasBeenSet = true; m_jobType = std::move(value); }

    /**
     * <p>The job's type.</p>
     */
    inline DeviceJob& WithJobType(const JobType& value) { SetJobType(value); return *this;}

    /**
     * <p>The job's type.</p>
     */
    inline DeviceJob& WithJobType(JobType&& value) { SetJobType(std::move(value)); return *this;}

  private:

    Aws::Utils::DateTime m_createdTime;
    bool m_createdTimeHasBeenSet = false;

    Aws::String m_deviceId;
    bool m_deviceIdHasBeenSet = false;

    Aws::String m_deviceName;
    bool m_deviceNameHasBeenSet = false;

    Aws::String m_jobId;
    bool m_jobIdHasBeenSet = false;

    JobType m_jobType;
    bool m_jobTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace Panorama
} // namespace Aws

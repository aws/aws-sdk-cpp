/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/panorama/Panorama_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/panorama/model/DeviceType.h>
#include <aws/panorama/model/JobType.h>
#include <aws/panorama/model/UpdateProgress.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Panorama
{
namespace Model
{
  class DescribeDeviceJobResult
  {
  public:
    AWS_PANORAMA_API DescribeDeviceJobResult();
    AWS_PANORAMA_API DescribeDeviceJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PANORAMA_API DescribeDeviceJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>When the job was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTime() const{ return m_createdTime; }

    /**
     * <p>When the job was created.</p>
     */
    inline void SetCreatedTime(const Aws::Utils::DateTime& value) { m_createdTime = value; }

    /**
     * <p>When the job was created.</p>
     */
    inline void SetCreatedTime(Aws::Utils::DateTime&& value) { m_createdTime = std::move(value); }

    /**
     * <p>When the job was created.</p>
     */
    inline DescribeDeviceJobResult& WithCreatedTime(const Aws::Utils::DateTime& value) { SetCreatedTime(value); return *this;}

    /**
     * <p>When the job was created.</p>
     */
    inline DescribeDeviceJobResult& WithCreatedTime(Aws::Utils::DateTime&& value) { SetCreatedTime(std::move(value)); return *this;}


    /**
     * <p>The device's ARN.</p>
     */
    inline const Aws::String& GetDeviceArn() const{ return m_deviceArn; }

    /**
     * <p>The device's ARN.</p>
     */
    inline void SetDeviceArn(const Aws::String& value) { m_deviceArn = value; }

    /**
     * <p>The device's ARN.</p>
     */
    inline void SetDeviceArn(Aws::String&& value) { m_deviceArn = std::move(value); }

    /**
     * <p>The device's ARN.</p>
     */
    inline void SetDeviceArn(const char* value) { m_deviceArn.assign(value); }

    /**
     * <p>The device's ARN.</p>
     */
    inline DescribeDeviceJobResult& WithDeviceArn(const Aws::String& value) { SetDeviceArn(value); return *this;}

    /**
     * <p>The device's ARN.</p>
     */
    inline DescribeDeviceJobResult& WithDeviceArn(Aws::String&& value) { SetDeviceArn(std::move(value)); return *this;}

    /**
     * <p>The device's ARN.</p>
     */
    inline DescribeDeviceJobResult& WithDeviceArn(const char* value) { SetDeviceArn(value); return *this;}


    /**
     * <p>The device's ID.</p>
     */
    inline const Aws::String& GetDeviceId() const{ return m_deviceId; }

    /**
     * <p>The device's ID.</p>
     */
    inline void SetDeviceId(const Aws::String& value) { m_deviceId = value; }

    /**
     * <p>The device's ID.</p>
     */
    inline void SetDeviceId(Aws::String&& value) { m_deviceId = std::move(value); }

    /**
     * <p>The device's ID.</p>
     */
    inline void SetDeviceId(const char* value) { m_deviceId.assign(value); }

    /**
     * <p>The device's ID.</p>
     */
    inline DescribeDeviceJobResult& WithDeviceId(const Aws::String& value) { SetDeviceId(value); return *this;}

    /**
     * <p>The device's ID.</p>
     */
    inline DescribeDeviceJobResult& WithDeviceId(Aws::String&& value) { SetDeviceId(std::move(value)); return *this;}

    /**
     * <p>The device's ID.</p>
     */
    inline DescribeDeviceJobResult& WithDeviceId(const char* value) { SetDeviceId(value); return *this;}


    /**
     * <p>The device's name.</p>
     */
    inline const Aws::String& GetDeviceName() const{ return m_deviceName; }

    /**
     * <p>The device's name.</p>
     */
    inline void SetDeviceName(const Aws::String& value) { m_deviceName = value; }

    /**
     * <p>The device's name.</p>
     */
    inline void SetDeviceName(Aws::String&& value) { m_deviceName = std::move(value); }

    /**
     * <p>The device's name.</p>
     */
    inline void SetDeviceName(const char* value) { m_deviceName.assign(value); }

    /**
     * <p>The device's name.</p>
     */
    inline DescribeDeviceJobResult& WithDeviceName(const Aws::String& value) { SetDeviceName(value); return *this;}

    /**
     * <p>The device's name.</p>
     */
    inline DescribeDeviceJobResult& WithDeviceName(Aws::String&& value) { SetDeviceName(std::move(value)); return *this;}

    /**
     * <p>The device's name.</p>
     */
    inline DescribeDeviceJobResult& WithDeviceName(const char* value) { SetDeviceName(value); return *this;}


    /**
     * <p>The device's type.</p>
     */
    inline const DeviceType& GetDeviceType() const{ return m_deviceType; }

    /**
     * <p>The device's type.</p>
     */
    inline void SetDeviceType(const DeviceType& value) { m_deviceType = value; }

    /**
     * <p>The device's type.</p>
     */
    inline void SetDeviceType(DeviceType&& value) { m_deviceType = std::move(value); }

    /**
     * <p>The device's type.</p>
     */
    inline DescribeDeviceJobResult& WithDeviceType(const DeviceType& value) { SetDeviceType(value); return *this;}

    /**
     * <p>The device's type.</p>
     */
    inline DescribeDeviceJobResult& WithDeviceType(DeviceType&& value) { SetDeviceType(std::move(value)); return *this;}


    /**
     * <p>For an OTA job, the target version of the device software.</p>
     */
    inline const Aws::String& GetImageVersion() const{ return m_imageVersion; }

    /**
     * <p>For an OTA job, the target version of the device software.</p>
     */
    inline void SetImageVersion(const Aws::String& value) { m_imageVersion = value; }

    /**
     * <p>For an OTA job, the target version of the device software.</p>
     */
    inline void SetImageVersion(Aws::String&& value) { m_imageVersion = std::move(value); }

    /**
     * <p>For an OTA job, the target version of the device software.</p>
     */
    inline void SetImageVersion(const char* value) { m_imageVersion.assign(value); }

    /**
     * <p>For an OTA job, the target version of the device software.</p>
     */
    inline DescribeDeviceJobResult& WithImageVersion(const Aws::String& value) { SetImageVersion(value); return *this;}

    /**
     * <p>For an OTA job, the target version of the device software.</p>
     */
    inline DescribeDeviceJobResult& WithImageVersion(Aws::String&& value) { SetImageVersion(std::move(value)); return *this;}

    /**
     * <p>For an OTA job, the target version of the device software.</p>
     */
    inline DescribeDeviceJobResult& WithImageVersion(const char* value) { SetImageVersion(value); return *this;}


    /**
     * <p>The job's ID.</p>
     */
    inline const Aws::String& GetJobId() const{ return m_jobId; }

    /**
     * <p>The job's ID.</p>
     */
    inline void SetJobId(const Aws::String& value) { m_jobId = value; }

    /**
     * <p>The job's ID.</p>
     */
    inline void SetJobId(Aws::String&& value) { m_jobId = std::move(value); }

    /**
     * <p>The job's ID.</p>
     */
    inline void SetJobId(const char* value) { m_jobId.assign(value); }

    /**
     * <p>The job's ID.</p>
     */
    inline DescribeDeviceJobResult& WithJobId(const Aws::String& value) { SetJobId(value); return *this;}

    /**
     * <p>The job's ID.</p>
     */
    inline DescribeDeviceJobResult& WithJobId(Aws::String&& value) { SetJobId(std::move(value)); return *this;}

    /**
     * <p>The job's ID.</p>
     */
    inline DescribeDeviceJobResult& WithJobId(const char* value) { SetJobId(value); return *this;}


    /**
     * <p>The job's type.</p>
     */
    inline const JobType& GetJobType() const{ return m_jobType; }

    /**
     * <p>The job's type.</p>
     */
    inline void SetJobType(const JobType& value) { m_jobType = value; }

    /**
     * <p>The job's type.</p>
     */
    inline void SetJobType(JobType&& value) { m_jobType = std::move(value); }

    /**
     * <p>The job's type.</p>
     */
    inline DescribeDeviceJobResult& WithJobType(const JobType& value) { SetJobType(value); return *this;}

    /**
     * <p>The job's type.</p>
     */
    inline DescribeDeviceJobResult& WithJobType(JobType&& value) { SetJobType(std::move(value)); return *this;}


    /**
     * <p>The job's status.</p>
     */
    inline const UpdateProgress& GetStatus() const{ return m_status; }

    /**
     * <p>The job's status.</p>
     */
    inline void SetStatus(const UpdateProgress& value) { m_status = value; }

    /**
     * <p>The job's status.</p>
     */
    inline void SetStatus(UpdateProgress&& value) { m_status = std::move(value); }

    /**
     * <p>The job's status.</p>
     */
    inline DescribeDeviceJobResult& WithStatus(const UpdateProgress& value) { SetStatus(value); return *this;}

    /**
     * <p>The job's status.</p>
     */
    inline DescribeDeviceJobResult& WithStatus(UpdateProgress&& value) { SetStatus(std::move(value)); return *this;}

  private:

    Aws::Utils::DateTime m_createdTime;

    Aws::String m_deviceArn;

    Aws::String m_deviceId;

    Aws::String m_deviceName;

    DeviceType m_deviceType;

    Aws::String m_imageVersion;

    Aws::String m_jobId;

    JobType m_jobType;

    UpdateProgress m_status;
  };

} // namespace Model
} // namespace Panorama
} // namespace Aws

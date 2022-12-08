/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/panorama/Panorama_EXPORTS.h>
#include <aws/panorama/PanoramaRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/panorama/model/DeviceJobConfig.h>
#include <aws/panorama/model/JobType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Panorama
{
namespace Model
{

  /**
   */
  class CreateJobForDevicesRequest : public PanoramaRequest
  {
  public:
    AWS_PANORAMA_API CreateJobForDevicesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateJobForDevices"; }

    AWS_PANORAMA_API Aws::String SerializePayload() const override;


    /**
     * <p>IDs of target devices.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDeviceIds() const{ return m_deviceIds; }

    /**
     * <p>IDs of target devices.</p>
     */
    inline bool DeviceIdsHasBeenSet() const { return m_deviceIdsHasBeenSet; }

    /**
     * <p>IDs of target devices.</p>
     */
    inline void SetDeviceIds(const Aws::Vector<Aws::String>& value) { m_deviceIdsHasBeenSet = true; m_deviceIds = value; }

    /**
     * <p>IDs of target devices.</p>
     */
    inline void SetDeviceIds(Aws::Vector<Aws::String>&& value) { m_deviceIdsHasBeenSet = true; m_deviceIds = std::move(value); }

    /**
     * <p>IDs of target devices.</p>
     */
    inline CreateJobForDevicesRequest& WithDeviceIds(const Aws::Vector<Aws::String>& value) { SetDeviceIds(value); return *this;}

    /**
     * <p>IDs of target devices.</p>
     */
    inline CreateJobForDevicesRequest& WithDeviceIds(Aws::Vector<Aws::String>&& value) { SetDeviceIds(std::move(value)); return *this;}

    /**
     * <p>IDs of target devices.</p>
     */
    inline CreateJobForDevicesRequest& AddDeviceIds(const Aws::String& value) { m_deviceIdsHasBeenSet = true; m_deviceIds.push_back(value); return *this; }

    /**
     * <p>IDs of target devices.</p>
     */
    inline CreateJobForDevicesRequest& AddDeviceIds(Aws::String&& value) { m_deviceIdsHasBeenSet = true; m_deviceIds.push_back(std::move(value)); return *this; }

    /**
     * <p>IDs of target devices.</p>
     */
    inline CreateJobForDevicesRequest& AddDeviceIds(const char* value) { m_deviceIdsHasBeenSet = true; m_deviceIds.push_back(value); return *this; }


    /**
     * <p>Configuration settings for a software update job.</p>
     */
    inline const DeviceJobConfig& GetDeviceJobConfig() const{ return m_deviceJobConfig; }

    /**
     * <p>Configuration settings for a software update job.</p>
     */
    inline bool DeviceJobConfigHasBeenSet() const { return m_deviceJobConfigHasBeenSet; }

    /**
     * <p>Configuration settings for a software update job.</p>
     */
    inline void SetDeviceJobConfig(const DeviceJobConfig& value) { m_deviceJobConfigHasBeenSet = true; m_deviceJobConfig = value; }

    /**
     * <p>Configuration settings for a software update job.</p>
     */
    inline void SetDeviceJobConfig(DeviceJobConfig&& value) { m_deviceJobConfigHasBeenSet = true; m_deviceJobConfig = std::move(value); }

    /**
     * <p>Configuration settings for a software update job.</p>
     */
    inline CreateJobForDevicesRequest& WithDeviceJobConfig(const DeviceJobConfig& value) { SetDeviceJobConfig(value); return *this;}

    /**
     * <p>Configuration settings for a software update job.</p>
     */
    inline CreateJobForDevicesRequest& WithDeviceJobConfig(DeviceJobConfig&& value) { SetDeviceJobConfig(std::move(value)); return *this;}


    /**
     * <p>The type of job to run.</p>
     */
    inline const JobType& GetJobType() const{ return m_jobType; }

    /**
     * <p>The type of job to run.</p>
     */
    inline bool JobTypeHasBeenSet() const { return m_jobTypeHasBeenSet; }

    /**
     * <p>The type of job to run.</p>
     */
    inline void SetJobType(const JobType& value) { m_jobTypeHasBeenSet = true; m_jobType = value; }

    /**
     * <p>The type of job to run.</p>
     */
    inline void SetJobType(JobType&& value) { m_jobTypeHasBeenSet = true; m_jobType = std::move(value); }

    /**
     * <p>The type of job to run.</p>
     */
    inline CreateJobForDevicesRequest& WithJobType(const JobType& value) { SetJobType(value); return *this;}

    /**
     * <p>The type of job to run.</p>
     */
    inline CreateJobForDevicesRequest& WithJobType(JobType&& value) { SetJobType(std::move(value)); return *this;}

  private:

    Aws::Vector<Aws::String> m_deviceIds;
    bool m_deviceIdsHasBeenSet = false;

    DeviceJobConfig m_deviceJobConfig;
    bool m_deviceJobConfigHasBeenSet = false;

    JobType m_jobType;
    bool m_jobTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace Panorama
} // namespace Aws

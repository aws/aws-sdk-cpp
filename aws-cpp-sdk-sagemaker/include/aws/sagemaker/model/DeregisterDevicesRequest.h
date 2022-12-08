/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/SageMakerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace SageMaker
{
namespace Model
{

  /**
   */
  class DeregisterDevicesRequest : public SageMakerRequest
  {
  public:
    AWS_SAGEMAKER_API DeregisterDevicesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeregisterDevices"; }

    AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

    AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the fleet the devices belong to.</p>
     */
    inline const Aws::String& GetDeviceFleetName() const{ return m_deviceFleetName; }

    /**
     * <p>The name of the fleet the devices belong to.</p>
     */
    inline bool DeviceFleetNameHasBeenSet() const { return m_deviceFleetNameHasBeenSet; }

    /**
     * <p>The name of the fleet the devices belong to.</p>
     */
    inline void SetDeviceFleetName(const Aws::String& value) { m_deviceFleetNameHasBeenSet = true; m_deviceFleetName = value; }

    /**
     * <p>The name of the fleet the devices belong to.</p>
     */
    inline void SetDeviceFleetName(Aws::String&& value) { m_deviceFleetNameHasBeenSet = true; m_deviceFleetName = std::move(value); }

    /**
     * <p>The name of the fleet the devices belong to.</p>
     */
    inline void SetDeviceFleetName(const char* value) { m_deviceFleetNameHasBeenSet = true; m_deviceFleetName.assign(value); }

    /**
     * <p>The name of the fleet the devices belong to.</p>
     */
    inline DeregisterDevicesRequest& WithDeviceFleetName(const Aws::String& value) { SetDeviceFleetName(value); return *this;}

    /**
     * <p>The name of the fleet the devices belong to.</p>
     */
    inline DeregisterDevicesRequest& WithDeviceFleetName(Aws::String&& value) { SetDeviceFleetName(std::move(value)); return *this;}

    /**
     * <p>The name of the fleet the devices belong to.</p>
     */
    inline DeregisterDevicesRequest& WithDeviceFleetName(const char* value) { SetDeviceFleetName(value); return *this;}


    /**
     * <p>The unique IDs of the devices.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDeviceNames() const{ return m_deviceNames; }

    /**
     * <p>The unique IDs of the devices.</p>
     */
    inline bool DeviceNamesHasBeenSet() const { return m_deviceNamesHasBeenSet; }

    /**
     * <p>The unique IDs of the devices.</p>
     */
    inline void SetDeviceNames(const Aws::Vector<Aws::String>& value) { m_deviceNamesHasBeenSet = true; m_deviceNames = value; }

    /**
     * <p>The unique IDs of the devices.</p>
     */
    inline void SetDeviceNames(Aws::Vector<Aws::String>&& value) { m_deviceNamesHasBeenSet = true; m_deviceNames = std::move(value); }

    /**
     * <p>The unique IDs of the devices.</p>
     */
    inline DeregisterDevicesRequest& WithDeviceNames(const Aws::Vector<Aws::String>& value) { SetDeviceNames(value); return *this;}

    /**
     * <p>The unique IDs of the devices.</p>
     */
    inline DeregisterDevicesRequest& WithDeviceNames(Aws::Vector<Aws::String>&& value) { SetDeviceNames(std::move(value)); return *this;}

    /**
     * <p>The unique IDs of the devices.</p>
     */
    inline DeregisterDevicesRequest& AddDeviceNames(const Aws::String& value) { m_deviceNamesHasBeenSet = true; m_deviceNames.push_back(value); return *this; }

    /**
     * <p>The unique IDs of the devices.</p>
     */
    inline DeregisterDevicesRequest& AddDeviceNames(Aws::String&& value) { m_deviceNamesHasBeenSet = true; m_deviceNames.push_back(std::move(value)); return *this; }

    /**
     * <p>The unique IDs of the devices.</p>
     */
    inline DeregisterDevicesRequest& AddDeviceNames(const char* value) { m_deviceNamesHasBeenSet = true; m_deviceNames.push_back(value); return *this; }

  private:

    Aws::String m_deviceFleetName;
    bool m_deviceFleetNameHasBeenSet = false;

    Aws::Vector<Aws::String> m_deviceNames;
    bool m_deviceNamesHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws

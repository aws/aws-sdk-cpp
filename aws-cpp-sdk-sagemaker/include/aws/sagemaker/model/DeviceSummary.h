/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/model/EdgeModelSummary.h>
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
   * <p>Summary of the device.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DeviceSummary">AWS
   * API Reference</a></p>
   */
  class DeviceSummary
  {
  public:
    AWS_SAGEMAKER_API DeviceSummary();
    AWS_SAGEMAKER_API DeviceSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API DeviceSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The unique identifier of the device.</p>
     */
    inline const Aws::String& GetDeviceName() const{ return m_deviceName; }

    /**
     * <p>The unique identifier of the device.</p>
     */
    inline bool DeviceNameHasBeenSet() const { return m_deviceNameHasBeenSet; }

    /**
     * <p>The unique identifier of the device.</p>
     */
    inline void SetDeviceName(const Aws::String& value) { m_deviceNameHasBeenSet = true; m_deviceName = value; }

    /**
     * <p>The unique identifier of the device.</p>
     */
    inline void SetDeviceName(Aws::String&& value) { m_deviceNameHasBeenSet = true; m_deviceName = std::move(value); }

    /**
     * <p>The unique identifier of the device.</p>
     */
    inline void SetDeviceName(const char* value) { m_deviceNameHasBeenSet = true; m_deviceName.assign(value); }

    /**
     * <p>The unique identifier of the device.</p>
     */
    inline DeviceSummary& WithDeviceName(const Aws::String& value) { SetDeviceName(value); return *this;}

    /**
     * <p>The unique identifier of the device.</p>
     */
    inline DeviceSummary& WithDeviceName(Aws::String&& value) { SetDeviceName(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the device.</p>
     */
    inline DeviceSummary& WithDeviceName(const char* value) { SetDeviceName(value); return *this;}


    /**
     * <p>Amazon Resource Name (ARN) of the device.</p>
     */
    inline const Aws::String& GetDeviceArn() const{ return m_deviceArn; }

    /**
     * <p>Amazon Resource Name (ARN) of the device.</p>
     */
    inline bool DeviceArnHasBeenSet() const { return m_deviceArnHasBeenSet; }

    /**
     * <p>Amazon Resource Name (ARN) of the device.</p>
     */
    inline void SetDeviceArn(const Aws::String& value) { m_deviceArnHasBeenSet = true; m_deviceArn = value; }

    /**
     * <p>Amazon Resource Name (ARN) of the device.</p>
     */
    inline void SetDeviceArn(Aws::String&& value) { m_deviceArnHasBeenSet = true; m_deviceArn = std::move(value); }

    /**
     * <p>Amazon Resource Name (ARN) of the device.</p>
     */
    inline void SetDeviceArn(const char* value) { m_deviceArnHasBeenSet = true; m_deviceArn.assign(value); }

    /**
     * <p>Amazon Resource Name (ARN) of the device.</p>
     */
    inline DeviceSummary& WithDeviceArn(const Aws::String& value) { SetDeviceArn(value); return *this;}

    /**
     * <p>Amazon Resource Name (ARN) of the device.</p>
     */
    inline DeviceSummary& WithDeviceArn(Aws::String&& value) { SetDeviceArn(std::move(value)); return *this;}

    /**
     * <p>Amazon Resource Name (ARN) of the device.</p>
     */
    inline DeviceSummary& WithDeviceArn(const char* value) { SetDeviceArn(value); return *this;}


    /**
     * <p>A description of the device.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description of the device.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A description of the device.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description of the device.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A description of the device.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A description of the device.</p>
     */
    inline DeviceSummary& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description of the device.</p>
     */
    inline DeviceSummary& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description of the device.</p>
     */
    inline DeviceSummary& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The name of the fleet the device belongs to.</p>
     */
    inline const Aws::String& GetDeviceFleetName() const{ return m_deviceFleetName; }

    /**
     * <p>The name of the fleet the device belongs to.</p>
     */
    inline bool DeviceFleetNameHasBeenSet() const { return m_deviceFleetNameHasBeenSet; }

    /**
     * <p>The name of the fleet the device belongs to.</p>
     */
    inline void SetDeviceFleetName(const Aws::String& value) { m_deviceFleetNameHasBeenSet = true; m_deviceFleetName = value; }

    /**
     * <p>The name of the fleet the device belongs to.</p>
     */
    inline void SetDeviceFleetName(Aws::String&& value) { m_deviceFleetNameHasBeenSet = true; m_deviceFleetName = std::move(value); }

    /**
     * <p>The name of the fleet the device belongs to.</p>
     */
    inline void SetDeviceFleetName(const char* value) { m_deviceFleetNameHasBeenSet = true; m_deviceFleetName.assign(value); }

    /**
     * <p>The name of the fleet the device belongs to.</p>
     */
    inline DeviceSummary& WithDeviceFleetName(const Aws::String& value) { SetDeviceFleetName(value); return *this;}

    /**
     * <p>The name of the fleet the device belongs to.</p>
     */
    inline DeviceSummary& WithDeviceFleetName(Aws::String&& value) { SetDeviceFleetName(std::move(value)); return *this;}

    /**
     * <p>The name of the fleet the device belongs to.</p>
     */
    inline DeviceSummary& WithDeviceFleetName(const char* value) { SetDeviceFleetName(value); return *this;}


    /**
     * <p>The Amazon Web Services Internet of Things (IoT) object thing name associated
     * with the device..</p>
     */
    inline const Aws::String& GetIotThingName() const{ return m_iotThingName; }

    /**
     * <p>The Amazon Web Services Internet of Things (IoT) object thing name associated
     * with the device..</p>
     */
    inline bool IotThingNameHasBeenSet() const { return m_iotThingNameHasBeenSet; }

    /**
     * <p>The Amazon Web Services Internet of Things (IoT) object thing name associated
     * with the device..</p>
     */
    inline void SetIotThingName(const Aws::String& value) { m_iotThingNameHasBeenSet = true; m_iotThingName = value; }

    /**
     * <p>The Amazon Web Services Internet of Things (IoT) object thing name associated
     * with the device..</p>
     */
    inline void SetIotThingName(Aws::String&& value) { m_iotThingNameHasBeenSet = true; m_iotThingName = std::move(value); }

    /**
     * <p>The Amazon Web Services Internet of Things (IoT) object thing name associated
     * with the device..</p>
     */
    inline void SetIotThingName(const char* value) { m_iotThingNameHasBeenSet = true; m_iotThingName.assign(value); }

    /**
     * <p>The Amazon Web Services Internet of Things (IoT) object thing name associated
     * with the device..</p>
     */
    inline DeviceSummary& WithIotThingName(const Aws::String& value) { SetIotThingName(value); return *this;}

    /**
     * <p>The Amazon Web Services Internet of Things (IoT) object thing name associated
     * with the device..</p>
     */
    inline DeviceSummary& WithIotThingName(Aws::String&& value) { SetIotThingName(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services Internet of Things (IoT) object thing name associated
     * with the device..</p>
     */
    inline DeviceSummary& WithIotThingName(const char* value) { SetIotThingName(value); return *this;}


    /**
     * <p>The timestamp of the last registration or de-reregistration.</p>
     */
    inline const Aws::Utils::DateTime& GetRegistrationTime() const{ return m_registrationTime; }

    /**
     * <p>The timestamp of the last registration or de-reregistration.</p>
     */
    inline bool RegistrationTimeHasBeenSet() const { return m_registrationTimeHasBeenSet; }

    /**
     * <p>The timestamp of the last registration or de-reregistration.</p>
     */
    inline void SetRegistrationTime(const Aws::Utils::DateTime& value) { m_registrationTimeHasBeenSet = true; m_registrationTime = value; }

    /**
     * <p>The timestamp of the last registration or de-reregistration.</p>
     */
    inline void SetRegistrationTime(Aws::Utils::DateTime&& value) { m_registrationTimeHasBeenSet = true; m_registrationTime = std::move(value); }

    /**
     * <p>The timestamp of the last registration or de-reregistration.</p>
     */
    inline DeviceSummary& WithRegistrationTime(const Aws::Utils::DateTime& value) { SetRegistrationTime(value); return *this;}

    /**
     * <p>The timestamp of the last registration or de-reregistration.</p>
     */
    inline DeviceSummary& WithRegistrationTime(Aws::Utils::DateTime&& value) { SetRegistrationTime(std::move(value)); return *this;}


    /**
     * <p>The last heartbeat received from the device.</p>
     */
    inline const Aws::Utils::DateTime& GetLatestHeartbeat() const{ return m_latestHeartbeat; }

    /**
     * <p>The last heartbeat received from the device.</p>
     */
    inline bool LatestHeartbeatHasBeenSet() const { return m_latestHeartbeatHasBeenSet; }

    /**
     * <p>The last heartbeat received from the device.</p>
     */
    inline void SetLatestHeartbeat(const Aws::Utils::DateTime& value) { m_latestHeartbeatHasBeenSet = true; m_latestHeartbeat = value; }

    /**
     * <p>The last heartbeat received from the device.</p>
     */
    inline void SetLatestHeartbeat(Aws::Utils::DateTime&& value) { m_latestHeartbeatHasBeenSet = true; m_latestHeartbeat = std::move(value); }

    /**
     * <p>The last heartbeat received from the device.</p>
     */
    inline DeviceSummary& WithLatestHeartbeat(const Aws::Utils::DateTime& value) { SetLatestHeartbeat(value); return *this;}

    /**
     * <p>The last heartbeat received from the device.</p>
     */
    inline DeviceSummary& WithLatestHeartbeat(Aws::Utils::DateTime&& value) { SetLatestHeartbeat(std::move(value)); return *this;}


    /**
     * <p>Models on the device.</p>
     */
    inline const Aws::Vector<EdgeModelSummary>& GetModels() const{ return m_models; }

    /**
     * <p>Models on the device.</p>
     */
    inline bool ModelsHasBeenSet() const { return m_modelsHasBeenSet; }

    /**
     * <p>Models on the device.</p>
     */
    inline void SetModels(const Aws::Vector<EdgeModelSummary>& value) { m_modelsHasBeenSet = true; m_models = value; }

    /**
     * <p>Models on the device.</p>
     */
    inline void SetModels(Aws::Vector<EdgeModelSummary>&& value) { m_modelsHasBeenSet = true; m_models = std::move(value); }

    /**
     * <p>Models on the device.</p>
     */
    inline DeviceSummary& WithModels(const Aws::Vector<EdgeModelSummary>& value) { SetModels(value); return *this;}

    /**
     * <p>Models on the device.</p>
     */
    inline DeviceSummary& WithModels(Aws::Vector<EdgeModelSummary>&& value) { SetModels(std::move(value)); return *this;}

    /**
     * <p>Models on the device.</p>
     */
    inline DeviceSummary& AddModels(const EdgeModelSummary& value) { m_modelsHasBeenSet = true; m_models.push_back(value); return *this; }

    /**
     * <p>Models on the device.</p>
     */
    inline DeviceSummary& AddModels(EdgeModelSummary&& value) { m_modelsHasBeenSet = true; m_models.push_back(std::move(value)); return *this; }


    /**
     * <p>Edge Manager agent version.</p>
     */
    inline const Aws::String& GetAgentVersion() const{ return m_agentVersion; }

    /**
     * <p>Edge Manager agent version.</p>
     */
    inline bool AgentVersionHasBeenSet() const { return m_agentVersionHasBeenSet; }

    /**
     * <p>Edge Manager agent version.</p>
     */
    inline void SetAgentVersion(const Aws::String& value) { m_agentVersionHasBeenSet = true; m_agentVersion = value; }

    /**
     * <p>Edge Manager agent version.</p>
     */
    inline void SetAgentVersion(Aws::String&& value) { m_agentVersionHasBeenSet = true; m_agentVersion = std::move(value); }

    /**
     * <p>Edge Manager agent version.</p>
     */
    inline void SetAgentVersion(const char* value) { m_agentVersionHasBeenSet = true; m_agentVersion.assign(value); }

    /**
     * <p>Edge Manager agent version.</p>
     */
    inline DeviceSummary& WithAgentVersion(const Aws::String& value) { SetAgentVersion(value); return *this;}

    /**
     * <p>Edge Manager agent version.</p>
     */
    inline DeviceSummary& WithAgentVersion(Aws::String&& value) { SetAgentVersion(std::move(value)); return *this;}

    /**
     * <p>Edge Manager agent version.</p>
     */
    inline DeviceSummary& WithAgentVersion(const char* value) { SetAgentVersion(value); return *this;}

  private:

    Aws::String m_deviceName;
    bool m_deviceNameHasBeenSet = false;

    Aws::String m_deviceArn;
    bool m_deviceArnHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_deviceFleetName;
    bool m_deviceFleetNameHasBeenSet = false;

    Aws::String m_iotThingName;
    bool m_iotThingNameHasBeenSet = false;

    Aws::Utils::DateTime m_registrationTime;
    bool m_registrationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_latestHeartbeat;
    bool m_latestHeartbeatHasBeenSet = false;

    Aws::Vector<EdgeModelSummary> m_models;
    bool m_modelsHasBeenSet = false;

    Aws::String m_agentVersion;
    bool m_agentVersionHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws

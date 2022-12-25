/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker-edge/SagemakerEdgeManager_EXPORTS.h>
#include <aws/sagemaker-edge/SagemakerEdgeManagerRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker-edge/model/DeploymentResult.h>
#include <aws/sagemaker-edge/model/EdgeMetric.h>
#include <aws/sagemaker-edge/model/Model.h>
#include <utility>

namespace Aws
{
namespace SagemakerEdgeManager
{
namespace Model
{

  /**
   */
  class SendHeartbeatRequest : public SagemakerEdgeManagerRequest
  {
  public:
    AWS_SAGEMAKEREDGEMANAGER_API SendHeartbeatRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "SendHeartbeat"; }

    AWS_SAGEMAKEREDGEMANAGER_API Aws::String SerializePayload() const override;


    /**
     * <p>For internal use. Returns a list of SageMaker Edge Manager agent operating
     * metrics.</p>
     */
    inline const Aws::Vector<EdgeMetric>& GetAgentMetrics() const{ return m_agentMetrics; }

    /**
     * <p>For internal use. Returns a list of SageMaker Edge Manager agent operating
     * metrics.</p>
     */
    inline bool AgentMetricsHasBeenSet() const { return m_agentMetricsHasBeenSet; }

    /**
     * <p>For internal use. Returns a list of SageMaker Edge Manager agent operating
     * metrics.</p>
     */
    inline void SetAgentMetrics(const Aws::Vector<EdgeMetric>& value) { m_agentMetricsHasBeenSet = true; m_agentMetrics = value; }

    /**
     * <p>For internal use. Returns a list of SageMaker Edge Manager agent operating
     * metrics.</p>
     */
    inline void SetAgentMetrics(Aws::Vector<EdgeMetric>&& value) { m_agentMetricsHasBeenSet = true; m_agentMetrics = std::move(value); }

    /**
     * <p>For internal use. Returns a list of SageMaker Edge Manager agent operating
     * metrics.</p>
     */
    inline SendHeartbeatRequest& WithAgentMetrics(const Aws::Vector<EdgeMetric>& value) { SetAgentMetrics(value); return *this;}

    /**
     * <p>For internal use. Returns a list of SageMaker Edge Manager agent operating
     * metrics.</p>
     */
    inline SendHeartbeatRequest& WithAgentMetrics(Aws::Vector<EdgeMetric>&& value) { SetAgentMetrics(std::move(value)); return *this;}

    /**
     * <p>For internal use. Returns a list of SageMaker Edge Manager agent operating
     * metrics.</p>
     */
    inline SendHeartbeatRequest& AddAgentMetrics(const EdgeMetric& value) { m_agentMetricsHasBeenSet = true; m_agentMetrics.push_back(value); return *this; }

    /**
     * <p>For internal use. Returns a list of SageMaker Edge Manager agent operating
     * metrics.</p>
     */
    inline SendHeartbeatRequest& AddAgentMetrics(EdgeMetric&& value) { m_agentMetricsHasBeenSet = true; m_agentMetrics.push_back(std::move(value)); return *this; }


    /**
     * <p>Returns a list of models deployed on the the device.</p>
     */
    inline const Aws::Vector<Model>& GetModels() const{ return m_models; }

    /**
     * <p>Returns a list of models deployed on the the device.</p>
     */
    inline bool ModelsHasBeenSet() const { return m_modelsHasBeenSet; }

    /**
     * <p>Returns a list of models deployed on the the device.</p>
     */
    inline void SetModels(const Aws::Vector<Model>& value) { m_modelsHasBeenSet = true; m_models = value; }

    /**
     * <p>Returns a list of models deployed on the the device.</p>
     */
    inline void SetModels(Aws::Vector<Model>&& value) { m_modelsHasBeenSet = true; m_models = std::move(value); }

    /**
     * <p>Returns a list of models deployed on the the device.</p>
     */
    inline SendHeartbeatRequest& WithModels(const Aws::Vector<Model>& value) { SetModels(value); return *this;}

    /**
     * <p>Returns a list of models deployed on the the device.</p>
     */
    inline SendHeartbeatRequest& WithModels(Aws::Vector<Model>&& value) { SetModels(std::move(value)); return *this;}

    /**
     * <p>Returns a list of models deployed on the the device.</p>
     */
    inline SendHeartbeatRequest& AddModels(const Model& value) { m_modelsHasBeenSet = true; m_models.push_back(value); return *this; }

    /**
     * <p>Returns a list of models deployed on the the device.</p>
     */
    inline SendHeartbeatRequest& AddModels(Model&& value) { m_modelsHasBeenSet = true; m_models.push_back(std::move(value)); return *this; }


    /**
     * <p>Returns the version of the agent.</p>
     */
    inline const Aws::String& GetAgentVersion() const{ return m_agentVersion; }

    /**
     * <p>Returns the version of the agent.</p>
     */
    inline bool AgentVersionHasBeenSet() const { return m_agentVersionHasBeenSet; }

    /**
     * <p>Returns the version of the agent.</p>
     */
    inline void SetAgentVersion(const Aws::String& value) { m_agentVersionHasBeenSet = true; m_agentVersion = value; }

    /**
     * <p>Returns the version of the agent.</p>
     */
    inline void SetAgentVersion(Aws::String&& value) { m_agentVersionHasBeenSet = true; m_agentVersion = std::move(value); }

    /**
     * <p>Returns the version of the agent.</p>
     */
    inline void SetAgentVersion(const char* value) { m_agentVersionHasBeenSet = true; m_agentVersion.assign(value); }

    /**
     * <p>Returns the version of the agent.</p>
     */
    inline SendHeartbeatRequest& WithAgentVersion(const Aws::String& value) { SetAgentVersion(value); return *this;}

    /**
     * <p>Returns the version of the agent.</p>
     */
    inline SendHeartbeatRequest& WithAgentVersion(Aws::String&& value) { SetAgentVersion(std::move(value)); return *this;}

    /**
     * <p>Returns the version of the agent.</p>
     */
    inline SendHeartbeatRequest& WithAgentVersion(const char* value) { SetAgentVersion(value); return *this;}


    /**
     * <p>The unique name of the device.</p>
     */
    inline const Aws::String& GetDeviceName() const{ return m_deviceName; }

    /**
     * <p>The unique name of the device.</p>
     */
    inline bool DeviceNameHasBeenSet() const { return m_deviceNameHasBeenSet; }

    /**
     * <p>The unique name of the device.</p>
     */
    inline void SetDeviceName(const Aws::String& value) { m_deviceNameHasBeenSet = true; m_deviceName = value; }

    /**
     * <p>The unique name of the device.</p>
     */
    inline void SetDeviceName(Aws::String&& value) { m_deviceNameHasBeenSet = true; m_deviceName = std::move(value); }

    /**
     * <p>The unique name of the device.</p>
     */
    inline void SetDeviceName(const char* value) { m_deviceNameHasBeenSet = true; m_deviceName.assign(value); }

    /**
     * <p>The unique name of the device.</p>
     */
    inline SendHeartbeatRequest& WithDeviceName(const Aws::String& value) { SetDeviceName(value); return *this;}

    /**
     * <p>The unique name of the device.</p>
     */
    inline SendHeartbeatRequest& WithDeviceName(Aws::String&& value) { SetDeviceName(std::move(value)); return *this;}

    /**
     * <p>The unique name of the device.</p>
     */
    inline SendHeartbeatRequest& WithDeviceName(const char* value) { SetDeviceName(value); return *this;}


    /**
     * <p>The name of the fleet that the device belongs to.</p>
     */
    inline const Aws::String& GetDeviceFleetName() const{ return m_deviceFleetName; }

    /**
     * <p>The name of the fleet that the device belongs to.</p>
     */
    inline bool DeviceFleetNameHasBeenSet() const { return m_deviceFleetNameHasBeenSet; }

    /**
     * <p>The name of the fleet that the device belongs to.</p>
     */
    inline void SetDeviceFleetName(const Aws::String& value) { m_deviceFleetNameHasBeenSet = true; m_deviceFleetName = value; }

    /**
     * <p>The name of the fleet that the device belongs to.</p>
     */
    inline void SetDeviceFleetName(Aws::String&& value) { m_deviceFleetNameHasBeenSet = true; m_deviceFleetName = std::move(value); }

    /**
     * <p>The name of the fleet that the device belongs to.</p>
     */
    inline void SetDeviceFleetName(const char* value) { m_deviceFleetNameHasBeenSet = true; m_deviceFleetName.assign(value); }

    /**
     * <p>The name of the fleet that the device belongs to.</p>
     */
    inline SendHeartbeatRequest& WithDeviceFleetName(const Aws::String& value) { SetDeviceFleetName(value); return *this;}

    /**
     * <p>The name of the fleet that the device belongs to.</p>
     */
    inline SendHeartbeatRequest& WithDeviceFleetName(Aws::String&& value) { SetDeviceFleetName(std::move(value)); return *this;}

    /**
     * <p>The name of the fleet that the device belongs to.</p>
     */
    inline SendHeartbeatRequest& WithDeviceFleetName(const char* value) { SetDeviceFleetName(value); return *this;}


    /**
     * <p>Returns the result of a deployment on the device.</p>
     */
    inline const DeploymentResult& GetDeploymentResult() const{ return m_deploymentResult; }

    /**
     * <p>Returns the result of a deployment on the device.</p>
     */
    inline bool DeploymentResultHasBeenSet() const { return m_deploymentResultHasBeenSet; }

    /**
     * <p>Returns the result of a deployment on the device.</p>
     */
    inline void SetDeploymentResult(const DeploymentResult& value) { m_deploymentResultHasBeenSet = true; m_deploymentResult = value; }

    /**
     * <p>Returns the result of a deployment on the device.</p>
     */
    inline void SetDeploymentResult(DeploymentResult&& value) { m_deploymentResultHasBeenSet = true; m_deploymentResult = std::move(value); }

    /**
     * <p>Returns the result of a deployment on the device.</p>
     */
    inline SendHeartbeatRequest& WithDeploymentResult(const DeploymentResult& value) { SetDeploymentResult(value); return *this;}

    /**
     * <p>Returns the result of a deployment on the device.</p>
     */
    inline SendHeartbeatRequest& WithDeploymentResult(DeploymentResult&& value) { SetDeploymentResult(std::move(value)); return *this;}

  private:

    Aws::Vector<EdgeMetric> m_agentMetrics;
    bool m_agentMetricsHasBeenSet = false;

    Aws::Vector<Model> m_models;
    bool m_modelsHasBeenSet = false;

    Aws::String m_agentVersion;
    bool m_agentVersionHasBeenSet = false;

    Aws::String m_deviceName;
    bool m_deviceNameHasBeenSet = false;

    Aws::String m_deviceFleetName;
    bool m_deviceFleetNameHasBeenSet = false;

    DeploymentResult m_deploymentResult;
    bool m_deploymentResultHasBeenSet = false;
  };

} // namespace Model
} // namespace SagemakerEdgeManager
} // namespace Aws

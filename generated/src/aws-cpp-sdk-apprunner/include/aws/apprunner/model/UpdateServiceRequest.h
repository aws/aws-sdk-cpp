/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apprunner/AppRunner_EXPORTS.h>
#include <aws/apprunner/AppRunnerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/apprunner/model/SourceConfiguration.h>
#include <aws/apprunner/model/InstanceConfiguration.h>
#include <aws/apprunner/model/HealthCheckConfiguration.h>
#include <aws/apprunner/model/NetworkConfiguration.h>
#include <aws/apprunner/model/ServiceObservabilityConfiguration.h>
#include <utility>

namespace Aws
{
namespace AppRunner
{
namespace Model
{

  /**
   */
  class UpdateServiceRequest : public AppRunnerRequest
  {
  public:
    AWS_APPRUNNER_API UpdateServiceRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateService"; }

    AWS_APPRUNNER_API Aws::String SerializePayload() const override;

    AWS_APPRUNNER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the App Runner service that you want to
     * update.</p>
     */
    inline const Aws::String& GetServiceArn() const { return m_serviceArn; }
    inline bool ServiceArnHasBeenSet() const { return m_serviceArnHasBeenSet; }
    template<typename ServiceArnT = Aws::String>
    void SetServiceArn(ServiceArnT&& value) { m_serviceArnHasBeenSet = true; m_serviceArn = std::forward<ServiceArnT>(value); }
    template<typename ServiceArnT = Aws::String>
    UpdateServiceRequest& WithServiceArn(ServiceArnT&& value) { SetServiceArn(std::forward<ServiceArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The source configuration to apply to the App Runner service.</p> <p>You can
     * change the configuration of the code or image repository that the service uses.
     * However, you can't switch from code to image or the other way around. This means
     * that you must provide the same structure member of
     * <code>SourceConfiguration</code> that you originally included when you created
     * the service. Specifically, you can include either <code>CodeRepository</code> or
     * <code>ImageRepository</code>. To update the source configuration, set the values
     * to members of the structure that you include.</p>
     */
    inline const SourceConfiguration& GetSourceConfiguration() const { return m_sourceConfiguration; }
    inline bool SourceConfigurationHasBeenSet() const { return m_sourceConfigurationHasBeenSet; }
    template<typename SourceConfigurationT = SourceConfiguration>
    void SetSourceConfiguration(SourceConfigurationT&& value) { m_sourceConfigurationHasBeenSet = true; m_sourceConfiguration = std::forward<SourceConfigurationT>(value); }
    template<typename SourceConfigurationT = SourceConfiguration>
    UpdateServiceRequest& WithSourceConfiguration(SourceConfigurationT&& value) { SetSourceConfiguration(std::forward<SourceConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The runtime configuration to apply to instances (scaling units) of your
     * service.</p>
     */
    inline const InstanceConfiguration& GetInstanceConfiguration() const { return m_instanceConfiguration; }
    inline bool InstanceConfigurationHasBeenSet() const { return m_instanceConfigurationHasBeenSet; }
    template<typename InstanceConfigurationT = InstanceConfiguration>
    void SetInstanceConfiguration(InstanceConfigurationT&& value) { m_instanceConfigurationHasBeenSet = true; m_instanceConfiguration = std::forward<InstanceConfigurationT>(value); }
    template<typename InstanceConfigurationT = InstanceConfiguration>
    UpdateServiceRequest& WithInstanceConfiguration(InstanceConfigurationT&& value) { SetInstanceConfiguration(std::forward<InstanceConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of an App Runner automatic scaling
     * configuration resource that you want to associate with the App Runner
     * service.</p>
     */
    inline const Aws::String& GetAutoScalingConfigurationArn() const { return m_autoScalingConfigurationArn; }
    inline bool AutoScalingConfigurationArnHasBeenSet() const { return m_autoScalingConfigurationArnHasBeenSet; }
    template<typename AutoScalingConfigurationArnT = Aws::String>
    void SetAutoScalingConfigurationArn(AutoScalingConfigurationArnT&& value) { m_autoScalingConfigurationArnHasBeenSet = true; m_autoScalingConfigurationArn = std::forward<AutoScalingConfigurationArnT>(value); }
    template<typename AutoScalingConfigurationArnT = Aws::String>
    UpdateServiceRequest& WithAutoScalingConfigurationArn(AutoScalingConfigurationArnT&& value) { SetAutoScalingConfigurationArn(std::forward<AutoScalingConfigurationArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The settings for the health check that App Runner performs to monitor the
     * health of the App Runner service.</p>
     */
    inline const HealthCheckConfiguration& GetHealthCheckConfiguration() const { return m_healthCheckConfiguration; }
    inline bool HealthCheckConfigurationHasBeenSet() const { return m_healthCheckConfigurationHasBeenSet; }
    template<typename HealthCheckConfigurationT = HealthCheckConfiguration>
    void SetHealthCheckConfiguration(HealthCheckConfigurationT&& value) { m_healthCheckConfigurationHasBeenSet = true; m_healthCheckConfiguration = std::forward<HealthCheckConfigurationT>(value); }
    template<typename HealthCheckConfigurationT = HealthCheckConfiguration>
    UpdateServiceRequest& WithHealthCheckConfiguration(HealthCheckConfigurationT&& value) { SetHealthCheckConfiguration(std::forward<HealthCheckConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configuration settings related to network traffic of the web application that
     * the App Runner service runs.</p>
     */
    inline const NetworkConfiguration& GetNetworkConfiguration() const { return m_networkConfiguration; }
    inline bool NetworkConfigurationHasBeenSet() const { return m_networkConfigurationHasBeenSet; }
    template<typename NetworkConfigurationT = NetworkConfiguration>
    void SetNetworkConfiguration(NetworkConfigurationT&& value) { m_networkConfigurationHasBeenSet = true; m_networkConfiguration = std::forward<NetworkConfigurationT>(value); }
    template<typename NetworkConfigurationT = NetworkConfiguration>
    UpdateServiceRequest& WithNetworkConfiguration(NetworkConfigurationT&& value) { SetNetworkConfiguration(std::forward<NetworkConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The observability configuration of your service.</p>
     */
    inline const ServiceObservabilityConfiguration& GetObservabilityConfiguration() const { return m_observabilityConfiguration; }
    inline bool ObservabilityConfigurationHasBeenSet() const { return m_observabilityConfigurationHasBeenSet; }
    template<typename ObservabilityConfigurationT = ServiceObservabilityConfiguration>
    void SetObservabilityConfiguration(ObservabilityConfigurationT&& value) { m_observabilityConfigurationHasBeenSet = true; m_observabilityConfiguration = std::forward<ObservabilityConfigurationT>(value); }
    template<typename ObservabilityConfigurationT = ServiceObservabilityConfiguration>
    UpdateServiceRequest& WithObservabilityConfiguration(ObservabilityConfigurationT&& value) { SetObservabilityConfiguration(std::forward<ObservabilityConfigurationT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_serviceArn;
    bool m_serviceArnHasBeenSet = false;

    SourceConfiguration m_sourceConfiguration;
    bool m_sourceConfigurationHasBeenSet = false;

    InstanceConfiguration m_instanceConfiguration;
    bool m_instanceConfigurationHasBeenSet = false;

    Aws::String m_autoScalingConfigurationArn;
    bool m_autoScalingConfigurationArnHasBeenSet = false;

    HealthCheckConfiguration m_healthCheckConfiguration;
    bool m_healthCheckConfigurationHasBeenSet = false;

    NetworkConfiguration m_networkConfiguration;
    bool m_networkConfigurationHasBeenSet = false;

    ServiceObservabilityConfiguration m_observabilityConfiguration;
    bool m_observabilityConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace AppRunner
} // namespace Aws

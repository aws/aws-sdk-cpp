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
    AWS_APPRUNNER_API UpdateServiceRequest();

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
    inline const Aws::String& GetServiceArn() const{ return m_serviceArn; }
    inline bool ServiceArnHasBeenSet() const { return m_serviceArnHasBeenSet; }
    inline void SetServiceArn(const Aws::String& value) { m_serviceArnHasBeenSet = true; m_serviceArn = value; }
    inline void SetServiceArn(Aws::String&& value) { m_serviceArnHasBeenSet = true; m_serviceArn = std::move(value); }
    inline void SetServiceArn(const char* value) { m_serviceArnHasBeenSet = true; m_serviceArn.assign(value); }
    inline UpdateServiceRequest& WithServiceArn(const Aws::String& value) { SetServiceArn(value); return *this;}
    inline UpdateServiceRequest& WithServiceArn(Aws::String&& value) { SetServiceArn(std::move(value)); return *this;}
    inline UpdateServiceRequest& WithServiceArn(const char* value) { SetServiceArn(value); return *this;}
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
    inline const SourceConfiguration& GetSourceConfiguration() const{ return m_sourceConfiguration; }
    inline bool SourceConfigurationHasBeenSet() const { return m_sourceConfigurationHasBeenSet; }
    inline void SetSourceConfiguration(const SourceConfiguration& value) { m_sourceConfigurationHasBeenSet = true; m_sourceConfiguration = value; }
    inline void SetSourceConfiguration(SourceConfiguration&& value) { m_sourceConfigurationHasBeenSet = true; m_sourceConfiguration = std::move(value); }
    inline UpdateServiceRequest& WithSourceConfiguration(const SourceConfiguration& value) { SetSourceConfiguration(value); return *this;}
    inline UpdateServiceRequest& WithSourceConfiguration(SourceConfiguration&& value) { SetSourceConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The runtime configuration to apply to instances (scaling units) of your
     * service.</p>
     */
    inline const InstanceConfiguration& GetInstanceConfiguration() const{ return m_instanceConfiguration; }
    inline bool InstanceConfigurationHasBeenSet() const { return m_instanceConfigurationHasBeenSet; }
    inline void SetInstanceConfiguration(const InstanceConfiguration& value) { m_instanceConfigurationHasBeenSet = true; m_instanceConfiguration = value; }
    inline void SetInstanceConfiguration(InstanceConfiguration&& value) { m_instanceConfigurationHasBeenSet = true; m_instanceConfiguration = std::move(value); }
    inline UpdateServiceRequest& WithInstanceConfiguration(const InstanceConfiguration& value) { SetInstanceConfiguration(value); return *this;}
    inline UpdateServiceRequest& WithInstanceConfiguration(InstanceConfiguration&& value) { SetInstanceConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of an App Runner automatic scaling
     * configuration resource that you want to associate with the App Runner
     * service.</p>
     */
    inline const Aws::String& GetAutoScalingConfigurationArn() const{ return m_autoScalingConfigurationArn; }
    inline bool AutoScalingConfigurationArnHasBeenSet() const { return m_autoScalingConfigurationArnHasBeenSet; }
    inline void SetAutoScalingConfigurationArn(const Aws::String& value) { m_autoScalingConfigurationArnHasBeenSet = true; m_autoScalingConfigurationArn = value; }
    inline void SetAutoScalingConfigurationArn(Aws::String&& value) { m_autoScalingConfigurationArnHasBeenSet = true; m_autoScalingConfigurationArn = std::move(value); }
    inline void SetAutoScalingConfigurationArn(const char* value) { m_autoScalingConfigurationArnHasBeenSet = true; m_autoScalingConfigurationArn.assign(value); }
    inline UpdateServiceRequest& WithAutoScalingConfigurationArn(const Aws::String& value) { SetAutoScalingConfigurationArn(value); return *this;}
    inline UpdateServiceRequest& WithAutoScalingConfigurationArn(Aws::String&& value) { SetAutoScalingConfigurationArn(std::move(value)); return *this;}
    inline UpdateServiceRequest& WithAutoScalingConfigurationArn(const char* value) { SetAutoScalingConfigurationArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The settings for the health check that App Runner performs to monitor the
     * health of the App Runner service.</p>
     */
    inline const HealthCheckConfiguration& GetHealthCheckConfiguration() const{ return m_healthCheckConfiguration; }
    inline bool HealthCheckConfigurationHasBeenSet() const { return m_healthCheckConfigurationHasBeenSet; }
    inline void SetHealthCheckConfiguration(const HealthCheckConfiguration& value) { m_healthCheckConfigurationHasBeenSet = true; m_healthCheckConfiguration = value; }
    inline void SetHealthCheckConfiguration(HealthCheckConfiguration&& value) { m_healthCheckConfigurationHasBeenSet = true; m_healthCheckConfiguration = std::move(value); }
    inline UpdateServiceRequest& WithHealthCheckConfiguration(const HealthCheckConfiguration& value) { SetHealthCheckConfiguration(value); return *this;}
    inline UpdateServiceRequest& WithHealthCheckConfiguration(HealthCheckConfiguration&& value) { SetHealthCheckConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configuration settings related to network traffic of the web application that
     * the App Runner service runs.</p>
     */
    inline const NetworkConfiguration& GetNetworkConfiguration() const{ return m_networkConfiguration; }
    inline bool NetworkConfigurationHasBeenSet() const { return m_networkConfigurationHasBeenSet; }
    inline void SetNetworkConfiguration(const NetworkConfiguration& value) { m_networkConfigurationHasBeenSet = true; m_networkConfiguration = value; }
    inline void SetNetworkConfiguration(NetworkConfiguration&& value) { m_networkConfigurationHasBeenSet = true; m_networkConfiguration = std::move(value); }
    inline UpdateServiceRequest& WithNetworkConfiguration(const NetworkConfiguration& value) { SetNetworkConfiguration(value); return *this;}
    inline UpdateServiceRequest& WithNetworkConfiguration(NetworkConfiguration&& value) { SetNetworkConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The observability configuration of your service.</p>
     */
    inline const ServiceObservabilityConfiguration& GetObservabilityConfiguration() const{ return m_observabilityConfiguration; }
    inline bool ObservabilityConfigurationHasBeenSet() const { return m_observabilityConfigurationHasBeenSet; }
    inline void SetObservabilityConfiguration(const ServiceObservabilityConfiguration& value) { m_observabilityConfigurationHasBeenSet = true; m_observabilityConfiguration = value; }
    inline void SetObservabilityConfiguration(ServiceObservabilityConfiguration&& value) { m_observabilityConfigurationHasBeenSet = true; m_observabilityConfiguration = std::move(value); }
    inline UpdateServiceRequest& WithObservabilityConfiguration(const ServiceObservabilityConfiguration& value) { SetObservabilityConfiguration(value); return *this;}
    inline UpdateServiceRequest& WithObservabilityConfiguration(ServiceObservabilityConfiguration&& value) { SetObservabilityConfiguration(std::move(value)); return *this;}
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

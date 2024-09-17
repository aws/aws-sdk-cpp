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
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/apprunner/model/EncryptionConfiguration.h>
#include <aws/apprunner/model/HealthCheckConfiguration.h>
#include <aws/apprunner/model/NetworkConfiguration.h>
#include <aws/apprunner/model/ServiceObservabilityConfiguration.h>
#include <aws/apprunner/model/Tag.h>
#include <utility>

namespace Aws
{
namespace AppRunner
{
namespace Model
{

  /**
   */
  class CreateServiceRequest : public AppRunnerRequest
  {
  public:
    AWS_APPRUNNER_API CreateServiceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateService"; }

    AWS_APPRUNNER_API Aws::String SerializePayload() const override;

    AWS_APPRUNNER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>A name for the App Runner service. It must be unique across all the running
     * App Runner services in your Amazon Web Services account in the Amazon Web
     * Services Region.</p>
     */
    inline const Aws::String& GetServiceName() const{ return m_serviceName; }
    inline bool ServiceNameHasBeenSet() const { return m_serviceNameHasBeenSet; }
    inline void SetServiceName(const Aws::String& value) { m_serviceNameHasBeenSet = true; m_serviceName = value; }
    inline void SetServiceName(Aws::String&& value) { m_serviceNameHasBeenSet = true; m_serviceName = std::move(value); }
    inline void SetServiceName(const char* value) { m_serviceNameHasBeenSet = true; m_serviceName.assign(value); }
    inline CreateServiceRequest& WithServiceName(const Aws::String& value) { SetServiceName(value); return *this;}
    inline CreateServiceRequest& WithServiceName(Aws::String&& value) { SetServiceName(std::move(value)); return *this;}
    inline CreateServiceRequest& WithServiceName(const char* value) { SetServiceName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The source to deploy to the App Runner service. It can be a code or an image
     * repository.</p>
     */
    inline const SourceConfiguration& GetSourceConfiguration() const{ return m_sourceConfiguration; }
    inline bool SourceConfigurationHasBeenSet() const { return m_sourceConfigurationHasBeenSet; }
    inline void SetSourceConfiguration(const SourceConfiguration& value) { m_sourceConfigurationHasBeenSet = true; m_sourceConfiguration = value; }
    inline void SetSourceConfiguration(SourceConfiguration&& value) { m_sourceConfigurationHasBeenSet = true; m_sourceConfiguration = std::move(value); }
    inline CreateServiceRequest& WithSourceConfiguration(const SourceConfiguration& value) { SetSourceConfiguration(value); return *this;}
    inline CreateServiceRequest& WithSourceConfiguration(SourceConfiguration&& value) { SetSourceConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The runtime configuration of instances (scaling units) of your service.</p>
     */
    inline const InstanceConfiguration& GetInstanceConfiguration() const{ return m_instanceConfiguration; }
    inline bool InstanceConfigurationHasBeenSet() const { return m_instanceConfigurationHasBeenSet; }
    inline void SetInstanceConfiguration(const InstanceConfiguration& value) { m_instanceConfigurationHasBeenSet = true; m_instanceConfiguration = value; }
    inline void SetInstanceConfiguration(InstanceConfiguration&& value) { m_instanceConfigurationHasBeenSet = true; m_instanceConfiguration = std::move(value); }
    inline CreateServiceRequest& WithInstanceConfiguration(const InstanceConfiguration& value) { SetInstanceConfiguration(value); return *this;}
    inline CreateServiceRequest& WithInstanceConfiguration(InstanceConfiguration&& value) { SetInstanceConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An optional list of metadata items that you can associate with the App Runner
     * service resource. A tag is a key-value pair.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline CreateServiceRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline CreateServiceRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateServiceRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline CreateServiceRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An optional custom encryption key that App Runner uses to encrypt the copy of
     * your source repository that it maintains and your service logs. By default, App
     * Runner uses an Amazon Web Services managed key.</p>
     */
    inline const EncryptionConfiguration& GetEncryptionConfiguration() const{ return m_encryptionConfiguration; }
    inline bool EncryptionConfigurationHasBeenSet() const { return m_encryptionConfigurationHasBeenSet; }
    inline void SetEncryptionConfiguration(const EncryptionConfiguration& value) { m_encryptionConfigurationHasBeenSet = true; m_encryptionConfiguration = value; }
    inline void SetEncryptionConfiguration(EncryptionConfiguration&& value) { m_encryptionConfigurationHasBeenSet = true; m_encryptionConfiguration = std::move(value); }
    inline CreateServiceRequest& WithEncryptionConfiguration(const EncryptionConfiguration& value) { SetEncryptionConfiguration(value); return *this;}
    inline CreateServiceRequest& WithEncryptionConfiguration(EncryptionConfiguration&& value) { SetEncryptionConfiguration(std::move(value)); return *this;}
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
    inline CreateServiceRequest& WithHealthCheckConfiguration(const HealthCheckConfiguration& value) { SetHealthCheckConfiguration(value); return *this;}
    inline CreateServiceRequest& WithHealthCheckConfiguration(HealthCheckConfiguration&& value) { SetHealthCheckConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of an App Runner automatic scaling
     * configuration resource that you want to associate with your service. If not
     * provided, App Runner associates the latest revision of a default auto scaling
     * configuration.</p> <p>Specify an ARN with a name and a revision number to
     * associate that revision. For example:
     * <code>arn:aws:apprunner:us-east-1:123456789012:autoscalingconfiguration/high-availability/3</code>
     * </p> <p>Specify just the name to associate the latest revision. For example:
     * <code>arn:aws:apprunner:us-east-1:123456789012:autoscalingconfiguration/high-availability</code>
     * </p>
     */
    inline const Aws::String& GetAutoScalingConfigurationArn() const{ return m_autoScalingConfigurationArn; }
    inline bool AutoScalingConfigurationArnHasBeenSet() const { return m_autoScalingConfigurationArnHasBeenSet; }
    inline void SetAutoScalingConfigurationArn(const Aws::String& value) { m_autoScalingConfigurationArnHasBeenSet = true; m_autoScalingConfigurationArn = value; }
    inline void SetAutoScalingConfigurationArn(Aws::String&& value) { m_autoScalingConfigurationArnHasBeenSet = true; m_autoScalingConfigurationArn = std::move(value); }
    inline void SetAutoScalingConfigurationArn(const char* value) { m_autoScalingConfigurationArnHasBeenSet = true; m_autoScalingConfigurationArn.assign(value); }
    inline CreateServiceRequest& WithAutoScalingConfigurationArn(const Aws::String& value) { SetAutoScalingConfigurationArn(value); return *this;}
    inline CreateServiceRequest& WithAutoScalingConfigurationArn(Aws::String&& value) { SetAutoScalingConfigurationArn(std::move(value)); return *this;}
    inline CreateServiceRequest& WithAutoScalingConfigurationArn(const char* value) { SetAutoScalingConfigurationArn(value); return *this;}
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
    inline CreateServiceRequest& WithNetworkConfiguration(const NetworkConfiguration& value) { SetNetworkConfiguration(value); return *this;}
    inline CreateServiceRequest& WithNetworkConfiguration(NetworkConfiguration&& value) { SetNetworkConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The observability configuration of your service.</p>
     */
    inline const ServiceObservabilityConfiguration& GetObservabilityConfiguration() const{ return m_observabilityConfiguration; }
    inline bool ObservabilityConfigurationHasBeenSet() const { return m_observabilityConfigurationHasBeenSet; }
    inline void SetObservabilityConfiguration(const ServiceObservabilityConfiguration& value) { m_observabilityConfigurationHasBeenSet = true; m_observabilityConfiguration = value; }
    inline void SetObservabilityConfiguration(ServiceObservabilityConfiguration&& value) { m_observabilityConfigurationHasBeenSet = true; m_observabilityConfiguration = std::move(value); }
    inline CreateServiceRequest& WithObservabilityConfiguration(const ServiceObservabilityConfiguration& value) { SetObservabilityConfiguration(value); return *this;}
    inline CreateServiceRequest& WithObservabilityConfiguration(ServiceObservabilityConfiguration&& value) { SetObservabilityConfiguration(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_serviceName;
    bool m_serviceNameHasBeenSet = false;

    SourceConfiguration m_sourceConfiguration;
    bool m_sourceConfigurationHasBeenSet = false;

    InstanceConfiguration m_instanceConfiguration;
    bool m_instanceConfigurationHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    EncryptionConfiguration m_encryptionConfiguration;
    bool m_encryptionConfigurationHasBeenSet = false;

    HealthCheckConfiguration m_healthCheckConfiguration;
    bool m_healthCheckConfigurationHasBeenSet = false;

    Aws::String m_autoScalingConfigurationArn;
    bool m_autoScalingConfigurationArnHasBeenSet = false;

    NetworkConfiguration m_networkConfiguration;
    bool m_networkConfigurationHasBeenSet = false;

    ServiceObservabilityConfiguration m_observabilityConfiguration;
    bool m_observabilityConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace AppRunner
} // namespace Aws

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
    AWS_APPRUNNER_API CreateServiceRequest() = default;

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
    inline const Aws::String& GetServiceName() const { return m_serviceName; }
    inline bool ServiceNameHasBeenSet() const { return m_serviceNameHasBeenSet; }
    template<typename ServiceNameT = Aws::String>
    void SetServiceName(ServiceNameT&& value) { m_serviceNameHasBeenSet = true; m_serviceName = std::forward<ServiceNameT>(value); }
    template<typename ServiceNameT = Aws::String>
    CreateServiceRequest& WithServiceName(ServiceNameT&& value) { SetServiceName(std::forward<ServiceNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The source to deploy to the App Runner service. It can be a code or an image
     * repository.</p>
     */
    inline const SourceConfiguration& GetSourceConfiguration() const { return m_sourceConfiguration; }
    inline bool SourceConfigurationHasBeenSet() const { return m_sourceConfigurationHasBeenSet; }
    template<typename SourceConfigurationT = SourceConfiguration>
    void SetSourceConfiguration(SourceConfigurationT&& value) { m_sourceConfigurationHasBeenSet = true; m_sourceConfiguration = std::forward<SourceConfigurationT>(value); }
    template<typename SourceConfigurationT = SourceConfiguration>
    CreateServiceRequest& WithSourceConfiguration(SourceConfigurationT&& value) { SetSourceConfiguration(std::forward<SourceConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The runtime configuration of instances (scaling units) of your service.</p>
     */
    inline const InstanceConfiguration& GetInstanceConfiguration() const { return m_instanceConfiguration; }
    inline bool InstanceConfigurationHasBeenSet() const { return m_instanceConfigurationHasBeenSet; }
    template<typename InstanceConfigurationT = InstanceConfiguration>
    void SetInstanceConfiguration(InstanceConfigurationT&& value) { m_instanceConfigurationHasBeenSet = true; m_instanceConfiguration = std::forward<InstanceConfigurationT>(value); }
    template<typename InstanceConfigurationT = InstanceConfiguration>
    CreateServiceRequest& WithInstanceConfiguration(InstanceConfigurationT&& value) { SetInstanceConfiguration(std::forward<InstanceConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An optional list of metadata items that you can associate with the App Runner
     * service resource. A tag is a key-value pair.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    CreateServiceRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    CreateServiceRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An optional custom encryption key that App Runner uses to encrypt the copy of
     * your source repository that it maintains and your service logs. By default, App
     * Runner uses an Amazon Web Services managed key.</p>
     */
    inline const EncryptionConfiguration& GetEncryptionConfiguration() const { return m_encryptionConfiguration; }
    inline bool EncryptionConfigurationHasBeenSet() const { return m_encryptionConfigurationHasBeenSet; }
    template<typename EncryptionConfigurationT = EncryptionConfiguration>
    void SetEncryptionConfiguration(EncryptionConfigurationT&& value) { m_encryptionConfigurationHasBeenSet = true; m_encryptionConfiguration = std::forward<EncryptionConfigurationT>(value); }
    template<typename EncryptionConfigurationT = EncryptionConfiguration>
    CreateServiceRequest& WithEncryptionConfiguration(EncryptionConfigurationT&& value) { SetEncryptionConfiguration(std::forward<EncryptionConfigurationT>(value)); return *this;}
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
    CreateServiceRequest& WithHealthCheckConfiguration(HealthCheckConfigurationT&& value) { SetHealthCheckConfiguration(std::forward<HealthCheckConfigurationT>(value)); return *this;}
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
    inline const Aws::String& GetAutoScalingConfigurationArn() const { return m_autoScalingConfigurationArn; }
    inline bool AutoScalingConfigurationArnHasBeenSet() const { return m_autoScalingConfigurationArnHasBeenSet; }
    template<typename AutoScalingConfigurationArnT = Aws::String>
    void SetAutoScalingConfigurationArn(AutoScalingConfigurationArnT&& value) { m_autoScalingConfigurationArnHasBeenSet = true; m_autoScalingConfigurationArn = std::forward<AutoScalingConfigurationArnT>(value); }
    template<typename AutoScalingConfigurationArnT = Aws::String>
    CreateServiceRequest& WithAutoScalingConfigurationArn(AutoScalingConfigurationArnT&& value) { SetAutoScalingConfigurationArn(std::forward<AutoScalingConfigurationArnT>(value)); return *this;}
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
    CreateServiceRequest& WithNetworkConfiguration(NetworkConfigurationT&& value) { SetNetworkConfiguration(std::forward<NetworkConfigurationT>(value)); return *this;}
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
    CreateServiceRequest& WithObservabilityConfiguration(ObservabilityConfigurationT&& value) { SetObservabilityConfiguration(std::forward<ObservabilityConfigurationT>(value)); return *this;}
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

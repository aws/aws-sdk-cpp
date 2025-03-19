/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apprunner/AppRunner_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/apprunner/model/ServiceStatus.h>
#include <aws/apprunner/model/SourceConfiguration.h>
#include <aws/apprunner/model/InstanceConfiguration.h>
#include <aws/apprunner/model/EncryptionConfiguration.h>
#include <aws/apprunner/model/HealthCheckConfiguration.h>
#include <aws/apprunner/model/AutoScalingConfigurationSummary.h>
#include <aws/apprunner/model/NetworkConfiguration.h>
#include <aws/apprunner/model/ServiceObservabilityConfiguration.h>
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
namespace AppRunner
{
namespace Model
{

  /**
   * <p>Describes an App Runner service. It can describe a service in any state,
   * including deleted services.</p> <p>This type contains the full information about
   * a service, including configuration details. It's returned by the <a
   * href="https://docs.aws.amazon.com/apprunner/latest/api/API_CreateService.html">CreateService</a>,
   * <a
   * href="https://docs.aws.amazon.com/apprunner/latest/api/API_DescribeService.html">DescribeService</a>,
   * and <a
   * href="https://docs.aws.amazon.com/apprunner/latest/api/API_DeleteService.html">DeleteService</a>
   * actions. A subset of this information is returned by the <a
   * href="https://docs.aws.amazon.com/apprunner/latest/api/API_ListServices.html">ListServices</a>
   * action using the <a
   * href="https://docs.aws.amazon.com/apprunner/latest/api/API_ServiceSummary.html">ServiceSummary</a>
   * type.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apprunner-2020-05-15/Service">AWS
   * API Reference</a></p>
   */
  class Service
  {
  public:
    AWS_APPRUNNER_API Service() = default;
    AWS_APPRUNNER_API Service(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPRUNNER_API Service& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPRUNNER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The customer-provided service name.</p>
     */
    inline const Aws::String& GetServiceName() const { return m_serviceName; }
    inline bool ServiceNameHasBeenSet() const { return m_serviceNameHasBeenSet; }
    template<typename ServiceNameT = Aws::String>
    void SetServiceName(ServiceNameT&& value) { m_serviceNameHasBeenSet = true; m_serviceName = std::forward<ServiceNameT>(value); }
    template<typename ServiceNameT = Aws::String>
    Service& WithServiceName(ServiceNameT&& value) { SetServiceName(std::forward<ServiceNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An ID that App Runner generated for this service. It's unique within the
     * Amazon Web Services Region.</p>
     */
    inline const Aws::String& GetServiceId() const { return m_serviceId; }
    inline bool ServiceIdHasBeenSet() const { return m_serviceIdHasBeenSet; }
    template<typename ServiceIdT = Aws::String>
    void SetServiceId(ServiceIdT&& value) { m_serviceIdHasBeenSet = true; m_serviceId = std::forward<ServiceIdT>(value); }
    template<typename ServiceIdT = Aws::String>
    Service& WithServiceId(ServiceIdT&& value) { SetServiceId(std::forward<ServiceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of this service.</p>
     */
    inline const Aws::String& GetServiceArn() const { return m_serviceArn; }
    inline bool ServiceArnHasBeenSet() const { return m_serviceArnHasBeenSet; }
    template<typename ServiceArnT = Aws::String>
    void SetServiceArn(ServiceArnT&& value) { m_serviceArnHasBeenSet = true; m_serviceArn = std::forward<ServiceArnT>(value); }
    template<typename ServiceArnT = Aws::String>
    Service& WithServiceArn(ServiceArnT&& value) { SetServiceArn(std::forward<ServiceArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A subdomain URL that App Runner generated for this service. You can use this
     * URL to access your service web application.</p>
     */
    inline const Aws::String& GetServiceUrl() const { return m_serviceUrl; }
    inline bool ServiceUrlHasBeenSet() const { return m_serviceUrlHasBeenSet; }
    template<typename ServiceUrlT = Aws::String>
    void SetServiceUrl(ServiceUrlT&& value) { m_serviceUrlHasBeenSet = true; m_serviceUrl = std::forward<ServiceUrlT>(value); }
    template<typename ServiceUrlT = Aws::String>
    Service& WithServiceUrl(ServiceUrlT&& value) { SetServiceUrl(std::forward<ServiceUrlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the App Runner service was created. It's in the Unix time stamp
     * format.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    Service& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the App Runner service was last updated at. It's in the Unix
     * time stamp format.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    void SetUpdatedAt(UpdatedAtT&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::forward<UpdatedAtT>(value); }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    Service& WithUpdatedAt(UpdatedAtT&& value) { SetUpdatedAt(std::forward<UpdatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the App Runner service was deleted. It's in the Unix time stamp
     * format.</p>
     */
    inline const Aws::Utils::DateTime& GetDeletedAt() const { return m_deletedAt; }
    inline bool DeletedAtHasBeenSet() const { return m_deletedAtHasBeenSet; }
    template<typename DeletedAtT = Aws::Utils::DateTime>
    void SetDeletedAt(DeletedAtT&& value) { m_deletedAtHasBeenSet = true; m_deletedAt = std::forward<DeletedAtT>(value); }
    template<typename DeletedAtT = Aws::Utils::DateTime>
    Service& WithDeletedAt(DeletedAtT&& value) { SetDeletedAt(std::forward<DeletedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current state of the App Runner service. These particular values mean the
     * following.</p> <ul> <li> <p> <code>CREATE_FAILED</code> – The service failed to
     * create. The failed service isn't usable, and still counts towards your service
     * quota. To troubleshoot this failure, read the failure events and logs, change
     * any parameters that need to be fixed, and rebuild your service using
     * <code>UpdateService</code>.</p> </li> <li> <p> <code>DELETE_FAILED</code> – The
     * service failed to delete and can't be successfully recovered. Retry the service
     * deletion call to ensure that all related resources are removed.</p> </li> </ul>
     */
    inline ServiceStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(ServiceStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline Service& WithStatus(ServiceStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The source deployed to the App Runner service. It can be a code or an image
     * repository.</p>
     */
    inline const SourceConfiguration& GetSourceConfiguration() const { return m_sourceConfiguration; }
    inline bool SourceConfigurationHasBeenSet() const { return m_sourceConfigurationHasBeenSet; }
    template<typename SourceConfigurationT = SourceConfiguration>
    void SetSourceConfiguration(SourceConfigurationT&& value) { m_sourceConfigurationHasBeenSet = true; m_sourceConfiguration = std::forward<SourceConfigurationT>(value); }
    template<typename SourceConfigurationT = SourceConfiguration>
    Service& WithSourceConfiguration(SourceConfigurationT&& value) { SetSourceConfiguration(std::forward<SourceConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The runtime configuration of instances (scaling units) of this service.</p>
     */
    inline const InstanceConfiguration& GetInstanceConfiguration() const { return m_instanceConfiguration; }
    inline bool InstanceConfigurationHasBeenSet() const { return m_instanceConfigurationHasBeenSet; }
    template<typename InstanceConfigurationT = InstanceConfiguration>
    void SetInstanceConfiguration(InstanceConfigurationT&& value) { m_instanceConfigurationHasBeenSet = true; m_instanceConfiguration = std::forward<InstanceConfigurationT>(value); }
    template<typename InstanceConfigurationT = InstanceConfiguration>
    Service& WithInstanceConfiguration(InstanceConfigurationT&& value) { SetInstanceConfiguration(std::forward<InstanceConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The encryption key that App Runner uses to encrypt the service logs and the
     * copy of the source repository that App Runner maintains for the service. It can
     * be either a customer-provided encryption key or an Amazon Web Services managed
     * key.</p>
     */
    inline const EncryptionConfiguration& GetEncryptionConfiguration() const { return m_encryptionConfiguration; }
    inline bool EncryptionConfigurationHasBeenSet() const { return m_encryptionConfigurationHasBeenSet; }
    template<typename EncryptionConfigurationT = EncryptionConfiguration>
    void SetEncryptionConfiguration(EncryptionConfigurationT&& value) { m_encryptionConfigurationHasBeenSet = true; m_encryptionConfiguration = std::forward<EncryptionConfigurationT>(value); }
    template<typename EncryptionConfigurationT = EncryptionConfiguration>
    Service& WithEncryptionConfiguration(EncryptionConfigurationT&& value) { SetEncryptionConfiguration(std::forward<EncryptionConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The settings for the health check that App Runner performs to monitor the
     * health of this service.</p>
     */
    inline const HealthCheckConfiguration& GetHealthCheckConfiguration() const { return m_healthCheckConfiguration; }
    inline bool HealthCheckConfigurationHasBeenSet() const { return m_healthCheckConfigurationHasBeenSet; }
    template<typename HealthCheckConfigurationT = HealthCheckConfiguration>
    void SetHealthCheckConfiguration(HealthCheckConfigurationT&& value) { m_healthCheckConfigurationHasBeenSet = true; m_healthCheckConfiguration = std::forward<HealthCheckConfigurationT>(value); }
    template<typename HealthCheckConfigurationT = HealthCheckConfiguration>
    Service& WithHealthCheckConfiguration(HealthCheckConfigurationT&& value) { SetHealthCheckConfiguration(std::forward<HealthCheckConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Summary information for the App Runner automatic scaling configuration
     * resource that's associated with this service.</p>
     */
    inline const AutoScalingConfigurationSummary& GetAutoScalingConfigurationSummary() const { return m_autoScalingConfigurationSummary; }
    inline bool AutoScalingConfigurationSummaryHasBeenSet() const { return m_autoScalingConfigurationSummaryHasBeenSet; }
    template<typename AutoScalingConfigurationSummaryT = AutoScalingConfigurationSummary>
    void SetAutoScalingConfigurationSummary(AutoScalingConfigurationSummaryT&& value) { m_autoScalingConfigurationSummaryHasBeenSet = true; m_autoScalingConfigurationSummary = std::forward<AutoScalingConfigurationSummaryT>(value); }
    template<typename AutoScalingConfigurationSummaryT = AutoScalingConfigurationSummary>
    Service& WithAutoScalingConfigurationSummary(AutoScalingConfigurationSummaryT&& value) { SetAutoScalingConfigurationSummary(std::forward<AutoScalingConfigurationSummaryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configuration settings related to network traffic of the web application that
     * this service runs.</p>
     */
    inline const NetworkConfiguration& GetNetworkConfiguration() const { return m_networkConfiguration; }
    inline bool NetworkConfigurationHasBeenSet() const { return m_networkConfigurationHasBeenSet; }
    template<typename NetworkConfigurationT = NetworkConfiguration>
    void SetNetworkConfiguration(NetworkConfigurationT&& value) { m_networkConfigurationHasBeenSet = true; m_networkConfiguration = std::forward<NetworkConfigurationT>(value); }
    template<typename NetworkConfigurationT = NetworkConfiguration>
    Service& WithNetworkConfiguration(NetworkConfigurationT&& value) { SetNetworkConfiguration(std::forward<NetworkConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The observability configuration of this service.</p>
     */
    inline const ServiceObservabilityConfiguration& GetObservabilityConfiguration() const { return m_observabilityConfiguration; }
    inline bool ObservabilityConfigurationHasBeenSet() const { return m_observabilityConfigurationHasBeenSet; }
    template<typename ObservabilityConfigurationT = ServiceObservabilityConfiguration>
    void SetObservabilityConfiguration(ObservabilityConfigurationT&& value) { m_observabilityConfigurationHasBeenSet = true; m_observabilityConfiguration = std::forward<ObservabilityConfigurationT>(value); }
    template<typename ObservabilityConfigurationT = ServiceObservabilityConfiguration>
    Service& WithObservabilityConfiguration(ObservabilityConfigurationT&& value) { SetObservabilityConfiguration(std::forward<ObservabilityConfigurationT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_serviceName;
    bool m_serviceNameHasBeenSet = false;

    Aws::String m_serviceId;
    bool m_serviceIdHasBeenSet = false;

    Aws::String m_serviceArn;
    bool m_serviceArnHasBeenSet = false;

    Aws::String m_serviceUrl;
    bool m_serviceUrlHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt{};
    bool m_updatedAtHasBeenSet = false;

    Aws::Utils::DateTime m_deletedAt{};
    bool m_deletedAtHasBeenSet = false;

    ServiceStatus m_status{ServiceStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    SourceConfiguration m_sourceConfiguration;
    bool m_sourceConfigurationHasBeenSet = false;

    InstanceConfiguration m_instanceConfiguration;
    bool m_instanceConfigurationHasBeenSet = false;

    EncryptionConfiguration m_encryptionConfiguration;
    bool m_encryptionConfigurationHasBeenSet = false;

    HealthCheckConfiguration m_healthCheckConfiguration;
    bool m_healthCheckConfigurationHasBeenSet = false;

    AutoScalingConfigurationSummary m_autoScalingConfigurationSummary;
    bool m_autoScalingConfigurationSummaryHasBeenSet = false;

    NetworkConfiguration m_networkConfiguration;
    bool m_networkConfigurationHasBeenSet = false;

    ServiceObservabilityConfiguration m_observabilityConfiguration;
    bool m_observabilityConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace AppRunner
} // namespace Aws

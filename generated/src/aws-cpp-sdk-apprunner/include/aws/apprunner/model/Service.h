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
    AWS_APPRUNNER_API Service();
    AWS_APPRUNNER_API Service(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPRUNNER_API Service& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPRUNNER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The customer-provided service name.</p>
     */
    inline const Aws::String& GetServiceName() const{ return m_serviceName; }
    inline bool ServiceNameHasBeenSet() const { return m_serviceNameHasBeenSet; }
    inline void SetServiceName(const Aws::String& value) { m_serviceNameHasBeenSet = true; m_serviceName = value; }
    inline void SetServiceName(Aws::String&& value) { m_serviceNameHasBeenSet = true; m_serviceName = std::move(value); }
    inline void SetServiceName(const char* value) { m_serviceNameHasBeenSet = true; m_serviceName.assign(value); }
    inline Service& WithServiceName(const Aws::String& value) { SetServiceName(value); return *this;}
    inline Service& WithServiceName(Aws::String&& value) { SetServiceName(std::move(value)); return *this;}
    inline Service& WithServiceName(const char* value) { SetServiceName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An ID that App Runner generated for this service. It's unique within the
     * Amazon Web Services Region.</p>
     */
    inline const Aws::String& GetServiceId() const{ return m_serviceId; }
    inline bool ServiceIdHasBeenSet() const { return m_serviceIdHasBeenSet; }
    inline void SetServiceId(const Aws::String& value) { m_serviceIdHasBeenSet = true; m_serviceId = value; }
    inline void SetServiceId(Aws::String&& value) { m_serviceIdHasBeenSet = true; m_serviceId = std::move(value); }
    inline void SetServiceId(const char* value) { m_serviceIdHasBeenSet = true; m_serviceId.assign(value); }
    inline Service& WithServiceId(const Aws::String& value) { SetServiceId(value); return *this;}
    inline Service& WithServiceId(Aws::String&& value) { SetServiceId(std::move(value)); return *this;}
    inline Service& WithServiceId(const char* value) { SetServiceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of this service.</p>
     */
    inline const Aws::String& GetServiceArn() const{ return m_serviceArn; }
    inline bool ServiceArnHasBeenSet() const { return m_serviceArnHasBeenSet; }
    inline void SetServiceArn(const Aws::String& value) { m_serviceArnHasBeenSet = true; m_serviceArn = value; }
    inline void SetServiceArn(Aws::String&& value) { m_serviceArnHasBeenSet = true; m_serviceArn = std::move(value); }
    inline void SetServiceArn(const char* value) { m_serviceArnHasBeenSet = true; m_serviceArn.assign(value); }
    inline Service& WithServiceArn(const Aws::String& value) { SetServiceArn(value); return *this;}
    inline Service& WithServiceArn(Aws::String&& value) { SetServiceArn(std::move(value)); return *this;}
    inline Service& WithServiceArn(const char* value) { SetServiceArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A subdomain URL that App Runner generated for this service. You can use this
     * URL to access your service web application.</p>
     */
    inline const Aws::String& GetServiceUrl() const{ return m_serviceUrl; }
    inline bool ServiceUrlHasBeenSet() const { return m_serviceUrlHasBeenSet; }
    inline void SetServiceUrl(const Aws::String& value) { m_serviceUrlHasBeenSet = true; m_serviceUrl = value; }
    inline void SetServiceUrl(Aws::String&& value) { m_serviceUrlHasBeenSet = true; m_serviceUrl = std::move(value); }
    inline void SetServiceUrl(const char* value) { m_serviceUrlHasBeenSet = true; m_serviceUrl.assign(value); }
    inline Service& WithServiceUrl(const Aws::String& value) { SetServiceUrl(value); return *this;}
    inline Service& WithServiceUrl(Aws::String&& value) { SetServiceUrl(std::move(value)); return *this;}
    inline Service& WithServiceUrl(const char* value) { SetServiceUrl(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the App Runner service was created. It's in the Unix time stamp
     * format.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }
    inline Service& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline Service& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the App Runner service was last updated at. It's in the Unix
     * time stamp format.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const{ return m_updatedAt; }
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
    inline void SetUpdatedAt(const Aws::Utils::DateTime& value) { m_updatedAtHasBeenSet = true; m_updatedAt = value; }
    inline void SetUpdatedAt(Aws::Utils::DateTime&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::move(value); }
    inline Service& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}
    inline Service& WithUpdatedAt(Aws::Utils::DateTime&& value) { SetUpdatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the App Runner service was deleted. It's in the Unix time stamp
     * format.</p>
     */
    inline const Aws::Utils::DateTime& GetDeletedAt() const{ return m_deletedAt; }
    inline bool DeletedAtHasBeenSet() const { return m_deletedAtHasBeenSet; }
    inline void SetDeletedAt(const Aws::Utils::DateTime& value) { m_deletedAtHasBeenSet = true; m_deletedAt = value; }
    inline void SetDeletedAt(Aws::Utils::DateTime&& value) { m_deletedAtHasBeenSet = true; m_deletedAt = std::move(value); }
    inline Service& WithDeletedAt(const Aws::Utils::DateTime& value) { SetDeletedAt(value); return *this;}
    inline Service& WithDeletedAt(Aws::Utils::DateTime&& value) { SetDeletedAt(std::move(value)); return *this;}
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
    inline const ServiceStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const ServiceStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(ServiceStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline Service& WithStatus(const ServiceStatus& value) { SetStatus(value); return *this;}
    inline Service& WithStatus(ServiceStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The source deployed to the App Runner service. It can be a code or an image
     * repository.</p>
     */
    inline const SourceConfiguration& GetSourceConfiguration() const{ return m_sourceConfiguration; }
    inline bool SourceConfigurationHasBeenSet() const { return m_sourceConfigurationHasBeenSet; }
    inline void SetSourceConfiguration(const SourceConfiguration& value) { m_sourceConfigurationHasBeenSet = true; m_sourceConfiguration = value; }
    inline void SetSourceConfiguration(SourceConfiguration&& value) { m_sourceConfigurationHasBeenSet = true; m_sourceConfiguration = std::move(value); }
    inline Service& WithSourceConfiguration(const SourceConfiguration& value) { SetSourceConfiguration(value); return *this;}
    inline Service& WithSourceConfiguration(SourceConfiguration&& value) { SetSourceConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The runtime configuration of instances (scaling units) of this service.</p>
     */
    inline const InstanceConfiguration& GetInstanceConfiguration() const{ return m_instanceConfiguration; }
    inline bool InstanceConfigurationHasBeenSet() const { return m_instanceConfigurationHasBeenSet; }
    inline void SetInstanceConfiguration(const InstanceConfiguration& value) { m_instanceConfigurationHasBeenSet = true; m_instanceConfiguration = value; }
    inline void SetInstanceConfiguration(InstanceConfiguration&& value) { m_instanceConfigurationHasBeenSet = true; m_instanceConfiguration = std::move(value); }
    inline Service& WithInstanceConfiguration(const InstanceConfiguration& value) { SetInstanceConfiguration(value); return *this;}
    inline Service& WithInstanceConfiguration(InstanceConfiguration&& value) { SetInstanceConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The encryption key that App Runner uses to encrypt the service logs and the
     * copy of the source repository that App Runner maintains for the service. It can
     * be either a customer-provided encryption key or an Amazon Web Services managed
     * key.</p>
     */
    inline const EncryptionConfiguration& GetEncryptionConfiguration() const{ return m_encryptionConfiguration; }
    inline bool EncryptionConfigurationHasBeenSet() const { return m_encryptionConfigurationHasBeenSet; }
    inline void SetEncryptionConfiguration(const EncryptionConfiguration& value) { m_encryptionConfigurationHasBeenSet = true; m_encryptionConfiguration = value; }
    inline void SetEncryptionConfiguration(EncryptionConfiguration&& value) { m_encryptionConfigurationHasBeenSet = true; m_encryptionConfiguration = std::move(value); }
    inline Service& WithEncryptionConfiguration(const EncryptionConfiguration& value) { SetEncryptionConfiguration(value); return *this;}
    inline Service& WithEncryptionConfiguration(EncryptionConfiguration&& value) { SetEncryptionConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The settings for the health check that App Runner performs to monitor the
     * health of this service.</p>
     */
    inline const HealthCheckConfiguration& GetHealthCheckConfiguration() const{ return m_healthCheckConfiguration; }
    inline bool HealthCheckConfigurationHasBeenSet() const { return m_healthCheckConfigurationHasBeenSet; }
    inline void SetHealthCheckConfiguration(const HealthCheckConfiguration& value) { m_healthCheckConfigurationHasBeenSet = true; m_healthCheckConfiguration = value; }
    inline void SetHealthCheckConfiguration(HealthCheckConfiguration&& value) { m_healthCheckConfigurationHasBeenSet = true; m_healthCheckConfiguration = std::move(value); }
    inline Service& WithHealthCheckConfiguration(const HealthCheckConfiguration& value) { SetHealthCheckConfiguration(value); return *this;}
    inline Service& WithHealthCheckConfiguration(HealthCheckConfiguration&& value) { SetHealthCheckConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Summary information for the App Runner automatic scaling configuration
     * resource that's associated with this service.</p>
     */
    inline const AutoScalingConfigurationSummary& GetAutoScalingConfigurationSummary() const{ return m_autoScalingConfigurationSummary; }
    inline bool AutoScalingConfigurationSummaryHasBeenSet() const { return m_autoScalingConfigurationSummaryHasBeenSet; }
    inline void SetAutoScalingConfigurationSummary(const AutoScalingConfigurationSummary& value) { m_autoScalingConfigurationSummaryHasBeenSet = true; m_autoScalingConfigurationSummary = value; }
    inline void SetAutoScalingConfigurationSummary(AutoScalingConfigurationSummary&& value) { m_autoScalingConfigurationSummaryHasBeenSet = true; m_autoScalingConfigurationSummary = std::move(value); }
    inline Service& WithAutoScalingConfigurationSummary(const AutoScalingConfigurationSummary& value) { SetAutoScalingConfigurationSummary(value); return *this;}
    inline Service& WithAutoScalingConfigurationSummary(AutoScalingConfigurationSummary&& value) { SetAutoScalingConfigurationSummary(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configuration settings related to network traffic of the web application that
     * this service runs.</p>
     */
    inline const NetworkConfiguration& GetNetworkConfiguration() const{ return m_networkConfiguration; }
    inline bool NetworkConfigurationHasBeenSet() const { return m_networkConfigurationHasBeenSet; }
    inline void SetNetworkConfiguration(const NetworkConfiguration& value) { m_networkConfigurationHasBeenSet = true; m_networkConfiguration = value; }
    inline void SetNetworkConfiguration(NetworkConfiguration&& value) { m_networkConfigurationHasBeenSet = true; m_networkConfiguration = std::move(value); }
    inline Service& WithNetworkConfiguration(const NetworkConfiguration& value) { SetNetworkConfiguration(value); return *this;}
    inline Service& WithNetworkConfiguration(NetworkConfiguration&& value) { SetNetworkConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The observability configuration of this service.</p>
     */
    inline const ServiceObservabilityConfiguration& GetObservabilityConfiguration() const{ return m_observabilityConfiguration; }
    inline bool ObservabilityConfigurationHasBeenSet() const { return m_observabilityConfigurationHasBeenSet; }
    inline void SetObservabilityConfiguration(const ServiceObservabilityConfiguration& value) { m_observabilityConfigurationHasBeenSet = true; m_observabilityConfiguration = value; }
    inline void SetObservabilityConfiguration(ServiceObservabilityConfiguration&& value) { m_observabilityConfigurationHasBeenSet = true; m_observabilityConfiguration = std::move(value); }
    inline Service& WithObservabilityConfiguration(const ServiceObservabilityConfiguration& value) { SetObservabilityConfiguration(value); return *this;}
    inline Service& WithObservabilityConfiguration(ServiceObservabilityConfiguration&& value) { SetObservabilityConfiguration(std::move(value)); return *this;}
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

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt;
    bool m_updatedAtHasBeenSet = false;

    Aws::Utils::DateTime m_deletedAt;
    bool m_deletedAtHasBeenSet = false;

    ServiceStatus m_status;
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

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/guardduty/model/OrganizationS3LogsConfigurationResult.h>
#include <aws/guardduty/model/OrganizationKubernetesConfigurationResult.h>
#include <aws/guardduty/model/OrganizationMalwareProtectionConfigurationResult.h>
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
namespace GuardDuty
{
namespace Model
{

  /**
   * <p>An object that contains information on which data sources are automatically
   * enabled for new members within the organization.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/OrganizationDataSourceConfigurationsResult">AWS
   * API Reference</a></p>
   */
  class OrganizationDataSourceConfigurationsResult
  {
  public:
    AWS_GUARDDUTY_API OrganizationDataSourceConfigurationsResult();
    AWS_GUARDDUTY_API OrganizationDataSourceConfigurationsResult(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API OrganizationDataSourceConfigurationsResult& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Describes whether S3 data event logs are enabled as a data source.</p>
     */
    inline const OrganizationS3LogsConfigurationResult& GetS3Logs() const{ return m_s3Logs; }

    /**
     * <p>Describes whether S3 data event logs are enabled as a data source.</p>
     */
    inline bool S3LogsHasBeenSet() const { return m_s3LogsHasBeenSet; }

    /**
     * <p>Describes whether S3 data event logs are enabled as a data source.</p>
     */
    inline void SetS3Logs(const OrganizationS3LogsConfigurationResult& value) { m_s3LogsHasBeenSet = true; m_s3Logs = value; }

    /**
     * <p>Describes whether S3 data event logs are enabled as a data source.</p>
     */
    inline void SetS3Logs(OrganizationS3LogsConfigurationResult&& value) { m_s3LogsHasBeenSet = true; m_s3Logs = std::move(value); }

    /**
     * <p>Describes whether S3 data event logs are enabled as a data source.</p>
     */
    inline OrganizationDataSourceConfigurationsResult& WithS3Logs(const OrganizationS3LogsConfigurationResult& value) { SetS3Logs(value); return *this;}

    /**
     * <p>Describes whether S3 data event logs are enabled as a data source.</p>
     */
    inline OrganizationDataSourceConfigurationsResult& WithS3Logs(OrganizationS3LogsConfigurationResult&& value) { SetS3Logs(std::move(value)); return *this;}


    /**
     * <p>Describes the configuration of Kubernetes data sources.</p>
     */
    inline const OrganizationKubernetesConfigurationResult& GetKubernetes() const{ return m_kubernetes; }

    /**
     * <p>Describes the configuration of Kubernetes data sources.</p>
     */
    inline bool KubernetesHasBeenSet() const { return m_kubernetesHasBeenSet; }

    /**
     * <p>Describes the configuration of Kubernetes data sources.</p>
     */
    inline void SetKubernetes(const OrganizationKubernetesConfigurationResult& value) { m_kubernetesHasBeenSet = true; m_kubernetes = value; }

    /**
     * <p>Describes the configuration of Kubernetes data sources.</p>
     */
    inline void SetKubernetes(OrganizationKubernetesConfigurationResult&& value) { m_kubernetesHasBeenSet = true; m_kubernetes = std::move(value); }

    /**
     * <p>Describes the configuration of Kubernetes data sources.</p>
     */
    inline OrganizationDataSourceConfigurationsResult& WithKubernetes(const OrganizationKubernetesConfigurationResult& value) { SetKubernetes(value); return *this;}

    /**
     * <p>Describes the configuration of Kubernetes data sources.</p>
     */
    inline OrganizationDataSourceConfigurationsResult& WithKubernetes(OrganizationKubernetesConfigurationResult&& value) { SetKubernetes(std::move(value)); return *this;}


    /**
     * <p>Describes the configuration of Malware Protection data source for an
     * organization.</p>
     */
    inline const OrganizationMalwareProtectionConfigurationResult& GetMalwareProtection() const{ return m_malwareProtection; }

    /**
     * <p>Describes the configuration of Malware Protection data source for an
     * organization.</p>
     */
    inline bool MalwareProtectionHasBeenSet() const { return m_malwareProtectionHasBeenSet; }

    /**
     * <p>Describes the configuration of Malware Protection data source for an
     * organization.</p>
     */
    inline void SetMalwareProtection(const OrganizationMalwareProtectionConfigurationResult& value) { m_malwareProtectionHasBeenSet = true; m_malwareProtection = value; }

    /**
     * <p>Describes the configuration of Malware Protection data source for an
     * organization.</p>
     */
    inline void SetMalwareProtection(OrganizationMalwareProtectionConfigurationResult&& value) { m_malwareProtectionHasBeenSet = true; m_malwareProtection = std::move(value); }

    /**
     * <p>Describes the configuration of Malware Protection data source for an
     * organization.</p>
     */
    inline OrganizationDataSourceConfigurationsResult& WithMalwareProtection(const OrganizationMalwareProtectionConfigurationResult& value) { SetMalwareProtection(value); return *this;}

    /**
     * <p>Describes the configuration of Malware Protection data source for an
     * organization.</p>
     */
    inline OrganizationDataSourceConfigurationsResult& WithMalwareProtection(OrganizationMalwareProtectionConfigurationResult&& value) { SetMalwareProtection(std::move(value)); return *this;}

  private:

    OrganizationS3LogsConfigurationResult m_s3Logs;
    bool m_s3LogsHasBeenSet = false;

    OrganizationKubernetesConfigurationResult m_kubernetes;
    bool m_kubernetesHasBeenSet = false;

    OrganizationMalwareProtectionConfigurationResult m_malwareProtection;
    bool m_malwareProtectionHasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws

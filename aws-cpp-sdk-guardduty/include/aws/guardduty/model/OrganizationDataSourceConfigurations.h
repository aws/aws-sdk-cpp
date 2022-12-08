/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/guardduty/model/OrganizationS3LogsConfiguration.h>
#include <aws/guardduty/model/OrganizationKubernetesConfiguration.h>
#include <aws/guardduty/model/OrganizationMalwareProtectionConfiguration.h>
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
   * <p>An object that contains information on which data sources will be configured
   * to be automatically enabled for new members within the
   * organization.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/OrganizationDataSourceConfigurations">AWS
   * API Reference</a></p>
   */
  class OrganizationDataSourceConfigurations
  {
  public:
    AWS_GUARDDUTY_API OrganizationDataSourceConfigurations();
    AWS_GUARDDUTY_API OrganizationDataSourceConfigurations(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API OrganizationDataSourceConfigurations& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Describes whether S3 data event logs are enabled for new members of the
     * organization.</p>
     */
    inline const OrganizationS3LogsConfiguration& GetS3Logs() const{ return m_s3Logs; }

    /**
     * <p>Describes whether S3 data event logs are enabled for new members of the
     * organization.</p>
     */
    inline bool S3LogsHasBeenSet() const { return m_s3LogsHasBeenSet; }

    /**
     * <p>Describes whether S3 data event logs are enabled for new members of the
     * organization.</p>
     */
    inline void SetS3Logs(const OrganizationS3LogsConfiguration& value) { m_s3LogsHasBeenSet = true; m_s3Logs = value; }

    /**
     * <p>Describes whether S3 data event logs are enabled for new members of the
     * organization.</p>
     */
    inline void SetS3Logs(OrganizationS3LogsConfiguration&& value) { m_s3LogsHasBeenSet = true; m_s3Logs = std::move(value); }

    /**
     * <p>Describes whether S3 data event logs are enabled for new members of the
     * organization.</p>
     */
    inline OrganizationDataSourceConfigurations& WithS3Logs(const OrganizationS3LogsConfiguration& value) { SetS3Logs(value); return *this;}

    /**
     * <p>Describes whether S3 data event logs are enabled for new members of the
     * organization.</p>
     */
    inline OrganizationDataSourceConfigurations& WithS3Logs(OrganizationS3LogsConfiguration&& value) { SetS3Logs(std::move(value)); return *this;}


    /**
     * <p>Describes the configuration of Kubernetes data sources for new members of the
     * organization.</p>
     */
    inline const OrganizationKubernetesConfiguration& GetKubernetes() const{ return m_kubernetes; }

    /**
     * <p>Describes the configuration of Kubernetes data sources for new members of the
     * organization.</p>
     */
    inline bool KubernetesHasBeenSet() const { return m_kubernetesHasBeenSet; }

    /**
     * <p>Describes the configuration of Kubernetes data sources for new members of the
     * organization.</p>
     */
    inline void SetKubernetes(const OrganizationKubernetesConfiguration& value) { m_kubernetesHasBeenSet = true; m_kubernetes = value; }

    /**
     * <p>Describes the configuration of Kubernetes data sources for new members of the
     * organization.</p>
     */
    inline void SetKubernetes(OrganizationKubernetesConfiguration&& value) { m_kubernetesHasBeenSet = true; m_kubernetes = std::move(value); }

    /**
     * <p>Describes the configuration of Kubernetes data sources for new members of the
     * organization.</p>
     */
    inline OrganizationDataSourceConfigurations& WithKubernetes(const OrganizationKubernetesConfiguration& value) { SetKubernetes(value); return *this;}

    /**
     * <p>Describes the configuration of Kubernetes data sources for new members of the
     * organization.</p>
     */
    inline OrganizationDataSourceConfigurations& WithKubernetes(OrganizationKubernetesConfiguration&& value) { SetKubernetes(std::move(value)); return *this;}


    /**
     * <p>Describes the configuration of Malware Protection for new members of the
     * organization.</p>
     */
    inline const OrganizationMalwareProtectionConfiguration& GetMalwareProtection() const{ return m_malwareProtection; }

    /**
     * <p>Describes the configuration of Malware Protection for new members of the
     * organization.</p>
     */
    inline bool MalwareProtectionHasBeenSet() const { return m_malwareProtectionHasBeenSet; }

    /**
     * <p>Describes the configuration of Malware Protection for new members of the
     * organization.</p>
     */
    inline void SetMalwareProtection(const OrganizationMalwareProtectionConfiguration& value) { m_malwareProtectionHasBeenSet = true; m_malwareProtection = value; }

    /**
     * <p>Describes the configuration of Malware Protection for new members of the
     * organization.</p>
     */
    inline void SetMalwareProtection(OrganizationMalwareProtectionConfiguration&& value) { m_malwareProtectionHasBeenSet = true; m_malwareProtection = std::move(value); }

    /**
     * <p>Describes the configuration of Malware Protection for new members of the
     * organization.</p>
     */
    inline OrganizationDataSourceConfigurations& WithMalwareProtection(const OrganizationMalwareProtectionConfiguration& value) { SetMalwareProtection(value); return *this;}

    /**
     * <p>Describes the configuration of Malware Protection for new members of the
     * organization.</p>
     */
    inline OrganizationDataSourceConfigurations& WithMalwareProtection(OrganizationMalwareProtectionConfiguration&& value) { SetMalwareProtection(std::move(value)); return *this;}

  private:

    OrganizationS3LogsConfiguration m_s3Logs;
    bool m_s3LogsHasBeenSet = false;

    OrganizationKubernetesConfiguration m_kubernetes;
    bool m_kubernetesHasBeenSet = false;

    OrganizationMalwareProtectionConfiguration m_malwareProtection;
    bool m_malwareProtectionHasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws

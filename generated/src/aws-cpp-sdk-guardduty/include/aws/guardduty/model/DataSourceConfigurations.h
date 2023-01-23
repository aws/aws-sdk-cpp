/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/guardduty/model/S3LogsConfiguration.h>
#include <aws/guardduty/model/KubernetesConfiguration.h>
#include <aws/guardduty/model/MalwareProtectionConfiguration.h>
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
   * <p>Contains information about which data sources are enabled.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/DataSourceConfigurations">AWS
   * API Reference</a></p>
   */
  class DataSourceConfigurations
  {
  public:
    AWS_GUARDDUTY_API DataSourceConfigurations();
    AWS_GUARDDUTY_API DataSourceConfigurations(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API DataSourceConfigurations& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Describes whether S3 data event logs are enabled as a data source.</p>
     */
    inline const S3LogsConfiguration& GetS3Logs() const{ return m_s3Logs; }

    /**
     * <p>Describes whether S3 data event logs are enabled as a data source.</p>
     */
    inline bool S3LogsHasBeenSet() const { return m_s3LogsHasBeenSet; }

    /**
     * <p>Describes whether S3 data event logs are enabled as a data source.</p>
     */
    inline void SetS3Logs(const S3LogsConfiguration& value) { m_s3LogsHasBeenSet = true; m_s3Logs = value; }

    /**
     * <p>Describes whether S3 data event logs are enabled as a data source.</p>
     */
    inline void SetS3Logs(S3LogsConfiguration&& value) { m_s3LogsHasBeenSet = true; m_s3Logs = std::move(value); }

    /**
     * <p>Describes whether S3 data event logs are enabled as a data source.</p>
     */
    inline DataSourceConfigurations& WithS3Logs(const S3LogsConfiguration& value) { SetS3Logs(value); return *this;}

    /**
     * <p>Describes whether S3 data event logs are enabled as a data source.</p>
     */
    inline DataSourceConfigurations& WithS3Logs(S3LogsConfiguration&& value) { SetS3Logs(std::move(value)); return *this;}


    /**
     * <p>Describes whether any Kubernetes logs are enabled as data sources.</p>
     */
    inline const KubernetesConfiguration& GetKubernetes() const{ return m_kubernetes; }

    /**
     * <p>Describes whether any Kubernetes logs are enabled as data sources.</p>
     */
    inline bool KubernetesHasBeenSet() const { return m_kubernetesHasBeenSet; }

    /**
     * <p>Describes whether any Kubernetes logs are enabled as data sources.</p>
     */
    inline void SetKubernetes(const KubernetesConfiguration& value) { m_kubernetesHasBeenSet = true; m_kubernetes = value; }

    /**
     * <p>Describes whether any Kubernetes logs are enabled as data sources.</p>
     */
    inline void SetKubernetes(KubernetesConfiguration&& value) { m_kubernetesHasBeenSet = true; m_kubernetes = std::move(value); }

    /**
     * <p>Describes whether any Kubernetes logs are enabled as data sources.</p>
     */
    inline DataSourceConfigurations& WithKubernetes(const KubernetesConfiguration& value) { SetKubernetes(value); return *this;}

    /**
     * <p>Describes whether any Kubernetes logs are enabled as data sources.</p>
     */
    inline DataSourceConfigurations& WithKubernetes(KubernetesConfiguration&& value) { SetKubernetes(std::move(value)); return *this;}


    /**
     * <p>Describes whether Malware Protection is enabled as a data source.</p>
     */
    inline const MalwareProtectionConfiguration& GetMalwareProtection() const{ return m_malwareProtection; }

    /**
     * <p>Describes whether Malware Protection is enabled as a data source.</p>
     */
    inline bool MalwareProtectionHasBeenSet() const { return m_malwareProtectionHasBeenSet; }

    /**
     * <p>Describes whether Malware Protection is enabled as a data source.</p>
     */
    inline void SetMalwareProtection(const MalwareProtectionConfiguration& value) { m_malwareProtectionHasBeenSet = true; m_malwareProtection = value; }

    /**
     * <p>Describes whether Malware Protection is enabled as a data source.</p>
     */
    inline void SetMalwareProtection(MalwareProtectionConfiguration&& value) { m_malwareProtectionHasBeenSet = true; m_malwareProtection = std::move(value); }

    /**
     * <p>Describes whether Malware Protection is enabled as a data source.</p>
     */
    inline DataSourceConfigurations& WithMalwareProtection(const MalwareProtectionConfiguration& value) { SetMalwareProtection(value); return *this;}

    /**
     * <p>Describes whether Malware Protection is enabled as a data source.</p>
     */
    inline DataSourceConfigurations& WithMalwareProtection(MalwareProtectionConfiguration&& value) { SetMalwareProtection(std::move(value)); return *this;}

  private:

    S3LogsConfiguration m_s3Logs;
    bool m_s3LogsHasBeenSet = false;

    KubernetesConfiguration m_kubernetes;
    bool m_kubernetesHasBeenSet = false;

    MalwareProtectionConfiguration m_malwareProtection;
    bool m_malwareProtectionHasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws

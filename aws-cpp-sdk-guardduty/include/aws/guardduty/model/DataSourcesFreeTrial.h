/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/guardduty/model/DataSourceFreeTrial.h>
#include <aws/guardduty/model/KubernetesDataSourceFreeTrial.h>
#include <aws/guardduty/model/MalwareProtectionDataSourceFreeTrial.h>
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
   * <p>Contains information about which data sources are enabled for the GuardDuty
   * member account.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/DataSourcesFreeTrial">AWS
   * API Reference</a></p>
   */
  class DataSourcesFreeTrial
  {
  public:
    AWS_GUARDDUTY_API DataSourcesFreeTrial();
    AWS_GUARDDUTY_API DataSourcesFreeTrial(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API DataSourcesFreeTrial& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Describes whether any Amazon Web Services CloudTrail management event logs
     * are enabled as data sources.</p>
     */
    inline const DataSourceFreeTrial& GetCloudTrail() const{ return m_cloudTrail; }

    /**
     * <p>Describes whether any Amazon Web Services CloudTrail management event logs
     * are enabled as data sources.</p>
     */
    inline bool CloudTrailHasBeenSet() const { return m_cloudTrailHasBeenSet; }

    /**
     * <p>Describes whether any Amazon Web Services CloudTrail management event logs
     * are enabled as data sources.</p>
     */
    inline void SetCloudTrail(const DataSourceFreeTrial& value) { m_cloudTrailHasBeenSet = true; m_cloudTrail = value; }

    /**
     * <p>Describes whether any Amazon Web Services CloudTrail management event logs
     * are enabled as data sources.</p>
     */
    inline void SetCloudTrail(DataSourceFreeTrial&& value) { m_cloudTrailHasBeenSet = true; m_cloudTrail = std::move(value); }

    /**
     * <p>Describes whether any Amazon Web Services CloudTrail management event logs
     * are enabled as data sources.</p>
     */
    inline DataSourcesFreeTrial& WithCloudTrail(const DataSourceFreeTrial& value) { SetCloudTrail(value); return *this;}

    /**
     * <p>Describes whether any Amazon Web Services CloudTrail management event logs
     * are enabled as data sources.</p>
     */
    inline DataSourcesFreeTrial& WithCloudTrail(DataSourceFreeTrial&& value) { SetCloudTrail(std::move(value)); return *this;}


    /**
     * <p>Describes whether any DNS logs are enabled as data sources.</p>
     */
    inline const DataSourceFreeTrial& GetDnsLogs() const{ return m_dnsLogs; }

    /**
     * <p>Describes whether any DNS logs are enabled as data sources.</p>
     */
    inline bool DnsLogsHasBeenSet() const { return m_dnsLogsHasBeenSet; }

    /**
     * <p>Describes whether any DNS logs are enabled as data sources.</p>
     */
    inline void SetDnsLogs(const DataSourceFreeTrial& value) { m_dnsLogsHasBeenSet = true; m_dnsLogs = value; }

    /**
     * <p>Describes whether any DNS logs are enabled as data sources.</p>
     */
    inline void SetDnsLogs(DataSourceFreeTrial&& value) { m_dnsLogsHasBeenSet = true; m_dnsLogs = std::move(value); }

    /**
     * <p>Describes whether any DNS logs are enabled as data sources.</p>
     */
    inline DataSourcesFreeTrial& WithDnsLogs(const DataSourceFreeTrial& value) { SetDnsLogs(value); return *this;}

    /**
     * <p>Describes whether any DNS logs are enabled as data sources.</p>
     */
    inline DataSourcesFreeTrial& WithDnsLogs(DataSourceFreeTrial&& value) { SetDnsLogs(std::move(value)); return *this;}


    /**
     * <p>Describes whether any VPC Flow logs are enabled as data sources.</p>
     */
    inline const DataSourceFreeTrial& GetFlowLogs() const{ return m_flowLogs; }

    /**
     * <p>Describes whether any VPC Flow logs are enabled as data sources.</p>
     */
    inline bool FlowLogsHasBeenSet() const { return m_flowLogsHasBeenSet; }

    /**
     * <p>Describes whether any VPC Flow logs are enabled as data sources.</p>
     */
    inline void SetFlowLogs(const DataSourceFreeTrial& value) { m_flowLogsHasBeenSet = true; m_flowLogs = value; }

    /**
     * <p>Describes whether any VPC Flow logs are enabled as data sources.</p>
     */
    inline void SetFlowLogs(DataSourceFreeTrial&& value) { m_flowLogsHasBeenSet = true; m_flowLogs = std::move(value); }

    /**
     * <p>Describes whether any VPC Flow logs are enabled as data sources.</p>
     */
    inline DataSourcesFreeTrial& WithFlowLogs(const DataSourceFreeTrial& value) { SetFlowLogs(value); return *this;}

    /**
     * <p>Describes whether any VPC Flow logs are enabled as data sources.</p>
     */
    inline DataSourcesFreeTrial& WithFlowLogs(DataSourceFreeTrial&& value) { SetFlowLogs(std::move(value)); return *this;}


    /**
     * <p>Describes whether any S3 data event logs are enabled as data sources.</p>
     */
    inline const DataSourceFreeTrial& GetS3Logs() const{ return m_s3Logs; }

    /**
     * <p>Describes whether any S3 data event logs are enabled as data sources.</p>
     */
    inline bool S3LogsHasBeenSet() const { return m_s3LogsHasBeenSet; }

    /**
     * <p>Describes whether any S3 data event logs are enabled as data sources.</p>
     */
    inline void SetS3Logs(const DataSourceFreeTrial& value) { m_s3LogsHasBeenSet = true; m_s3Logs = value; }

    /**
     * <p>Describes whether any S3 data event logs are enabled as data sources.</p>
     */
    inline void SetS3Logs(DataSourceFreeTrial&& value) { m_s3LogsHasBeenSet = true; m_s3Logs = std::move(value); }

    /**
     * <p>Describes whether any S3 data event logs are enabled as data sources.</p>
     */
    inline DataSourcesFreeTrial& WithS3Logs(const DataSourceFreeTrial& value) { SetS3Logs(value); return *this;}

    /**
     * <p>Describes whether any S3 data event logs are enabled as data sources.</p>
     */
    inline DataSourcesFreeTrial& WithS3Logs(DataSourceFreeTrial&& value) { SetS3Logs(std::move(value)); return *this;}


    /**
     * <p>Describes whether any Kubernetes logs are enabled as data sources.</p>
     */
    inline const KubernetesDataSourceFreeTrial& GetKubernetes() const{ return m_kubernetes; }

    /**
     * <p>Describes whether any Kubernetes logs are enabled as data sources.</p>
     */
    inline bool KubernetesHasBeenSet() const { return m_kubernetesHasBeenSet; }

    /**
     * <p>Describes whether any Kubernetes logs are enabled as data sources.</p>
     */
    inline void SetKubernetes(const KubernetesDataSourceFreeTrial& value) { m_kubernetesHasBeenSet = true; m_kubernetes = value; }

    /**
     * <p>Describes whether any Kubernetes logs are enabled as data sources.</p>
     */
    inline void SetKubernetes(KubernetesDataSourceFreeTrial&& value) { m_kubernetesHasBeenSet = true; m_kubernetes = std::move(value); }

    /**
     * <p>Describes whether any Kubernetes logs are enabled as data sources.</p>
     */
    inline DataSourcesFreeTrial& WithKubernetes(const KubernetesDataSourceFreeTrial& value) { SetKubernetes(value); return *this;}

    /**
     * <p>Describes whether any Kubernetes logs are enabled as data sources.</p>
     */
    inline DataSourcesFreeTrial& WithKubernetes(KubernetesDataSourceFreeTrial&& value) { SetKubernetes(std::move(value)); return *this;}


    /**
     * <p>Describes whether Malware Protection is enabled as a data source.</p>
     */
    inline const MalwareProtectionDataSourceFreeTrial& GetMalwareProtection() const{ return m_malwareProtection; }

    /**
     * <p>Describes whether Malware Protection is enabled as a data source.</p>
     */
    inline bool MalwareProtectionHasBeenSet() const { return m_malwareProtectionHasBeenSet; }

    /**
     * <p>Describes whether Malware Protection is enabled as a data source.</p>
     */
    inline void SetMalwareProtection(const MalwareProtectionDataSourceFreeTrial& value) { m_malwareProtectionHasBeenSet = true; m_malwareProtection = value; }

    /**
     * <p>Describes whether Malware Protection is enabled as a data source.</p>
     */
    inline void SetMalwareProtection(MalwareProtectionDataSourceFreeTrial&& value) { m_malwareProtectionHasBeenSet = true; m_malwareProtection = std::move(value); }

    /**
     * <p>Describes whether Malware Protection is enabled as a data source.</p>
     */
    inline DataSourcesFreeTrial& WithMalwareProtection(const MalwareProtectionDataSourceFreeTrial& value) { SetMalwareProtection(value); return *this;}

    /**
     * <p>Describes whether Malware Protection is enabled as a data source.</p>
     */
    inline DataSourcesFreeTrial& WithMalwareProtection(MalwareProtectionDataSourceFreeTrial&& value) { SetMalwareProtection(std::move(value)); return *this;}

  private:

    DataSourceFreeTrial m_cloudTrail;
    bool m_cloudTrailHasBeenSet = false;

    DataSourceFreeTrial m_dnsLogs;
    bool m_dnsLogsHasBeenSet = false;

    DataSourceFreeTrial m_flowLogs;
    bool m_flowLogsHasBeenSet = false;

    DataSourceFreeTrial m_s3Logs;
    bool m_s3LogsHasBeenSet = false;

    KubernetesDataSourceFreeTrial m_kubernetes;
    bool m_kubernetesHasBeenSet = false;

    MalwareProtectionDataSourceFreeTrial m_malwareProtection;
    bool m_malwareProtectionHasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws

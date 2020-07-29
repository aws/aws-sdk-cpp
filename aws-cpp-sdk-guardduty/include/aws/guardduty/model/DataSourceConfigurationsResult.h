/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/guardduty/model/CloudTrailConfigurationResult.h>
#include <aws/guardduty/model/DNSLogsConfigurationResult.h>
#include <aws/guardduty/model/FlowLogsConfigurationResult.h>
#include <aws/guardduty/model/S3LogsConfigurationResult.h>
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
   * <p>Contains information on the status of data sources for the
   * detector.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/DataSourceConfigurationsResult">AWS
   * API Reference</a></p>
   */
  class AWS_GUARDDUTY_API DataSourceConfigurationsResult
  {
  public:
    DataSourceConfigurationsResult();
    DataSourceConfigurationsResult(Aws::Utils::Json::JsonView jsonValue);
    DataSourceConfigurationsResult& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>An object that contains information on the status of CloudTrail as a data
     * source.</p>
     */
    inline const CloudTrailConfigurationResult& GetCloudTrail() const{ return m_cloudTrail; }

    /**
     * <p>An object that contains information on the status of CloudTrail as a data
     * source.</p>
     */
    inline bool CloudTrailHasBeenSet() const { return m_cloudTrailHasBeenSet; }

    /**
     * <p>An object that contains information on the status of CloudTrail as a data
     * source.</p>
     */
    inline void SetCloudTrail(const CloudTrailConfigurationResult& value) { m_cloudTrailHasBeenSet = true; m_cloudTrail = value; }

    /**
     * <p>An object that contains information on the status of CloudTrail as a data
     * source.</p>
     */
    inline void SetCloudTrail(CloudTrailConfigurationResult&& value) { m_cloudTrailHasBeenSet = true; m_cloudTrail = std::move(value); }

    /**
     * <p>An object that contains information on the status of CloudTrail as a data
     * source.</p>
     */
    inline DataSourceConfigurationsResult& WithCloudTrail(const CloudTrailConfigurationResult& value) { SetCloudTrail(value); return *this;}

    /**
     * <p>An object that contains information on the status of CloudTrail as a data
     * source.</p>
     */
    inline DataSourceConfigurationsResult& WithCloudTrail(CloudTrailConfigurationResult&& value) { SetCloudTrail(std::move(value)); return *this;}


    /**
     * <p>An object that contains information on the status of DNS logs as a data
     * source.</p>
     */
    inline const DNSLogsConfigurationResult& GetDNSLogs() const{ return m_dNSLogs; }

    /**
     * <p>An object that contains information on the status of DNS logs as a data
     * source.</p>
     */
    inline bool DNSLogsHasBeenSet() const { return m_dNSLogsHasBeenSet; }

    /**
     * <p>An object that contains information on the status of DNS logs as a data
     * source.</p>
     */
    inline void SetDNSLogs(const DNSLogsConfigurationResult& value) { m_dNSLogsHasBeenSet = true; m_dNSLogs = value; }

    /**
     * <p>An object that contains information on the status of DNS logs as a data
     * source.</p>
     */
    inline void SetDNSLogs(DNSLogsConfigurationResult&& value) { m_dNSLogsHasBeenSet = true; m_dNSLogs = std::move(value); }

    /**
     * <p>An object that contains information on the status of DNS logs as a data
     * source.</p>
     */
    inline DataSourceConfigurationsResult& WithDNSLogs(const DNSLogsConfigurationResult& value) { SetDNSLogs(value); return *this;}

    /**
     * <p>An object that contains information on the status of DNS logs as a data
     * source.</p>
     */
    inline DataSourceConfigurationsResult& WithDNSLogs(DNSLogsConfigurationResult&& value) { SetDNSLogs(std::move(value)); return *this;}


    /**
     * <p>An object that contains information on the status of VPC flow logs as a data
     * source.</p>
     */
    inline const FlowLogsConfigurationResult& GetFlowLogs() const{ return m_flowLogs; }

    /**
     * <p>An object that contains information on the status of VPC flow logs as a data
     * source.</p>
     */
    inline bool FlowLogsHasBeenSet() const { return m_flowLogsHasBeenSet; }

    /**
     * <p>An object that contains information on the status of VPC flow logs as a data
     * source.</p>
     */
    inline void SetFlowLogs(const FlowLogsConfigurationResult& value) { m_flowLogsHasBeenSet = true; m_flowLogs = value; }

    /**
     * <p>An object that contains information on the status of VPC flow logs as a data
     * source.</p>
     */
    inline void SetFlowLogs(FlowLogsConfigurationResult&& value) { m_flowLogsHasBeenSet = true; m_flowLogs = std::move(value); }

    /**
     * <p>An object that contains information on the status of VPC flow logs as a data
     * source.</p>
     */
    inline DataSourceConfigurationsResult& WithFlowLogs(const FlowLogsConfigurationResult& value) { SetFlowLogs(value); return *this;}

    /**
     * <p>An object that contains information on the status of VPC flow logs as a data
     * source.</p>
     */
    inline DataSourceConfigurationsResult& WithFlowLogs(FlowLogsConfigurationResult&& value) { SetFlowLogs(std::move(value)); return *this;}


    /**
     * <p>An object that contains information on the status of S3 Data event logs as a
     * data source.</p>
     */
    inline const S3LogsConfigurationResult& GetS3Logs() const{ return m_s3Logs; }

    /**
     * <p>An object that contains information on the status of S3 Data event logs as a
     * data source.</p>
     */
    inline bool S3LogsHasBeenSet() const { return m_s3LogsHasBeenSet; }

    /**
     * <p>An object that contains information on the status of S3 Data event logs as a
     * data source.</p>
     */
    inline void SetS3Logs(const S3LogsConfigurationResult& value) { m_s3LogsHasBeenSet = true; m_s3Logs = value; }

    /**
     * <p>An object that contains information on the status of S3 Data event logs as a
     * data source.</p>
     */
    inline void SetS3Logs(S3LogsConfigurationResult&& value) { m_s3LogsHasBeenSet = true; m_s3Logs = std::move(value); }

    /**
     * <p>An object that contains information on the status of S3 Data event logs as a
     * data source.</p>
     */
    inline DataSourceConfigurationsResult& WithS3Logs(const S3LogsConfigurationResult& value) { SetS3Logs(value); return *this;}

    /**
     * <p>An object that contains information on the status of S3 Data event logs as a
     * data source.</p>
     */
    inline DataSourceConfigurationsResult& WithS3Logs(S3LogsConfigurationResult&& value) { SetS3Logs(std::move(value)); return *this;}

  private:

    CloudTrailConfigurationResult m_cloudTrail;
    bool m_cloudTrailHasBeenSet;

    DNSLogsConfigurationResult m_dNSLogs;
    bool m_dNSLogsHasBeenSet;

    FlowLogsConfigurationResult m_flowLogs;
    bool m_flowLogsHasBeenSet;

    S3LogsConfigurationResult m_s3Logs;
    bool m_s3LogsHasBeenSet;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws

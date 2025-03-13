/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lookoutmetrics/LookoutMetrics_EXPORTS.h>
#include <aws/lookoutmetrics/model/S3SourceConfig.h>
#include <aws/lookoutmetrics/model/AppFlowConfig.h>
#include <aws/lookoutmetrics/model/CloudWatchConfig.h>
#include <aws/lookoutmetrics/model/RDSSourceConfig.h>
#include <aws/lookoutmetrics/model/RedshiftSourceConfig.h>
#include <aws/lookoutmetrics/model/AthenaSourceConfig.h>
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
namespace LookoutMetrics
{
namespace Model
{

  /**
   * <p>Contains information about source data used to generate
   * metrics.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutmetrics-2017-07-25/MetricSource">AWS
   * API Reference</a></p>
   */
  class MetricSource
  {
  public:
    AWS_LOOKOUTMETRICS_API MetricSource() = default;
    AWS_LOOKOUTMETRICS_API MetricSource(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTMETRICS_API MetricSource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTMETRICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const S3SourceConfig& GetS3SourceConfig() const { return m_s3SourceConfig; }
    inline bool S3SourceConfigHasBeenSet() const { return m_s3SourceConfigHasBeenSet; }
    template<typename S3SourceConfigT = S3SourceConfig>
    void SetS3SourceConfig(S3SourceConfigT&& value) { m_s3SourceConfigHasBeenSet = true; m_s3SourceConfig = std::forward<S3SourceConfigT>(value); }
    template<typename S3SourceConfigT = S3SourceConfig>
    MetricSource& WithS3SourceConfig(S3SourceConfigT&& value) { SetS3SourceConfig(std::forward<S3SourceConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about an AppFlow datasource.</p>
     */
    inline const AppFlowConfig& GetAppFlowConfig() const { return m_appFlowConfig; }
    inline bool AppFlowConfigHasBeenSet() const { return m_appFlowConfigHasBeenSet; }
    template<typename AppFlowConfigT = AppFlowConfig>
    void SetAppFlowConfig(AppFlowConfigT&& value) { m_appFlowConfigHasBeenSet = true; m_appFlowConfig = std::forward<AppFlowConfigT>(value); }
    template<typename AppFlowConfigT = AppFlowConfig>
    MetricSource& WithAppFlowConfig(AppFlowConfigT&& value) { SetAppFlowConfig(std::forward<AppFlowConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about an Amazon CloudWatch monitoring datasource.</p>
     */
    inline const CloudWatchConfig& GetCloudWatchConfig() const { return m_cloudWatchConfig; }
    inline bool CloudWatchConfigHasBeenSet() const { return m_cloudWatchConfigHasBeenSet; }
    template<typename CloudWatchConfigT = CloudWatchConfig>
    void SetCloudWatchConfig(CloudWatchConfigT&& value) { m_cloudWatchConfigHasBeenSet = true; m_cloudWatchConfig = std::forward<CloudWatchConfigT>(value); }
    template<typename CloudWatchConfigT = CloudWatchConfig>
    MetricSource& WithCloudWatchConfig(CloudWatchConfigT&& value) { SetCloudWatchConfig(std::forward<CloudWatchConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about an Amazon Relational Database Service (RDS) datasource.</p>
     */
    inline const RDSSourceConfig& GetRDSSourceConfig() const { return m_rDSSourceConfig; }
    inline bool RDSSourceConfigHasBeenSet() const { return m_rDSSourceConfigHasBeenSet; }
    template<typename RDSSourceConfigT = RDSSourceConfig>
    void SetRDSSourceConfig(RDSSourceConfigT&& value) { m_rDSSourceConfigHasBeenSet = true; m_rDSSourceConfig = std::forward<RDSSourceConfigT>(value); }
    template<typename RDSSourceConfigT = RDSSourceConfig>
    MetricSource& WithRDSSourceConfig(RDSSourceConfigT&& value) { SetRDSSourceConfig(std::forward<RDSSourceConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about an Amazon Redshift database datasource.</p>
     */
    inline const RedshiftSourceConfig& GetRedshiftSourceConfig() const { return m_redshiftSourceConfig; }
    inline bool RedshiftSourceConfigHasBeenSet() const { return m_redshiftSourceConfigHasBeenSet; }
    template<typename RedshiftSourceConfigT = RedshiftSourceConfig>
    void SetRedshiftSourceConfig(RedshiftSourceConfigT&& value) { m_redshiftSourceConfigHasBeenSet = true; m_redshiftSourceConfig = std::forward<RedshiftSourceConfigT>(value); }
    template<typename RedshiftSourceConfigT = RedshiftSourceConfig>
    MetricSource& WithRedshiftSourceConfig(RedshiftSourceConfigT&& value) { SetRedshiftSourceConfig(std::forward<RedshiftSourceConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about an Amazon Athena datasource.</p>
     */
    inline const AthenaSourceConfig& GetAthenaSourceConfig() const { return m_athenaSourceConfig; }
    inline bool AthenaSourceConfigHasBeenSet() const { return m_athenaSourceConfigHasBeenSet; }
    template<typename AthenaSourceConfigT = AthenaSourceConfig>
    void SetAthenaSourceConfig(AthenaSourceConfigT&& value) { m_athenaSourceConfigHasBeenSet = true; m_athenaSourceConfig = std::forward<AthenaSourceConfigT>(value); }
    template<typename AthenaSourceConfigT = AthenaSourceConfig>
    MetricSource& WithAthenaSourceConfig(AthenaSourceConfigT&& value) { SetAthenaSourceConfig(std::forward<AthenaSourceConfigT>(value)); return *this;}
    ///@}
  private:

    S3SourceConfig m_s3SourceConfig;
    bool m_s3SourceConfigHasBeenSet = false;

    AppFlowConfig m_appFlowConfig;
    bool m_appFlowConfigHasBeenSet = false;

    CloudWatchConfig m_cloudWatchConfig;
    bool m_cloudWatchConfigHasBeenSet = false;

    RDSSourceConfig m_rDSSourceConfig;
    bool m_rDSSourceConfigHasBeenSet = false;

    RedshiftSourceConfig m_redshiftSourceConfig;
    bool m_redshiftSourceConfigHasBeenSet = false;

    AthenaSourceConfig m_athenaSourceConfig;
    bool m_athenaSourceConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace LookoutMetrics
} // namespace Aws

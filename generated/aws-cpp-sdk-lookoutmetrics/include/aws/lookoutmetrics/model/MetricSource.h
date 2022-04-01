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
   * <p>Contains information about source data used to generate a
   * metric.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutmetrics-2017-07-25/MetricSource">AWS
   * API Reference</a></p>
   */
  class AWS_LOOKOUTMETRICS_API MetricSource
  {
  public:
    MetricSource();
    MetricSource(Aws::Utils::Json::JsonView jsonValue);
    MetricSource& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const S3SourceConfig& GetS3SourceConfig() const{ return m_s3SourceConfig; }

    
    inline bool S3SourceConfigHasBeenSet() const { return m_s3SourceConfigHasBeenSet; }

    
    inline void SetS3SourceConfig(const S3SourceConfig& value) { m_s3SourceConfigHasBeenSet = true; m_s3SourceConfig = value; }

    
    inline void SetS3SourceConfig(S3SourceConfig&& value) { m_s3SourceConfigHasBeenSet = true; m_s3SourceConfig = std::move(value); }

    
    inline MetricSource& WithS3SourceConfig(const S3SourceConfig& value) { SetS3SourceConfig(value); return *this;}

    
    inline MetricSource& WithS3SourceConfig(S3SourceConfig&& value) { SetS3SourceConfig(std::move(value)); return *this;}


    /**
     * <p>An object containing information about the AppFlow configuration.</p>
     */
    inline const AppFlowConfig& GetAppFlowConfig() const{ return m_appFlowConfig; }

    /**
     * <p>An object containing information about the AppFlow configuration.</p>
     */
    inline bool AppFlowConfigHasBeenSet() const { return m_appFlowConfigHasBeenSet; }

    /**
     * <p>An object containing information about the AppFlow configuration.</p>
     */
    inline void SetAppFlowConfig(const AppFlowConfig& value) { m_appFlowConfigHasBeenSet = true; m_appFlowConfig = value; }

    /**
     * <p>An object containing information about the AppFlow configuration.</p>
     */
    inline void SetAppFlowConfig(AppFlowConfig&& value) { m_appFlowConfigHasBeenSet = true; m_appFlowConfig = std::move(value); }

    /**
     * <p>An object containing information about the AppFlow configuration.</p>
     */
    inline MetricSource& WithAppFlowConfig(const AppFlowConfig& value) { SetAppFlowConfig(value); return *this;}

    /**
     * <p>An object containing information about the AppFlow configuration.</p>
     */
    inline MetricSource& WithAppFlowConfig(AppFlowConfig&& value) { SetAppFlowConfig(std::move(value)); return *this;}


    /**
     * <p>An object containing information about the Amazon CloudWatch monitoring
     * configuration.</p>
     */
    inline const CloudWatchConfig& GetCloudWatchConfig() const{ return m_cloudWatchConfig; }

    /**
     * <p>An object containing information about the Amazon CloudWatch monitoring
     * configuration.</p>
     */
    inline bool CloudWatchConfigHasBeenSet() const { return m_cloudWatchConfigHasBeenSet; }

    /**
     * <p>An object containing information about the Amazon CloudWatch monitoring
     * configuration.</p>
     */
    inline void SetCloudWatchConfig(const CloudWatchConfig& value) { m_cloudWatchConfigHasBeenSet = true; m_cloudWatchConfig = value; }

    /**
     * <p>An object containing information about the Amazon CloudWatch monitoring
     * configuration.</p>
     */
    inline void SetCloudWatchConfig(CloudWatchConfig&& value) { m_cloudWatchConfigHasBeenSet = true; m_cloudWatchConfig = std::move(value); }

    /**
     * <p>An object containing information about the Amazon CloudWatch monitoring
     * configuration.</p>
     */
    inline MetricSource& WithCloudWatchConfig(const CloudWatchConfig& value) { SetCloudWatchConfig(value); return *this;}

    /**
     * <p>An object containing information about the Amazon CloudWatch monitoring
     * configuration.</p>
     */
    inline MetricSource& WithCloudWatchConfig(CloudWatchConfig&& value) { SetCloudWatchConfig(std::move(value)); return *this;}


    /**
     * <p>An object containing information about the Amazon Relational Database Service
     * (RDS) configuration.</p>
     */
    inline const RDSSourceConfig& GetRDSSourceConfig() const{ return m_rDSSourceConfig; }

    /**
     * <p>An object containing information about the Amazon Relational Database Service
     * (RDS) configuration.</p>
     */
    inline bool RDSSourceConfigHasBeenSet() const { return m_rDSSourceConfigHasBeenSet; }

    /**
     * <p>An object containing information about the Amazon Relational Database Service
     * (RDS) configuration.</p>
     */
    inline void SetRDSSourceConfig(const RDSSourceConfig& value) { m_rDSSourceConfigHasBeenSet = true; m_rDSSourceConfig = value; }

    /**
     * <p>An object containing information about the Amazon Relational Database Service
     * (RDS) configuration.</p>
     */
    inline void SetRDSSourceConfig(RDSSourceConfig&& value) { m_rDSSourceConfigHasBeenSet = true; m_rDSSourceConfig = std::move(value); }

    /**
     * <p>An object containing information about the Amazon Relational Database Service
     * (RDS) configuration.</p>
     */
    inline MetricSource& WithRDSSourceConfig(const RDSSourceConfig& value) { SetRDSSourceConfig(value); return *this;}

    /**
     * <p>An object containing information about the Amazon Relational Database Service
     * (RDS) configuration.</p>
     */
    inline MetricSource& WithRDSSourceConfig(RDSSourceConfig&& value) { SetRDSSourceConfig(std::move(value)); return *this;}


    /**
     * <p>An object containing information about the Amazon Redshift database
     * configuration.</p>
     */
    inline const RedshiftSourceConfig& GetRedshiftSourceConfig() const{ return m_redshiftSourceConfig; }

    /**
     * <p>An object containing information about the Amazon Redshift database
     * configuration.</p>
     */
    inline bool RedshiftSourceConfigHasBeenSet() const { return m_redshiftSourceConfigHasBeenSet; }

    /**
     * <p>An object containing information about the Amazon Redshift database
     * configuration.</p>
     */
    inline void SetRedshiftSourceConfig(const RedshiftSourceConfig& value) { m_redshiftSourceConfigHasBeenSet = true; m_redshiftSourceConfig = value; }

    /**
     * <p>An object containing information about the Amazon Redshift database
     * configuration.</p>
     */
    inline void SetRedshiftSourceConfig(RedshiftSourceConfig&& value) { m_redshiftSourceConfigHasBeenSet = true; m_redshiftSourceConfig = std::move(value); }

    /**
     * <p>An object containing information about the Amazon Redshift database
     * configuration.</p>
     */
    inline MetricSource& WithRedshiftSourceConfig(const RedshiftSourceConfig& value) { SetRedshiftSourceConfig(value); return *this;}

    /**
     * <p>An object containing information about the Amazon Redshift database
     * configuration.</p>
     */
    inline MetricSource& WithRedshiftSourceConfig(RedshiftSourceConfig&& value) { SetRedshiftSourceConfig(std::move(value)); return *this;}

  private:

    S3SourceConfig m_s3SourceConfig;
    bool m_s3SourceConfigHasBeenSet;

    AppFlowConfig m_appFlowConfig;
    bool m_appFlowConfigHasBeenSet;

    CloudWatchConfig m_cloudWatchConfig;
    bool m_cloudWatchConfigHasBeenSet;

    RDSSourceConfig m_rDSSourceConfig;
    bool m_rDSSourceConfigHasBeenSet;

    RedshiftSourceConfig m_redshiftSourceConfig;
    bool m_redshiftSourceConfigHasBeenSet;
  };

} // namespace Model
} // namespace LookoutMetrics
} // namespace Aws

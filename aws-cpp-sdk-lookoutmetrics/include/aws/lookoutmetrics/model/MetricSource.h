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
    AWS_LOOKOUTMETRICS_API MetricSource();
    AWS_LOOKOUTMETRICS_API MetricSource(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTMETRICS_API MetricSource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTMETRICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const S3SourceConfig& GetS3SourceConfig() const{ return m_s3SourceConfig; }

    
    inline bool S3SourceConfigHasBeenSet() const { return m_s3SourceConfigHasBeenSet; }

    
    inline void SetS3SourceConfig(const S3SourceConfig& value) { m_s3SourceConfigHasBeenSet = true; m_s3SourceConfig = value; }

    
    inline void SetS3SourceConfig(S3SourceConfig&& value) { m_s3SourceConfigHasBeenSet = true; m_s3SourceConfig = std::move(value); }

    
    inline MetricSource& WithS3SourceConfig(const S3SourceConfig& value) { SetS3SourceConfig(value); return *this;}

    
    inline MetricSource& WithS3SourceConfig(S3SourceConfig&& value) { SetS3SourceConfig(std::move(value)); return *this;}


    /**
     * <p>Details about an AppFlow datasource.</p>
     */
    inline const AppFlowConfig& GetAppFlowConfig() const{ return m_appFlowConfig; }

    /**
     * <p>Details about an AppFlow datasource.</p>
     */
    inline bool AppFlowConfigHasBeenSet() const { return m_appFlowConfigHasBeenSet; }

    /**
     * <p>Details about an AppFlow datasource.</p>
     */
    inline void SetAppFlowConfig(const AppFlowConfig& value) { m_appFlowConfigHasBeenSet = true; m_appFlowConfig = value; }

    /**
     * <p>Details about an AppFlow datasource.</p>
     */
    inline void SetAppFlowConfig(AppFlowConfig&& value) { m_appFlowConfigHasBeenSet = true; m_appFlowConfig = std::move(value); }

    /**
     * <p>Details about an AppFlow datasource.</p>
     */
    inline MetricSource& WithAppFlowConfig(const AppFlowConfig& value) { SetAppFlowConfig(value); return *this;}

    /**
     * <p>Details about an AppFlow datasource.</p>
     */
    inline MetricSource& WithAppFlowConfig(AppFlowConfig&& value) { SetAppFlowConfig(std::move(value)); return *this;}


    /**
     * <p>Details about an Amazon CloudWatch monitoring datasource.</p>
     */
    inline const CloudWatchConfig& GetCloudWatchConfig() const{ return m_cloudWatchConfig; }

    /**
     * <p>Details about an Amazon CloudWatch monitoring datasource.</p>
     */
    inline bool CloudWatchConfigHasBeenSet() const { return m_cloudWatchConfigHasBeenSet; }

    /**
     * <p>Details about an Amazon CloudWatch monitoring datasource.</p>
     */
    inline void SetCloudWatchConfig(const CloudWatchConfig& value) { m_cloudWatchConfigHasBeenSet = true; m_cloudWatchConfig = value; }

    /**
     * <p>Details about an Amazon CloudWatch monitoring datasource.</p>
     */
    inline void SetCloudWatchConfig(CloudWatchConfig&& value) { m_cloudWatchConfigHasBeenSet = true; m_cloudWatchConfig = std::move(value); }

    /**
     * <p>Details about an Amazon CloudWatch monitoring datasource.</p>
     */
    inline MetricSource& WithCloudWatchConfig(const CloudWatchConfig& value) { SetCloudWatchConfig(value); return *this;}

    /**
     * <p>Details about an Amazon CloudWatch monitoring datasource.</p>
     */
    inline MetricSource& WithCloudWatchConfig(CloudWatchConfig&& value) { SetCloudWatchConfig(std::move(value)); return *this;}


    /**
     * <p>Details about an Amazon Relational Database Service (RDS) datasource.</p>
     */
    inline const RDSSourceConfig& GetRDSSourceConfig() const{ return m_rDSSourceConfig; }

    /**
     * <p>Details about an Amazon Relational Database Service (RDS) datasource.</p>
     */
    inline bool RDSSourceConfigHasBeenSet() const { return m_rDSSourceConfigHasBeenSet; }

    /**
     * <p>Details about an Amazon Relational Database Service (RDS) datasource.</p>
     */
    inline void SetRDSSourceConfig(const RDSSourceConfig& value) { m_rDSSourceConfigHasBeenSet = true; m_rDSSourceConfig = value; }

    /**
     * <p>Details about an Amazon Relational Database Service (RDS) datasource.</p>
     */
    inline void SetRDSSourceConfig(RDSSourceConfig&& value) { m_rDSSourceConfigHasBeenSet = true; m_rDSSourceConfig = std::move(value); }

    /**
     * <p>Details about an Amazon Relational Database Service (RDS) datasource.</p>
     */
    inline MetricSource& WithRDSSourceConfig(const RDSSourceConfig& value) { SetRDSSourceConfig(value); return *this;}

    /**
     * <p>Details about an Amazon Relational Database Service (RDS) datasource.</p>
     */
    inline MetricSource& WithRDSSourceConfig(RDSSourceConfig&& value) { SetRDSSourceConfig(std::move(value)); return *this;}


    /**
     * <p>Details about an Amazon Redshift database datasource.</p>
     */
    inline const RedshiftSourceConfig& GetRedshiftSourceConfig() const{ return m_redshiftSourceConfig; }

    /**
     * <p>Details about an Amazon Redshift database datasource.</p>
     */
    inline bool RedshiftSourceConfigHasBeenSet() const { return m_redshiftSourceConfigHasBeenSet; }

    /**
     * <p>Details about an Amazon Redshift database datasource.</p>
     */
    inline void SetRedshiftSourceConfig(const RedshiftSourceConfig& value) { m_redshiftSourceConfigHasBeenSet = true; m_redshiftSourceConfig = value; }

    /**
     * <p>Details about an Amazon Redshift database datasource.</p>
     */
    inline void SetRedshiftSourceConfig(RedshiftSourceConfig&& value) { m_redshiftSourceConfigHasBeenSet = true; m_redshiftSourceConfig = std::move(value); }

    /**
     * <p>Details about an Amazon Redshift database datasource.</p>
     */
    inline MetricSource& WithRedshiftSourceConfig(const RedshiftSourceConfig& value) { SetRedshiftSourceConfig(value); return *this;}

    /**
     * <p>Details about an Amazon Redshift database datasource.</p>
     */
    inline MetricSource& WithRedshiftSourceConfig(RedshiftSourceConfig&& value) { SetRedshiftSourceConfig(std::move(value)); return *this;}


    /**
     * <p>Details about an Amazon Athena datasource.</p>
     */
    inline const AthenaSourceConfig& GetAthenaSourceConfig() const{ return m_athenaSourceConfig; }

    /**
     * <p>Details about an Amazon Athena datasource.</p>
     */
    inline bool AthenaSourceConfigHasBeenSet() const { return m_athenaSourceConfigHasBeenSet; }

    /**
     * <p>Details about an Amazon Athena datasource.</p>
     */
    inline void SetAthenaSourceConfig(const AthenaSourceConfig& value) { m_athenaSourceConfigHasBeenSet = true; m_athenaSourceConfig = value; }

    /**
     * <p>Details about an Amazon Athena datasource.</p>
     */
    inline void SetAthenaSourceConfig(AthenaSourceConfig&& value) { m_athenaSourceConfigHasBeenSet = true; m_athenaSourceConfig = std::move(value); }

    /**
     * <p>Details about an Amazon Athena datasource.</p>
     */
    inline MetricSource& WithAthenaSourceConfig(const AthenaSourceConfig& value) { SetAthenaSourceConfig(value); return *this;}

    /**
     * <p>Details about an Amazon Athena datasource.</p>
     */
    inline MetricSource& WithAthenaSourceConfig(AthenaSourceConfig&& value) { SetAthenaSourceConfig(std::move(value)); return *this;}

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

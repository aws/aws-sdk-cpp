/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fis/FIS_EXPORTS.h>
#include <aws/fis/model/ExperimentCloudWatchLogsLogConfiguration.h>
#include <aws/fis/model/ExperimentS3LogConfiguration.h>
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
namespace FIS
{
namespace Model
{

  /**
   * <p>Describes the configuration for experiment logging.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/fis-2020-12-01/ExperimentLogConfiguration">AWS
   * API Reference</a></p>
   */
  class ExperimentLogConfiguration
  {
  public:
    AWS_FIS_API ExperimentLogConfiguration();
    AWS_FIS_API ExperimentLogConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_FIS_API ExperimentLogConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FIS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The configuration for experiment logging to Amazon CloudWatch Logs.</p>
     */
    inline const ExperimentCloudWatchLogsLogConfiguration& GetCloudWatchLogsConfiguration() const{ return m_cloudWatchLogsConfiguration; }

    /**
     * <p>The configuration for experiment logging to Amazon CloudWatch Logs.</p>
     */
    inline bool CloudWatchLogsConfigurationHasBeenSet() const { return m_cloudWatchLogsConfigurationHasBeenSet; }

    /**
     * <p>The configuration for experiment logging to Amazon CloudWatch Logs.</p>
     */
    inline void SetCloudWatchLogsConfiguration(const ExperimentCloudWatchLogsLogConfiguration& value) { m_cloudWatchLogsConfigurationHasBeenSet = true; m_cloudWatchLogsConfiguration = value; }

    /**
     * <p>The configuration for experiment logging to Amazon CloudWatch Logs.</p>
     */
    inline void SetCloudWatchLogsConfiguration(ExperimentCloudWatchLogsLogConfiguration&& value) { m_cloudWatchLogsConfigurationHasBeenSet = true; m_cloudWatchLogsConfiguration = std::move(value); }

    /**
     * <p>The configuration for experiment logging to Amazon CloudWatch Logs.</p>
     */
    inline ExperimentLogConfiguration& WithCloudWatchLogsConfiguration(const ExperimentCloudWatchLogsLogConfiguration& value) { SetCloudWatchLogsConfiguration(value); return *this;}

    /**
     * <p>The configuration for experiment logging to Amazon CloudWatch Logs.</p>
     */
    inline ExperimentLogConfiguration& WithCloudWatchLogsConfiguration(ExperimentCloudWatchLogsLogConfiguration&& value) { SetCloudWatchLogsConfiguration(std::move(value)); return *this;}


    /**
     * <p>The configuration for experiment logging to Amazon S3.</p>
     */
    inline const ExperimentS3LogConfiguration& GetS3Configuration() const{ return m_s3Configuration; }

    /**
     * <p>The configuration for experiment logging to Amazon S3.</p>
     */
    inline bool S3ConfigurationHasBeenSet() const { return m_s3ConfigurationHasBeenSet; }

    /**
     * <p>The configuration for experiment logging to Amazon S3.</p>
     */
    inline void SetS3Configuration(const ExperimentS3LogConfiguration& value) { m_s3ConfigurationHasBeenSet = true; m_s3Configuration = value; }

    /**
     * <p>The configuration for experiment logging to Amazon S3.</p>
     */
    inline void SetS3Configuration(ExperimentS3LogConfiguration&& value) { m_s3ConfigurationHasBeenSet = true; m_s3Configuration = std::move(value); }

    /**
     * <p>The configuration for experiment logging to Amazon S3.</p>
     */
    inline ExperimentLogConfiguration& WithS3Configuration(const ExperimentS3LogConfiguration& value) { SetS3Configuration(value); return *this;}

    /**
     * <p>The configuration for experiment logging to Amazon S3.</p>
     */
    inline ExperimentLogConfiguration& WithS3Configuration(ExperimentS3LogConfiguration&& value) { SetS3Configuration(std::move(value)); return *this;}


    /**
     * <p>The schema version.</p>
     */
    inline int GetLogSchemaVersion() const{ return m_logSchemaVersion; }

    /**
     * <p>The schema version.</p>
     */
    inline bool LogSchemaVersionHasBeenSet() const { return m_logSchemaVersionHasBeenSet; }

    /**
     * <p>The schema version.</p>
     */
    inline void SetLogSchemaVersion(int value) { m_logSchemaVersionHasBeenSet = true; m_logSchemaVersion = value; }

    /**
     * <p>The schema version.</p>
     */
    inline ExperimentLogConfiguration& WithLogSchemaVersion(int value) { SetLogSchemaVersion(value); return *this;}

  private:

    ExperimentCloudWatchLogsLogConfiguration m_cloudWatchLogsConfiguration;
    bool m_cloudWatchLogsConfigurationHasBeenSet = false;

    ExperimentS3LogConfiguration m_s3Configuration;
    bool m_s3ConfigurationHasBeenSet = false;

    int m_logSchemaVersion;
    bool m_logSchemaVersionHasBeenSet = false;
  };

} // namespace Model
} // namespace FIS
} // namespace Aws

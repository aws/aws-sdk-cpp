/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticmapreduce/EMR_EXPORTS.h>
#include <aws/elasticmapreduce/model/CloudWatchLogConfiguration.h>
#include <aws/elasticmapreduce/model/S3LoggingConfiguration.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace EMR {
namespace Model {

/**
 * <p>Contains CloudWatch log configuration and S3 logging configuration metadata
 * and settings.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/MonitoringConfiguration">AWS
 * API Reference</a></p>
 */
class MonitoringConfiguration {
 public:
  AWS_EMR_API MonitoringConfiguration() = default;
  AWS_EMR_API MonitoringConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_EMR_API MonitoringConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_EMR_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>CloudWatch log configuration settings and metadata that specify settings like
   * log files to monitor and where to send them.</p>
   */
  inline const CloudWatchLogConfiguration& GetCloudWatchLogConfiguration() const { return m_cloudWatchLogConfiguration; }
  inline bool CloudWatchLogConfigurationHasBeenSet() const { return m_cloudWatchLogConfigurationHasBeenSet; }
  template <typename CloudWatchLogConfigurationT = CloudWatchLogConfiguration>
  void SetCloudWatchLogConfiguration(CloudWatchLogConfigurationT&& value) {
    m_cloudWatchLogConfigurationHasBeenSet = true;
    m_cloudWatchLogConfiguration = std::forward<CloudWatchLogConfigurationT>(value);
  }
  template <typename CloudWatchLogConfigurationT = CloudWatchLogConfiguration>
  MonitoringConfiguration& WithCloudWatchLogConfiguration(CloudWatchLogConfigurationT&& value) {
    SetCloudWatchLogConfiguration(std::forward<CloudWatchLogConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>S3 logging configuration that controls how different types of logs (system
   * logs, application logs, and persistent UI logs) are uploaded to S3. Each log
   * type can be configured with a specific upload policy.</p>
   */
  inline const S3LoggingConfiguration& GetS3LoggingConfiguration() const { return m_s3LoggingConfiguration; }
  inline bool S3LoggingConfigurationHasBeenSet() const { return m_s3LoggingConfigurationHasBeenSet; }
  template <typename S3LoggingConfigurationT = S3LoggingConfiguration>
  void SetS3LoggingConfiguration(S3LoggingConfigurationT&& value) {
    m_s3LoggingConfigurationHasBeenSet = true;
    m_s3LoggingConfiguration = std::forward<S3LoggingConfigurationT>(value);
  }
  template <typename S3LoggingConfigurationT = S3LoggingConfiguration>
  MonitoringConfiguration& WithS3LoggingConfiguration(S3LoggingConfigurationT&& value) {
    SetS3LoggingConfiguration(std::forward<S3LoggingConfigurationT>(value));
    return *this;
  }
  ///@}
 private:
  CloudWatchLogConfiguration m_cloudWatchLogConfiguration;

  S3LoggingConfiguration m_s3LoggingConfiguration;
  bool m_cloudWatchLogConfigurationHasBeenSet = false;
  bool m_s3LoggingConfigurationHasBeenSet = false;
};

}  // namespace Model
}  // namespace EMR
}  // namespace Aws

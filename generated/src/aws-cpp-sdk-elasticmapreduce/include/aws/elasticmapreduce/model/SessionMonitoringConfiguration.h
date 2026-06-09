/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticmapreduce/EMR_EXPORTS.h>
#include <aws/elasticmapreduce/model/SessionCloudWatchLoggingConfiguration.h>
#include <aws/elasticmapreduce/model/SessionManagedLoggingConfiguration.h>
#include <aws/elasticmapreduce/model/SessionS3LoggingConfiguration.h>

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
 * <p>The monitoring configuration for a session. Controls where session logs are
 * published.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/SessionMonitoringConfiguration">AWS
 * API Reference</a></p>
 */
class SessionMonitoringConfiguration {
 public:
  AWS_EMR_API SessionMonitoringConfiguration() = default;
  AWS_EMR_API SessionMonitoringConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_EMR_API SessionMonitoringConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_EMR_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The CloudWatch Logs configuration for the session.</p>
   */
  inline const SessionCloudWatchLoggingConfiguration& GetCloudWatchLoggingConfiguration() const { return m_cloudWatchLoggingConfiguration; }
  inline bool CloudWatchLoggingConfigurationHasBeenSet() const { return m_cloudWatchLoggingConfigurationHasBeenSet; }
  template <typename CloudWatchLoggingConfigurationT = SessionCloudWatchLoggingConfiguration>
  void SetCloudWatchLoggingConfiguration(CloudWatchLoggingConfigurationT&& value) {
    m_cloudWatchLoggingConfigurationHasBeenSet = true;
    m_cloudWatchLoggingConfiguration = std::forward<CloudWatchLoggingConfigurationT>(value);
  }
  template <typename CloudWatchLoggingConfigurationT = SessionCloudWatchLoggingConfiguration>
  SessionMonitoringConfiguration& WithCloudWatchLoggingConfiguration(CloudWatchLoggingConfigurationT&& value) {
    SetCloudWatchLoggingConfiguration(std::forward<CloudWatchLoggingConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon EMR-managed logging configuration for the session.</p>
   */
  inline const SessionManagedLoggingConfiguration& GetManagedLoggingConfiguration() const { return m_managedLoggingConfiguration; }
  inline bool ManagedLoggingConfigurationHasBeenSet() const { return m_managedLoggingConfigurationHasBeenSet; }
  template <typename ManagedLoggingConfigurationT = SessionManagedLoggingConfiguration>
  void SetManagedLoggingConfiguration(ManagedLoggingConfigurationT&& value) {
    m_managedLoggingConfigurationHasBeenSet = true;
    m_managedLoggingConfiguration = std::forward<ManagedLoggingConfigurationT>(value);
  }
  template <typename ManagedLoggingConfigurationT = SessionManagedLoggingConfiguration>
  SessionMonitoringConfiguration& WithManagedLoggingConfiguration(ManagedLoggingConfigurationT&& value) {
    SetManagedLoggingConfiguration(std::forward<ManagedLoggingConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon S3 logging configuration for the session.</p>
   */
  inline const SessionS3LoggingConfiguration& GetS3LoggingConfiguration() const { return m_s3LoggingConfiguration; }
  inline bool S3LoggingConfigurationHasBeenSet() const { return m_s3LoggingConfigurationHasBeenSet; }
  template <typename S3LoggingConfigurationT = SessionS3LoggingConfiguration>
  void SetS3LoggingConfiguration(S3LoggingConfigurationT&& value) {
    m_s3LoggingConfigurationHasBeenSet = true;
    m_s3LoggingConfiguration = std::forward<S3LoggingConfigurationT>(value);
  }
  template <typename S3LoggingConfigurationT = SessionS3LoggingConfiguration>
  SessionMonitoringConfiguration& WithS3LoggingConfiguration(S3LoggingConfigurationT&& value) {
    SetS3LoggingConfiguration(std::forward<S3LoggingConfigurationT>(value));
    return *this;
  }
  ///@}
 private:
  SessionCloudWatchLoggingConfiguration m_cloudWatchLoggingConfiguration;

  SessionManagedLoggingConfiguration m_managedLoggingConfiguration;

  SessionS3LoggingConfiguration m_s3LoggingConfiguration;
  bool m_cloudWatchLoggingConfigurationHasBeenSet = false;
  bool m_managedLoggingConfigurationHasBeenSet = false;
  bool m_s3LoggingConfigurationHasBeenSet = false;
};

}  // namespace Model
}  // namespace EMR
}  // namespace Aws

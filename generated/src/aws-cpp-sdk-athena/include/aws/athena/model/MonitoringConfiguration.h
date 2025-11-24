/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/athena/Athena_EXPORTS.h>
#include <aws/athena/model/CloudWatchLoggingConfiguration.h>
#include <aws/athena/model/ManagedLoggingConfiguration.h>
#include <aws/athena/model/S3LoggingConfiguration.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Athena {
namespace Model {

/**
 * <p>Contains the configuration settings for managed log persistence, delivering
 * logs to Amazon S3 buckets, Amazon CloudWatch log groups etc.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/athena-2017-05-18/MonitoringConfiguration">AWS
 * API Reference</a></p>
 */
class MonitoringConfiguration {
 public:
  AWS_ATHENA_API MonitoringConfiguration() = default;
  AWS_ATHENA_API MonitoringConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_ATHENA_API MonitoringConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ATHENA_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Configuration settings for delivering logs to Amazon CloudWatch log groups.
   * </p>
   */
  inline const CloudWatchLoggingConfiguration& GetCloudWatchLoggingConfiguration() const { return m_cloudWatchLoggingConfiguration; }
  inline bool CloudWatchLoggingConfigurationHasBeenSet() const { return m_cloudWatchLoggingConfigurationHasBeenSet; }
  template <typename CloudWatchLoggingConfigurationT = CloudWatchLoggingConfiguration>
  void SetCloudWatchLoggingConfiguration(CloudWatchLoggingConfigurationT&& value) {
    m_cloudWatchLoggingConfigurationHasBeenSet = true;
    m_cloudWatchLoggingConfiguration = std::forward<CloudWatchLoggingConfigurationT>(value);
  }
  template <typename CloudWatchLoggingConfigurationT = CloudWatchLoggingConfiguration>
  MonitoringConfiguration& WithCloudWatchLoggingConfiguration(CloudWatchLoggingConfigurationT&& value) {
    SetCloudWatchLoggingConfiguration(std::forward<CloudWatchLoggingConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Configuration settings for managed log persistence. </p>
   */
  inline const ManagedLoggingConfiguration& GetManagedLoggingConfiguration() const { return m_managedLoggingConfiguration; }
  inline bool ManagedLoggingConfigurationHasBeenSet() const { return m_managedLoggingConfigurationHasBeenSet; }
  template <typename ManagedLoggingConfigurationT = ManagedLoggingConfiguration>
  void SetManagedLoggingConfiguration(ManagedLoggingConfigurationT&& value) {
    m_managedLoggingConfigurationHasBeenSet = true;
    m_managedLoggingConfiguration = std::forward<ManagedLoggingConfigurationT>(value);
  }
  template <typename ManagedLoggingConfigurationT = ManagedLoggingConfiguration>
  MonitoringConfiguration& WithManagedLoggingConfiguration(ManagedLoggingConfigurationT&& value) {
    SetManagedLoggingConfiguration(std::forward<ManagedLoggingConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Configuration settings for delivering logs to Amazon S3 buckets. </p>
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
  CloudWatchLoggingConfiguration m_cloudWatchLoggingConfiguration;
  bool m_cloudWatchLoggingConfigurationHasBeenSet = false;

  ManagedLoggingConfiguration m_managedLoggingConfiguration;
  bool m_managedLoggingConfigurationHasBeenSet = false;

  S3LoggingConfiguration m_s3LoggingConfiguration;
  bool m_s3LoggingConfigurationHasBeenSet = false;
};

}  // namespace Model
}  // namespace Athena
}  // namespace Aws

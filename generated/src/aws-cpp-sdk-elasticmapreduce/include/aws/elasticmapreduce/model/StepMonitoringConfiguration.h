/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticmapreduce/EMR_EXPORTS.h>
#include <aws/elasticmapreduce/model/S3MonitoringConfiguration.h>

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
 * <p>Object that holds configuration properties for logging.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/StepMonitoringConfiguration">AWS
 * API Reference</a></p>
 */
class StepMonitoringConfiguration {
 public:
  AWS_EMR_API StepMonitoringConfiguration() = default;
  AWS_EMR_API StepMonitoringConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_EMR_API StepMonitoringConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_EMR_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Amazon S3 configuration for monitoring log publishing. You can configure
   * your step to send log information to Amazon S3. When it's specified, it takes
   * precedence over the cluster's logging configuration. If you don't specify this
   * configuration entirely, or omit individual fields, EMR falls back to
   * cluster-level logging behavior. </p>
   */
  inline const S3MonitoringConfiguration& GetS3MonitoringConfiguration() const { return m_s3MonitoringConfiguration; }
  inline bool S3MonitoringConfigurationHasBeenSet() const { return m_s3MonitoringConfigurationHasBeenSet; }
  template <typename S3MonitoringConfigurationT = S3MonitoringConfiguration>
  void SetS3MonitoringConfiguration(S3MonitoringConfigurationT&& value) {
    m_s3MonitoringConfigurationHasBeenSet = true;
    m_s3MonitoringConfiguration = std::forward<S3MonitoringConfigurationT>(value);
  }
  template <typename S3MonitoringConfigurationT = S3MonitoringConfiguration>
  StepMonitoringConfiguration& WithS3MonitoringConfiguration(S3MonitoringConfigurationT&& value) {
    SetS3MonitoringConfiguration(std::forward<S3MonitoringConfigurationT>(value));
    return *this;
  }
  ///@}
 private:
  S3MonitoringConfiguration m_s3MonitoringConfiguration;
  bool m_s3MonitoringConfigurationHasBeenSet = false;
};

}  // namespace Model
}  // namespace EMR
}  // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticmapreduce/EMR_EXPORTS.h>
#include <aws/elasticmapreduce/model/CloudWatchLogConfiguration.h>

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
 * <p>Contains CloudWatch log configuration metadata and settings.</p><p><h3>See
 * Also:</h3>   <a
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
 private:
  CloudWatchLogConfiguration m_cloudWatchLogConfiguration;
  bool m_cloudWatchLogConfigurationHasBeenSet = false;
};

}  // namespace Model
}  // namespace EMR
}  // namespace Aws

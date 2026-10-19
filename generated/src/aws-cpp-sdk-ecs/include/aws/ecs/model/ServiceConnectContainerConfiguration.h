/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/ecs/model/ServiceConnectContainerLogLevel.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace ECS {
namespace Model {

/**
 * <p>Contains a configuration setting for the Service Connect proxy container,
 * such as the log level. Specify exactly one member in each object.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/ServiceConnectContainerConfiguration">AWS
 * API Reference</a></p>
 */
class ServiceConnectContainerConfiguration {
 public:
  AWS_ECS_API ServiceConnectContainerConfiguration() = default;
  AWS_ECS_API ServiceConnectContainerConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_ECS_API ServiceConnectContainerConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ECS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The log level of the Service Connect proxy container. Set the log level to
   * <code>debug</code> to collect more detailed proxy logs when you troubleshoot
   * connectivity issues between services, and set it back to <code>info</code> when
   * you finish. Debug logging increases the volume of logs that the proxy container
   * writes. If you don't specify a log level, the default is <code>info</code>.</p>
   */
  inline ServiceConnectContainerLogLevel GetLogLevel() const { return m_logLevel; }
  inline bool LogLevelHasBeenSet() const { return m_logLevelHasBeenSet; }
  inline void SetLogLevel(ServiceConnectContainerLogLevel value) {
    m_logLevelHasBeenSet = true;
    m_logLevel = value;
  }
  inline ServiceConnectContainerConfiguration& WithLogLevel(ServiceConnectContainerLogLevel value) {
    SetLogLevel(value);
    return *this;
  }
  ///@}
 private:
  ServiceConnectContainerLogLevel m_logLevel{ServiceConnectContainerLogLevel::NOT_SET};
  bool m_logLevelHasBeenSet = false;
};

}  // namespace Model
}  // namespace ECS
}  // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/ecs/model/LogDriver.h>

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
 * <p>The configuration for a log driver volume in a daemon task definition. The
 * volume contains the log files for each container on the container instance that
 * uses the specified log driver in its <code>logConfiguration</code>. Containers
 * that use a different log driver don't write log files to the volume.</p> <p>For
 * the <code>json-file</code> log driver, the volume has one directory for each
 * container, named with the container ID. Each directory contains the container's
 * log file, <code>&lt;container-id&gt;-json.log</code>, and any rotated log files.
 * After a container stops and Amazon ECS removes it, Amazon ECS deletes the
 * container's directory. Read the log files before the container is
 * removed.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/LogDriverVolumeConfiguration">AWS
 * API Reference</a></p>
 */
class LogDriverVolumeConfiguration {
 public:
  AWS_ECS_API LogDriverVolumeConfiguration() = default;
  AWS_ECS_API LogDriverVolumeConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_ECS_API LogDriverVolumeConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ECS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The log driver whose log files the volume contains. The only supported value
   * is <code>json-file</code>.</p>
   */
  inline LogDriver GetDriver() const { return m_driver; }
  inline bool DriverHasBeenSet() const { return m_driverHasBeenSet; }
  inline void SetDriver(LogDriver value) {
    m_driverHasBeenSet = true;
    m_driver = value;
  }
  inline LogDriverVolumeConfiguration& WithDriver(LogDriver value) {
    SetDriver(value);
    return *this;
  }
  ///@}
 private:
  LogDriver m_driver{LogDriver::NOT_SET};
  bool m_driverHasBeenSet = false;
};

}  // namespace Model
}  // namespace ECS
}  // namespace Aws

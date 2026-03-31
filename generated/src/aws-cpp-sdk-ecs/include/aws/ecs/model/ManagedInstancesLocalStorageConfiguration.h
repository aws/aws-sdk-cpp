/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecs/ECS_EXPORTS.h>

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
 * <p>The local storage configuration for Amazon ECS Managed Instances. This
 * defines how ECS uses and configures instance store volumes available on
 * container instance.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/ManagedInstancesLocalStorageConfiguration">AWS
 * API Reference</a></p>
 */
class ManagedInstancesLocalStorageConfiguration {
 public:
  AWS_ECS_API ManagedInstancesLocalStorageConfiguration() = default;
  AWS_ECS_API ManagedInstancesLocalStorageConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_ECS_API ManagedInstancesLocalStorageConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ECS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Use instance store volumes for data storage when available. EBS volumes are
   * not provisioned for data storage. If the container instance has multiple
   * instance store volumes, a single data volume is created. Consider defining
   * instance store requirements using the <code>localStorage</code>,
   * <code>localStorageTypes</code> and <code>totalLocalStorageGB</code>
   * properties.</p>
   */
  inline bool GetUseLocalStorage() const { return m_useLocalStorage; }
  inline bool UseLocalStorageHasBeenSet() const { return m_useLocalStorageHasBeenSet; }
  inline void SetUseLocalStorage(bool value) {
    m_useLocalStorageHasBeenSet = true;
    m_useLocalStorage = value;
  }
  inline ManagedInstancesLocalStorageConfiguration& WithUseLocalStorage(bool value) {
    SetUseLocalStorage(value);
    return *this;
  }
  ///@}
 private:
  bool m_useLocalStorage{false};
  bool m_useLocalStorageHasBeenSet = false;
};

}  // namespace Model
}  // namespace ECS
}  // namespace Aws

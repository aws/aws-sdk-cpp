/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/batch/Batch_EXPORTS.h>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Batch {
namespace Model {

/**
 * <p>The local storage configuration for Amazon ECS Managed
 * Instances.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/batch-2016-08-10/ManagedInstancesLocalStorageConfiguration">AWS
 * API Reference</a></p>
 */
class ManagedInstancesLocalStorageConfiguration {
 public:
  AWS_BATCH_API ManagedInstancesLocalStorageConfiguration() = default;
  AWS_BATCH_API ManagedInstancesLocalStorageConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_BATCH_API ManagedInstancesLocalStorageConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BATCH_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Specifies whether instance store volumes (local NVMe SSDs) are available to
   * containers. When enabled, containers can use the instance store for
   * high-performance temporary storage.</p>
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
}  // namespace Batch
}  // namespace Aws

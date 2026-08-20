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
 * <p>The storage configuration for Amazon ECS Managed Instances.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/batch-2016-08-10/ManagedInstancesStorageConfiguration">AWS
 * API Reference</a></p>
 */
class ManagedInstancesStorageConfiguration {
 public:
  AWS_BATCH_API ManagedInstancesStorageConfiguration() = default;
  AWS_BATCH_API ManagedInstancesStorageConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_BATCH_API ManagedInstancesStorageConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BATCH_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The size of the root EBS volume in GiB for the managed instances.</p>
   */
  inline int GetStorageSizeGiB() const { return m_storageSizeGiB; }
  inline bool StorageSizeGiBHasBeenSet() const { return m_storageSizeGiBHasBeenSet; }
  inline void SetStorageSizeGiB(int value) {
    m_storageSizeGiBHasBeenSet = true;
    m_storageSizeGiB = value;
  }
  inline ManagedInstancesStorageConfiguration& WithStorageSizeGiB(int value) {
    SetStorageSizeGiB(value);
    return *this;
  }
  ///@}
 private:
  int m_storageSizeGiB{0};
  bool m_storageSizeGiBHasBeenSet = false;
};

}  // namespace Model
}  // namespace Batch
}  // namespace Aws

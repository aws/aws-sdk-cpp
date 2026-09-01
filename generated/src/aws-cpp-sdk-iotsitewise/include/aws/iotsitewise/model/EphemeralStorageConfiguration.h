/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/iotsitewise/model/StorageClass.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace IoTSiteWise {
namespace Model {

/**
 * <p>Configuration for ephemeral storage attached to the container
 * task.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/EphemeralStorageConfiguration">AWS
 * API Reference</a></p>
 */
class EphemeralStorageConfiguration {
 public:
  AWS_IOTSITEWISE_API EphemeralStorageConfiguration() = default;
  AWS_IOTSITEWISE_API EphemeralStorageConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_IOTSITEWISE_API EphemeralStorageConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_IOTSITEWISE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Storage type that determines I/O performance family and level.</p>
   */
  inline StorageClass GetStorageClass() const { return m_storageClass; }
  inline bool StorageClassHasBeenSet() const { return m_storageClassHasBeenSet; }
  inline void SetStorageClass(StorageClass value) {
    m_storageClassHasBeenSet = true;
    m_storageClass = value;
  }
  inline EphemeralStorageConfiguration& WithStorageClass(StorageClass value) {
    SetStorageClass(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Storage volume size in GiB.</p>
   */
  inline int GetStorageSizeInGiB() const { return m_storageSizeInGiB; }
  inline bool StorageSizeInGiBHasBeenSet() const { return m_storageSizeInGiBHasBeenSet; }
  inline void SetStorageSizeInGiB(int value) {
    m_storageSizeInGiBHasBeenSet = true;
    m_storageSizeInGiB = value;
  }
  inline EphemeralStorageConfiguration& WithStorageSizeInGiB(int value) {
    SetStorageSizeInGiB(value);
    return *this;
  }
  ///@}
 private:
  StorageClass m_storageClass{StorageClass::NOT_SET};

  int m_storageSizeInGiB{0};
  bool m_storageClassHasBeenSet = false;
  bool m_storageSizeInGiBHasBeenSet = false;
};

}  // namespace Model
}  // namespace IoTSiteWise
}  // namespace Aws

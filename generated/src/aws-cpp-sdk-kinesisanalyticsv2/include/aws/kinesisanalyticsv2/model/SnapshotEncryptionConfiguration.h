/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kinesisanalyticsv2/KinesisAnalyticsV2_EXPORTS.h>
#include <aws/kinesisanalyticsv2/model/KeyType.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace KinesisAnalyticsV2 {
namespace Model {

/**
 * <p>Specifies the encryption configuration of snapshot data.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/SnapshotEncryptionConfiguration">AWS
 * API Reference</a></p>
 */
class SnapshotEncryptionConfiguration {
 public:
  AWS_KINESISANALYTICSV2_API SnapshotEncryptionConfiguration() = default;
  AWS_KINESISANALYTICSV2_API SnapshotEncryptionConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_KINESISANALYTICSV2_API SnapshotEncryptionConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_KINESISANALYTICSV2_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The KMS key used for encryption. <code>KeyId</code> is used only when
   * <code>KeyType</code> is <code>CUSTOMER_MANAGED_KEY</code>.</p>
   */
  inline const Aws::String& GetKeyId() const { return m_keyId; }
  inline bool KeyIdHasBeenSet() const { return m_keyIdHasBeenSet; }
  template <typename KeyIdT = Aws::String>
  void SetKeyId(KeyIdT&& value) {
    m_keyIdHasBeenSet = true;
    m_keyId = std::forward<KeyIdT>(value);
  }
  template <typename KeyIdT = Aws::String>
  SnapshotEncryptionConfiguration& WithKeyId(KeyIdT&& value) {
    SetKeyId(std::forward<KeyIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies the type of key used for encryption.</p>
   */
  inline KeyType GetKeyType() const { return m_keyType; }
  inline bool KeyTypeHasBeenSet() const { return m_keyTypeHasBeenSet; }
  inline void SetKeyType(KeyType value) {
    m_keyTypeHasBeenSet = true;
    m_keyType = value;
  }
  inline SnapshotEncryptionConfiguration& WithKeyType(KeyType value) {
    SetKeyType(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_keyId;

  KeyType m_keyType{KeyType::NOT_SET};
  bool m_keyIdHasBeenSet = false;
  bool m_keyTypeHasBeenSet = false;
};

}  // namespace Model
}  // namespace KinesisAnalyticsV2
}  // namespace Aws

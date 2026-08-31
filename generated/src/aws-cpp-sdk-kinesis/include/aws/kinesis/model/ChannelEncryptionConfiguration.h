/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kinesis/Kinesis_EXPORTS.h>
#include <aws/kinesis/model/ChannelEncryptionType.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Kinesis {
namespace Model {

/**
 * <p>The server-side encryption configuration for a channel.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/kinesis-2013-12-02/ChannelEncryptionConfiguration">AWS
 * API Reference</a></p>
 */
class ChannelEncryptionConfiguration {
 public:
  AWS_KINESIS_API ChannelEncryptionConfiguration() = default;
  AWS_KINESIS_API ChannelEncryptionConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_KINESIS_API ChannelEncryptionConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_KINESIS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The encryption type. The only valid value is <code>KMS</code>.</p>
   */
  inline ChannelEncryptionType GetEncryptionType() const { return m_encryptionType; }
  inline bool EncryptionTypeHasBeenSet() const { return m_encryptionTypeHasBeenSet; }
  inline void SetEncryptionType(ChannelEncryptionType value) {
    m_encryptionTypeHasBeenSet = true;
    m_encryptionType = value;
  }
  inline ChannelEncryptionConfiguration& WithEncryptionType(ChannelEncryptionType value) {
    SetEncryptionType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier of the customer managed Amazon Web Services KMS key. You
   * cannot use the Amazon Kinesis Data Streams service key
   * (<code>aws/kinesis</code>).</p>
   */
  inline const Aws::String& GetKeyId() const { return m_keyId; }
  inline bool KeyIdHasBeenSet() const { return m_keyIdHasBeenSet; }
  template <typename KeyIdT = Aws::String>
  void SetKeyId(KeyIdT&& value) {
    m_keyIdHasBeenSet = true;
    m_keyId = std::forward<KeyIdT>(value);
  }
  template <typename KeyIdT = Aws::String>
  ChannelEncryptionConfiguration& WithKeyId(KeyIdT&& value) {
    SetKeyId(std::forward<KeyIdT>(value));
    return *this;
  }
  ///@}
 private:
  ChannelEncryptionType m_encryptionType{ChannelEncryptionType::NOT_SET};

  Aws::String m_keyId;
  bool m_encryptionTypeHasBeenSet = false;
  bool m_keyIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Kinesis
}  // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/emr-serverless/EMRServerless_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace EMRServerless {
namespace Model {

/**
 * <p>The configuration object that allows encrypting local disks.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/emr-serverless-2021-07-13/DiskEncryptionConfiguration">AWS
 * API Reference</a></p>
 */
class DiskEncryptionConfiguration {
 public:
  AWS_EMRSERVERLESS_API DiskEncryptionConfiguration() = default;
  AWS_EMRSERVERLESS_API DiskEncryptionConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_EMRSERVERLESS_API DiskEncryptionConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_EMRSERVERLESS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Specifies the optional encryption context that will be used when encrypting
   * the data. An encryption context is a collection of non-secret key-value pairs
   * that represent additional authenticated data. </p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetEncryptionContext() const { return m_encryptionContext; }
  inline bool EncryptionContextHasBeenSet() const { return m_encryptionContextHasBeenSet; }
  template <typename EncryptionContextT = Aws::Map<Aws::String, Aws::String>>
  void SetEncryptionContext(EncryptionContextT&& value) {
    m_encryptionContextHasBeenSet = true;
    m_encryptionContext = std::forward<EncryptionContextT>(value);
  }
  template <typename EncryptionContextT = Aws::Map<Aws::String, Aws::String>>
  DiskEncryptionConfiguration& WithEncryptionContext(EncryptionContextT&& value) {
    SetEncryptionContext(std::forward<EncryptionContextT>(value));
    return *this;
  }
  template <typename EncryptionContextKeyT = Aws::String, typename EncryptionContextValueT = Aws::String>
  DiskEncryptionConfiguration& AddEncryptionContext(EncryptionContextKeyT&& key, EncryptionContextValueT&& value) {
    m_encryptionContextHasBeenSet = true;
    m_encryptionContext.emplace(std::forward<EncryptionContextKeyT>(key), std::forward<EncryptionContextValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The KMS key ARN to encrypt local disks.</p>
   */
  inline const Aws::String& GetEncryptionKeyArn() const { return m_encryptionKeyArn; }
  inline bool EncryptionKeyArnHasBeenSet() const { return m_encryptionKeyArnHasBeenSet; }
  template <typename EncryptionKeyArnT = Aws::String>
  void SetEncryptionKeyArn(EncryptionKeyArnT&& value) {
    m_encryptionKeyArnHasBeenSet = true;
    m_encryptionKeyArn = std::forward<EncryptionKeyArnT>(value);
  }
  template <typename EncryptionKeyArnT = Aws::String>
  DiskEncryptionConfiguration& WithEncryptionKeyArn(EncryptionKeyArnT&& value) {
    SetEncryptionKeyArn(std::forward<EncryptionKeyArnT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Map<Aws::String, Aws::String> m_encryptionContext;

  Aws::String m_encryptionKeyArn;
  bool m_encryptionContextHasBeenSet = false;
  bool m_encryptionKeyArnHasBeenSet = false;
};

}  // namespace Model
}  // namespace EMRServerless
}  // namespace Aws

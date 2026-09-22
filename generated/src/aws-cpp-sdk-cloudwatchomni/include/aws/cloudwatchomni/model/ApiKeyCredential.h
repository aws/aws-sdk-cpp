/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudwatchomni/CloudWatchOmni_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/crt/cbor/Cbor.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Cbor {
class CborValue;
}  // namespace Cbor
}  // namespace Utils
namespace CloudWatchOmni {
namespace Model {

/**
 * <p>An API key used to authenticate an integration with its external
 * system.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/cloudwatchomni-2025-01-01/ApiKeyCredential">AWS
 * API Reference</a></p>
 */
class ApiKeyCredential {
 public:
  AWS_CLOUDWATCHOMNI_API ApiKeyCredential() = default;
  AWS_CLOUDWATCHOMNI_API ApiKeyCredential(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_CLOUDWATCHOMNI_API ApiKeyCredential& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_CLOUDWATCHOMNI_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>The API key value used to authenticate with the external system.</p>
   */
  inline const Aws::String& GetApiKeyValue() const { return m_apiKeyValue; }
  inline bool ApiKeyValueHasBeenSet() const { return m_apiKeyValueHasBeenSet; }
  template <typename ApiKeyValueT = Aws::String>
  void SetApiKeyValue(ApiKeyValueT&& value) {
    m_apiKeyValueHasBeenSet = true;
    m_apiKeyValue = std::forward<ApiKeyValueT>(value);
  }
  template <typename ApiKeyValueT = Aws::String>
  ApiKeyCredential& WithApiKeyValue(ApiKeyValueT&& value) {
    SetApiKeyValue(std::forward<ApiKeyValueT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_apiKeyValue;
  bool m_apiKeyValueHasBeenSet = false;
};

}  // namespace Model
}  // namespace CloudWatchOmni
}  // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudwatchomni/CloudWatchOmni_EXPORTS.h>
#include <aws/cloudwatchomni/model/ApiKeyCredential.h>
#include <aws/cloudwatchomni/model/OAuthClientCredential.h>
#include <aws/cloudwatchomni/model/OAuthCodeCredential.h>
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
 * <p>The credential that an integration uses to authenticate with its external
 * system. Exactly one member is set, matching the integration's authentication
 * type.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/cloudwatchomni-2025-01-01/IntegrationCredential">AWS
 * API Reference</a></p>
 */
class IntegrationCredential {
 public:
  AWS_CLOUDWATCHOMNI_API IntegrationCredential() = default;
  AWS_CLOUDWATCHOMNI_API IntegrationCredential(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_CLOUDWATCHOMNI_API IntegrationCredential& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_CLOUDWATCHOMNI_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>Credentials for an OAuth 2.0 authorization-code grant.</p>
   */
  inline const OAuthCodeCredential& GetOauthCodeCredential() const { return m_oauthCodeCredential; }
  inline bool OauthCodeCredentialHasBeenSet() const { return m_oauthCodeCredentialHasBeenSet; }
  template <typename OauthCodeCredentialT = OAuthCodeCredential>
  void SetOauthCodeCredential(OauthCodeCredentialT&& value) {
    m_oauthCodeCredentialHasBeenSet = true;
    m_oauthCodeCredential = std::forward<OauthCodeCredentialT>(value);
  }
  template <typename OauthCodeCredentialT = OAuthCodeCredential>
  IntegrationCredential& WithOauthCodeCredential(OauthCodeCredentialT&& value) {
    SetOauthCodeCredential(std::forward<OauthCodeCredentialT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Credentials for an OAuth 2.0 client-credentials grant.</p>
   */
  inline const OAuthClientCredential& GetOauthClientCredential() const { return m_oauthClientCredential; }
  inline bool OauthClientCredentialHasBeenSet() const { return m_oauthClientCredentialHasBeenSet; }
  template <typename OauthClientCredentialT = OAuthClientCredential>
  void SetOauthClientCredential(OauthClientCredentialT&& value) {
    m_oauthClientCredentialHasBeenSet = true;
    m_oauthClientCredential = std::forward<OauthClientCredentialT>(value);
  }
  template <typename OauthClientCredentialT = OAuthClientCredential>
  IntegrationCredential& WithOauthClientCredential(OauthClientCredentialT&& value) {
    SetOauthClientCredential(std::forward<OauthClientCredentialT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An API key credential.</p>
   */
  inline const ApiKeyCredential& GetApiKeyCredential() const { return m_apiKeyCredential; }
  inline bool ApiKeyCredentialHasBeenSet() const { return m_apiKeyCredentialHasBeenSet; }
  template <typename ApiKeyCredentialT = ApiKeyCredential>
  void SetApiKeyCredential(ApiKeyCredentialT&& value) {
    m_apiKeyCredentialHasBeenSet = true;
    m_apiKeyCredential = std::forward<ApiKeyCredentialT>(value);
  }
  template <typename ApiKeyCredentialT = ApiKeyCredential>
  IntegrationCredential& WithApiKeyCredential(ApiKeyCredentialT&& value) {
    SetApiKeyCredential(std::forward<ApiKeyCredentialT>(value));
    return *this;
  }
  ///@}
 private:
  OAuthCodeCredential m_oauthCodeCredential;

  OAuthClientCredential m_oauthClientCredential;

  ApiKeyCredential m_apiKeyCredential;
  bool m_oauthCodeCredentialHasBeenSet = false;
  bool m_oauthClientCredentialHasBeenSet = false;
  bool m_apiKeyCredentialHasBeenSet = false;
};

}  // namespace Model
}  // namespace CloudWatchOmni
}  // namespace Aws

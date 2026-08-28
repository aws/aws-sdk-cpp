/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cognito-idp/CognitoIdentityProviderRequest.h>
#include <aws/cognito-idp/CognitoIdentityProvider_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <utility>

namespace Aws {
namespace CognitoIdentityProvider {
namespace Model {

/**
 */
class GetClientTokenRequest : public CognitoIdentityProviderRequest {
 public:
  AWS_COGNITOIDENTITYPROVIDER_API GetClientTokenRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "GetClientToken"; }

  AWS_COGNITOIDENTITYPROVIDER_API Aws::String SerializePayload() const override;

  AWS_COGNITOIDENTITYPROVIDER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The ID of the app client that requests the access token. The app client must
   * have a client secret and the <code>ALLOW_CLIENT_TOKEN_AUTH</code> authentication
   * flow.</p>
   */
  inline const Aws::String& GetClientId() const { return m_clientId; }
  inline bool ClientIdHasBeenSet() const { return m_clientIdHasBeenSet; }
  template <typename ClientIdT = Aws::String>
  void SetClientId(ClientIdT&& value) {
    m_clientIdHasBeenSet = true;
    m_clientId = std::forward<ClientIdT>(value);
  }
  template <typename ClientIdT = Aws::String>
  GetClientTokenRequest& WithClientId(ClientIdT&& value) {
    SetClientId(std::forward<ClientIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An active secret for the app client.</p>
   */
  inline const Aws::String& GetSecret() const { return m_secret; }
  inline bool SecretHasBeenSet() const { return m_secretHasBeenSet; }
  template <typename SecretT = Aws::String>
  void SetSecret(SecretT&& value) {
    m_secretHasBeenSet = true;
    m_secret = std::forward<SecretT>(value);
  }
  template <typename SecretT = Aws::String>
  GetClientTokenRequest& WithSecret(SecretT&& value) {
    SetSecret(std::forward<SecretT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The custom scopes to authorize in the access token, in the format
   * <code>resource-server-identifier/scope-name</code>. Each scope must belong to a
   * resource server in your user pool. If you don't specify any scopes, Amazon
   * Cognito authorizes the scopes that are configured for the app client.</p>
   */
  inline const Aws::Vector<Aws::String>& GetScopes() const { return m_scopes; }
  inline bool ScopesHasBeenSet() const { return m_scopesHasBeenSet; }
  template <typename ScopesT = Aws::Vector<Aws::String>>
  void SetScopes(ScopesT&& value) {
    m_scopesHasBeenSet = true;
    m_scopes = std::forward<ScopesT>(value);
  }
  template <typename ScopesT = Aws::Vector<Aws::String>>
  GetClientTokenRequest& WithScopes(ScopesT&& value) {
    SetScopes(std::forward<ScopesT>(value));
    return *this;
  }
  template <typename ScopesT = Aws::String>
  GetClientTokenRequest& AddScopes(ScopesT&& value) {
    m_scopesHasBeenSet = true;
    m_scopes.emplace_back(std::forward<ScopesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A map of custom key-value pairs that you can provide as input for any custom
   * workflows that this action triggers. You create custom workflows by assigning
   * Lambda functions to user pool triggers.</p> <p>When Amazon Cognito invokes any
   * of these functions, it passes a JSON payload, which the function receives as
   * input. This payload contains a <code>clientMetadata</code> attribute that
   * provides the data that you assigned to the ClientMetadata parameter in your
   * request. In your function code, you can process the <code>clientMetadata</code>
   * value to enhance your workflow for your specific needs.</p> <p>To review the
   * Lambda trigger types that Amazon Cognito invokes at runtime with API requests,
   * see <a
   * href="https://docs.aws.amazon.com/cognito/latest/developerguide/cognito-user-pools-working-with-lambda-triggers.html#lambda-triggers-by-event">
   * Connecting API actions to Lambda triggers</a> in the <i>Amazon Cognito Developer
   * Guide</i>.</p>  <p>When you use the <code>ClientMetadata</code> parameter,
   * note that Amazon Cognito won't do the following:</p> <ul> <li> <p>Store the
   * <code>ClientMetadata</code> value. This data is available only to Lambda
   * triggers that are assigned to a user pool to support custom workflows. If your
   * user pool configuration doesn't include triggers, the
   * <code>ClientMetadata</code> parameter serves no purpose.</p> </li> <li>
   * <p>Validate the <code>ClientMetadata</code> value.</p> </li> <li> <p>Encrypt the
   * <code>ClientMetadata</code> value. Don't send sensitive information in this
   * parameter.</p> </li> </ul>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetClientMetadata() const { return m_clientMetadata; }
  inline bool ClientMetadataHasBeenSet() const { return m_clientMetadataHasBeenSet; }
  template <typename ClientMetadataT = Aws::Map<Aws::String, Aws::String>>
  void SetClientMetadata(ClientMetadataT&& value) {
    m_clientMetadataHasBeenSet = true;
    m_clientMetadata = std::forward<ClientMetadataT>(value);
  }
  template <typename ClientMetadataT = Aws::Map<Aws::String, Aws::String>>
  GetClientTokenRequest& WithClientMetadata(ClientMetadataT&& value) {
    SetClientMetadata(std::forward<ClientMetadataT>(value));
    return *this;
  }
  template <typename ClientMetadataKeyT = Aws::String, typename ClientMetadataValueT = Aws::String>
  GetClientTokenRequest& AddClientMetadata(ClientMetadataKeyT&& key, ClientMetadataValueT&& value) {
    m_clientMetadataHasBeenSet = true;
    m_clientMetadata.emplace(std::forward<ClientMetadataKeyT>(key), std::forward<ClientMetadataValueT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_clientId;

  Aws::String m_secret;

  Aws::Vector<Aws::String> m_scopes;

  Aws::Map<Aws::String, Aws::String> m_clientMetadata;
  bool m_clientIdHasBeenSet = false;
  bool m_secretHasBeenSet = false;
  bool m_scopesHasBeenSet = false;
  bool m_clientMetadataHasBeenSet = false;
};

}  // namespace Model
}  // namespace CognitoIdentityProvider
}  // namespace Aws

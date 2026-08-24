/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kafka/Kafka_EXPORTS.h>
#include <aws/kafka/model/KafkaClusterOAuthClientCredentials.h>
#include <aws/kafka/model/KafkaClusterOAuthClientCredentialsAssertion.h>
#include <aws/kafka/model/KafkaClusterOAuthIamJwtBearer.h>
#include <aws/kafka/model/TokenEndpointAuthenticationMethod.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Kafka {
namespace Model {

/**
 * <p>Details for SASL/OAUTHBEARER client authentication.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/kafka-2018-11-14/KafkaClusterSaslOAuthBearerAuthentication">AWS
 * API Reference</a></p>
 */
class KafkaClusterSaslOAuthBearerAuthentication {
 public:
  AWS_KAFKA_API KafkaClusterSaslOAuthBearerAuthentication() = default;
  AWS_KAFKA_API KafkaClusterSaslOAuthBearerAuthentication(Aws::Utils::Json::JsonView jsonValue);
  AWS_KAFKA_API KafkaClusterSaslOAuthBearerAuthentication& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_KAFKA_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The HTTPS URL of the OAuth token endpoint that vends OAuth Bearer tokens per
   * RFC 6749.</p>
   */
  inline const Aws::String& GetTokenEndpointUrl() const { return m_tokenEndpointUrl; }
  inline bool TokenEndpointUrlHasBeenSet() const { return m_tokenEndpointUrlHasBeenSet; }
  template <typename TokenEndpointUrlT = Aws::String>
  void SetTokenEndpointUrl(TokenEndpointUrlT&& value) {
    m_tokenEndpointUrlHasBeenSet = true;
    m_tokenEndpointUrl = std::forward<TokenEndpointUrlT>(value);
  }
  template <typename TokenEndpointUrlT = Aws::String>
  KafkaClusterSaslOAuthBearerAuthentication& WithTokenEndpointUrl(TokenEndpointUrlT&& value) {
    SetTokenEndpointUrl(std::forward<TokenEndpointUrlT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Details for SASL/OAUTHBEARER using standard client_credentials grant.</p>
   */
  inline const KafkaClusterOAuthClientCredentials& GetClientCredentials() const { return m_clientCredentials; }
  inline bool ClientCredentialsHasBeenSet() const { return m_clientCredentialsHasBeenSet; }
  template <typename ClientCredentialsT = KafkaClusterOAuthClientCredentials>
  void SetClientCredentials(ClientCredentialsT&& value) {
    m_clientCredentialsHasBeenSet = true;
    m_clientCredentials = std::forward<ClientCredentialsT>(value);
  }
  template <typename ClientCredentialsT = KafkaClusterOAuthClientCredentials>
  KafkaClusterSaslOAuthBearerAuthentication& WithClientCredentials(ClientCredentialsT&& value) {
    SetClientCredentials(std::forward<ClientCredentialsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Details for SASL/OAUTHBEARER using JWT Bearer assertion grant (RFC 7523).</p>
   */
  inline const KafkaClusterOAuthIamJwtBearer& GetIamJwtBearer() const { return m_iamJwtBearer; }
  inline bool IamJwtBearerHasBeenSet() const { return m_iamJwtBearerHasBeenSet; }
  template <typename IamJwtBearerT = KafkaClusterOAuthIamJwtBearer>
  void SetIamJwtBearer(IamJwtBearerT&& value) {
    m_iamJwtBearerHasBeenSet = true;
    m_iamJwtBearer = std::forward<IamJwtBearerT>(value);
  }
  template <typename IamJwtBearerT = KafkaClusterOAuthIamJwtBearer>
  KafkaClusterSaslOAuthBearerAuthentication& WithIamJwtBearer(IamJwtBearerT&& value) {
    SetIamJwtBearer(std::forward<IamJwtBearerT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Details for SASL/OAUTHBEARER using client credentials grant with JWT client
   * assertion.</p>
   */
  inline const KafkaClusterOAuthClientCredentialsAssertion& GetClientCredentialsAssertion() const { return m_clientCredentialsAssertion; }
  inline bool ClientCredentialsAssertionHasBeenSet() const { return m_clientCredentialsAssertionHasBeenSet; }
  template <typename ClientCredentialsAssertionT = KafkaClusterOAuthClientCredentialsAssertion>
  void SetClientCredentialsAssertion(ClientCredentialsAssertionT&& value) {
    m_clientCredentialsAssertionHasBeenSet = true;
    m_clientCredentialsAssertion = std::forward<ClientCredentialsAssertionT>(value);
  }
  template <typename ClientCredentialsAssertionT = KafkaClusterOAuthClientCredentialsAssertion>
  KafkaClusterSaslOAuthBearerAuthentication& WithClientCredentialsAssertion(ClientCredentialsAssertionT&& value) {
    SetClientCredentialsAssertion(std::forward<ClientCredentialsAssertionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>How client credentials are sent to the identity provider. Valid values are
   * POST, BASIC, or NONE.</p>
   */
  inline TokenEndpointAuthenticationMethod GetTokenEndpointAuthenticationMethod() const { return m_tokenEndpointAuthenticationMethod; }
  inline bool TokenEndpointAuthenticationMethodHasBeenSet() const { return m_tokenEndpointAuthenticationMethodHasBeenSet; }
  inline void SetTokenEndpointAuthenticationMethod(TokenEndpointAuthenticationMethod value) {
    m_tokenEndpointAuthenticationMethodHasBeenSet = true;
    m_tokenEndpointAuthenticationMethod = value;
  }
  inline KafkaClusterSaslOAuthBearerAuthentication& WithTokenEndpointAuthenticationMethod(TokenEndpointAuthenticationMethod value) {
    SetTokenEndpointAuthenticationMethod(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>OAuth scope to request.</p>
   */
  inline const Aws::String& GetScope() const { return m_scope; }
  inline bool ScopeHasBeenSet() const { return m_scopeHasBeenSet; }
  template <typename ScopeT = Aws::String>
  void SetScope(ScopeT&& value) {
    m_scopeHasBeenSet = true;
    m_scope = std::forward<ScopeT>(value);
  }
  template <typename ScopeT = Aws::String>
  KafkaClusterSaslOAuthBearerAuthentication& WithScope(ScopeT&& value) {
    SetScope(std::forward<ScopeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Secrets Manager ARN containing a custom CA certificate for the identity
   * provider.</p>
   */
  inline const Aws::String& GetTokenEndpointTlsCertificateArn() const { return m_tokenEndpointTlsCertificateArn; }
  inline bool TokenEndpointTlsCertificateArnHasBeenSet() const { return m_tokenEndpointTlsCertificateArnHasBeenSet; }
  template <typename TokenEndpointTlsCertificateArnT = Aws::String>
  void SetTokenEndpointTlsCertificateArn(TokenEndpointTlsCertificateArnT&& value) {
    m_tokenEndpointTlsCertificateArnHasBeenSet = true;
    m_tokenEndpointTlsCertificateArn = std::forward<TokenEndpointTlsCertificateArnT>(value);
  }
  template <typename TokenEndpointTlsCertificateArnT = Aws::String>
  KafkaClusterSaslOAuthBearerAuthentication& WithTokenEndpointTlsCertificateArn(TokenEndpointTlsCertificateArnT&& value) {
    SetTokenEndpointTlsCertificateArn(std::forward<TokenEndpointTlsCertificateArnT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_tokenEndpointUrl;

  KafkaClusterOAuthClientCredentials m_clientCredentials;

  KafkaClusterOAuthIamJwtBearer m_iamJwtBearer;

  KafkaClusterOAuthClientCredentialsAssertion m_clientCredentialsAssertion;

  TokenEndpointAuthenticationMethod m_tokenEndpointAuthenticationMethod{TokenEndpointAuthenticationMethod::NOT_SET};

  Aws::String m_scope;

  Aws::String m_tokenEndpointTlsCertificateArn;
  bool m_tokenEndpointUrlHasBeenSet = false;
  bool m_clientCredentialsHasBeenSet = false;
  bool m_iamJwtBearerHasBeenSet = false;
  bool m_clientCredentialsAssertionHasBeenSet = false;
  bool m_tokenEndpointAuthenticationMethodHasBeenSet = false;
  bool m_scopeHasBeenSet = false;
  bool m_tokenEndpointTlsCertificateArnHasBeenSet = false;
};

}  // namespace Model
}  // namespace Kafka
}  // namespace Aws

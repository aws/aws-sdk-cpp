/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apigateway/APIGateway_EXPORTS.h>
#include <aws/apigateway/model/JwtAdditionalClaim.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace APIGateway {
namespace Model {

/**
 * <p>A trusted issuer in the JWT configuration.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/JwtIssuerInput">AWS
 * API Reference</a></p>
 */
class JwtIssuerInput {
 public:
  AWS_APIGATEWAY_API JwtIssuerInput() = default;
  AWS_APIGATEWAY_API JwtIssuerInput(Aws::Utils::Json::JsonView jsonValue);
  AWS_APIGATEWAY_API JwtIssuerInput& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_APIGATEWAY_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The OpenID Connect (OIDC) issuer URL. The value must be an absolute
   * <code>https</code> URL that includes a host and has no user information, query,
   * or fragment. It must exactly match the <code>iss</code> claim of the token, and
   * the issuer's OIDC discovery document must name this exact issuer.</p>
   */
  inline const Aws::String& GetIssuer() const { return m_issuer; }
  inline bool IssuerHasBeenSet() const { return m_issuerHasBeenSet; }
  template <typename IssuerT = Aws::String>
  void SetIssuer(IssuerT&& value) {
    m_issuerHasBeenSet = true;
    m_issuer = std::forward<IssuerT>(value);
  }
  template <typename IssuerT = Aws::String>
  JwtIssuerInput& WithIssuer(IssuerT&& value) {
    SetIssuer(std::forward<IssuerT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The audiences that the issuer can issue tokens for. None can be empty. The
   * token's <code>aud</code> claim must contain at least one of these values.</p>
   */
  inline const Aws::Vector<Aws::String>& GetAudiences() const { return m_audiences; }
  inline bool AudiencesHasBeenSet() const { return m_audiencesHasBeenSet; }
  template <typename AudiencesT = Aws::Vector<Aws::String>>
  void SetAudiences(AudiencesT&& value) {
    m_audiencesHasBeenSet = true;
    m_audiences = std::forward<AudiencesT>(value);
  }
  template <typename AudiencesT = Aws::Vector<Aws::String>>
  JwtIssuerInput& WithAudiences(AudiencesT&& value) {
    SetAudiences(std::forward<AudiencesT>(value));
    return *this;
  }
  template <typename AudiencesT = Aws::String>
  JwtIssuerInput& AddAudiences(AudiencesT&& value) {
    m_audiencesHasBeenSet = true;
    m_audiences.emplace_back(std::forward<AudiencesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The additional claim rules for this issuer. Claim names must be unique within
   * the issuer.</p>
   */
  inline const Aws::Vector<JwtAdditionalClaim>& GetAdditionalClaims() const { return m_additionalClaims; }
  inline bool AdditionalClaimsHasBeenSet() const { return m_additionalClaimsHasBeenSet; }
  template <typename AdditionalClaimsT = Aws::Vector<JwtAdditionalClaim>>
  void SetAdditionalClaims(AdditionalClaimsT&& value) {
    m_additionalClaimsHasBeenSet = true;
    m_additionalClaims = std::forward<AdditionalClaimsT>(value);
  }
  template <typename AdditionalClaimsT = Aws::Vector<JwtAdditionalClaim>>
  JwtIssuerInput& WithAdditionalClaims(AdditionalClaimsT&& value) {
    SetAdditionalClaims(std::forward<AdditionalClaimsT>(value));
    return *this;
  }
  template <typename AdditionalClaimsT = JwtAdditionalClaim>
  JwtIssuerInput& AddAdditionalClaims(AdditionalClaimsT&& value) {
    m_additionalClaimsHasBeenSet = true;
    m_additionalClaims.emplace_back(std::forward<AdditionalClaimsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_issuer;

  Aws::Vector<Aws::String> m_audiences;

  Aws::Vector<JwtAdditionalClaim> m_additionalClaims;
  bool m_issuerHasBeenSet = false;
  bool m_audiencesHasBeenSet = false;
  bool m_additionalClaimsHasBeenSet = false;
};

}  // namespace Model
}  // namespace APIGateway
}  // namespace Aws

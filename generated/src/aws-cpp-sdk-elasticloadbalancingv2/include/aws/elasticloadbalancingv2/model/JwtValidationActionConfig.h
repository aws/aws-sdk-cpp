/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/elasticloadbalancingv2/ElasticLoadBalancingv2_EXPORTS.h>
#include <aws/elasticloadbalancingv2/model/JwtValidationActionAdditionalClaim.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Xml {
class XmlNode;
}  // namespace Xml
}  // namespace Utils
namespace ElasticLoadBalancingv2 {
namespace Model {

/**
 * <p>Information about a JSON Web Token (JWT) validation action.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancingv2-2015-12-01/JwtValidationActionConfig">AWS
 * API Reference</a></p>
 */
class JwtValidationActionConfig {
 public:
  AWS_ELASTICLOADBALANCINGV2_API JwtValidationActionConfig() = default;
  AWS_ELASTICLOADBALANCINGV2_API JwtValidationActionConfig(const Aws::Utils::Xml::XmlNode& xmlNode);
  AWS_ELASTICLOADBALANCINGV2_API JwtValidationActionConfig& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

  AWS_ELASTICLOADBALANCINGV2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index,
                                                     const char* locationValue) const;
  AWS_ELASTICLOADBALANCINGV2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;

  ///@{
  /**
   * <p>The JSON Web Key Set (JWKS) endpoint. This endpoint contains JSON Web Keys
   * (JWK) that are used to validate signatures from the provider.</p> <p>This must
   * be a full URL, including the HTTPS protocol, the domain, and the path. The
   * maximum length is 256 characters.</p>
   */
  inline const Aws::String& GetJwksEndpoint() const { return m_jwksEndpoint; }
  inline bool JwksEndpointHasBeenSet() const { return m_jwksEndpointHasBeenSet; }
  template <typename JwksEndpointT = Aws::String>
  void SetJwksEndpoint(JwksEndpointT&& value) {
    m_jwksEndpointHasBeenSet = true;
    m_jwksEndpoint = std::forward<JwksEndpointT>(value);
  }
  template <typename JwksEndpointT = Aws::String>
  JwtValidationActionConfig& WithJwksEndpoint(JwksEndpointT&& value) {
    SetJwksEndpoint(std::forward<JwksEndpointT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The issuer of the JWT. The maximum length is 256 characters.</p>
   */
  inline const Aws::String& GetIssuer() const { return m_issuer; }
  inline bool IssuerHasBeenSet() const { return m_issuerHasBeenSet; }
  template <typename IssuerT = Aws::String>
  void SetIssuer(IssuerT&& value) {
    m_issuerHasBeenSet = true;
    m_issuer = std::forward<IssuerT>(value);
  }
  template <typename IssuerT = Aws::String>
  JwtValidationActionConfig& WithIssuer(IssuerT&& value) {
    SetIssuer(std::forward<IssuerT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Additional claims to validate. The maximum size of the list is 10. We
   * validate the <code>exp</code>, <code>iss</code>, <code>nbf</code>, and
   * <code>iat</code> claims by default.</p>
   */
  inline const Aws::Vector<JwtValidationActionAdditionalClaim>& GetAdditionalClaims() const { return m_additionalClaims; }
  inline bool AdditionalClaimsHasBeenSet() const { return m_additionalClaimsHasBeenSet; }
  template <typename AdditionalClaimsT = Aws::Vector<JwtValidationActionAdditionalClaim>>
  void SetAdditionalClaims(AdditionalClaimsT&& value) {
    m_additionalClaimsHasBeenSet = true;
    m_additionalClaims = std::forward<AdditionalClaimsT>(value);
  }
  template <typename AdditionalClaimsT = Aws::Vector<JwtValidationActionAdditionalClaim>>
  JwtValidationActionConfig& WithAdditionalClaims(AdditionalClaimsT&& value) {
    SetAdditionalClaims(std::forward<AdditionalClaimsT>(value));
    return *this;
  }
  template <typename AdditionalClaimsT = JwtValidationActionAdditionalClaim>
  JwtValidationActionConfig& AddAdditionalClaims(AdditionalClaimsT&& value) {
    m_additionalClaimsHasBeenSet = true;
    m_additionalClaims.emplace_back(std::forward<AdditionalClaimsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_jwksEndpoint;
  bool m_jwksEndpointHasBeenSet = false;

  Aws::String m_issuer;
  bool m_issuerHasBeenSet = false;

  Aws::Vector<JwtValidationActionAdditionalClaim> m_additionalClaims;
  bool m_additionalClaimsHasBeenSet = false;
};

}  // namespace Model
}  // namespace ElasticLoadBalancingv2
}  // namespace Aws

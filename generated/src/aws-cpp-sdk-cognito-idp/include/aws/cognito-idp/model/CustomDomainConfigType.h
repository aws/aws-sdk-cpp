/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cognito-idp/CognitoIdentityProvider_EXPORTS.h>
#include <aws/cognito-idp/model/SecurityPolicyType.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace CognitoIdentityProvider {
namespace Model {

/**
 * <p>The configuration for a custom domain, including the SSL certificate and TLS
 * security policy.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/CustomDomainConfigType">AWS
 * API Reference</a></p>
 */
class CustomDomainConfigType {
 public:
  AWS_COGNITOIDENTITYPROVIDER_API CustomDomainConfigType() = default;
  AWS_COGNITOIDENTITYPROVIDER_API CustomDomainConfigType(Aws::Utils::Json::JsonView jsonValue);
  AWS_COGNITOIDENTITYPROVIDER_API CustomDomainConfigType& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_COGNITOIDENTITYPROVIDER_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of an Certificate Manager SSL certificate. You
   * use this certificate for the subdomain of your custom domain.</p>
   */
  inline const Aws::String& GetCertificateArn() const { return m_certificateArn; }
  inline bool CertificateArnHasBeenSet() const { return m_certificateArnHasBeenSet; }
  template <typename CertificateArnT = Aws::String>
  void SetCertificateArn(CertificateArnT&& value) {
    m_certificateArnHasBeenSet = true;
    m_certificateArn = std::forward<CertificateArnT>(value);
  }
  template <typename CertificateArnT = Aws::String>
  CustomDomainConfigType& WithCertificateArn(CertificateArnT&& value) {
    SetCertificateArn(std::forward<CertificateArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The security policy for the custom domain. Defines the minimum TLS version
   * and cipher suites that Amazon CloudFront supports when communicating with
   * clients. For specific guidance, see <a
   * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/secure-connections-supported-viewer-protocols-ciphers.html">Supported
   * protocols and ciphers between viewers and CloudFront</a>. Valid values are as
   * follows:</p> <ul> <li> <p> <code>TLS_V1_3_2025</code> (strictest): A
   * post-quantum-ready policy requiring TLS 1.3. It provides the strongest security
   * posture and is ideal for workloads where all clients and browsers are updated to
   * the latest versions. <a
   * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/secure-connections-supported-viewer-protocols-ciphers.html">Supported
   * protocols and ciphers for TLSv1.3_2025</a>.</p> </li> <li> <p>
   * <code>TLS_V1_2_2021</code> (recommended): A post-quantum-ready policy which
   * prefers TLS 1.3 but allows fallback to TLS 1.2 to accommodate older clients. It
   * is the recommended minimum for typical commercial-grade consumer applications.
   * <a
   * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/secure-connections-supported-viewer-protocols-ciphers.html">Supported
   * protocols and ciphers for TLSv1.2_2021</a>.</p> </li> <li> <p>
   * <code>TLS_V1</code> (strongly discouraged): Permits fallback to TLS 1.0. It
   * offers the broadest compatibility, including support for legacy clients that are
   * more than a decade old. This compatibility comes at the expense of allowing TLS
   * versions and cryptographic algorithms that are no longer considered safe for
   * commercial use. <a
   * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/secure-connections-supported-viewer-protocols-ciphers.html">Supported
   * protocols and ciphers for TLSv1</a>.</p> </li> </ul>
   */
  inline SecurityPolicyType GetSecurityPolicy() const { return m_securityPolicy; }
  inline bool SecurityPolicyHasBeenSet() const { return m_securityPolicyHasBeenSet; }
  inline void SetSecurityPolicy(SecurityPolicyType value) {
    m_securityPolicyHasBeenSet = true;
    m_securityPolicy = value;
  }
  inline CustomDomainConfigType& WithSecurityPolicy(SecurityPolicyType value) {
    SetSecurityPolicy(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_certificateArn;

  SecurityPolicyType m_securityPolicy{SecurityPolicyType::NOT_SET};
  bool m_certificateArnHasBeenSet = false;
  bool m_securityPolicyHasBeenSet = false;
};

}  // namespace Model
}  // namespace CognitoIdentityProvider
}  // namespace Aws

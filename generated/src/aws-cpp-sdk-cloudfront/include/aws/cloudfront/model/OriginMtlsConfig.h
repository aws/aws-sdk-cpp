/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Xml {
class XmlNode;
}  // namespace Xml
}  // namespace Utils
namespace CloudFront {
namespace Model {

/**
 * <p>Configures mutual TLS authentication between CloudFront and your origin
 * server.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/OriginMtlsConfig">AWS
 * API Reference</a></p>
 */
class OriginMtlsConfig {
 public:
  AWS_CLOUDFRONT_API OriginMtlsConfig() = default;
  AWS_CLOUDFRONT_API OriginMtlsConfig(const Aws::Utils::Xml::XmlNode& xmlNode);
  AWS_CLOUDFRONT_API OriginMtlsConfig& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

  AWS_CLOUDFRONT_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the client certificate stored in Amazon Web
   * Services Certificate Manager (ACM) that CloudFront uses to authenticate with
   * your origin using Mutual TLS.</p>
   */
  inline const Aws::String& GetClientCertificateArn() const { return m_clientCertificateArn; }
  inline bool ClientCertificateArnHasBeenSet() const { return m_clientCertificateArnHasBeenSet; }
  template <typename ClientCertificateArnT = Aws::String>
  void SetClientCertificateArn(ClientCertificateArnT&& value) {
    m_clientCertificateArnHasBeenSet = true;
    m_clientCertificateArn = std::forward<ClientCertificateArnT>(value);
  }
  template <typename ClientCertificateArnT = Aws::String>
  OriginMtlsConfig& WithClientCertificateArn(ClientCertificateArnT&& value) {
    SetClientCertificateArn(std::forward<ClientCertificateArnT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_clientCertificateArn;
  bool m_clientCertificateArnHasBeenSet = false;
};

}  // namespace Model
}  // namespace CloudFront
}  // namespace Aws

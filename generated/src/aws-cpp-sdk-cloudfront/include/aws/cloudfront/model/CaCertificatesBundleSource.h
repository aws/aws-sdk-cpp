/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/cloudfront/model/CaCertificatesBundleS3Location.h>

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
 * <p>A CA certificates bundle source.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/CaCertificatesBundleSource">AWS
 * API Reference</a></p>
 */
class CaCertificatesBundleSource {
 public:
  AWS_CLOUDFRONT_API CaCertificatesBundleSource() = default;
  AWS_CLOUDFRONT_API CaCertificatesBundleSource(const Aws::Utils::Xml::XmlNode& xmlNode);
  AWS_CLOUDFRONT_API CaCertificatesBundleSource& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

  AWS_CLOUDFRONT_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;

  ///@{
  /**
   * <p>The CA certificates bundle location in Amazon S3.</p>
   */
  inline const CaCertificatesBundleS3Location& GetCaCertificatesBundleS3Location() const { return m_caCertificatesBundleS3Location; }
  inline bool CaCertificatesBundleS3LocationHasBeenSet() const { return m_caCertificatesBundleS3LocationHasBeenSet; }
  template <typename CaCertificatesBundleS3LocationT = CaCertificatesBundleS3Location>
  void SetCaCertificatesBundleS3Location(CaCertificatesBundleS3LocationT&& value) {
    m_caCertificatesBundleS3LocationHasBeenSet = true;
    m_caCertificatesBundleS3Location = std::forward<CaCertificatesBundleS3LocationT>(value);
  }
  template <typename CaCertificatesBundleS3LocationT = CaCertificatesBundleS3Location>
  CaCertificatesBundleSource& WithCaCertificatesBundleS3Location(CaCertificatesBundleS3LocationT&& value) {
    SetCaCertificatesBundleS3Location(std::forward<CaCertificatesBundleS3LocationT>(value));
    return *this;
  }
  ///@}
 private:
  CaCertificatesBundleS3Location m_caCertificatesBundleS3Location;
  bool m_caCertificatesBundleS3LocationHasBeenSet = false;
};

}  // namespace Model
}  // namespace CloudFront
}  // namespace Aws

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
 * <p>A trust store configuration.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/TrustStoreConfig">AWS
 * API Reference</a></p>
 */
class TrustStoreConfig {
 public:
  AWS_CLOUDFRONT_API TrustStoreConfig() = default;
  AWS_CLOUDFRONT_API TrustStoreConfig(const Aws::Utils::Xml::XmlNode& xmlNode);
  AWS_CLOUDFRONT_API TrustStoreConfig& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

  AWS_CLOUDFRONT_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;

  ///@{
  /**
   * <p>The trust store ID.</p>
   */
  inline const Aws::String& GetTrustStoreId() const { return m_trustStoreId; }
  inline bool TrustStoreIdHasBeenSet() const { return m_trustStoreIdHasBeenSet; }
  template <typename TrustStoreIdT = Aws::String>
  void SetTrustStoreId(TrustStoreIdT&& value) {
    m_trustStoreIdHasBeenSet = true;
    m_trustStoreId = std::forward<TrustStoreIdT>(value);
  }
  template <typename TrustStoreIdT = Aws::String>
  TrustStoreConfig& WithTrustStoreId(TrustStoreIdT&& value) {
    SetTrustStoreId(std::forward<TrustStoreIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The configuration to use to advertise trust store CA names.</p>
   */
  inline bool GetAdvertiseTrustStoreCaNames() const { return m_advertiseTrustStoreCaNames; }
  inline bool AdvertiseTrustStoreCaNamesHasBeenSet() const { return m_advertiseTrustStoreCaNamesHasBeenSet; }
  inline void SetAdvertiseTrustStoreCaNames(bool value) {
    m_advertiseTrustStoreCaNamesHasBeenSet = true;
    m_advertiseTrustStoreCaNames = value;
  }
  inline TrustStoreConfig& WithAdvertiseTrustStoreCaNames(bool value) {
    SetAdvertiseTrustStoreCaNames(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The configuration to use to ignore certificate expiration.</p>
   */
  inline bool GetIgnoreCertificateExpiry() const { return m_ignoreCertificateExpiry; }
  inline bool IgnoreCertificateExpiryHasBeenSet() const { return m_ignoreCertificateExpiryHasBeenSet; }
  inline void SetIgnoreCertificateExpiry(bool value) {
    m_ignoreCertificateExpiryHasBeenSet = true;
    m_ignoreCertificateExpiry = value;
  }
  inline TrustStoreConfig& WithIgnoreCertificateExpiry(bool value) {
    SetIgnoreCertificateExpiry(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_trustStoreId;

  bool m_advertiseTrustStoreCaNames{false};

  bool m_ignoreCertificateExpiry{false};
  bool m_trustStoreIdHasBeenSet = false;
  bool m_advertiseTrustStoreCaNamesHasBeenSet = false;
  bool m_ignoreCertificateExpiryHasBeenSet = false;
};

}  // namespace Model
}  // namespace CloudFront
}  // namespace Aws

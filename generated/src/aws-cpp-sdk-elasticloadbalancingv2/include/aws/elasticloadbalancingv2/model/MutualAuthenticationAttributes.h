/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticloadbalancingv2/ElasticLoadBalancingv2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/elasticloadbalancingv2/model/TrustStoreAssociationStatusEnum.h>
#include <aws/elasticloadbalancingv2/model/AdvertiseTrustStoreCaNamesEnum.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace ElasticLoadBalancingv2
{
namespace Model
{

  /**
   * <p>Information about the mutual authentication attributes of a
   * listener.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancingv2-2015-12-01/MutualAuthenticationAttributes">AWS
   * API Reference</a></p>
   */
  class MutualAuthenticationAttributes
  {
  public:
    AWS_ELASTICLOADBALANCINGV2_API MutualAuthenticationAttributes() = default;
    AWS_ELASTICLOADBALANCINGV2_API MutualAuthenticationAttributes(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_ELASTICLOADBALANCINGV2_API MutualAuthenticationAttributes& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_ELASTICLOADBALANCINGV2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_ELASTICLOADBALANCINGV2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The client certificate handling method. Options are <code>off</code>,
     * <code>passthrough</code> or <code>verify</code>. The default value is
     * <code>off</code>.</p>
     */
    inline const Aws::String& GetMode() const { return m_mode; }
    inline bool ModeHasBeenSet() const { return m_modeHasBeenSet; }
    template<typename ModeT = Aws::String>
    void SetMode(ModeT&& value) { m_modeHasBeenSet = true; m_mode = std::forward<ModeT>(value); }
    template<typename ModeT = Aws::String>
    MutualAuthenticationAttributes& WithMode(ModeT&& value) { SetMode(std::forward<ModeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the trust store.</p>
     */
    inline const Aws::String& GetTrustStoreArn() const { return m_trustStoreArn; }
    inline bool TrustStoreArnHasBeenSet() const { return m_trustStoreArnHasBeenSet; }
    template<typename TrustStoreArnT = Aws::String>
    void SetTrustStoreArn(TrustStoreArnT&& value) { m_trustStoreArnHasBeenSet = true; m_trustStoreArn = std::forward<TrustStoreArnT>(value); }
    template<typename TrustStoreArnT = Aws::String>
    MutualAuthenticationAttributes& WithTrustStoreArn(TrustStoreArnT&& value) { SetTrustStoreArn(std::forward<TrustStoreArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether expired client certificates are ignored.</p>
     */
    inline bool GetIgnoreClientCertificateExpiry() const { return m_ignoreClientCertificateExpiry; }
    inline bool IgnoreClientCertificateExpiryHasBeenSet() const { return m_ignoreClientCertificateExpiryHasBeenSet; }
    inline void SetIgnoreClientCertificateExpiry(bool value) { m_ignoreClientCertificateExpiryHasBeenSet = true; m_ignoreClientCertificateExpiry = value; }
    inline MutualAuthenticationAttributes& WithIgnoreClientCertificateExpiry(bool value) { SetIgnoreClientCertificateExpiry(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates a shared trust stores association status.</p>
     */
    inline TrustStoreAssociationStatusEnum GetTrustStoreAssociationStatus() const { return m_trustStoreAssociationStatus; }
    inline bool TrustStoreAssociationStatusHasBeenSet() const { return m_trustStoreAssociationStatusHasBeenSet; }
    inline void SetTrustStoreAssociationStatus(TrustStoreAssociationStatusEnum value) { m_trustStoreAssociationStatusHasBeenSet = true; m_trustStoreAssociationStatus = value; }
    inline MutualAuthenticationAttributes& WithTrustStoreAssociationStatus(TrustStoreAssociationStatusEnum value) { SetTrustStoreAssociationStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether trust store CA certificate names are advertised.</p>
     */
    inline AdvertiseTrustStoreCaNamesEnum GetAdvertiseTrustStoreCaNames() const { return m_advertiseTrustStoreCaNames; }
    inline bool AdvertiseTrustStoreCaNamesHasBeenSet() const { return m_advertiseTrustStoreCaNamesHasBeenSet; }
    inline void SetAdvertiseTrustStoreCaNames(AdvertiseTrustStoreCaNamesEnum value) { m_advertiseTrustStoreCaNamesHasBeenSet = true; m_advertiseTrustStoreCaNames = value; }
    inline MutualAuthenticationAttributes& WithAdvertiseTrustStoreCaNames(AdvertiseTrustStoreCaNamesEnum value) { SetAdvertiseTrustStoreCaNames(value); return *this;}
    ///@}
  private:

    Aws::String m_mode;
    bool m_modeHasBeenSet = false;

    Aws::String m_trustStoreArn;
    bool m_trustStoreArnHasBeenSet = false;

    bool m_ignoreClientCertificateExpiry{false};
    bool m_ignoreClientCertificateExpiryHasBeenSet = false;

    TrustStoreAssociationStatusEnum m_trustStoreAssociationStatus{TrustStoreAssociationStatusEnum::NOT_SET};
    bool m_trustStoreAssociationStatusHasBeenSet = false;

    AdvertiseTrustStoreCaNamesEnum m_advertiseTrustStoreCaNames{AdvertiseTrustStoreCaNamesEnum::NOT_SET};
    bool m_advertiseTrustStoreCaNamesHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticLoadBalancingv2
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticloadbalancingv2/ElasticLoadBalancingv2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/elasticloadbalancingv2/model/RevocationType.h>
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
   * <p>Information about the revocations used by a trust store.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancingv2-2015-12-01/DescribeTrustStoreRevocation">AWS
   * API Reference</a></p>
   */
  class DescribeTrustStoreRevocation
  {
  public:
    AWS_ELASTICLOADBALANCINGV2_API DescribeTrustStoreRevocation() = default;
    AWS_ELASTICLOADBALANCINGV2_API DescribeTrustStoreRevocation(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_ELASTICLOADBALANCINGV2_API DescribeTrustStoreRevocation& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_ELASTICLOADBALANCINGV2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_ELASTICLOADBALANCINGV2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the trust store.</p>
     */
    inline const Aws::String& GetTrustStoreArn() const { return m_trustStoreArn; }
    inline bool TrustStoreArnHasBeenSet() const { return m_trustStoreArnHasBeenSet; }
    template<typename TrustStoreArnT = Aws::String>
    void SetTrustStoreArn(TrustStoreArnT&& value) { m_trustStoreArnHasBeenSet = true; m_trustStoreArn = std::forward<TrustStoreArnT>(value); }
    template<typename TrustStoreArnT = Aws::String>
    DescribeTrustStoreRevocation& WithTrustStoreArn(TrustStoreArnT&& value) { SetTrustStoreArn(std::forward<TrustStoreArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The revocation ID of a revocation file in use.</p>
     */
    inline long long GetRevocationId() const { return m_revocationId; }
    inline bool RevocationIdHasBeenSet() const { return m_revocationIdHasBeenSet; }
    inline void SetRevocationId(long long value) { m_revocationIdHasBeenSet = true; m_revocationId = value; }
    inline DescribeTrustStoreRevocation& WithRevocationId(long long value) { SetRevocationId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of revocation file.</p>
     */
    inline RevocationType GetRevocationType() const { return m_revocationType; }
    inline bool RevocationTypeHasBeenSet() const { return m_revocationTypeHasBeenSet; }
    inline void SetRevocationType(RevocationType value) { m_revocationTypeHasBeenSet = true; m_revocationType = value; }
    inline DescribeTrustStoreRevocation& WithRevocationType(RevocationType value) { SetRevocationType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of revoked certificates.</p>
     */
    inline long long GetNumberOfRevokedEntries() const { return m_numberOfRevokedEntries; }
    inline bool NumberOfRevokedEntriesHasBeenSet() const { return m_numberOfRevokedEntriesHasBeenSet; }
    inline void SetNumberOfRevokedEntries(long long value) { m_numberOfRevokedEntriesHasBeenSet = true; m_numberOfRevokedEntries = value; }
    inline DescribeTrustStoreRevocation& WithNumberOfRevokedEntries(long long value) { SetNumberOfRevokedEntries(value); return *this;}
    ///@}
  private:

    Aws::String m_trustStoreArn;
    bool m_trustStoreArnHasBeenSet = false;

    long long m_revocationId{0};
    bool m_revocationIdHasBeenSet = false;

    RevocationType m_revocationType{RevocationType::NOT_SET};
    bool m_revocationTypeHasBeenSet = false;

    long long m_numberOfRevokedEntries{0};
    bool m_numberOfRevokedEntriesHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticLoadBalancingv2
} // namespace Aws

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
   * <p>Information about a revocation file in use by a trust store.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancingv2-2015-12-01/TrustStoreRevocation">AWS
   * API Reference</a></p>
   */
  class TrustStoreRevocation
  {
  public:
    AWS_ELASTICLOADBALANCINGV2_API TrustStoreRevocation();
    AWS_ELASTICLOADBALANCINGV2_API TrustStoreRevocation(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_ELASTICLOADBALANCINGV2_API TrustStoreRevocation& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_ELASTICLOADBALANCINGV2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_ELASTICLOADBALANCINGV2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the trust store.</p>
     */
    inline const Aws::String& GetTrustStoreArn() const{ return m_trustStoreArn; }
    inline bool TrustStoreArnHasBeenSet() const { return m_trustStoreArnHasBeenSet; }
    inline void SetTrustStoreArn(const Aws::String& value) { m_trustStoreArnHasBeenSet = true; m_trustStoreArn = value; }
    inline void SetTrustStoreArn(Aws::String&& value) { m_trustStoreArnHasBeenSet = true; m_trustStoreArn = std::move(value); }
    inline void SetTrustStoreArn(const char* value) { m_trustStoreArnHasBeenSet = true; m_trustStoreArn.assign(value); }
    inline TrustStoreRevocation& WithTrustStoreArn(const Aws::String& value) { SetTrustStoreArn(value); return *this;}
    inline TrustStoreRevocation& WithTrustStoreArn(Aws::String&& value) { SetTrustStoreArn(std::move(value)); return *this;}
    inline TrustStoreRevocation& WithTrustStoreArn(const char* value) { SetTrustStoreArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The revocation ID of the revocation file.</p>
     */
    inline long long GetRevocationId() const{ return m_revocationId; }
    inline bool RevocationIdHasBeenSet() const { return m_revocationIdHasBeenSet; }
    inline void SetRevocationId(long long value) { m_revocationIdHasBeenSet = true; m_revocationId = value; }
    inline TrustStoreRevocation& WithRevocationId(long long value) { SetRevocationId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of revocation file.</p>
     */
    inline const RevocationType& GetRevocationType() const{ return m_revocationType; }
    inline bool RevocationTypeHasBeenSet() const { return m_revocationTypeHasBeenSet; }
    inline void SetRevocationType(const RevocationType& value) { m_revocationTypeHasBeenSet = true; m_revocationType = value; }
    inline void SetRevocationType(RevocationType&& value) { m_revocationTypeHasBeenSet = true; m_revocationType = std::move(value); }
    inline TrustStoreRevocation& WithRevocationType(const RevocationType& value) { SetRevocationType(value); return *this;}
    inline TrustStoreRevocation& WithRevocationType(RevocationType&& value) { SetRevocationType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of revoked certificates.</p>
     */
    inline long long GetNumberOfRevokedEntries() const{ return m_numberOfRevokedEntries; }
    inline bool NumberOfRevokedEntriesHasBeenSet() const { return m_numberOfRevokedEntriesHasBeenSet; }
    inline void SetNumberOfRevokedEntries(long long value) { m_numberOfRevokedEntriesHasBeenSet = true; m_numberOfRevokedEntries = value; }
    inline TrustStoreRevocation& WithNumberOfRevokedEntries(long long value) { SetNumberOfRevokedEntries(value); return *this;}
    ///@}
  private:

    Aws::String m_trustStoreArn;
    bool m_trustStoreArnHasBeenSet = false;

    long long m_revocationId;
    bool m_revocationIdHasBeenSet = false;

    RevocationType m_revocationType;
    bool m_revocationTypeHasBeenSet = false;

    long long m_numberOfRevokedEntries;
    bool m_numberOfRevokedEntriesHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticLoadBalancingv2
} // namespace Aws

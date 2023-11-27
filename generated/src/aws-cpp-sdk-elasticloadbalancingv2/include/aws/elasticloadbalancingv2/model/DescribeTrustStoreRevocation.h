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
    AWS_ELASTICLOADBALANCINGV2_API DescribeTrustStoreRevocation();
    AWS_ELASTICLOADBALANCINGV2_API DescribeTrustStoreRevocation(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_ELASTICLOADBALANCINGV2_API DescribeTrustStoreRevocation& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_ELASTICLOADBALANCINGV2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_ELASTICLOADBALANCINGV2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The Amazon Resource Name (ARN) of the trust store.</p>
     */
    inline const Aws::String& GetTrustStoreArn() const{ return m_trustStoreArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the trust store.</p>
     */
    inline bool TrustStoreArnHasBeenSet() const { return m_trustStoreArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the trust store.</p>
     */
    inline void SetTrustStoreArn(const Aws::String& value) { m_trustStoreArnHasBeenSet = true; m_trustStoreArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the trust store.</p>
     */
    inline void SetTrustStoreArn(Aws::String&& value) { m_trustStoreArnHasBeenSet = true; m_trustStoreArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the trust store.</p>
     */
    inline void SetTrustStoreArn(const char* value) { m_trustStoreArnHasBeenSet = true; m_trustStoreArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the trust store.</p>
     */
    inline DescribeTrustStoreRevocation& WithTrustStoreArn(const Aws::String& value) { SetTrustStoreArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the trust store.</p>
     */
    inline DescribeTrustStoreRevocation& WithTrustStoreArn(Aws::String&& value) { SetTrustStoreArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the trust store.</p>
     */
    inline DescribeTrustStoreRevocation& WithTrustStoreArn(const char* value) { SetTrustStoreArn(value); return *this;}


    /**
     * <p>The revocation ID of a revocation file in use.</p>
     */
    inline long long GetRevocationId() const{ return m_revocationId; }

    /**
     * <p>The revocation ID of a revocation file in use.</p>
     */
    inline bool RevocationIdHasBeenSet() const { return m_revocationIdHasBeenSet; }

    /**
     * <p>The revocation ID of a revocation file in use.</p>
     */
    inline void SetRevocationId(long long value) { m_revocationIdHasBeenSet = true; m_revocationId = value; }

    /**
     * <p>The revocation ID of a revocation file in use.</p>
     */
    inline DescribeTrustStoreRevocation& WithRevocationId(long long value) { SetRevocationId(value); return *this;}


    /**
     * <p>The type of revocation file.</p>
     */
    inline const RevocationType& GetRevocationType() const{ return m_revocationType; }

    /**
     * <p>The type of revocation file.</p>
     */
    inline bool RevocationTypeHasBeenSet() const { return m_revocationTypeHasBeenSet; }

    /**
     * <p>The type of revocation file.</p>
     */
    inline void SetRevocationType(const RevocationType& value) { m_revocationTypeHasBeenSet = true; m_revocationType = value; }

    /**
     * <p>The type of revocation file.</p>
     */
    inline void SetRevocationType(RevocationType&& value) { m_revocationTypeHasBeenSet = true; m_revocationType = std::move(value); }

    /**
     * <p>The type of revocation file.</p>
     */
    inline DescribeTrustStoreRevocation& WithRevocationType(const RevocationType& value) { SetRevocationType(value); return *this;}

    /**
     * <p>The type of revocation file.</p>
     */
    inline DescribeTrustStoreRevocation& WithRevocationType(RevocationType&& value) { SetRevocationType(std::move(value)); return *this;}


    /**
     * <p>The number of revoked certificates.</p>
     */
    inline long long GetNumberOfRevokedEntries() const{ return m_numberOfRevokedEntries; }

    /**
     * <p>The number of revoked certificates.</p>
     */
    inline bool NumberOfRevokedEntriesHasBeenSet() const { return m_numberOfRevokedEntriesHasBeenSet; }

    /**
     * <p>The number of revoked certificates.</p>
     */
    inline void SetNumberOfRevokedEntries(long long value) { m_numberOfRevokedEntriesHasBeenSet = true; m_numberOfRevokedEntries = value; }

    /**
     * <p>The number of revoked certificates.</p>
     */
    inline DescribeTrustStoreRevocation& WithNumberOfRevokedEntries(long long value) { SetNumberOfRevokedEntries(value); return *this;}

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

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticloadbalancingv2/ElasticLoadBalancingv2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/elasticloadbalancingv2/model/TrustStoreStatus.h>
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
   * <p>Information about a trust store.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancingv2-2015-12-01/TrustStore">AWS
   * API Reference</a></p>
   */
  class TrustStore
  {
  public:
    AWS_ELASTICLOADBALANCINGV2_API TrustStore();
    AWS_ELASTICLOADBALANCINGV2_API TrustStore(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_ELASTICLOADBALANCINGV2_API TrustStore& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_ELASTICLOADBALANCINGV2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_ELASTICLOADBALANCINGV2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The name of the trust store.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline TrustStore& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline TrustStore& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline TrustStore& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the trust store.</p>
     */
    inline const Aws::String& GetTrustStoreArn() const{ return m_trustStoreArn; }
    inline bool TrustStoreArnHasBeenSet() const { return m_trustStoreArnHasBeenSet; }
    inline void SetTrustStoreArn(const Aws::String& value) { m_trustStoreArnHasBeenSet = true; m_trustStoreArn = value; }
    inline void SetTrustStoreArn(Aws::String&& value) { m_trustStoreArnHasBeenSet = true; m_trustStoreArn = std::move(value); }
    inline void SetTrustStoreArn(const char* value) { m_trustStoreArnHasBeenSet = true; m_trustStoreArn.assign(value); }
    inline TrustStore& WithTrustStoreArn(const Aws::String& value) { SetTrustStoreArn(value); return *this;}
    inline TrustStore& WithTrustStoreArn(Aws::String&& value) { SetTrustStoreArn(std::move(value)); return *this;}
    inline TrustStore& WithTrustStoreArn(const char* value) { SetTrustStoreArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the trust store.</p>
     */
    inline const TrustStoreStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const TrustStoreStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(TrustStoreStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline TrustStore& WithStatus(const TrustStoreStatus& value) { SetStatus(value); return *this;}
    inline TrustStore& WithStatus(TrustStoreStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of ca certificates in the trust store.</p>
     */
    inline int GetNumberOfCaCertificates() const{ return m_numberOfCaCertificates; }
    inline bool NumberOfCaCertificatesHasBeenSet() const { return m_numberOfCaCertificatesHasBeenSet; }
    inline void SetNumberOfCaCertificates(int value) { m_numberOfCaCertificatesHasBeenSet = true; m_numberOfCaCertificates = value; }
    inline TrustStore& WithNumberOfCaCertificates(int value) { SetNumberOfCaCertificates(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of revoked certificates in the trust store.</p>
     */
    inline long long GetTotalRevokedEntries() const{ return m_totalRevokedEntries; }
    inline bool TotalRevokedEntriesHasBeenSet() const { return m_totalRevokedEntriesHasBeenSet; }
    inline void SetTotalRevokedEntries(long long value) { m_totalRevokedEntriesHasBeenSet = true; m_totalRevokedEntries = value; }
    inline TrustStore& WithTotalRevokedEntries(long long value) { SetTotalRevokedEntries(value); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_trustStoreArn;
    bool m_trustStoreArnHasBeenSet = false;

    TrustStoreStatus m_status;
    bool m_statusHasBeenSet = false;

    int m_numberOfCaCertificates;
    bool m_numberOfCaCertificatesHasBeenSet = false;

    long long m_totalRevokedEntries;
    bool m_totalRevokedEntriesHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticLoadBalancingv2
} // namespace Aws

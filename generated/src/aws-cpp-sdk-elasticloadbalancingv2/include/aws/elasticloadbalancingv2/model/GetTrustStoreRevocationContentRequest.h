/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticloadbalancingv2/ElasticLoadBalancingv2_EXPORTS.h>
#include <aws/elasticloadbalancingv2/ElasticLoadBalancingv2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace ElasticLoadBalancingv2
{
namespace Model
{

  /**
   */
  class GetTrustStoreRevocationContentRequest : public ElasticLoadBalancingv2Request
  {
  public:
    AWS_ELASTICLOADBALANCINGV2_API GetTrustStoreRevocationContentRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetTrustStoreRevocationContent"; }

    AWS_ELASTICLOADBALANCINGV2_API Aws::String SerializePayload() const override;

  protected:
    AWS_ELASTICLOADBALANCINGV2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the trust store.</p>
     */
    inline const Aws::String& GetTrustStoreArn() const { return m_trustStoreArn; }
    inline bool TrustStoreArnHasBeenSet() const { return m_trustStoreArnHasBeenSet; }
    template<typename TrustStoreArnT = Aws::String>
    void SetTrustStoreArn(TrustStoreArnT&& value) { m_trustStoreArnHasBeenSet = true; m_trustStoreArn = std::forward<TrustStoreArnT>(value); }
    template<typename TrustStoreArnT = Aws::String>
    GetTrustStoreRevocationContentRequest& WithTrustStoreArn(TrustStoreArnT&& value) { SetTrustStoreArn(std::forward<TrustStoreArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The revocation ID of the revocation file.</p>
     */
    inline long long GetRevocationId() const { return m_revocationId; }
    inline bool RevocationIdHasBeenSet() const { return m_revocationIdHasBeenSet; }
    inline void SetRevocationId(long long value) { m_revocationIdHasBeenSet = true; m_revocationId = value; }
    inline GetTrustStoreRevocationContentRequest& WithRevocationId(long long value) { SetRevocationId(value); return *this;}
    ///@}
  private:

    Aws::String m_trustStoreArn;
    bool m_trustStoreArnHasBeenSet = false;

    long long m_revocationId{0};
    bool m_revocationIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticLoadBalancingv2
} // namespace Aws

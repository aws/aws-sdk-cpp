/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticloadbalancingv2/ElasticLoadBalancingv2_EXPORTS.h>
#include <aws/elasticloadbalancingv2/ElasticLoadBalancingv2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace ElasticLoadBalancingv2
{
namespace Model
{

  /**
   */
  class RemoveTrustStoreRevocationsRequest : public ElasticLoadBalancingv2Request
  {
  public:
    AWS_ELASTICLOADBALANCINGV2_API RemoveTrustStoreRevocationsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RemoveTrustStoreRevocations"; }

    AWS_ELASTICLOADBALANCINGV2_API Aws::String SerializePayload() const override;

  protected:
    AWS_ELASTICLOADBALANCINGV2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the trust store.</p>
     */
    inline const Aws::String& GetTrustStoreArn() const{ return m_trustStoreArn; }
    inline bool TrustStoreArnHasBeenSet() const { return m_trustStoreArnHasBeenSet; }
    inline void SetTrustStoreArn(const Aws::String& value) { m_trustStoreArnHasBeenSet = true; m_trustStoreArn = value; }
    inline void SetTrustStoreArn(Aws::String&& value) { m_trustStoreArnHasBeenSet = true; m_trustStoreArn = std::move(value); }
    inline void SetTrustStoreArn(const char* value) { m_trustStoreArnHasBeenSet = true; m_trustStoreArn.assign(value); }
    inline RemoveTrustStoreRevocationsRequest& WithTrustStoreArn(const Aws::String& value) { SetTrustStoreArn(value); return *this;}
    inline RemoveTrustStoreRevocationsRequest& WithTrustStoreArn(Aws::String&& value) { SetTrustStoreArn(std::move(value)); return *this;}
    inline RemoveTrustStoreRevocationsRequest& WithTrustStoreArn(const char* value) { SetTrustStoreArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The revocation IDs of the revocation files you want to remove.</p>
     */
    inline const Aws::Vector<long long>& GetRevocationIds() const{ return m_revocationIds; }
    inline bool RevocationIdsHasBeenSet() const { return m_revocationIdsHasBeenSet; }
    inline void SetRevocationIds(const Aws::Vector<long long>& value) { m_revocationIdsHasBeenSet = true; m_revocationIds = value; }
    inline void SetRevocationIds(Aws::Vector<long long>&& value) { m_revocationIdsHasBeenSet = true; m_revocationIds = std::move(value); }
    inline RemoveTrustStoreRevocationsRequest& WithRevocationIds(const Aws::Vector<long long>& value) { SetRevocationIds(value); return *this;}
    inline RemoveTrustStoreRevocationsRequest& WithRevocationIds(Aws::Vector<long long>&& value) { SetRevocationIds(std::move(value)); return *this;}
    inline RemoveTrustStoreRevocationsRequest& AddRevocationIds(long long value) { m_revocationIdsHasBeenSet = true; m_revocationIds.push_back(value); return *this; }
    ///@}
  private:

    Aws::String m_trustStoreArn;
    bool m_trustStoreArnHasBeenSet = false;

    Aws::Vector<long long> m_revocationIds;
    bool m_revocationIdsHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticLoadBalancingv2
} // namespace Aws

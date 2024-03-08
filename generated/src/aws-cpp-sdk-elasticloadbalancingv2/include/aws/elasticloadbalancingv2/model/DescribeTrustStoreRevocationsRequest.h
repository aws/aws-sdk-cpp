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
  class DescribeTrustStoreRevocationsRequest : public ElasticLoadBalancingv2Request
  {
  public:
    AWS_ELASTICLOADBALANCINGV2_API DescribeTrustStoreRevocationsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeTrustStoreRevocations"; }

    AWS_ELASTICLOADBALANCINGV2_API Aws::String SerializePayload() const override;

  protected:
    AWS_ELASTICLOADBALANCINGV2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

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
    inline DescribeTrustStoreRevocationsRequest& WithTrustStoreArn(const Aws::String& value) { SetTrustStoreArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the trust store.</p>
     */
    inline DescribeTrustStoreRevocationsRequest& WithTrustStoreArn(Aws::String&& value) { SetTrustStoreArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the trust store.</p>
     */
    inline DescribeTrustStoreRevocationsRequest& WithTrustStoreArn(const char* value) { SetTrustStoreArn(value); return *this;}


    /**
     * <p>The revocation IDs of the revocation files you want to describe.</p>
     */
    inline const Aws::Vector<long long>& GetRevocationIds() const{ return m_revocationIds; }

    /**
     * <p>The revocation IDs of the revocation files you want to describe.</p>
     */
    inline bool RevocationIdsHasBeenSet() const { return m_revocationIdsHasBeenSet; }

    /**
     * <p>The revocation IDs of the revocation files you want to describe.</p>
     */
    inline void SetRevocationIds(const Aws::Vector<long long>& value) { m_revocationIdsHasBeenSet = true; m_revocationIds = value; }

    /**
     * <p>The revocation IDs of the revocation files you want to describe.</p>
     */
    inline void SetRevocationIds(Aws::Vector<long long>&& value) { m_revocationIdsHasBeenSet = true; m_revocationIds = std::move(value); }

    /**
     * <p>The revocation IDs of the revocation files you want to describe.</p>
     */
    inline DescribeTrustStoreRevocationsRequest& WithRevocationIds(const Aws::Vector<long long>& value) { SetRevocationIds(value); return *this;}

    /**
     * <p>The revocation IDs of the revocation files you want to describe.</p>
     */
    inline DescribeTrustStoreRevocationsRequest& WithRevocationIds(Aws::Vector<long long>&& value) { SetRevocationIds(std::move(value)); return *this;}

    /**
     * <p>The revocation IDs of the revocation files you want to describe.</p>
     */
    inline DescribeTrustStoreRevocationsRequest& AddRevocationIds(long long value) { m_revocationIdsHasBeenSet = true; m_revocationIds.push_back(value); return *this; }


    /**
     * <p>The marker for the next set of results. (You received this marker from a
     * previous call.)</p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }

    /**
     * <p>The marker for the next set of results. (You received this marker from a
     * previous call.)</p>
     */
    inline bool MarkerHasBeenSet() const { return m_markerHasBeenSet; }

    /**
     * <p>The marker for the next set of results. (You received this marker from a
     * previous call.)</p>
     */
    inline void SetMarker(const Aws::String& value) { m_markerHasBeenSet = true; m_marker = value; }

    /**
     * <p>The marker for the next set of results. (You received this marker from a
     * previous call.)</p>
     */
    inline void SetMarker(Aws::String&& value) { m_markerHasBeenSet = true; m_marker = std::move(value); }

    /**
     * <p>The marker for the next set of results. (You received this marker from a
     * previous call.)</p>
     */
    inline void SetMarker(const char* value) { m_markerHasBeenSet = true; m_marker.assign(value); }

    /**
     * <p>The marker for the next set of results. (You received this marker from a
     * previous call.)</p>
     */
    inline DescribeTrustStoreRevocationsRequest& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}

    /**
     * <p>The marker for the next set of results. (You received this marker from a
     * previous call.)</p>
     */
    inline DescribeTrustStoreRevocationsRequest& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}

    /**
     * <p>The marker for the next set of results. (You received this marker from a
     * previous call.)</p>
     */
    inline DescribeTrustStoreRevocationsRequest& WithMarker(const char* value) { SetMarker(value); return *this;}


    /**
     * <p>The maximum number of results to return with this call.</p>
     */
    inline int GetPageSize() const{ return m_pageSize; }

    /**
     * <p>The maximum number of results to return with this call.</p>
     */
    inline bool PageSizeHasBeenSet() const { return m_pageSizeHasBeenSet; }

    /**
     * <p>The maximum number of results to return with this call.</p>
     */
    inline void SetPageSize(int value) { m_pageSizeHasBeenSet = true; m_pageSize = value; }

    /**
     * <p>The maximum number of results to return with this call.</p>
     */
    inline DescribeTrustStoreRevocationsRequest& WithPageSize(int value) { SetPageSize(value); return *this;}

  private:

    Aws::String m_trustStoreArn;
    bool m_trustStoreArnHasBeenSet = false;

    Aws::Vector<long long> m_revocationIds;
    bool m_revocationIdsHasBeenSet = false;

    Aws::String m_marker;
    bool m_markerHasBeenSet = false;

    int m_pageSize;
    bool m_pageSizeHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticLoadBalancingv2
} // namespace Aws

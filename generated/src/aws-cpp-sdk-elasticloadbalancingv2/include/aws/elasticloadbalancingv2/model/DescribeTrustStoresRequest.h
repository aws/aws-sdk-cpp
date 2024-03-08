/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticloadbalancingv2/ElasticLoadBalancingv2_EXPORTS.h>
#include <aws/elasticloadbalancingv2/ElasticLoadBalancingv2Request.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
  class DescribeTrustStoresRequest : public ElasticLoadBalancingv2Request
  {
  public:
    AWS_ELASTICLOADBALANCINGV2_API DescribeTrustStoresRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeTrustStores"; }

    AWS_ELASTICLOADBALANCINGV2_API Aws::String SerializePayload() const override;

  protected:
    AWS_ELASTICLOADBALANCINGV2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The Amazon Resource Name (ARN) of the trust store.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTrustStoreArns() const{ return m_trustStoreArns; }

    /**
     * <p>The Amazon Resource Name (ARN) of the trust store.</p>
     */
    inline bool TrustStoreArnsHasBeenSet() const { return m_trustStoreArnsHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the trust store.</p>
     */
    inline void SetTrustStoreArns(const Aws::Vector<Aws::String>& value) { m_trustStoreArnsHasBeenSet = true; m_trustStoreArns = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the trust store.</p>
     */
    inline void SetTrustStoreArns(Aws::Vector<Aws::String>&& value) { m_trustStoreArnsHasBeenSet = true; m_trustStoreArns = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the trust store.</p>
     */
    inline DescribeTrustStoresRequest& WithTrustStoreArns(const Aws::Vector<Aws::String>& value) { SetTrustStoreArns(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the trust store.</p>
     */
    inline DescribeTrustStoresRequest& WithTrustStoreArns(Aws::Vector<Aws::String>&& value) { SetTrustStoreArns(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the trust store.</p>
     */
    inline DescribeTrustStoresRequest& AddTrustStoreArns(const Aws::String& value) { m_trustStoreArnsHasBeenSet = true; m_trustStoreArns.push_back(value); return *this; }

    /**
     * <p>The Amazon Resource Name (ARN) of the trust store.</p>
     */
    inline DescribeTrustStoresRequest& AddTrustStoreArns(Aws::String&& value) { m_trustStoreArnsHasBeenSet = true; m_trustStoreArns.push_back(std::move(value)); return *this; }

    /**
     * <p>The Amazon Resource Name (ARN) of the trust store.</p>
     */
    inline DescribeTrustStoresRequest& AddTrustStoreArns(const char* value) { m_trustStoreArnsHasBeenSet = true; m_trustStoreArns.push_back(value); return *this; }


    /**
     * <p>The names of the trust stores.</p>
     */
    inline const Aws::Vector<Aws::String>& GetNames() const{ return m_names; }

    /**
     * <p>The names of the trust stores.</p>
     */
    inline bool NamesHasBeenSet() const { return m_namesHasBeenSet; }

    /**
     * <p>The names of the trust stores.</p>
     */
    inline void SetNames(const Aws::Vector<Aws::String>& value) { m_namesHasBeenSet = true; m_names = value; }

    /**
     * <p>The names of the trust stores.</p>
     */
    inline void SetNames(Aws::Vector<Aws::String>&& value) { m_namesHasBeenSet = true; m_names = std::move(value); }

    /**
     * <p>The names of the trust stores.</p>
     */
    inline DescribeTrustStoresRequest& WithNames(const Aws::Vector<Aws::String>& value) { SetNames(value); return *this;}

    /**
     * <p>The names of the trust stores.</p>
     */
    inline DescribeTrustStoresRequest& WithNames(Aws::Vector<Aws::String>&& value) { SetNames(std::move(value)); return *this;}

    /**
     * <p>The names of the trust stores.</p>
     */
    inline DescribeTrustStoresRequest& AddNames(const Aws::String& value) { m_namesHasBeenSet = true; m_names.push_back(value); return *this; }

    /**
     * <p>The names of the trust stores.</p>
     */
    inline DescribeTrustStoresRequest& AddNames(Aws::String&& value) { m_namesHasBeenSet = true; m_names.push_back(std::move(value)); return *this; }

    /**
     * <p>The names of the trust stores.</p>
     */
    inline DescribeTrustStoresRequest& AddNames(const char* value) { m_namesHasBeenSet = true; m_names.push_back(value); return *this; }


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
    inline DescribeTrustStoresRequest& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}

    /**
     * <p>The marker for the next set of results. (You received this marker from a
     * previous call.)</p>
     */
    inline DescribeTrustStoresRequest& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}

    /**
     * <p>The marker for the next set of results. (You received this marker from a
     * previous call.)</p>
     */
    inline DescribeTrustStoresRequest& WithMarker(const char* value) { SetMarker(value); return *this;}


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
    inline DescribeTrustStoresRequest& WithPageSize(int value) { SetPageSize(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_trustStoreArns;
    bool m_trustStoreArnsHasBeenSet = false;

    Aws::Vector<Aws::String> m_names;
    bool m_namesHasBeenSet = false;

    Aws::String m_marker;
    bool m_markerHasBeenSet = false;

    int m_pageSize;
    bool m_pageSizeHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticLoadBalancingv2
} // namespace Aws

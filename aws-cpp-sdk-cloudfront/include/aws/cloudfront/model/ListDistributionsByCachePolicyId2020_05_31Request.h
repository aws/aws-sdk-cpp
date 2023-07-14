﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/cloudfront/CloudFrontRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace CloudFront
{
namespace Model
{

  /**
   */
  class AWS_CLOUDFRONT_API ListDistributionsByCachePolicyId2020_05_31Request : public CloudFrontRequest
  {
  public:
    ListDistributionsByCachePolicyId2020_05_31Request();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListDistributionsByCachePolicyId"; }

    Aws::String SerializePayload() const override;

    void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>Use this field when paginating results to indicate where to begin in your
     * list of distribution IDs. The response includes distribution IDs in the list
     * that occur after the marker. To get the next page of the list, set this field’s
     * value to the value of <code>NextMarker</code> from the current page’s
     * response.</p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }

    /**
     * <p>Use this field when paginating results to indicate where to begin in your
     * list of distribution IDs. The response includes distribution IDs in the list
     * that occur after the marker. To get the next page of the list, set this field’s
     * value to the value of <code>NextMarker</code> from the current page’s
     * response.</p>
     */
    inline bool MarkerHasBeenSet() const { return m_markerHasBeenSet; }

    /**
     * <p>Use this field when paginating results to indicate where to begin in your
     * list of distribution IDs. The response includes distribution IDs in the list
     * that occur after the marker. To get the next page of the list, set this field’s
     * value to the value of <code>NextMarker</code> from the current page’s
     * response.</p>
     */
    inline void SetMarker(const Aws::String& value) { m_markerHasBeenSet = true; m_marker = value; }

    /**
     * <p>Use this field when paginating results to indicate where to begin in your
     * list of distribution IDs. The response includes distribution IDs in the list
     * that occur after the marker. To get the next page of the list, set this field’s
     * value to the value of <code>NextMarker</code> from the current page’s
     * response.</p>
     */
    inline void SetMarker(Aws::String&& value) { m_markerHasBeenSet = true; m_marker = std::move(value); }

    /**
     * <p>Use this field when paginating results to indicate where to begin in your
     * list of distribution IDs. The response includes distribution IDs in the list
     * that occur after the marker. To get the next page of the list, set this field’s
     * value to the value of <code>NextMarker</code> from the current page’s
     * response.</p>
     */
    inline void SetMarker(const char* value) { m_markerHasBeenSet = true; m_marker.assign(value); }

    /**
     * <p>Use this field when paginating results to indicate where to begin in your
     * list of distribution IDs. The response includes distribution IDs in the list
     * that occur after the marker. To get the next page of the list, set this field’s
     * value to the value of <code>NextMarker</code> from the current page’s
     * response.</p>
     */
    inline ListDistributionsByCachePolicyId2020_05_31Request& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}

    /**
     * <p>Use this field when paginating results to indicate where to begin in your
     * list of distribution IDs. The response includes distribution IDs in the list
     * that occur after the marker. To get the next page of the list, set this field’s
     * value to the value of <code>NextMarker</code> from the current page’s
     * response.</p>
     */
    inline ListDistributionsByCachePolicyId2020_05_31Request& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}

    /**
     * <p>Use this field when paginating results to indicate where to begin in your
     * list of distribution IDs. The response includes distribution IDs in the list
     * that occur after the marker. To get the next page of the list, set this field’s
     * value to the value of <code>NextMarker</code> from the current page’s
     * response.</p>
     */
    inline ListDistributionsByCachePolicyId2020_05_31Request& WithMarker(const char* value) { SetMarker(value); return *this;}


    /**
     * <p>The maximum number of distribution IDs that you want in the response.</p>
     */
    inline const Aws::String& GetMaxItems() const{ return m_maxItems; }

    /**
     * <p>The maximum number of distribution IDs that you want in the response.</p>
     */
    inline bool MaxItemsHasBeenSet() const { return m_maxItemsHasBeenSet; }

    /**
     * <p>The maximum number of distribution IDs that you want in the response.</p>
     */
    inline void SetMaxItems(const Aws::String& value) { m_maxItemsHasBeenSet = true; m_maxItems = value; }

    /**
     * <p>The maximum number of distribution IDs that you want in the response.</p>
     */
    inline void SetMaxItems(Aws::String&& value) { m_maxItemsHasBeenSet = true; m_maxItems = std::move(value); }

    /**
     * <p>The maximum number of distribution IDs that you want in the response.</p>
     */
    inline void SetMaxItems(const char* value) { m_maxItemsHasBeenSet = true; m_maxItems.assign(value); }

    /**
     * <p>The maximum number of distribution IDs that you want in the response.</p>
     */
    inline ListDistributionsByCachePolicyId2020_05_31Request& WithMaxItems(const Aws::String& value) { SetMaxItems(value); return *this;}

    /**
     * <p>The maximum number of distribution IDs that you want in the response.</p>
     */
    inline ListDistributionsByCachePolicyId2020_05_31Request& WithMaxItems(Aws::String&& value) { SetMaxItems(std::move(value)); return *this;}

    /**
     * <p>The maximum number of distribution IDs that you want in the response.</p>
     */
    inline ListDistributionsByCachePolicyId2020_05_31Request& WithMaxItems(const char* value) { SetMaxItems(value); return *this;}


    /**
     * <p>The ID of the cache policy whose associated distribution IDs you want to
     * list.</p>
     */
    inline const Aws::String& GetCachePolicyId() const{ return m_cachePolicyId; }

    /**
     * <p>The ID of the cache policy whose associated distribution IDs you want to
     * list.</p>
     */
    inline bool CachePolicyIdHasBeenSet() const { return m_cachePolicyIdHasBeenSet; }

    /**
     * <p>The ID of the cache policy whose associated distribution IDs you want to
     * list.</p>
     */
    inline void SetCachePolicyId(const Aws::String& value) { m_cachePolicyIdHasBeenSet = true; m_cachePolicyId = value; }

    /**
     * <p>The ID of the cache policy whose associated distribution IDs you want to
     * list.</p>
     */
    inline void SetCachePolicyId(Aws::String&& value) { m_cachePolicyIdHasBeenSet = true; m_cachePolicyId = std::move(value); }

    /**
     * <p>The ID of the cache policy whose associated distribution IDs you want to
     * list.</p>
     */
    inline void SetCachePolicyId(const char* value) { m_cachePolicyIdHasBeenSet = true; m_cachePolicyId.assign(value); }

    /**
     * <p>The ID of the cache policy whose associated distribution IDs you want to
     * list.</p>
     */
    inline ListDistributionsByCachePolicyId2020_05_31Request& WithCachePolicyId(const Aws::String& value) { SetCachePolicyId(value); return *this;}

    /**
     * <p>The ID of the cache policy whose associated distribution IDs you want to
     * list.</p>
     */
    inline ListDistributionsByCachePolicyId2020_05_31Request& WithCachePolicyId(Aws::String&& value) { SetCachePolicyId(std::move(value)); return *this;}

    /**
     * <p>The ID of the cache policy whose associated distribution IDs you want to
     * list.</p>
     */
    inline ListDistributionsByCachePolicyId2020_05_31Request& WithCachePolicyId(const char* value) { SetCachePolicyId(value); return *this;}

  private:

    Aws::String m_marker;
    bool m_markerHasBeenSet;

    Aws::String m_maxItems;
    bool m_maxItemsHasBeenSet;

    Aws::String m_cachePolicyId;
    bool m_cachePolicyIdHasBeenSet;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws

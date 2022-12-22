/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/cloudfront/CloudFrontRequest.h>
#include <aws/cloudfront/model/CachePolicyType.h>
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
  class ListCachePolicies2020_05_31Request : public CloudFrontRequest
  {
  public:
    AWS_CLOUDFRONT_API ListCachePolicies2020_05_31Request();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListCachePolicies"; }

    AWS_CLOUDFRONT_API Aws::String SerializePayload() const override;

    AWS_CLOUDFRONT_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>A filter to return only the specified kinds of cache policies. Valid values
     * are:</p> <ul> <li> <p> <code>managed</code> – Returns only the managed policies
     * created by Amazon Web Services.</p> </li> <li> <p> <code>custom</code> – Returns
     * only the custom policies created in your Amazon Web Services account.</p> </li>
     * </ul>
     */
    inline const CachePolicyType& GetType() const{ return m_type; }

    /**
     * <p>A filter to return only the specified kinds of cache policies. Valid values
     * are:</p> <ul> <li> <p> <code>managed</code> – Returns only the managed policies
     * created by Amazon Web Services.</p> </li> <li> <p> <code>custom</code> – Returns
     * only the custom policies created in your Amazon Web Services account.</p> </li>
     * </ul>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>A filter to return only the specified kinds of cache policies. Valid values
     * are:</p> <ul> <li> <p> <code>managed</code> – Returns only the managed policies
     * created by Amazon Web Services.</p> </li> <li> <p> <code>custom</code> – Returns
     * only the custom policies created in your Amazon Web Services account.</p> </li>
     * </ul>
     */
    inline void SetType(const CachePolicyType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>A filter to return only the specified kinds of cache policies. Valid values
     * are:</p> <ul> <li> <p> <code>managed</code> – Returns only the managed policies
     * created by Amazon Web Services.</p> </li> <li> <p> <code>custom</code> – Returns
     * only the custom policies created in your Amazon Web Services account.</p> </li>
     * </ul>
     */
    inline void SetType(CachePolicyType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>A filter to return only the specified kinds of cache policies. Valid values
     * are:</p> <ul> <li> <p> <code>managed</code> – Returns only the managed policies
     * created by Amazon Web Services.</p> </li> <li> <p> <code>custom</code> – Returns
     * only the custom policies created in your Amazon Web Services account.</p> </li>
     * </ul>
     */
    inline ListCachePolicies2020_05_31Request& WithType(const CachePolicyType& value) { SetType(value); return *this;}

    /**
     * <p>A filter to return only the specified kinds of cache policies. Valid values
     * are:</p> <ul> <li> <p> <code>managed</code> – Returns only the managed policies
     * created by Amazon Web Services.</p> </li> <li> <p> <code>custom</code> – Returns
     * only the custom policies created in your Amazon Web Services account.</p> </li>
     * </ul>
     */
    inline ListCachePolicies2020_05_31Request& WithType(CachePolicyType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>Use this field when paginating results to indicate where to begin in your
     * list of cache policies. The response includes cache policies in the list that
     * occur after the marker. To get the next page of the list, set this field's value
     * to the value of <code>NextMarker</code> from the current page's response.</p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }

    /**
     * <p>Use this field when paginating results to indicate where to begin in your
     * list of cache policies. The response includes cache policies in the list that
     * occur after the marker. To get the next page of the list, set this field's value
     * to the value of <code>NextMarker</code> from the current page's response.</p>
     */
    inline bool MarkerHasBeenSet() const { return m_markerHasBeenSet; }

    /**
     * <p>Use this field when paginating results to indicate where to begin in your
     * list of cache policies. The response includes cache policies in the list that
     * occur after the marker. To get the next page of the list, set this field's value
     * to the value of <code>NextMarker</code> from the current page's response.</p>
     */
    inline void SetMarker(const Aws::String& value) { m_markerHasBeenSet = true; m_marker = value; }

    /**
     * <p>Use this field when paginating results to indicate where to begin in your
     * list of cache policies. The response includes cache policies in the list that
     * occur after the marker. To get the next page of the list, set this field's value
     * to the value of <code>NextMarker</code> from the current page's response.</p>
     */
    inline void SetMarker(Aws::String&& value) { m_markerHasBeenSet = true; m_marker = std::move(value); }

    /**
     * <p>Use this field when paginating results to indicate where to begin in your
     * list of cache policies. The response includes cache policies in the list that
     * occur after the marker. To get the next page of the list, set this field's value
     * to the value of <code>NextMarker</code> from the current page's response.</p>
     */
    inline void SetMarker(const char* value) { m_markerHasBeenSet = true; m_marker.assign(value); }

    /**
     * <p>Use this field when paginating results to indicate where to begin in your
     * list of cache policies. The response includes cache policies in the list that
     * occur after the marker. To get the next page of the list, set this field's value
     * to the value of <code>NextMarker</code> from the current page's response.</p>
     */
    inline ListCachePolicies2020_05_31Request& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}

    /**
     * <p>Use this field when paginating results to indicate where to begin in your
     * list of cache policies. The response includes cache policies in the list that
     * occur after the marker. To get the next page of the list, set this field's value
     * to the value of <code>NextMarker</code> from the current page's response.</p>
     */
    inline ListCachePolicies2020_05_31Request& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}

    /**
     * <p>Use this field when paginating results to indicate where to begin in your
     * list of cache policies. The response includes cache policies in the list that
     * occur after the marker. To get the next page of the list, set this field's value
     * to the value of <code>NextMarker</code> from the current page's response.</p>
     */
    inline ListCachePolicies2020_05_31Request& WithMarker(const char* value) { SetMarker(value); return *this;}


    /**
     * <p>The maximum number of cache policies that you want in the response.</p>
     */
    inline const Aws::String& GetMaxItems() const{ return m_maxItems; }

    /**
     * <p>The maximum number of cache policies that you want in the response.</p>
     */
    inline bool MaxItemsHasBeenSet() const { return m_maxItemsHasBeenSet; }

    /**
     * <p>The maximum number of cache policies that you want in the response.</p>
     */
    inline void SetMaxItems(const Aws::String& value) { m_maxItemsHasBeenSet = true; m_maxItems = value; }

    /**
     * <p>The maximum number of cache policies that you want in the response.</p>
     */
    inline void SetMaxItems(Aws::String&& value) { m_maxItemsHasBeenSet = true; m_maxItems = std::move(value); }

    /**
     * <p>The maximum number of cache policies that you want in the response.</p>
     */
    inline void SetMaxItems(const char* value) { m_maxItemsHasBeenSet = true; m_maxItems.assign(value); }

    /**
     * <p>The maximum number of cache policies that you want in the response.</p>
     */
    inline ListCachePolicies2020_05_31Request& WithMaxItems(const Aws::String& value) { SetMaxItems(value); return *this;}

    /**
     * <p>The maximum number of cache policies that you want in the response.</p>
     */
    inline ListCachePolicies2020_05_31Request& WithMaxItems(Aws::String&& value) { SetMaxItems(std::move(value)); return *this;}

    /**
     * <p>The maximum number of cache policies that you want in the response.</p>
     */
    inline ListCachePolicies2020_05_31Request& WithMaxItems(const char* value) { SetMaxItems(value); return *this;}

  private:

    CachePolicyType m_type;
    bool m_typeHasBeenSet = false;

    Aws::String m_marker;
    bool m_markerHasBeenSet = false;

    Aws::String m_maxItems;
    bool m_maxItemsHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws

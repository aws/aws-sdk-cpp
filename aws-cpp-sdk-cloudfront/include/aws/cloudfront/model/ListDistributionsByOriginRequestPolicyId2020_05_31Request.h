/**
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
  class ListDistributionsByOriginRequestPolicyId2020_05_31Request : public CloudFrontRequest
  {
  public:
    AWS_CLOUDFRONT_API ListDistributionsByOriginRequestPolicyId2020_05_31Request();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListDistributionsByOriginRequestPolicyId"; }

    AWS_CLOUDFRONT_API Aws::String SerializePayload() const override;

    AWS_CLOUDFRONT_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>Use this field when paginating results to indicate where to begin in your
     * list of distribution IDs. The response includes distribution IDs in the list
     * that occur after the marker. To get the next page of the list, set this field's
     * value to the value of <code>NextMarker</code> from the current page's
     * response.</p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }

    /**
     * <p>Use this field when paginating results to indicate where to begin in your
     * list of distribution IDs. The response includes distribution IDs in the list
     * that occur after the marker. To get the next page of the list, set this field's
     * value to the value of <code>NextMarker</code> from the current page's
     * response.</p>
     */
    inline bool MarkerHasBeenSet() const { return m_markerHasBeenSet; }

    /**
     * <p>Use this field when paginating results to indicate where to begin in your
     * list of distribution IDs. The response includes distribution IDs in the list
     * that occur after the marker. To get the next page of the list, set this field's
     * value to the value of <code>NextMarker</code> from the current page's
     * response.</p>
     */
    inline void SetMarker(const Aws::String& value) { m_markerHasBeenSet = true; m_marker = value; }

    /**
     * <p>Use this field when paginating results to indicate where to begin in your
     * list of distribution IDs. The response includes distribution IDs in the list
     * that occur after the marker. To get the next page of the list, set this field's
     * value to the value of <code>NextMarker</code> from the current page's
     * response.</p>
     */
    inline void SetMarker(Aws::String&& value) { m_markerHasBeenSet = true; m_marker = std::move(value); }

    /**
     * <p>Use this field when paginating results to indicate where to begin in your
     * list of distribution IDs. The response includes distribution IDs in the list
     * that occur after the marker. To get the next page of the list, set this field's
     * value to the value of <code>NextMarker</code> from the current page's
     * response.</p>
     */
    inline void SetMarker(const char* value) { m_markerHasBeenSet = true; m_marker.assign(value); }

    /**
     * <p>Use this field when paginating results to indicate where to begin in your
     * list of distribution IDs. The response includes distribution IDs in the list
     * that occur after the marker. To get the next page of the list, set this field's
     * value to the value of <code>NextMarker</code> from the current page's
     * response.</p>
     */
    inline ListDistributionsByOriginRequestPolicyId2020_05_31Request& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}

    /**
     * <p>Use this field when paginating results to indicate where to begin in your
     * list of distribution IDs. The response includes distribution IDs in the list
     * that occur after the marker. To get the next page of the list, set this field's
     * value to the value of <code>NextMarker</code> from the current page's
     * response.</p>
     */
    inline ListDistributionsByOriginRequestPolicyId2020_05_31Request& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}

    /**
     * <p>Use this field when paginating results to indicate where to begin in your
     * list of distribution IDs. The response includes distribution IDs in the list
     * that occur after the marker. To get the next page of the list, set this field's
     * value to the value of <code>NextMarker</code> from the current page's
     * response.</p>
     */
    inline ListDistributionsByOriginRequestPolicyId2020_05_31Request& WithMarker(const char* value) { SetMarker(value); return *this;}


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
    inline ListDistributionsByOriginRequestPolicyId2020_05_31Request& WithMaxItems(const Aws::String& value) { SetMaxItems(value); return *this;}

    /**
     * <p>The maximum number of distribution IDs that you want in the response.</p>
     */
    inline ListDistributionsByOriginRequestPolicyId2020_05_31Request& WithMaxItems(Aws::String&& value) { SetMaxItems(std::move(value)); return *this;}

    /**
     * <p>The maximum number of distribution IDs that you want in the response.</p>
     */
    inline ListDistributionsByOriginRequestPolicyId2020_05_31Request& WithMaxItems(const char* value) { SetMaxItems(value); return *this;}


    /**
     * <p>The ID of the origin request policy whose associated distribution IDs you
     * want to list.</p>
     */
    inline const Aws::String& GetOriginRequestPolicyId() const{ return m_originRequestPolicyId; }

    /**
     * <p>The ID of the origin request policy whose associated distribution IDs you
     * want to list.</p>
     */
    inline bool OriginRequestPolicyIdHasBeenSet() const { return m_originRequestPolicyIdHasBeenSet; }

    /**
     * <p>The ID of the origin request policy whose associated distribution IDs you
     * want to list.</p>
     */
    inline void SetOriginRequestPolicyId(const Aws::String& value) { m_originRequestPolicyIdHasBeenSet = true; m_originRequestPolicyId = value; }

    /**
     * <p>The ID of the origin request policy whose associated distribution IDs you
     * want to list.</p>
     */
    inline void SetOriginRequestPolicyId(Aws::String&& value) { m_originRequestPolicyIdHasBeenSet = true; m_originRequestPolicyId = std::move(value); }

    /**
     * <p>The ID of the origin request policy whose associated distribution IDs you
     * want to list.</p>
     */
    inline void SetOriginRequestPolicyId(const char* value) { m_originRequestPolicyIdHasBeenSet = true; m_originRequestPolicyId.assign(value); }

    /**
     * <p>The ID of the origin request policy whose associated distribution IDs you
     * want to list.</p>
     */
    inline ListDistributionsByOriginRequestPolicyId2020_05_31Request& WithOriginRequestPolicyId(const Aws::String& value) { SetOriginRequestPolicyId(value); return *this;}

    /**
     * <p>The ID of the origin request policy whose associated distribution IDs you
     * want to list.</p>
     */
    inline ListDistributionsByOriginRequestPolicyId2020_05_31Request& WithOriginRequestPolicyId(Aws::String&& value) { SetOriginRequestPolicyId(std::move(value)); return *this;}

    /**
     * <p>The ID of the origin request policy whose associated distribution IDs you
     * want to list.</p>
     */
    inline ListDistributionsByOriginRequestPolicyId2020_05_31Request& WithOriginRequestPolicyId(const char* value) { SetOriginRequestPolicyId(value); return *this;}

  private:

    Aws::String m_marker;
    bool m_markerHasBeenSet = false;

    Aws::String m_maxItems;
    bool m_maxItemsHasBeenSet = false;

    Aws::String m_originRequestPolicyId;
    bool m_originRequestPolicyIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws

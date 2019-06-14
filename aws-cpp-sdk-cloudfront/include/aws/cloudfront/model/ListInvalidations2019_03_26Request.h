/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
   * <p>The request to list invalidations. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2019-03-26/ListInvalidationsRequest">AWS
   * API Reference</a></p>
   */
  class AWS_CLOUDFRONT_API ListInvalidations2019_03_26Request : public CloudFrontRequest
  {
  public:
    ListInvalidations2019_03_26Request();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListInvalidations"; }

    Aws::String SerializePayload() const override;

    void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The distribution's ID.</p>
     */
    inline const Aws::String& GetDistributionId() const{ return m_distributionId; }

    /**
     * <p>The distribution's ID.</p>
     */
    inline bool DistributionIdHasBeenSet() const { return m_distributionIdHasBeenSet; }

    /**
     * <p>The distribution's ID.</p>
     */
    inline void SetDistributionId(const Aws::String& value) { m_distributionIdHasBeenSet = true; m_distributionId = value; }

    /**
     * <p>The distribution's ID.</p>
     */
    inline void SetDistributionId(Aws::String&& value) { m_distributionIdHasBeenSet = true; m_distributionId = std::move(value); }

    /**
     * <p>The distribution's ID.</p>
     */
    inline void SetDistributionId(const char* value) { m_distributionIdHasBeenSet = true; m_distributionId.assign(value); }

    /**
     * <p>The distribution's ID.</p>
     */
    inline ListInvalidations2019_03_26Request& WithDistributionId(const Aws::String& value) { SetDistributionId(value); return *this;}

    /**
     * <p>The distribution's ID.</p>
     */
    inline ListInvalidations2019_03_26Request& WithDistributionId(Aws::String&& value) { SetDistributionId(std::move(value)); return *this;}

    /**
     * <p>The distribution's ID.</p>
     */
    inline ListInvalidations2019_03_26Request& WithDistributionId(const char* value) { SetDistributionId(value); return *this;}


    /**
     * <p>Use this parameter when paginating results to indicate where to begin in your
     * list of invalidation batches. Because the results are returned in decreasing
     * order from most recent to oldest, the most recent results are on the first page,
     * the second page will contain earlier results, and so on. To get the next page of
     * results, set <code>Marker</code> to the value of the <code>NextMarker</code>
     * from the current page's response. This value is the same as the ID of the last
     * invalidation batch on that page. </p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }

    /**
     * <p>Use this parameter when paginating results to indicate where to begin in your
     * list of invalidation batches. Because the results are returned in decreasing
     * order from most recent to oldest, the most recent results are on the first page,
     * the second page will contain earlier results, and so on. To get the next page of
     * results, set <code>Marker</code> to the value of the <code>NextMarker</code>
     * from the current page's response. This value is the same as the ID of the last
     * invalidation batch on that page. </p>
     */
    inline bool MarkerHasBeenSet() const { return m_markerHasBeenSet; }

    /**
     * <p>Use this parameter when paginating results to indicate where to begin in your
     * list of invalidation batches. Because the results are returned in decreasing
     * order from most recent to oldest, the most recent results are on the first page,
     * the second page will contain earlier results, and so on. To get the next page of
     * results, set <code>Marker</code> to the value of the <code>NextMarker</code>
     * from the current page's response. This value is the same as the ID of the last
     * invalidation batch on that page. </p>
     */
    inline void SetMarker(const Aws::String& value) { m_markerHasBeenSet = true; m_marker = value; }

    /**
     * <p>Use this parameter when paginating results to indicate where to begin in your
     * list of invalidation batches. Because the results are returned in decreasing
     * order from most recent to oldest, the most recent results are on the first page,
     * the second page will contain earlier results, and so on. To get the next page of
     * results, set <code>Marker</code> to the value of the <code>NextMarker</code>
     * from the current page's response. This value is the same as the ID of the last
     * invalidation batch on that page. </p>
     */
    inline void SetMarker(Aws::String&& value) { m_markerHasBeenSet = true; m_marker = std::move(value); }

    /**
     * <p>Use this parameter when paginating results to indicate where to begin in your
     * list of invalidation batches. Because the results are returned in decreasing
     * order from most recent to oldest, the most recent results are on the first page,
     * the second page will contain earlier results, and so on. To get the next page of
     * results, set <code>Marker</code> to the value of the <code>NextMarker</code>
     * from the current page's response. This value is the same as the ID of the last
     * invalidation batch on that page. </p>
     */
    inline void SetMarker(const char* value) { m_markerHasBeenSet = true; m_marker.assign(value); }

    /**
     * <p>Use this parameter when paginating results to indicate where to begin in your
     * list of invalidation batches. Because the results are returned in decreasing
     * order from most recent to oldest, the most recent results are on the first page,
     * the second page will contain earlier results, and so on. To get the next page of
     * results, set <code>Marker</code> to the value of the <code>NextMarker</code>
     * from the current page's response. This value is the same as the ID of the last
     * invalidation batch on that page. </p>
     */
    inline ListInvalidations2019_03_26Request& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}

    /**
     * <p>Use this parameter when paginating results to indicate where to begin in your
     * list of invalidation batches. Because the results are returned in decreasing
     * order from most recent to oldest, the most recent results are on the first page,
     * the second page will contain earlier results, and so on. To get the next page of
     * results, set <code>Marker</code> to the value of the <code>NextMarker</code>
     * from the current page's response. This value is the same as the ID of the last
     * invalidation batch on that page. </p>
     */
    inline ListInvalidations2019_03_26Request& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}

    /**
     * <p>Use this parameter when paginating results to indicate where to begin in your
     * list of invalidation batches. Because the results are returned in decreasing
     * order from most recent to oldest, the most recent results are on the first page,
     * the second page will contain earlier results, and so on. To get the next page of
     * results, set <code>Marker</code> to the value of the <code>NextMarker</code>
     * from the current page's response. This value is the same as the ID of the last
     * invalidation batch on that page. </p>
     */
    inline ListInvalidations2019_03_26Request& WithMarker(const char* value) { SetMarker(value); return *this;}


    /**
     * <p>The maximum number of invalidation batches that you want in the response
     * body.</p>
     */
    inline const Aws::String& GetMaxItems() const{ return m_maxItems; }

    /**
     * <p>The maximum number of invalidation batches that you want in the response
     * body.</p>
     */
    inline bool MaxItemsHasBeenSet() const { return m_maxItemsHasBeenSet; }

    /**
     * <p>The maximum number of invalidation batches that you want in the response
     * body.</p>
     */
    inline void SetMaxItems(const Aws::String& value) { m_maxItemsHasBeenSet = true; m_maxItems = value; }

    /**
     * <p>The maximum number of invalidation batches that you want in the response
     * body.</p>
     */
    inline void SetMaxItems(Aws::String&& value) { m_maxItemsHasBeenSet = true; m_maxItems = std::move(value); }

    /**
     * <p>The maximum number of invalidation batches that you want in the response
     * body.</p>
     */
    inline void SetMaxItems(const char* value) { m_maxItemsHasBeenSet = true; m_maxItems.assign(value); }

    /**
     * <p>The maximum number of invalidation batches that you want in the response
     * body.</p>
     */
    inline ListInvalidations2019_03_26Request& WithMaxItems(const Aws::String& value) { SetMaxItems(value); return *this;}

    /**
     * <p>The maximum number of invalidation batches that you want in the response
     * body.</p>
     */
    inline ListInvalidations2019_03_26Request& WithMaxItems(Aws::String&& value) { SetMaxItems(std::move(value)); return *this;}

    /**
     * <p>The maximum number of invalidation batches that you want in the response
     * body.</p>
     */
    inline ListInvalidations2019_03_26Request& WithMaxItems(const char* value) { SetMaxItems(value); return *this;}

  private:

    Aws::String m_distributionId;
    bool m_distributionIdHasBeenSet;

    Aws::String m_marker;
    bool m_markerHasBeenSet;

    Aws::String m_maxItems;
    bool m_maxItemsHasBeenSet;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws

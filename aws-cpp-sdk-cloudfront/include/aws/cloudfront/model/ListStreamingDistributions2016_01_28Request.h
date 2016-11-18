/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
   * The request to list your streaming distributions.
   */
  class AWS_CLOUDFRONT_API ListStreamingDistributions2016_01_28Request : public CloudFrontRequest
  {
  public:
    ListStreamingDistributions2016_01_28Request();
    Aws::String SerializePayload() const override;

    void AddQueryStringParameters(Aws::Http::URI& uri) const override;

    /**
     * Use this when paginating results to indicate where to begin in your list of
     * streaming distributions. The results include distributions in the list that
     * occur after the marker. To get the next page of results, set the Marker to the
     * value of the NextMarker from the current page's response (which is also the ID
     * of the last distribution on that page).
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }

    /**
     * Use this when paginating results to indicate where to begin in your list of
     * streaming distributions. The results include distributions in the list that
     * occur after the marker. To get the next page of results, set the Marker to the
     * value of the NextMarker from the current page's response (which is also the ID
     * of the last distribution on that page).
     */
    inline void SetMarker(const Aws::String& value) { m_markerHasBeenSet = true; m_marker = value; }

    /**
     * Use this when paginating results to indicate where to begin in your list of
     * streaming distributions. The results include distributions in the list that
     * occur after the marker. To get the next page of results, set the Marker to the
     * value of the NextMarker from the current page's response (which is also the ID
     * of the last distribution on that page).
     */
    inline void SetMarker(Aws::String&& value) { m_markerHasBeenSet = true; m_marker = value; }

    /**
     * Use this when paginating results to indicate where to begin in your list of
     * streaming distributions. The results include distributions in the list that
     * occur after the marker. To get the next page of results, set the Marker to the
     * value of the NextMarker from the current page's response (which is also the ID
     * of the last distribution on that page).
     */
    inline void SetMarker(const char* value) { m_markerHasBeenSet = true; m_marker.assign(value); }

    /**
     * Use this when paginating results to indicate where to begin in your list of
     * streaming distributions. The results include distributions in the list that
     * occur after the marker. To get the next page of results, set the Marker to the
     * value of the NextMarker from the current page's response (which is also the ID
     * of the last distribution on that page).
     */
    inline ListStreamingDistributions2016_01_28Request& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}

    /**
     * Use this when paginating results to indicate where to begin in your list of
     * streaming distributions. The results include distributions in the list that
     * occur after the marker. To get the next page of results, set the Marker to the
     * value of the NextMarker from the current page's response (which is also the ID
     * of the last distribution on that page).
     */
    inline ListStreamingDistributions2016_01_28Request& WithMarker(Aws::String&& value) { SetMarker(value); return *this;}

    /**
     * Use this when paginating results to indicate where to begin in your list of
     * streaming distributions. The results include distributions in the list that
     * occur after the marker. To get the next page of results, set the Marker to the
     * value of the NextMarker from the current page's response (which is also the ID
     * of the last distribution on that page).
     */
    inline ListStreamingDistributions2016_01_28Request& WithMarker(const char* value) { SetMarker(value); return *this;}

    /**
     * The maximum number of streaming distributions you want in the response body.
     */
    inline const Aws::String& GetMaxItems() const{ return m_maxItems; }

    /**
     * The maximum number of streaming distributions you want in the response body.
     */
    inline void SetMaxItems(const Aws::String& value) { m_maxItemsHasBeenSet = true; m_maxItems = value; }

    /**
     * The maximum number of streaming distributions you want in the response body.
     */
    inline void SetMaxItems(Aws::String&& value) { m_maxItemsHasBeenSet = true; m_maxItems = value; }

    /**
     * The maximum number of streaming distributions you want in the response body.
     */
    inline void SetMaxItems(const char* value) { m_maxItemsHasBeenSet = true; m_maxItems.assign(value); }

    /**
     * The maximum number of streaming distributions you want in the response body.
     */
    inline ListStreamingDistributions2016_01_28Request& WithMaxItems(const Aws::String& value) { SetMaxItems(value); return *this;}

    /**
     * The maximum number of streaming distributions you want in the response body.
     */
    inline ListStreamingDistributions2016_01_28Request& WithMaxItems(Aws::String&& value) { SetMaxItems(value); return *this;}

    /**
     * The maximum number of streaming distributions you want in the response body.
     */
    inline ListStreamingDistributions2016_01_28Request& WithMaxItems(const char* value) { SetMaxItems(value); return *this;}

  private:
    Aws::String m_marker;
    bool m_markerHasBeenSet;
    Aws::String m_maxItems;
    bool m_maxItemsHasBeenSet;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws

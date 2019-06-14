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
   * <p>The request to list your streaming distributions. </p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2019-03-26/ListStreamingDistributionsRequest">AWS
   * API Reference</a></p>
   */
  class AWS_CLOUDFRONT_API ListStreamingDistributions2019_03_26Request : public CloudFrontRequest
  {
  public:
    ListStreamingDistributions2019_03_26Request();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListStreamingDistributions"; }

    Aws::String SerializePayload() const override;

    void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The value that you provided for the <code>Marker</code> request
     * parameter.</p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }

    /**
     * <p>The value that you provided for the <code>Marker</code> request
     * parameter.</p>
     */
    inline bool MarkerHasBeenSet() const { return m_markerHasBeenSet; }

    /**
     * <p>The value that you provided for the <code>Marker</code> request
     * parameter.</p>
     */
    inline void SetMarker(const Aws::String& value) { m_markerHasBeenSet = true; m_marker = value; }

    /**
     * <p>The value that you provided for the <code>Marker</code> request
     * parameter.</p>
     */
    inline void SetMarker(Aws::String&& value) { m_markerHasBeenSet = true; m_marker = std::move(value); }

    /**
     * <p>The value that you provided for the <code>Marker</code> request
     * parameter.</p>
     */
    inline void SetMarker(const char* value) { m_markerHasBeenSet = true; m_marker.assign(value); }

    /**
     * <p>The value that you provided for the <code>Marker</code> request
     * parameter.</p>
     */
    inline ListStreamingDistributions2019_03_26Request& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}

    /**
     * <p>The value that you provided for the <code>Marker</code> request
     * parameter.</p>
     */
    inline ListStreamingDistributions2019_03_26Request& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}

    /**
     * <p>The value that you provided for the <code>Marker</code> request
     * parameter.</p>
     */
    inline ListStreamingDistributions2019_03_26Request& WithMarker(const char* value) { SetMarker(value); return *this;}


    /**
     * <p>The value that you provided for the <code>MaxItems</code> request
     * parameter.</p>
     */
    inline const Aws::String& GetMaxItems() const{ return m_maxItems; }

    /**
     * <p>The value that you provided for the <code>MaxItems</code> request
     * parameter.</p>
     */
    inline bool MaxItemsHasBeenSet() const { return m_maxItemsHasBeenSet; }

    /**
     * <p>The value that you provided for the <code>MaxItems</code> request
     * parameter.</p>
     */
    inline void SetMaxItems(const Aws::String& value) { m_maxItemsHasBeenSet = true; m_maxItems = value; }

    /**
     * <p>The value that you provided for the <code>MaxItems</code> request
     * parameter.</p>
     */
    inline void SetMaxItems(Aws::String&& value) { m_maxItemsHasBeenSet = true; m_maxItems = std::move(value); }

    /**
     * <p>The value that you provided for the <code>MaxItems</code> request
     * parameter.</p>
     */
    inline void SetMaxItems(const char* value) { m_maxItemsHasBeenSet = true; m_maxItems.assign(value); }

    /**
     * <p>The value that you provided for the <code>MaxItems</code> request
     * parameter.</p>
     */
    inline ListStreamingDistributions2019_03_26Request& WithMaxItems(const Aws::String& value) { SetMaxItems(value); return *this;}

    /**
     * <p>The value that you provided for the <code>MaxItems</code> request
     * parameter.</p>
     */
    inline ListStreamingDistributions2019_03_26Request& WithMaxItems(Aws::String&& value) { SetMaxItems(std::move(value)); return *this;}

    /**
     * <p>The value that you provided for the <code>MaxItems</code> request
     * parameter.</p>
     */
    inline ListStreamingDistributions2019_03_26Request& WithMaxItems(const char* value) { SetMaxItems(value); return *this;}

  private:

    Aws::String m_marker;
    bool m_markerHasBeenSet;

    Aws::String m_maxItems;
    bool m_maxItemsHasBeenSet;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws

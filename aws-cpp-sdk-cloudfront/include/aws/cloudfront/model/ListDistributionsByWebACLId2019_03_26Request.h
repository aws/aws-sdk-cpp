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
   * <p>The request to list distributions that are associated with a specified AWS
   * WAF web ACL. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2019-03-26/ListDistributionsByWebACLIdRequest">AWS
   * API Reference</a></p>
   */
  class AWS_CLOUDFRONT_API ListDistributionsByWebACLId2019_03_26Request : public CloudFrontRequest
  {
  public:
    ListDistributionsByWebACLId2019_03_26Request();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListDistributionsByWebACLId"; }

    Aws::String SerializePayload() const override;

    void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>Use <code>Marker</code> and <code>MaxItems</code> to control pagination of
     * results. If you have more than <code>MaxItems</code> distributions that satisfy
     * the request, the response includes a <code>NextMarker</code> element. To get the
     * next page of results, submit another request. For the value of
     * <code>Marker</code>, specify the value of <code>NextMarker</code> from the last
     * response. (For the first request, omit <code>Marker</code>.) </p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }

    /**
     * <p>Use <code>Marker</code> and <code>MaxItems</code> to control pagination of
     * results. If you have more than <code>MaxItems</code> distributions that satisfy
     * the request, the response includes a <code>NextMarker</code> element. To get the
     * next page of results, submit another request. For the value of
     * <code>Marker</code>, specify the value of <code>NextMarker</code> from the last
     * response. (For the first request, omit <code>Marker</code>.) </p>
     */
    inline bool MarkerHasBeenSet() const { return m_markerHasBeenSet; }

    /**
     * <p>Use <code>Marker</code> and <code>MaxItems</code> to control pagination of
     * results. If you have more than <code>MaxItems</code> distributions that satisfy
     * the request, the response includes a <code>NextMarker</code> element. To get the
     * next page of results, submit another request. For the value of
     * <code>Marker</code>, specify the value of <code>NextMarker</code> from the last
     * response. (For the first request, omit <code>Marker</code>.) </p>
     */
    inline void SetMarker(const Aws::String& value) { m_markerHasBeenSet = true; m_marker = value; }

    /**
     * <p>Use <code>Marker</code> and <code>MaxItems</code> to control pagination of
     * results. If you have more than <code>MaxItems</code> distributions that satisfy
     * the request, the response includes a <code>NextMarker</code> element. To get the
     * next page of results, submit another request. For the value of
     * <code>Marker</code>, specify the value of <code>NextMarker</code> from the last
     * response. (For the first request, omit <code>Marker</code>.) </p>
     */
    inline void SetMarker(Aws::String&& value) { m_markerHasBeenSet = true; m_marker = std::move(value); }

    /**
     * <p>Use <code>Marker</code> and <code>MaxItems</code> to control pagination of
     * results. If you have more than <code>MaxItems</code> distributions that satisfy
     * the request, the response includes a <code>NextMarker</code> element. To get the
     * next page of results, submit another request. For the value of
     * <code>Marker</code>, specify the value of <code>NextMarker</code> from the last
     * response. (For the first request, omit <code>Marker</code>.) </p>
     */
    inline void SetMarker(const char* value) { m_markerHasBeenSet = true; m_marker.assign(value); }

    /**
     * <p>Use <code>Marker</code> and <code>MaxItems</code> to control pagination of
     * results. If you have more than <code>MaxItems</code> distributions that satisfy
     * the request, the response includes a <code>NextMarker</code> element. To get the
     * next page of results, submit another request. For the value of
     * <code>Marker</code>, specify the value of <code>NextMarker</code> from the last
     * response. (For the first request, omit <code>Marker</code>.) </p>
     */
    inline ListDistributionsByWebACLId2019_03_26Request& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}

    /**
     * <p>Use <code>Marker</code> and <code>MaxItems</code> to control pagination of
     * results. If you have more than <code>MaxItems</code> distributions that satisfy
     * the request, the response includes a <code>NextMarker</code> element. To get the
     * next page of results, submit another request. For the value of
     * <code>Marker</code>, specify the value of <code>NextMarker</code> from the last
     * response. (For the first request, omit <code>Marker</code>.) </p>
     */
    inline ListDistributionsByWebACLId2019_03_26Request& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}

    /**
     * <p>Use <code>Marker</code> and <code>MaxItems</code> to control pagination of
     * results. If you have more than <code>MaxItems</code> distributions that satisfy
     * the request, the response includes a <code>NextMarker</code> element. To get the
     * next page of results, submit another request. For the value of
     * <code>Marker</code>, specify the value of <code>NextMarker</code> from the last
     * response. (For the first request, omit <code>Marker</code>.) </p>
     */
    inline ListDistributionsByWebACLId2019_03_26Request& WithMarker(const char* value) { SetMarker(value); return *this;}


    /**
     * <p>The maximum number of distributions that you want CloudFront to return in the
     * response body. The maximum and default values are both 100.</p>
     */
    inline const Aws::String& GetMaxItems() const{ return m_maxItems; }

    /**
     * <p>The maximum number of distributions that you want CloudFront to return in the
     * response body. The maximum and default values are both 100.</p>
     */
    inline bool MaxItemsHasBeenSet() const { return m_maxItemsHasBeenSet; }

    /**
     * <p>The maximum number of distributions that you want CloudFront to return in the
     * response body. The maximum and default values are both 100.</p>
     */
    inline void SetMaxItems(const Aws::String& value) { m_maxItemsHasBeenSet = true; m_maxItems = value; }

    /**
     * <p>The maximum number of distributions that you want CloudFront to return in the
     * response body. The maximum and default values are both 100.</p>
     */
    inline void SetMaxItems(Aws::String&& value) { m_maxItemsHasBeenSet = true; m_maxItems = std::move(value); }

    /**
     * <p>The maximum number of distributions that you want CloudFront to return in the
     * response body. The maximum and default values are both 100.</p>
     */
    inline void SetMaxItems(const char* value) { m_maxItemsHasBeenSet = true; m_maxItems.assign(value); }

    /**
     * <p>The maximum number of distributions that you want CloudFront to return in the
     * response body. The maximum and default values are both 100.</p>
     */
    inline ListDistributionsByWebACLId2019_03_26Request& WithMaxItems(const Aws::String& value) { SetMaxItems(value); return *this;}

    /**
     * <p>The maximum number of distributions that you want CloudFront to return in the
     * response body. The maximum and default values are both 100.</p>
     */
    inline ListDistributionsByWebACLId2019_03_26Request& WithMaxItems(Aws::String&& value) { SetMaxItems(std::move(value)); return *this;}

    /**
     * <p>The maximum number of distributions that you want CloudFront to return in the
     * response body. The maximum and default values are both 100.</p>
     */
    inline ListDistributionsByWebACLId2019_03_26Request& WithMaxItems(const char* value) { SetMaxItems(value); return *this;}


    /**
     * <p>The ID of the AWS WAF web ACL that you want to list the associated
     * distributions. If you specify "null" for the ID, the request returns a list of
     * the distributions that aren't associated with a web ACL. </p>
     */
    inline const Aws::String& GetWebACLId() const{ return m_webACLId; }

    /**
     * <p>The ID of the AWS WAF web ACL that you want to list the associated
     * distributions. If you specify "null" for the ID, the request returns a list of
     * the distributions that aren't associated with a web ACL. </p>
     */
    inline bool WebACLIdHasBeenSet() const { return m_webACLIdHasBeenSet; }

    /**
     * <p>The ID of the AWS WAF web ACL that you want to list the associated
     * distributions. If you specify "null" for the ID, the request returns a list of
     * the distributions that aren't associated with a web ACL. </p>
     */
    inline void SetWebACLId(const Aws::String& value) { m_webACLIdHasBeenSet = true; m_webACLId = value; }

    /**
     * <p>The ID of the AWS WAF web ACL that you want to list the associated
     * distributions. If you specify "null" for the ID, the request returns a list of
     * the distributions that aren't associated with a web ACL. </p>
     */
    inline void SetWebACLId(Aws::String&& value) { m_webACLIdHasBeenSet = true; m_webACLId = std::move(value); }

    /**
     * <p>The ID of the AWS WAF web ACL that you want to list the associated
     * distributions. If you specify "null" for the ID, the request returns a list of
     * the distributions that aren't associated with a web ACL. </p>
     */
    inline void SetWebACLId(const char* value) { m_webACLIdHasBeenSet = true; m_webACLId.assign(value); }

    /**
     * <p>The ID of the AWS WAF web ACL that you want to list the associated
     * distributions. If you specify "null" for the ID, the request returns a list of
     * the distributions that aren't associated with a web ACL. </p>
     */
    inline ListDistributionsByWebACLId2019_03_26Request& WithWebACLId(const Aws::String& value) { SetWebACLId(value); return *this;}

    /**
     * <p>The ID of the AWS WAF web ACL that you want to list the associated
     * distributions. If you specify "null" for the ID, the request returns a list of
     * the distributions that aren't associated with a web ACL. </p>
     */
    inline ListDistributionsByWebACLId2019_03_26Request& WithWebACLId(Aws::String&& value) { SetWebACLId(std::move(value)); return *this;}

    /**
     * <p>The ID of the AWS WAF web ACL that you want to list the associated
     * distributions. If you specify "null" for the ID, the request returns a list of
     * the distributions that aren't associated with a web ACL. </p>
     */
    inline ListDistributionsByWebACLId2019_03_26Request& WithWebACLId(const char* value) { SetWebACLId(value); return *this;}

  private:

    Aws::String m_marker;
    bool m_markerHasBeenSet;

    Aws::String m_maxItems;
    bool m_maxItemsHasBeenSet;

    Aws::String m_webACLId;
    bool m_webACLIdHasBeenSet;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws

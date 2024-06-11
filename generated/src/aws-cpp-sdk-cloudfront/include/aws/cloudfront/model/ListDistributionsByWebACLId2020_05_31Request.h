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
   * <p>The request to list distributions that are associated with a specified WAF
   * web ACL.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/ListDistributionsByWebACLIdRequest">AWS
   * API Reference</a></p>
   */
  class ListDistributionsByWebACLId2020_05_31Request : public CloudFrontRequest
  {
  public:
    AWS_CLOUDFRONT_API ListDistributionsByWebACLId2020_05_31Request();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListDistributionsByWebACLId"; }

    AWS_CLOUDFRONT_API Aws::String SerializePayload() const override;

    AWS_CLOUDFRONT_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>Use <code>Marker</code> and <code>MaxItems</code> to control pagination of
     * results. If you have more than <code>MaxItems</code> distributions that satisfy
     * the request, the response includes a <code>NextMarker</code> element. To get the
     * next page of results, submit another request. For the value of
     * <code>Marker</code>, specify the value of <code>NextMarker</code> from the last
     * response. (For the first request, omit <code>Marker</code>.)</p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }
    inline bool MarkerHasBeenSet() const { return m_markerHasBeenSet; }
    inline void SetMarker(const Aws::String& value) { m_markerHasBeenSet = true; m_marker = value; }
    inline void SetMarker(Aws::String&& value) { m_markerHasBeenSet = true; m_marker = std::move(value); }
    inline void SetMarker(const char* value) { m_markerHasBeenSet = true; m_marker.assign(value); }
    inline ListDistributionsByWebACLId2020_05_31Request& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}
    inline ListDistributionsByWebACLId2020_05_31Request& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}
    inline ListDistributionsByWebACLId2020_05_31Request& WithMarker(const char* value) { SetMarker(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of distributions that you want CloudFront to return in the
     * response body. The maximum and default values are both 100.</p>
     */
    inline const Aws::String& GetMaxItems() const{ return m_maxItems; }
    inline bool MaxItemsHasBeenSet() const { return m_maxItemsHasBeenSet; }
    inline void SetMaxItems(const Aws::String& value) { m_maxItemsHasBeenSet = true; m_maxItems = value; }
    inline void SetMaxItems(Aws::String&& value) { m_maxItemsHasBeenSet = true; m_maxItems = std::move(value); }
    inline void SetMaxItems(const char* value) { m_maxItemsHasBeenSet = true; m_maxItems.assign(value); }
    inline ListDistributionsByWebACLId2020_05_31Request& WithMaxItems(const Aws::String& value) { SetMaxItems(value); return *this;}
    inline ListDistributionsByWebACLId2020_05_31Request& WithMaxItems(Aws::String&& value) { SetMaxItems(std::move(value)); return *this;}
    inline ListDistributionsByWebACLId2020_05_31Request& WithMaxItems(const char* value) { SetMaxItems(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the WAF web ACL that you want to list the associated distributions.
     * If you specify "null" for the ID, the request returns a list of the
     * distributions that aren't associated with a web ACL. </p> <p>For WAFV2, this is
     * the ARN of the web ACL, such as
     * <code>arn:aws:wafv2:us-east-1:123456789012:global/webacl/ExampleWebACL/a1b2c3d4-5678-90ab-cdef-EXAMPLE11111</code>.</p>
     * <p>For WAF Classic, this is the ID of the web ACL, such as
     * <code>a1b2c3d4-5678-90ab-cdef-EXAMPLE11111</code>.</p>
     */
    inline const Aws::String& GetWebACLId() const{ return m_webACLId; }
    inline bool WebACLIdHasBeenSet() const { return m_webACLIdHasBeenSet; }
    inline void SetWebACLId(const Aws::String& value) { m_webACLIdHasBeenSet = true; m_webACLId = value; }
    inline void SetWebACLId(Aws::String&& value) { m_webACLIdHasBeenSet = true; m_webACLId = std::move(value); }
    inline void SetWebACLId(const char* value) { m_webACLIdHasBeenSet = true; m_webACLId.assign(value); }
    inline ListDistributionsByWebACLId2020_05_31Request& WithWebACLId(const Aws::String& value) { SetWebACLId(value); return *this;}
    inline ListDistributionsByWebACLId2020_05_31Request& WithWebACLId(Aws::String&& value) { SetWebACLId(std::move(value)); return *this;}
    inline ListDistributionsByWebACLId2020_05_31Request& WithWebACLId(const char* value) { SetWebACLId(value); return *this;}
    ///@}
  private:

    Aws::String m_marker;
    bool m_markerHasBeenSet = false;

    Aws::String m_maxItems;
    bool m_maxItemsHasBeenSet = false;

    Aws::String m_webACLId;
    bool m_webACLIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws

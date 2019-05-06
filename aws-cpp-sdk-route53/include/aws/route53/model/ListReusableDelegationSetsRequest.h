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
#include <aws/route53/Route53_EXPORTS.h>
#include <aws/route53/Route53Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace Route53
{
namespace Model
{

  /**
   * <p>A request to get a list of the reusable delegation sets that are associated
   * with the current AWS account.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53-2013-04-01/ListReusableDelegationSetsRequest">AWS
   * API Reference</a></p>
   */
  class AWS_ROUTE53_API ListReusableDelegationSetsRequest : public Route53Request
  {
  public:
    ListReusableDelegationSetsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListReusableDelegationSets"; }

    Aws::String SerializePayload() const override;

    void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>If the value of <code>IsTruncated</code> in the previous response was
     * <code>true</code>, you have more reusable delegation sets. To get another group,
     * submit another <code>ListReusableDelegationSets</code> request. </p> <p>For the
     * value of <code>marker</code>, specify the value of <code>NextMarker</code> from
     * the previous response, which is the ID of the first reusable delegation set that
     * Amazon Route 53 will return if you submit another request.</p> <p>If the value
     * of <code>IsTruncated</code> in the previous response was <code>false</code>,
     * there are no more reusable delegation sets to get.</p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }

    /**
     * <p>If the value of <code>IsTruncated</code> in the previous response was
     * <code>true</code>, you have more reusable delegation sets. To get another group,
     * submit another <code>ListReusableDelegationSets</code> request. </p> <p>For the
     * value of <code>marker</code>, specify the value of <code>NextMarker</code> from
     * the previous response, which is the ID of the first reusable delegation set that
     * Amazon Route 53 will return if you submit another request.</p> <p>If the value
     * of <code>IsTruncated</code> in the previous response was <code>false</code>,
     * there are no more reusable delegation sets to get.</p>
     */
    inline bool MarkerHasBeenSet() const { return m_markerHasBeenSet; }

    /**
     * <p>If the value of <code>IsTruncated</code> in the previous response was
     * <code>true</code>, you have more reusable delegation sets. To get another group,
     * submit another <code>ListReusableDelegationSets</code> request. </p> <p>For the
     * value of <code>marker</code>, specify the value of <code>NextMarker</code> from
     * the previous response, which is the ID of the first reusable delegation set that
     * Amazon Route 53 will return if you submit another request.</p> <p>If the value
     * of <code>IsTruncated</code> in the previous response was <code>false</code>,
     * there are no more reusable delegation sets to get.</p>
     */
    inline void SetMarker(const Aws::String& value) { m_markerHasBeenSet = true; m_marker = value; }

    /**
     * <p>If the value of <code>IsTruncated</code> in the previous response was
     * <code>true</code>, you have more reusable delegation sets. To get another group,
     * submit another <code>ListReusableDelegationSets</code> request. </p> <p>For the
     * value of <code>marker</code>, specify the value of <code>NextMarker</code> from
     * the previous response, which is the ID of the first reusable delegation set that
     * Amazon Route 53 will return if you submit another request.</p> <p>If the value
     * of <code>IsTruncated</code> in the previous response was <code>false</code>,
     * there are no more reusable delegation sets to get.</p>
     */
    inline void SetMarker(Aws::String&& value) { m_markerHasBeenSet = true; m_marker = std::move(value); }

    /**
     * <p>If the value of <code>IsTruncated</code> in the previous response was
     * <code>true</code>, you have more reusable delegation sets. To get another group,
     * submit another <code>ListReusableDelegationSets</code> request. </p> <p>For the
     * value of <code>marker</code>, specify the value of <code>NextMarker</code> from
     * the previous response, which is the ID of the first reusable delegation set that
     * Amazon Route 53 will return if you submit another request.</p> <p>If the value
     * of <code>IsTruncated</code> in the previous response was <code>false</code>,
     * there are no more reusable delegation sets to get.</p>
     */
    inline void SetMarker(const char* value) { m_markerHasBeenSet = true; m_marker.assign(value); }

    /**
     * <p>If the value of <code>IsTruncated</code> in the previous response was
     * <code>true</code>, you have more reusable delegation sets. To get another group,
     * submit another <code>ListReusableDelegationSets</code> request. </p> <p>For the
     * value of <code>marker</code>, specify the value of <code>NextMarker</code> from
     * the previous response, which is the ID of the first reusable delegation set that
     * Amazon Route 53 will return if you submit another request.</p> <p>If the value
     * of <code>IsTruncated</code> in the previous response was <code>false</code>,
     * there are no more reusable delegation sets to get.</p>
     */
    inline ListReusableDelegationSetsRequest& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}

    /**
     * <p>If the value of <code>IsTruncated</code> in the previous response was
     * <code>true</code>, you have more reusable delegation sets. To get another group,
     * submit another <code>ListReusableDelegationSets</code> request. </p> <p>For the
     * value of <code>marker</code>, specify the value of <code>NextMarker</code> from
     * the previous response, which is the ID of the first reusable delegation set that
     * Amazon Route 53 will return if you submit another request.</p> <p>If the value
     * of <code>IsTruncated</code> in the previous response was <code>false</code>,
     * there are no more reusable delegation sets to get.</p>
     */
    inline ListReusableDelegationSetsRequest& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}

    /**
     * <p>If the value of <code>IsTruncated</code> in the previous response was
     * <code>true</code>, you have more reusable delegation sets. To get another group,
     * submit another <code>ListReusableDelegationSets</code> request. </p> <p>For the
     * value of <code>marker</code>, specify the value of <code>NextMarker</code> from
     * the previous response, which is the ID of the first reusable delegation set that
     * Amazon Route 53 will return if you submit another request.</p> <p>If the value
     * of <code>IsTruncated</code> in the previous response was <code>false</code>,
     * there are no more reusable delegation sets to get.</p>
     */
    inline ListReusableDelegationSetsRequest& WithMarker(const char* value) { SetMarker(value); return *this;}


    /**
     * <p>The number of reusable delegation sets that you want Amazon Route 53 to
     * return in the response to this request. If you specify a value greater than 100,
     * Route 53 returns only the first 100 reusable delegation sets.</p>
     */
    inline const Aws::String& GetMaxItems() const{ return m_maxItems; }

    /**
     * <p>The number of reusable delegation sets that you want Amazon Route 53 to
     * return in the response to this request. If you specify a value greater than 100,
     * Route 53 returns only the first 100 reusable delegation sets.</p>
     */
    inline bool MaxItemsHasBeenSet() const { return m_maxItemsHasBeenSet; }

    /**
     * <p>The number of reusable delegation sets that you want Amazon Route 53 to
     * return in the response to this request. If you specify a value greater than 100,
     * Route 53 returns only the first 100 reusable delegation sets.</p>
     */
    inline void SetMaxItems(const Aws::String& value) { m_maxItemsHasBeenSet = true; m_maxItems = value; }

    /**
     * <p>The number of reusable delegation sets that you want Amazon Route 53 to
     * return in the response to this request. If you specify a value greater than 100,
     * Route 53 returns only the first 100 reusable delegation sets.</p>
     */
    inline void SetMaxItems(Aws::String&& value) { m_maxItemsHasBeenSet = true; m_maxItems = std::move(value); }

    /**
     * <p>The number of reusable delegation sets that you want Amazon Route 53 to
     * return in the response to this request. If you specify a value greater than 100,
     * Route 53 returns only the first 100 reusable delegation sets.</p>
     */
    inline void SetMaxItems(const char* value) { m_maxItemsHasBeenSet = true; m_maxItems.assign(value); }

    /**
     * <p>The number of reusable delegation sets that you want Amazon Route 53 to
     * return in the response to this request. If you specify a value greater than 100,
     * Route 53 returns only the first 100 reusable delegation sets.</p>
     */
    inline ListReusableDelegationSetsRequest& WithMaxItems(const Aws::String& value) { SetMaxItems(value); return *this;}

    /**
     * <p>The number of reusable delegation sets that you want Amazon Route 53 to
     * return in the response to this request. If you specify a value greater than 100,
     * Route 53 returns only the first 100 reusable delegation sets.</p>
     */
    inline ListReusableDelegationSetsRequest& WithMaxItems(Aws::String&& value) { SetMaxItems(std::move(value)); return *this;}

    /**
     * <p>The number of reusable delegation sets that you want Amazon Route 53 to
     * return in the response to this request. If you specify a value greater than 100,
     * Route 53 returns only the first 100 reusable delegation sets.</p>
     */
    inline ListReusableDelegationSetsRequest& WithMaxItems(const char* value) { SetMaxItems(value); return *this;}

  private:

    Aws::String m_marker;
    bool m_markerHasBeenSet;

    Aws::String m_maxItems;
    bool m_maxItemsHasBeenSet;
  };

} // namespace Model
} // namespace Route53
} // namespace Aws

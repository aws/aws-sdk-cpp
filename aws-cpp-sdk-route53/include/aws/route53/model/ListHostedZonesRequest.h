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
   * <p>A request to retrieve a list of the public and private hosted zones that are
   * associated with the current AWS account.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53-2013-04-01/ListHostedZonesRequest">AWS
   * API Reference</a></p>
   */
  class AWS_ROUTE53_API ListHostedZonesRequest : public Route53Request
  {
  public:
    ListHostedZonesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListHostedZones"; }

    Aws::String SerializePayload() const override;

    void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>If the value of <code>IsTruncated</code> in the previous response was
     * <code>true</code>, you have more hosted zones. To get more hosted zones, submit
     * another <code>ListHostedZones</code> request. </p> <p>For the value of
     * <code>marker</code>, specify the value of <code>NextMarker</code> from the
     * previous response, which is the ID of the first hosted zone that Amazon Route 53
     * will return if you submit another request.</p> <p>If the value of
     * <code>IsTruncated</code> in the previous response was <code>false</code>, there
     * are no more hosted zones to get.</p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }

    /**
     * <p>If the value of <code>IsTruncated</code> in the previous response was
     * <code>true</code>, you have more hosted zones. To get more hosted zones, submit
     * another <code>ListHostedZones</code> request. </p> <p>For the value of
     * <code>marker</code>, specify the value of <code>NextMarker</code> from the
     * previous response, which is the ID of the first hosted zone that Amazon Route 53
     * will return if you submit another request.</p> <p>If the value of
     * <code>IsTruncated</code> in the previous response was <code>false</code>, there
     * are no more hosted zones to get.</p>
     */
    inline bool MarkerHasBeenSet() const { return m_markerHasBeenSet; }

    /**
     * <p>If the value of <code>IsTruncated</code> in the previous response was
     * <code>true</code>, you have more hosted zones. To get more hosted zones, submit
     * another <code>ListHostedZones</code> request. </p> <p>For the value of
     * <code>marker</code>, specify the value of <code>NextMarker</code> from the
     * previous response, which is the ID of the first hosted zone that Amazon Route 53
     * will return if you submit another request.</p> <p>If the value of
     * <code>IsTruncated</code> in the previous response was <code>false</code>, there
     * are no more hosted zones to get.</p>
     */
    inline void SetMarker(const Aws::String& value) { m_markerHasBeenSet = true; m_marker = value; }

    /**
     * <p>If the value of <code>IsTruncated</code> in the previous response was
     * <code>true</code>, you have more hosted zones. To get more hosted zones, submit
     * another <code>ListHostedZones</code> request. </p> <p>For the value of
     * <code>marker</code>, specify the value of <code>NextMarker</code> from the
     * previous response, which is the ID of the first hosted zone that Amazon Route 53
     * will return if you submit another request.</p> <p>If the value of
     * <code>IsTruncated</code> in the previous response was <code>false</code>, there
     * are no more hosted zones to get.</p>
     */
    inline void SetMarker(Aws::String&& value) { m_markerHasBeenSet = true; m_marker = std::move(value); }

    /**
     * <p>If the value of <code>IsTruncated</code> in the previous response was
     * <code>true</code>, you have more hosted zones. To get more hosted zones, submit
     * another <code>ListHostedZones</code> request. </p> <p>For the value of
     * <code>marker</code>, specify the value of <code>NextMarker</code> from the
     * previous response, which is the ID of the first hosted zone that Amazon Route 53
     * will return if you submit another request.</p> <p>If the value of
     * <code>IsTruncated</code> in the previous response was <code>false</code>, there
     * are no more hosted zones to get.</p>
     */
    inline void SetMarker(const char* value) { m_markerHasBeenSet = true; m_marker.assign(value); }

    /**
     * <p>If the value of <code>IsTruncated</code> in the previous response was
     * <code>true</code>, you have more hosted zones. To get more hosted zones, submit
     * another <code>ListHostedZones</code> request. </p> <p>For the value of
     * <code>marker</code>, specify the value of <code>NextMarker</code> from the
     * previous response, which is the ID of the first hosted zone that Amazon Route 53
     * will return if you submit another request.</p> <p>If the value of
     * <code>IsTruncated</code> in the previous response was <code>false</code>, there
     * are no more hosted zones to get.</p>
     */
    inline ListHostedZonesRequest& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}

    /**
     * <p>If the value of <code>IsTruncated</code> in the previous response was
     * <code>true</code>, you have more hosted zones. To get more hosted zones, submit
     * another <code>ListHostedZones</code> request. </p> <p>For the value of
     * <code>marker</code>, specify the value of <code>NextMarker</code> from the
     * previous response, which is the ID of the first hosted zone that Amazon Route 53
     * will return if you submit another request.</p> <p>If the value of
     * <code>IsTruncated</code> in the previous response was <code>false</code>, there
     * are no more hosted zones to get.</p>
     */
    inline ListHostedZonesRequest& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}

    /**
     * <p>If the value of <code>IsTruncated</code> in the previous response was
     * <code>true</code>, you have more hosted zones. To get more hosted zones, submit
     * another <code>ListHostedZones</code> request. </p> <p>For the value of
     * <code>marker</code>, specify the value of <code>NextMarker</code> from the
     * previous response, which is the ID of the first hosted zone that Amazon Route 53
     * will return if you submit another request.</p> <p>If the value of
     * <code>IsTruncated</code> in the previous response was <code>false</code>, there
     * are no more hosted zones to get.</p>
     */
    inline ListHostedZonesRequest& WithMarker(const char* value) { SetMarker(value); return *this;}


    /**
     * <p>(Optional) The maximum number of hosted zones that you want Amazon Route 53
     * to return. If you have more than <code>maxitems</code> hosted zones, the value
     * of <code>IsTruncated</code> in the response is <code>true</code>, and the value
     * of <code>NextMarker</code> is the hosted zone ID of the first hosted zone that
     * Route 53 will return if you submit another request.</p>
     */
    inline const Aws::String& GetMaxItems() const{ return m_maxItems; }

    /**
     * <p>(Optional) The maximum number of hosted zones that you want Amazon Route 53
     * to return. If you have more than <code>maxitems</code> hosted zones, the value
     * of <code>IsTruncated</code> in the response is <code>true</code>, and the value
     * of <code>NextMarker</code> is the hosted zone ID of the first hosted zone that
     * Route 53 will return if you submit another request.</p>
     */
    inline bool MaxItemsHasBeenSet() const { return m_maxItemsHasBeenSet; }

    /**
     * <p>(Optional) The maximum number of hosted zones that you want Amazon Route 53
     * to return. If you have more than <code>maxitems</code> hosted zones, the value
     * of <code>IsTruncated</code> in the response is <code>true</code>, and the value
     * of <code>NextMarker</code> is the hosted zone ID of the first hosted zone that
     * Route 53 will return if you submit another request.</p>
     */
    inline void SetMaxItems(const Aws::String& value) { m_maxItemsHasBeenSet = true; m_maxItems = value; }

    /**
     * <p>(Optional) The maximum number of hosted zones that you want Amazon Route 53
     * to return. If you have more than <code>maxitems</code> hosted zones, the value
     * of <code>IsTruncated</code> in the response is <code>true</code>, and the value
     * of <code>NextMarker</code> is the hosted zone ID of the first hosted zone that
     * Route 53 will return if you submit another request.</p>
     */
    inline void SetMaxItems(Aws::String&& value) { m_maxItemsHasBeenSet = true; m_maxItems = std::move(value); }

    /**
     * <p>(Optional) The maximum number of hosted zones that you want Amazon Route 53
     * to return. If you have more than <code>maxitems</code> hosted zones, the value
     * of <code>IsTruncated</code> in the response is <code>true</code>, and the value
     * of <code>NextMarker</code> is the hosted zone ID of the first hosted zone that
     * Route 53 will return if you submit another request.</p>
     */
    inline void SetMaxItems(const char* value) { m_maxItemsHasBeenSet = true; m_maxItems.assign(value); }

    /**
     * <p>(Optional) The maximum number of hosted zones that you want Amazon Route 53
     * to return. If you have more than <code>maxitems</code> hosted zones, the value
     * of <code>IsTruncated</code> in the response is <code>true</code>, and the value
     * of <code>NextMarker</code> is the hosted zone ID of the first hosted zone that
     * Route 53 will return if you submit another request.</p>
     */
    inline ListHostedZonesRequest& WithMaxItems(const Aws::String& value) { SetMaxItems(value); return *this;}

    /**
     * <p>(Optional) The maximum number of hosted zones that you want Amazon Route 53
     * to return. If you have more than <code>maxitems</code> hosted zones, the value
     * of <code>IsTruncated</code> in the response is <code>true</code>, and the value
     * of <code>NextMarker</code> is the hosted zone ID of the first hosted zone that
     * Route 53 will return if you submit another request.</p>
     */
    inline ListHostedZonesRequest& WithMaxItems(Aws::String&& value) { SetMaxItems(std::move(value)); return *this;}

    /**
     * <p>(Optional) The maximum number of hosted zones that you want Amazon Route 53
     * to return. If you have more than <code>maxitems</code> hosted zones, the value
     * of <code>IsTruncated</code> in the response is <code>true</code>, and the value
     * of <code>NextMarker</code> is the hosted zone ID of the first hosted zone that
     * Route 53 will return if you submit another request.</p>
     */
    inline ListHostedZonesRequest& WithMaxItems(const char* value) { SetMaxItems(value); return *this;}


    /**
     * <p>If you're using reusable delegation sets and you want to list all of the
     * hosted zones that are associated with a reusable delegation set, specify the ID
     * of that reusable delegation set. </p>
     */
    inline const Aws::String& GetDelegationSetId() const{ return m_delegationSetId; }

    /**
     * <p>If you're using reusable delegation sets and you want to list all of the
     * hosted zones that are associated with a reusable delegation set, specify the ID
     * of that reusable delegation set. </p>
     */
    inline bool DelegationSetIdHasBeenSet() const { return m_delegationSetIdHasBeenSet; }

    /**
     * <p>If you're using reusable delegation sets and you want to list all of the
     * hosted zones that are associated with a reusable delegation set, specify the ID
     * of that reusable delegation set. </p>
     */
    inline void SetDelegationSetId(const Aws::String& value) { m_delegationSetIdHasBeenSet = true; m_delegationSetId = value; }

    /**
     * <p>If you're using reusable delegation sets and you want to list all of the
     * hosted zones that are associated with a reusable delegation set, specify the ID
     * of that reusable delegation set. </p>
     */
    inline void SetDelegationSetId(Aws::String&& value) { m_delegationSetIdHasBeenSet = true; m_delegationSetId = std::move(value); }

    /**
     * <p>If you're using reusable delegation sets and you want to list all of the
     * hosted zones that are associated with a reusable delegation set, specify the ID
     * of that reusable delegation set. </p>
     */
    inline void SetDelegationSetId(const char* value) { m_delegationSetIdHasBeenSet = true; m_delegationSetId.assign(value); }

    /**
     * <p>If you're using reusable delegation sets and you want to list all of the
     * hosted zones that are associated with a reusable delegation set, specify the ID
     * of that reusable delegation set. </p>
     */
    inline ListHostedZonesRequest& WithDelegationSetId(const Aws::String& value) { SetDelegationSetId(value); return *this;}

    /**
     * <p>If you're using reusable delegation sets and you want to list all of the
     * hosted zones that are associated with a reusable delegation set, specify the ID
     * of that reusable delegation set. </p>
     */
    inline ListHostedZonesRequest& WithDelegationSetId(Aws::String&& value) { SetDelegationSetId(std::move(value)); return *this;}

    /**
     * <p>If you're using reusable delegation sets and you want to list all of the
     * hosted zones that are associated with a reusable delegation set, specify the ID
     * of that reusable delegation set. </p>
     */
    inline ListHostedZonesRequest& WithDelegationSetId(const char* value) { SetDelegationSetId(value); return *this;}

  private:

    Aws::String m_marker;
    bool m_markerHasBeenSet;

    Aws::String m_maxItems;
    bool m_maxItemsHasBeenSet;

    Aws::String m_delegationSetId;
    bool m_delegationSetIdHasBeenSet;
  };

} // namespace Model
} // namespace Route53
} // namespace Aws

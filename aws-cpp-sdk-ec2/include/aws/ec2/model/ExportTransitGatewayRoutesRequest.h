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
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/Filter.h>
#include <utility>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   */
  class AWS_EC2_API ExportTransitGatewayRoutesRequest : public EC2Request
  {
  public:
    ExportTransitGatewayRoutesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ExportTransitGatewayRoutes"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The ID of the route table.</p>
     */
    inline const Aws::String& GetTransitGatewayRouteTableId() const{ return m_transitGatewayRouteTableId; }

    /**
     * <p>The ID of the route table.</p>
     */
    inline bool TransitGatewayRouteTableIdHasBeenSet() const { return m_transitGatewayRouteTableIdHasBeenSet; }

    /**
     * <p>The ID of the route table.</p>
     */
    inline void SetTransitGatewayRouteTableId(const Aws::String& value) { m_transitGatewayRouteTableIdHasBeenSet = true; m_transitGatewayRouteTableId = value; }

    /**
     * <p>The ID of the route table.</p>
     */
    inline void SetTransitGatewayRouteTableId(Aws::String&& value) { m_transitGatewayRouteTableIdHasBeenSet = true; m_transitGatewayRouteTableId = std::move(value); }

    /**
     * <p>The ID of the route table.</p>
     */
    inline void SetTransitGatewayRouteTableId(const char* value) { m_transitGatewayRouteTableIdHasBeenSet = true; m_transitGatewayRouteTableId.assign(value); }

    /**
     * <p>The ID of the route table.</p>
     */
    inline ExportTransitGatewayRoutesRequest& WithTransitGatewayRouteTableId(const Aws::String& value) { SetTransitGatewayRouteTableId(value); return *this;}

    /**
     * <p>The ID of the route table.</p>
     */
    inline ExportTransitGatewayRoutesRequest& WithTransitGatewayRouteTableId(Aws::String&& value) { SetTransitGatewayRouteTableId(std::move(value)); return *this;}

    /**
     * <p>The ID of the route table.</p>
     */
    inline ExportTransitGatewayRoutesRequest& WithTransitGatewayRouteTableId(const char* value) { SetTransitGatewayRouteTableId(value); return *this;}


    /**
     * <p>One or more filters. The possible values are:</p> <ul> <li> <p>
     * <code>attachment.transit-gateway-attachment-id</code> - The id of the transit
     * gateway attachment.</p> </li> <li> <p> <code>attachment.resource-id</code> - The
     * resource id of the transit gateway attachment.</p> </li> <li> <p>
     * <code>route-search.exact-match</code> - The exact match of the specified
     * filter.</p> </li> <li> <p> <code>route-search.longest-prefix-match</code> - The
     * longest prefix that matches the route.</p> </li> <li> <p>
     * <code>route-search.subnet-of-match</code> - The routes with a subnet that match
     * the specified CIDR filter.</p> </li> <li> <p>
     * <code>route-search.supernet-of-match</code> - The routes with a CIDR that
     * encompass the CIDR filter. For example, if you have 10.0.1.0/29 and 10.0.1.0/31
     * routes in your route table and you specify supernet-of-match as 10.0.1.0/30,
     * then the result returns 10.0.1.0/29.</p> </li> <li> <p> <code>state</code> - The
     * state of the attachment (<code>available</code> | <code>deleted</code> |
     * <code>deleting</code> | <code>failed</code> | <code>modifying</code> |
     * <code>pendingAcceptance</code> | <code>pending</code> | <code>rollingBack</code>
     * | <code>rejected</code> | <code>rejecting</code>).</p> </li> <li> <p>
     * <code>transit-gateway-route-destination-cidr-block</code> - The CIDR range.</p>
     * </li> <li> <p> <code>type</code> - The type of route (<code>active</code> |
     * <code>blackhole</code>).</p> </li> </ul>
     */
    inline const Aws::Vector<Filter>& GetFilters() const{ return m_filters; }

    /**
     * <p>One or more filters. The possible values are:</p> <ul> <li> <p>
     * <code>attachment.transit-gateway-attachment-id</code> - The id of the transit
     * gateway attachment.</p> </li> <li> <p> <code>attachment.resource-id</code> - The
     * resource id of the transit gateway attachment.</p> </li> <li> <p>
     * <code>route-search.exact-match</code> - The exact match of the specified
     * filter.</p> </li> <li> <p> <code>route-search.longest-prefix-match</code> - The
     * longest prefix that matches the route.</p> </li> <li> <p>
     * <code>route-search.subnet-of-match</code> - The routes with a subnet that match
     * the specified CIDR filter.</p> </li> <li> <p>
     * <code>route-search.supernet-of-match</code> - The routes with a CIDR that
     * encompass the CIDR filter. For example, if you have 10.0.1.0/29 and 10.0.1.0/31
     * routes in your route table and you specify supernet-of-match as 10.0.1.0/30,
     * then the result returns 10.0.1.0/29.</p> </li> <li> <p> <code>state</code> - The
     * state of the attachment (<code>available</code> | <code>deleted</code> |
     * <code>deleting</code> | <code>failed</code> | <code>modifying</code> |
     * <code>pendingAcceptance</code> | <code>pending</code> | <code>rollingBack</code>
     * | <code>rejected</code> | <code>rejecting</code>).</p> </li> <li> <p>
     * <code>transit-gateway-route-destination-cidr-block</code> - The CIDR range.</p>
     * </li> <li> <p> <code>type</code> - The type of route (<code>active</code> |
     * <code>blackhole</code>).</p> </li> </ul>
     */
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }

    /**
     * <p>One or more filters. The possible values are:</p> <ul> <li> <p>
     * <code>attachment.transit-gateway-attachment-id</code> - The id of the transit
     * gateway attachment.</p> </li> <li> <p> <code>attachment.resource-id</code> - The
     * resource id of the transit gateway attachment.</p> </li> <li> <p>
     * <code>route-search.exact-match</code> - The exact match of the specified
     * filter.</p> </li> <li> <p> <code>route-search.longest-prefix-match</code> - The
     * longest prefix that matches the route.</p> </li> <li> <p>
     * <code>route-search.subnet-of-match</code> - The routes with a subnet that match
     * the specified CIDR filter.</p> </li> <li> <p>
     * <code>route-search.supernet-of-match</code> - The routes with a CIDR that
     * encompass the CIDR filter. For example, if you have 10.0.1.0/29 and 10.0.1.0/31
     * routes in your route table and you specify supernet-of-match as 10.0.1.0/30,
     * then the result returns 10.0.1.0/29.</p> </li> <li> <p> <code>state</code> - The
     * state of the attachment (<code>available</code> | <code>deleted</code> |
     * <code>deleting</code> | <code>failed</code> | <code>modifying</code> |
     * <code>pendingAcceptance</code> | <code>pending</code> | <code>rollingBack</code>
     * | <code>rejected</code> | <code>rejecting</code>).</p> </li> <li> <p>
     * <code>transit-gateway-route-destination-cidr-block</code> - The CIDR range.</p>
     * </li> <li> <p> <code>type</code> - The type of route (<code>active</code> |
     * <code>blackhole</code>).</p> </li> </ul>
     */
    inline void SetFilters(const Aws::Vector<Filter>& value) { m_filtersHasBeenSet = true; m_filters = value; }

    /**
     * <p>One or more filters. The possible values are:</p> <ul> <li> <p>
     * <code>attachment.transit-gateway-attachment-id</code> - The id of the transit
     * gateway attachment.</p> </li> <li> <p> <code>attachment.resource-id</code> - The
     * resource id of the transit gateway attachment.</p> </li> <li> <p>
     * <code>route-search.exact-match</code> - The exact match of the specified
     * filter.</p> </li> <li> <p> <code>route-search.longest-prefix-match</code> - The
     * longest prefix that matches the route.</p> </li> <li> <p>
     * <code>route-search.subnet-of-match</code> - The routes with a subnet that match
     * the specified CIDR filter.</p> </li> <li> <p>
     * <code>route-search.supernet-of-match</code> - The routes with a CIDR that
     * encompass the CIDR filter. For example, if you have 10.0.1.0/29 and 10.0.1.0/31
     * routes in your route table and you specify supernet-of-match as 10.0.1.0/30,
     * then the result returns 10.0.1.0/29.</p> </li> <li> <p> <code>state</code> - The
     * state of the attachment (<code>available</code> | <code>deleted</code> |
     * <code>deleting</code> | <code>failed</code> | <code>modifying</code> |
     * <code>pendingAcceptance</code> | <code>pending</code> | <code>rollingBack</code>
     * | <code>rejected</code> | <code>rejecting</code>).</p> </li> <li> <p>
     * <code>transit-gateway-route-destination-cidr-block</code> - The CIDR range.</p>
     * </li> <li> <p> <code>type</code> - The type of route (<code>active</code> |
     * <code>blackhole</code>).</p> </li> </ul>
     */
    inline void SetFilters(Aws::Vector<Filter>&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }

    /**
     * <p>One or more filters. The possible values are:</p> <ul> <li> <p>
     * <code>attachment.transit-gateway-attachment-id</code> - The id of the transit
     * gateway attachment.</p> </li> <li> <p> <code>attachment.resource-id</code> - The
     * resource id of the transit gateway attachment.</p> </li> <li> <p>
     * <code>route-search.exact-match</code> - The exact match of the specified
     * filter.</p> </li> <li> <p> <code>route-search.longest-prefix-match</code> - The
     * longest prefix that matches the route.</p> </li> <li> <p>
     * <code>route-search.subnet-of-match</code> - The routes with a subnet that match
     * the specified CIDR filter.</p> </li> <li> <p>
     * <code>route-search.supernet-of-match</code> - The routes with a CIDR that
     * encompass the CIDR filter. For example, if you have 10.0.1.0/29 and 10.0.1.0/31
     * routes in your route table and you specify supernet-of-match as 10.0.1.0/30,
     * then the result returns 10.0.1.0/29.</p> </li> <li> <p> <code>state</code> - The
     * state of the attachment (<code>available</code> | <code>deleted</code> |
     * <code>deleting</code> | <code>failed</code> | <code>modifying</code> |
     * <code>pendingAcceptance</code> | <code>pending</code> | <code>rollingBack</code>
     * | <code>rejected</code> | <code>rejecting</code>).</p> </li> <li> <p>
     * <code>transit-gateway-route-destination-cidr-block</code> - The CIDR range.</p>
     * </li> <li> <p> <code>type</code> - The type of route (<code>active</code> |
     * <code>blackhole</code>).</p> </li> </ul>
     */
    inline ExportTransitGatewayRoutesRequest& WithFilters(const Aws::Vector<Filter>& value) { SetFilters(value); return *this;}

    /**
     * <p>One or more filters. The possible values are:</p> <ul> <li> <p>
     * <code>attachment.transit-gateway-attachment-id</code> - The id of the transit
     * gateway attachment.</p> </li> <li> <p> <code>attachment.resource-id</code> - The
     * resource id of the transit gateway attachment.</p> </li> <li> <p>
     * <code>route-search.exact-match</code> - The exact match of the specified
     * filter.</p> </li> <li> <p> <code>route-search.longest-prefix-match</code> - The
     * longest prefix that matches the route.</p> </li> <li> <p>
     * <code>route-search.subnet-of-match</code> - The routes with a subnet that match
     * the specified CIDR filter.</p> </li> <li> <p>
     * <code>route-search.supernet-of-match</code> - The routes with a CIDR that
     * encompass the CIDR filter. For example, if you have 10.0.1.0/29 and 10.0.1.0/31
     * routes in your route table and you specify supernet-of-match as 10.0.1.0/30,
     * then the result returns 10.0.1.0/29.</p> </li> <li> <p> <code>state</code> - The
     * state of the attachment (<code>available</code> | <code>deleted</code> |
     * <code>deleting</code> | <code>failed</code> | <code>modifying</code> |
     * <code>pendingAcceptance</code> | <code>pending</code> | <code>rollingBack</code>
     * | <code>rejected</code> | <code>rejecting</code>).</p> </li> <li> <p>
     * <code>transit-gateway-route-destination-cidr-block</code> - The CIDR range.</p>
     * </li> <li> <p> <code>type</code> - The type of route (<code>active</code> |
     * <code>blackhole</code>).</p> </li> </ul>
     */
    inline ExportTransitGatewayRoutesRequest& WithFilters(Aws::Vector<Filter>&& value) { SetFilters(std::move(value)); return *this;}

    /**
     * <p>One or more filters. The possible values are:</p> <ul> <li> <p>
     * <code>attachment.transit-gateway-attachment-id</code> - The id of the transit
     * gateway attachment.</p> </li> <li> <p> <code>attachment.resource-id</code> - The
     * resource id of the transit gateway attachment.</p> </li> <li> <p>
     * <code>route-search.exact-match</code> - The exact match of the specified
     * filter.</p> </li> <li> <p> <code>route-search.longest-prefix-match</code> - The
     * longest prefix that matches the route.</p> </li> <li> <p>
     * <code>route-search.subnet-of-match</code> - The routes with a subnet that match
     * the specified CIDR filter.</p> </li> <li> <p>
     * <code>route-search.supernet-of-match</code> - The routes with a CIDR that
     * encompass the CIDR filter. For example, if you have 10.0.1.0/29 and 10.0.1.0/31
     * routes in your route table and you specify supernet-of-match as 10.0.1.0/30,
     * then the result returns 10.0.1.0/29.</p> </li> <li> <p> <code>state</code> - The
     * state of the attachment (<code>available</code> | <code>deleted</code> |
     * <code>deleting</code> | <code>failed</code> | <code>modifying</code> |
     * <code>pendingAcceptance</code> | <code>pending</code> | <code>rollingBack</code>
     * | <code>rejected</code> | <code>rejecting</code>).</p> </li> <li> <p>
     * <code>transit-gateway-route-destination-cidr-block</code> - The CIDR range.</p>
     * </li> <li> <p> <code>type</code> - The type of route (<code>active</code> |
     * <code>blackhole</code>).</p> </li> </ul>
     */
    inline ExportTransitGatewayRoutesRequest& AddFilters(const Filter& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }

    /**
     * <p>One or more filters. The possible values are:</p> <ul> <li> <p>
     * <code>attachment.transit-gateway-attachment-id</code> - The id of the transit
     * gateway attachment.</p> </li> <li> <p> <code>attachment.resource-id</code> - The
     * resource id of the transit gateway attachment.</p> </li> <li> <p>
     * <code>route-search.exact-match</code> - The exact match of the specified
     * filter.</p> </li> <li> <p> <code>route-search.longest-prefix-match</code> - The
     * longest prefix that matches the route.</p> </li> <li> <p>
     * <code>route-search.subnet-of-match</code> - The routes with a subnet that match
     * the specified CIDR filter.</p> </li> <li> <p>
     * <code>route-search.supernet-of-match</code> - The routes with a CIDR that
     * encompass the CIDR filter. For example, if you have 10.0.1.0/29 and 10.0.1.0/31
     * routes in your route table and you specify supernet-of-match as 10.0.1.0/30,
     * then the result returns 10.0.1.0/29.</p> </li> <li> <p> <code>state</code> - The
     * state of the attachment (<code>available</code> | <code>deleted</code> |
     * <code>deleting</code> | <code>failed</code> | <code>modifying</code> |
     * <code>pendingAcceptance</code> | <code>pending</code> | <code>rollingBack</code>
     * | <code>rejected</code> | <code>rejecting</code>).</p> </li> <li> <p>
     * <code>transit-gateway-route-destination-cidr-block</code> - The CIDR range.</p>
     * </li> <li> <p> <code>type</code> - The type of route (<code>active</code> |
     * <code>blackhole</code>).</p> </li> </ul>
     */
    inline ExportTransitGatewayRoutesRequest& AddFilters(Filter&& value) { m_filtersHasBeenSet = true; m_filters.push_back(std::move(value)); return *this; }


    /**
     * <p>The name of the S3 bucket.</p>
     */
    inline const Aws::String& GetS3Bucket() const{ return m_s3Bucket; }

    /**
     * <p>The name of the S3 bucket.</p>
     */
    inline bool S3BucketHasBeenSet() const { return m_s3BucketHasBeenSet; }

    /**
     * <p>The name of the S3 bucket.</p>
     */
    inline void SetS3Bucket(const Aws::String& value) { m_s3BucketHasBeenSet = true; m_s3Bucket = value; }

    /**
     * <p>The name of the S3 bucket.</p>
     */
    inline void SetS3Bucket(Aws::String&& value) { m_s3BucketHasBeenSet = true; m_s3Bucket = std::move(value); }

    /**
     * <p>The name of the S3 bucket.</p>
     */
    inline void SetS3Bucket(const char* value) { m_s3BucketHasBeenSet = true; m_s3Bucket.assign(value); }

    /**
     * <p>The name of the S3 bucket.</p>
     */
    inline ExportTransitGatewayRoutesRequest& WithS3Bucket(const Aws::String& value) { SetS3Bucket(value); return *this;}

    /**
     * <p>The name of the S3 bucket.</p>
     */
    inline ExportTransitGatewayRoutesRequest& WithS3Bucket(Aws::String&& value) { SetS3Bucket(std::move(value)); return *this;}

    /**
     * <p>The name of the S3 bucket.</p>
     */
    inline ExportTransitGatewayRoutesRequest& WithS3Bucket(const char* value) { SetS3Bucket(value); return *this;}


    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool GetDryRun() const{ return m_dryRun; }

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline ExportTransitGatewayRoutesRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}

  private:

    Aws::String m_transitGatewayRouteTableId;
    bool m_transitGatewayRouteTableIdHasBeenSet;

    Aws::Vector<Filter> m_filters;
    bool m_filtersHasBeenSet;

    Aws::String m_s3Bucket;
    bool m_s3BucketHasBeenSet;

    bool m_dryRun;
    bool m_dryRunHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws

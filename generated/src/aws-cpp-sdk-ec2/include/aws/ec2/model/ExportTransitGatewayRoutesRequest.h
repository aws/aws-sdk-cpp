﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class ExportTransitGatewayRoutesRequest : public EC2Request
  {
  public:
    AWS_EC2_API ExportTransitGatewayRoutesRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ExportTransitGatewayRoutes"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The ID of the route table.</p>
     */
    inline const Aws::String& GetTransitGatewayRouteTableId() const { return m_transitGatewayRouteTableId; }
    inline bool TransitGatewayRouteTableIdHasBeenSet() const { return m_transitGatewayRouteTableIdHasBeenSet; }
    template<typename TransitGatewayRouteTableIdT = Aws::String>
    void SetTransitGatewayRouteTableId(TransitGatewayRouteTableIdT&& value) { m_transitGatewayRouteTableIdHasBeenSet = true; m_transitGatewayRouteTableId = std::forward<TransitGatewayRouteTableIdT>(value); }
    template<typename TransitGatewayRouteTableIdT = Aws::String>
    ExportTransitGatewayRoutesRequest& WithTransitGatewayRouteTableId(TransitGatewayRouteTableIdT&& value) { SetTransitGatewayRouteTableId(std::forward<TransitGatewayRouteTableIdT>(value)); return *this;}
    ///@}

    ///@{
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
     * state of the route (<code>active</code> | <code>blackhole</code>).</p> </li>
     * <li> <p> <code>transit-gateway-route-destination-cidr-block</code> - The CIDR
     * range.</p> </li> <li> <p> <code>type</code> - The type of route
     * (<code>propagated</code> | <code>static</code>).</p> </li> </ul>
     */
    inline const Aws::Vector<Filter>& GetFilters() const { return m_filters; }
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }
    template<typename FiltersT = Aws::Vector<Filter>>
    void SetFilters(FiltersT&& value) { m_filtersHasBeenSet = true; m_filters = std::forward<FiltersT>(value); }
    template<typename FiltersT = Aws::Vector<Filter>>
    ExportTransitGatewayRoutesRequest& WithFilters(FiltersT&& value) { SetFilters(std::forward<FiltersT>(value)); return *this;}
    template<typename FiltersT = Filter>
    ExportTransitGatewayRoutesRequest& AddFilters(FiltersT&& value) { m_filtersHasBeenSet = true; m_filters.emplace_back(std::forward<FiltersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The name of the S3 bucket.</p>
     */
    inline const Aws::String& GetS3Bucket() const { return m_s3Bucket; }
    inline bool S3BucketHasBeenSet() const { return m_s3BucketHasBeenSet; }
    template<typename S3BucketT = Aws::String>
    void SetS3Bucket(S3BucketT&& value) { m_s3BucketHasBeenSet = true; m_s3Bucket = std::forward<S3BucketT>(value); }
    template<typename S3BucketT = Aws::String>
    ExportTransitGatewayRoutesRequest& WithS3Bucket(S3BucketT&& value) { SetS3Bucket(std::forward<S3BucketT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool GetDryRun() const { return m_dryRun; }
    inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }
    inline ExportTransitGatewayRoutesRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}
    ///@}
  private:

    Aws::String m_transitGatewayRouteTableId;
    bool m_transitGatewayRouteTableIdHasBeenSet = false;

    Aws::Vector<Filter> m_filters;
    bool m_filtersHasBeenSet = false;

    Aws::String m_s3Bucket;
    bool m_s3BucketHasBeenSet = false;

    bool m_dryRun{false};
    bool m_dryRunHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws

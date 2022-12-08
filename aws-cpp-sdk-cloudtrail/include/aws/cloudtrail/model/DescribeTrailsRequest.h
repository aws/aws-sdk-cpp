/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudtrail/CloudTrail_EXPORTS.h>
#include <aws/cloudtrail/CloudTrailRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace CloudTrail
{
namespace Model
{

  /**
   * <p>Returns information about the trail.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudtrail-2013-11-01/DescribeTrailsRequest">AWS
   * API Reference</a></p>
   */
  class DescribeTrailsRequest : public CloudTrailRequest
  {
  public:
    AWS_CLOUDTRAIL_API DescribeTrailsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeTrails"; }

    AWS_CLOUDTRAIL_API Aws::String SerializePayload() const override;

    AWS_CLOUDTRAIL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Specifies a list of trail names, trail ARNs, or both, of the trails to
     * describe. The format of a trail ARN is:</p> <p>
     * <code>arn:aws:cloudtrail:us-east-2:123456789012:trail/MyTrail</code> </p> <p>If
     * an empty list is specified, information for the trail in the current region is
     * returned.</p> <ul> <li> <p>If an empty list is specified and
     * <code>IncludeShadowTrails</code> is false, then information for all trails in
     * the current region is returned.</p> </li> <li> <p>If an empty list is specified
     * and IncludeShadowTrails is null or true, then information for all trails in the
     * current region and any associated shadow trails in other regions is
     * returned.</p> </li> </ul>  <p>If one or more trail names are specified,
     * information is returned only if the names match the names of trails belonging
     * only to the current region. To return information about a trail in another
     * region, you must specify its trail ARN.</p> 
     */
    inline const Aws::Vector<Aws::String>& GetTrailNameList() const{ return m_trailNameList; }

    /**
     * <p>Specifies a list of trail names, trail ARNs, or both, of the trails to
     * describe. The format of a trail ARN is:</p> <p>
     * <code>arn:aws:cloudtrail:us-east-2:123456789012:trail/MyTrail</code> </p> <p>If
     * an empty list is specified, information for the trail in the current region is
     * returned.</p> <ul> <li> <p>If an empty list is specified and
     * <code>IncludeShadowTrails</code> is false, then information for all trails in
     * the current region is returned.</p> </li> <li> <p>If an empty list is specified
     * and IncludeShadowTrails is null or true, then information for all trails in the
     * current region and any associated shadow trails in other regions is
     * returned.</p> </li> </ul>  <p>If one or more trail names are specified,
     * information is returned only if the names match the names of trails belonging
     * only to the current region. To return information about a trail in another
     * region, you must specify its trail ARN.</p> 
     */
    inline bool TrailNameListHasBeenSet() const { return m_trailNameListHasBeenSet; }

    /**
     * <p>Specifies a list of trail names, trail ARNs, or both, of the trails to
     * describe. The format of a trail ARN is:</p> <p>
     * <code>arn:aws:cloudtrail:us-east-2:123456789012:trail/MyTrail</code> </p> <p>If
     * an empty list is specified, information for the trail in the current region is
     * returned.</p> <ul> <li> <p>If an empty list is specified and
     * <code>IncludeShadowTrails</code> is false, then information for all trails in
     * the current region is returned.</p> </li> <li> <p>If an empty list is specified
     * and IncludeShadowTrails is null or true, then information for all trails in the
     * current region and any associated shadow trails in other regions is
     * returned.</p> </li> </ul>  <p>If one or more trail names are specified,
     * information is returned only if the names match the names of trails belonging
     * only to the current region. To return information about a trail in another
     * region, you must specify its trail ARN.</p> 
     */
    inline void SetTrailNameList(const Aws::Vector<Aws::String>& value) { m_trailNameListHasBeenSet = true; m_trailNameList = value; }

    /**
     * <p>Specifies a list of trail names, trail ARNs, or both, of the trails to
     * describe. The format of a trail ARN is:</p> <p>
     * <code>arn:aws:cloudtrail:us-east-2:123456789012:trail/MyTrail</code> </p> <p>If
     * an empty list is specified, information for the trail in the current region is
     * returned.</p> <ul> <li> <p>If an empty list is specified and
     * <code>IncludeShadowTrails</code> is false, then information for all trails in
     * the current region is returned.</p> </li> <li> <p>If an empty list is specified
     * and IncludeShadowTrails is null or true, then information for all trails in the
     * current region and any associated shadow trails in other regions is
     * returned.</p> </li> </ul>  <p>If one or more trail names are specified,
     * information is returned only if the names match the names of trails belonging
     * only to the current region. To return information about a trail in another
     * region, you must specify its trail ARN.</p> 
     */
    inline void SetTrailNameList(Aws::Vector<Aws::String>&& value) { m_trailNameListHasBeenSet = true; m_trailNameList = std::move(value); }

    /**
     * <p>Specifies a list of trail names, trail ARNs, or both, of the trails to
     * describe. The format of a trail ARN is:</p> <p>
     * <code>arn:aws:cloudtrail:us-east-2:123456789012:trail/MyTrail</code> </p> <p>If
     * an empty list is specified, information for the trail in the current region is
     * returned.</p> <ul> <li> <p>If an empty list is specified and
     * <code>IncludeShadowTrails</code> is false, then information for all trails in
     * the current region is returned.</p> </li> <li> <p>If an empty list is specified
     * and IncludeShadowTrails is null or true, then information for all trails in the
     * current region and any associated shadow trails in other regions is
     * returned.</p> </li> </ul>  <p>If one or more trail names are specified,
     * information is returned only if the names match the names of trails belonging
     * only to the current region. To return information about a trail in another
     * region, you must specify its trail ARN.</p> 
     */
    inline DescribeTrailsRequest& WithTrailNameList(const Aws::Vector<Aws::String>& value) { SetTrailNameList(value); return *this;}

    /**
     * <p>Specifies a list of trail names, trail ARNs, or both, of the trails to
     * describe. The format of a trail ARN is:</p> <p>
     * <code>arn:aws:cloudtrail:us-east-2:123456789012:trail/MyTrail</code> </p> <p>If
     * an empty list is specified, information for the trail in the current region is
     * returned.</p> <ul> <li> <p>If an empty list is specified and
     * <code>IncludeShadowTrails</code> is false, then information for all trails in
     * the current region is returned.</p> </li> <li> <p>If an empty list is specified
     * and IncludeShadowTrails is null or true, then information for all trails in the
     * current region and any associated shadow trails in other regions is
     * returned.</p> </li> </ul>  <p>If one or more trail names are specified,
     * information is returned only if the names match the names of trails belonging
     * only to the current region. To return information about a trail in another
     * region, you must specify its trail ARN.</p> 
     */
    inline DescribeTrailsRequest& WithTrailNameList(Aws::Vector<Aws::String>&& value) { SetTrailNameList(std::move(value)); return *this;}

    /**
     * <p>Specifies a list of trail names, trail ARNs, or both, of the trails to
     * describe. The format of a trail ARN is:</p> <p>
     * <code>arn:aws:cloudtrail:us-east-2:123456789012:trail/MyTrail</code> </p> <p>If
     * an empty list is specified, information for the trail in the current region is
     * returned.</p> <ul> <li> <p>If an empty list is specified and
     * <code>IncludeShadowTrails</code> is false, then information for all trails in
     * the current region is returned.</p> </li> <li> <p>If an empty list is specified
     * and IncludeShadowTrails is null or true, then information for all trails in the
     * current region and any associated shadow trails in other regions is
     * returned.</p> </li> </ul>  <p>If one or more trail names are specified,
     * information is returned only if the names match the names of trails belonging
     * only to the current region. To return information about a trail in another
     * region, you must specify its trail ARN.</p> 
     */
    inline DescribeTrailsRequest& AddTrailNameList(const Aws::String& value) { m_trailNameListHasBeenSet = true; m_trailNameList.push_back(value); return *this; }

    /**
     * <p>Specifies a list of trail names, trail ARNs, or both, of the trails to
     * describe. The format of a trail ARN is:</p> <p>
     * <code>arn:aws:cloudtrail:us-east-2:123456789012:trail/MyTrail</code> </p> <p>If
     * an empty list is specified, information for the trail in the current region is
     * returned.</p> <ul> <li> <p>If an empty list is specified and
     * <code>IncludeShadowTrails</code> is false, then information for all trails in
     * the current region is returned.</p> </li> <li> <p>If an empty list is specified
     * and IncludeShadowTrails is null or true, then information for all trails in the
     * current region and any associated shadow trails in other regions is
     * returned.</p> </li> </ul>  <p>If one or more trail names are specified,
     * information is returned only if the names match the names of trails belonging
     * only to the current region. To return information about a trail in another
     * region, you must specify its trail ARN.</p> 
     */
    inline DescribeTrailsRequest& AddTrailNameList(Aws::String&& value) { m_trailNameListHasBeenSet = true; m_trailNameList.push_back(std::move(value)); return *this; }

    /**
     * <p>Specifies a list of trail names, trail ARNs, or both, of the trails to
     * describe. The format of a trail ARN is:</p> <p>
     * <code>arn:aws:cloudtrail:us-east-2:123456789012:trail/MyTrail</code> </p> <p>If
     * an empty list is specified, information for the trail in the current region is
     * returned.</p> <ul> <li> <p>If an empty list is specified and
     * <code>IncludeShadowTrails</code> is false, then information for all trails in
     * the current region is returned.</p> </li> <li> <p>If an empty list is specified
     * and IncludeShadowTrails is null or true, then information for all trails in the
     * current region and any associated shadow trails in other regions is
     * returned.</p> </li> </ul>  <p>If one or more trail names are specified,
     * information is returned only if the names match the names of trails belonging
     * only to the current region. To return information about a trail in another
     * region, you must specify its trail ARN.</p> 
     */
    inline DescribeTrailsRequest& AddTrailNameList(const char* value) { m_trailNameListHasBeenSet = true; m_trailNameList.push_back(value); return *this; }


    /**
     * <p>Specifies whether to include shadow trails in the response. A shadow trail is
     * the replication in a region of a trail that was created in a different region,
     * or in the case of an organization trail, the replication of an organization
     * trail in member accounts. If you do not include shadow trails, organization
     * trails in a member account and region replication trails will not be returned.
     * The default is true.</p>
     */
    inline bool GetIncludeShadowTrails() const{ return m_includeShadowTrails; }

    /**
     * <p>Specifies whether to include shadow trails in the response. A shadow trail is
     * the replication in a region of a trail that was created in a different region,
     * or in the case of an organization trail, the replication of an organization
     * trail in member accounts. If you do not include shadow trails, organization
     * trails in a member account and region replication trails will not be returned.
     * The default is true.</p>
     */
    inline bool IncludeShadowTrailsHasBeenSet() const { return m_includeShadowTrailsHasBeenSet; }

    /**
     * <p>Specifies whether to include shadow trails in the response. A shadow trail is
     * the replication in a region of a trail that was created in a different region,
     * or in the case of an organization trail, the replication of an organization
     * trail in member accounts. If you do not include shadow trails, organization
     * trails in a member account and region replication trails will not be returned.
     * The default is true.</p>
     */
    inline void SetIncludeShadowTrails(bool value) { m_includeShadowTrailsHasBeenSet = true; m_includeShadowTrails = value; }

    /**
     * <p>Specifies whether to include shadow trails in the response. A shadow trail is
     * the replication in a region of a trail that was created in a different region,
     * or in the case of an organization trail, the replication of an organization
     * trail in member accounts. If you do not include shadow trails, organization
     * trails in a member account and region replication trails will not be returned.
     * The default is true.</p>
     */
    inline DescribeTrailsRequest& WithIncludeShadowTrails(bool value) { SetIncludeShadowTrails(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_trailNameList;
    bool m_trailNameListHasBeenSet = false;

    bool m_includeShadowTrails;
    bool m_includeShadowTrailsHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudTrail
} // namespace Aws

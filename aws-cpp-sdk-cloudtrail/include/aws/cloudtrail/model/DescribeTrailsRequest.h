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
#include <aws/cloudtrail/CloudTrail_EXPORTS.h>
#include <aws/cloudtrail/CloudTrailRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CloudTrail
{
namespace Model
{

  /**
   * <p>Returns information about the trail.</p>
   */
  class AWS_CLOUDTRAIL_API DescribeTrailsRequest : public CloudTrailRequest
  {
  public:
    DescribeTrailsRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p>Specifies a list of trail names, trail ARNs, or both, of the trails to
     * describe. The format of a trail ARN is:</p> <p>
     * <code>arn:aws:cloudtrail:us-east-1:123456789012:trail/MyTrail</code> </p> <p>If
     * an empty list is specified, information for the trail in the current region is
     * returned.</p> <ul> <li> <p>If an empty list is specified and
     * <code>IncludeShadowTrails</code> is false, then information for all trails in
     * the current region is returned.</p> </li> <li> <p>If an empty list is specified
     * and IncludeShadowTrails is null or true, then information for all trails in the
     * current region and any associated shadow trails in other regions is
     * returned.</p> </li> </ul> <note> <p>If one or more trail names are specified,
     * information is returned only if the names match the names of trails belonging
     * only to the current region. To return information about a trail in another
     * region, you must specify its trail ARN.</p> </note>
     */
    inline const Aws::Vector<Aws::String>& GetTrailNameList() const{ return m_trailNameList; }

    /**
     * <p>Specifies a list of trail names, trail ARNs, or both, of the trails to
     * describe. The format of a trail ARN is:</p> <p>
     * <code>arn:aws:cloudtrail:us-east-1:123456789012:trail/MyTrail</code> </p> <p>If
     * an empty list is specified, information for the trail in the current region is
     * returned.</p> <ul> <li> <p>If an empty list is specified and
     * <code>IncludeShadowTrails</code> is false, then information for all trails in
     * the current region is returned.</p> </li> <li> <p>If an empty list is specified
     * and IncludeShadowTrails is null or true, then information for all trails in the
     * current region and any associated shadow trails in other regions is
     * returned.</p> </li> </ul> <note> <p>If one or more trail names are specified,
     * information is returned only if the names match the names of trails belonging
     * only to the current region. To return information about a trail in another
     * region, you must specify its trail ARN.</p> </note>
     */
    inline void SetTrailNameList(const Aws::Vector<Aws::String>& value) { m_trailNameListHasBeenSet = true; m_trailNameList = value; }

    /**
     * <p>Specifies a list of trail names, trail ARNs, or both, of the trails to
     * describe. The format of a trail ARN is:</p> <p>
     * <code>arn:aws:cloudtrail:us-east-1:123456789012:trail/MyTrail</code> </p> <p>If
     * an empty list is specified, information for the trail in the current region is
     * returned.</p> <ul> <li> <p>If an empty list is specified and
     * <code>IncludeShadowTrails</code> is false, then information for all trails in
     * the current region is returned.</p> </li> <li> <p>If an empty list is specified
     * and IncludeShadowTrails is null or true, then information for all trails in the
     * current region and any associated shadow trails in other regions is
     * returned.</p> </li> </ul> <note> <p>If one or more trail names are specified,
     * information is returned only if the names match the names of trails belonging
     * only to the current region. To return information about a trail in another
     * region, you must specify its trail ARN.</p> </note>
     */
    inline void SetTrailNameList(Aws::Vector<Aws::String>&& value) { m_trailNameListHasBeenSet = true; m_trailNameList = value; }

    /**
     * <p>Specifies a list of trail names, trail ARNs, or both, of the trails to
     * describe. The format of a trail ARN is:</p> <p>
     * <code>arn:aws:cloudtrail:us-east-1:123456789012:trail/MyTrail</code> </p> <p>If
     * an empty list is specified, information for the trail in the current region is
     * returned.</p> <ul> <li> <p>If an empty list is specified and
     * <code>IncludeShadowTrails</code> is false, then information for all trails in
     * the current region is returned.</p> </li> <li> <p>If an empty list is specified
     * and IncludeShadowTrails is null or true, then information for all trails in the
     * current region and any associated shadow trails in other regions is
     * returned.</p> </li> </ul> <note> <p>If one or more trail names are specified,
     * information is returned only if the names match the names of trails belonging
     * only to the current region. To return information about a trail in another
     * region, you must specify its trail ARN.</p> </note>
     */
    inline DescribeTrailsRequest& WithTrailNameList(const Aws::Vector<Aws::String>& value) { SetTrailNameList(value); return *this;}

    /**
     * <p>Specifies a list of trail names, trail ARNs, or both, of the trails to
     * describe. The format of a trail ARN is:</p> <p>
     * <code>arn:aws:cloudtrail:us-east-1:123456789012:trail/MyTrail</code> </p> <p>If
     * an empty list is specified, information for the trail in the current region is
     * returned.</p> <ul> <li> <p>If an empty list is specified and
     * <code>IncludeShadowTrails</code> is false, then information for all trails in
     * the current region is returned.</p> </li> <li> <p>If an empty list is specified
     * and IncludeShadowTrails is null or true, then information for all trails in the
     * current region and any associated shadow trails in other regions is
     * returned.</p> </li> </ul> <note> <p>If one or more trail names are specified,
     * information is returned only if the names match the names of trails belonging
     * only to the current region. To return information about a trail in another
     * region, you must specify its trail ARN.</p> </note>
     */
    inline DescribeTrailsRequest& WithTrailNameList(Aws::Vector<Aws::String>&& value) { SetTrailNameList(value); return *this;}

    /**
     * <p>Specifies a list of trail names, trail ARNs, or both, of the trails to
     * describe. The format of a trail ARN is:</p> <p>
     * <code>arn:aws:cloudtrail:us-east-1:123456789012:trail/MyTrail</code> </p> <p>If
     * an empty list is specified, information for the trail in the current region is
     * returned.</p> <ul> <li> <p>If an empty list is specified and
     * <code>IncludeShadowTrails</code> is false, then information for all trails in
     * the current region is returned.</p> </li> <li> <p>If an empty list is specified
     * and IncludeShadowTrails is null or true, then information for all trails in the
     * current region and any associated shadow trails in other regions is
     * returned.</p> </li> </ul> <note> <p>If one or more trail names are specified,
     * information is returned only if the names match the names of trails belonging
     * only to the current region. To return information about a trail in another
     * region, you must specify its trail ARN.</p> </note>
     */
    inline DescribeTrailsRequest& AddTrailNameList(const Aws::String& value) { m_trailNameListHasBeenSet = true; m_trailNameList.push_back(value); return *this; }

    /**
     * <p>Specifies a list of trail names, trail ARNs, or both, of the trails to
     * describe. The format of a trail ARN is:</p> <p>
     * <code>arn:aws:cloudtrail:us-east-1:123456789012:trail/MyTrail</code> </p> <p>If
     * an empty list is specified, information for the trail in the current region is
     * returned.</p> <ul> <li> <p>If an empty list is specified and
     * <code>IncludeShadowTrails</code> is false, then information for all trails in
     * the current region is returned.</p> </li> <li> <p>If an empty list is specified
     * and IncludeShadowTrails is null or true, then information for all trails in the
     * current region and any associated shadow trails in other regions is
     * returned.</p> </li> </ul> <note> <p>If one or more trail names are specified,
     * information is returned only if the names match the names of trails belonging
     * only to the current region. To return information about a trail in another
     * region, you must specify its trail ARN.</p> </note>
     */
    inline DescribeTrailsRequest& AddTrailNameList(Aws::String&& value) { m_trailNameListHasBeenSet = true; m_trailNameList.push_back(value); return *this; }

    /**
     * <p>Specifies a list of trail names, trail ARNs, or both, of the trails to
     * describe. The format of a trail ARN is:</p> <p>
     * <code>arn:aws:cloudtrail:us-east-1:123456789012:trail/MyTrail</code> </p> <p>If
     * an empty list is specified, information for the trail in the current region is
     * returned.</p> <ul> <li> <p>If an empty list is specified and
     * <code>IncludeShadowTrails</code> is false, then information for all trails in
     * the current region is returned.</p> </li> <li> <p>If an empty list is specified
     * and IncludeShadowTrails is null or true, then information for all trails in the
     * current region and any associated shadow trails in other regions is
     * returned.</p> </li> </ul> <note> <p>If one or more trail names are specified,
     * information is returned only if the names match the names of trails belonging
     * only to the current region. To return information about a trail in another
     * region, you must specify its trail ARN.</p> </note>
     */
    inline DescribeTrailsRequest& AddTrailNameList(const char* value) { m_trailNameListHasBeenSet = true; m_trailNameList.push_back(value); return *this; }

    /**
     * <p>Specifies whether to include shadow trails in the response. A shadow trail is
     * the replication in a region of a trail that was created in a different region.
     * The default is true.</p>
     */
    inline bool GetIncludeShadowTrails() const{ return m_includeShadowTrails; }

    /**
     * <p>Specifies whether to include shadow trails in the response. A shadow trail is
     * the replication in a region of a trail that was created in a different region.
     * The default is true.</p>
     */
    inline void SetIncludeShadowTrails(bool value) { m_includeShadowTrailsHasBeenSet = true; m_includeShadowTrails = value; }

    /**
     * <p>Specifies whether to include shadow trails in the response. A shadow trail is
     * the replication in a region of a trail that was created in a different region.
     * The default is true.</p>
     */
    inline DescribeTrailsRequest& WithIncludeShadowTrails(bool value) { SetIncludeShadowTrails(value); return *this;}

  private:
    Aws::Vector<Aws::String> m_trailNameList;
    bool m_trailNameListHasBeenSet;
    bool m_includeShadowTrails;
    bool m_includeShadowTrailsHasBeenSet;
  };

} // namespace Model
} // namespace CloudTrail
} // namespace Aws

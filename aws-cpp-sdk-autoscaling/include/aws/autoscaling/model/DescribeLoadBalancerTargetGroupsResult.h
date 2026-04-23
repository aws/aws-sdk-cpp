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
#include <aws/autoscaling/AutoScaling_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/autoscaling/model/ResponseMetadata.h>
#include <aws/autoscaling/model/LoadBalancerTargetGroupState.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace AutoScaling
{
namespace Model
{
  class AWS_AUTOSCALING_API DescribeLoadBalancerTargetGroupsResult
  {
  public:
    DescribeLoadBalancerTargetGroupsResult();
    DescribeLoadBalancerTargetGroupsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    DescribeLoadBalancerTargetGroupsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>Information about the target groups.</p>
     */
    inline const Aws::Vector<LoadBalancerTargetGroupState>& GetLoadBalancerTargetGroups() const{ return m_loadBalancerTargetGroups; }

    /**
     * <p>Information about the target groups.</p>
     */
    inline void SetLoadBalancerTargetGroups(const Aws::Vector<LoadBalancerTargetGroupState>& value) { m_loadBalancerTargetGroups = value; }

    /**
     * <p>Information about the target groups.</p>
     */
    inline void SetLoadBalancerTargetGroups(Aws::Vector<LoadBalancerTargetGroupState>&& value) { m_loadBalancerTargetGroups = std::move(value); }

    /**
     * <p>Information about the target groups.</p>
     */
    inline DescribeLoadBalancerTargetGroupsResult& WithLoadBalancerTargetGroups(const Aws::Vector<LoadBalancerTargetGroupState>& value) { SetLoadBalancerTargetGroups(value); return *this;}

    /**
     * <p>Information about the target groups.</p>
     */
    inline DescribeLoadBalancerTargetGroupsResult& WithLoadBalancerTargetGroups(Aws::Vector<LoadBalancerTargetGroupState>&& value) { SetLoadBalancerTargetGroups(std::move(value)); return *this;}

    /**
     * <p>Information about the target groups.</p>
     */
    inline DescribeLoadBalancerTargetGroupsResult& AddLoadBalancerTargetGroups(const LoadBalancerTargetGroupState& value) { m_loadBalancerTargetGroups.push_back(value); return *this; }

    /**
     * <p>Information about the target groups.</p>
     */
    inline DescribeLoadBalancerTargetGroupsResult& AddLoadBalancerTargetGroups(LoadBalancerTargetGroupState&& value) { m_loadBalancerTargetGroups.push_back(std::move(value)); return *this; }


    /**
     * <p>A string that indicates that the response contains more items than can be
     * returned in a single response. To receive additional items, specify this string
     * for the <code>NextToken</code> value when requesting the next set of items. This
     * value is null when there are no more items to return.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A string that indicates that the response contains more items than can be
     * returned in a single response. To receive additional items, specify this string
     * for the <code>NextToken</code> value when requesting the next set of items. This
     * value is null when there are no more items to return.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>A string that indicates that the response contains more items than can be
     * returned in a single response. To receive additional items, specify this string
     * for the <code>NextToken</code> value when requesting the next set of items. This
     * value is null when there are no more items to return.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>A string that indicates that the response contains more items than can be
     * returned in a single response. To receive additional items, specify this string
     * for the <code>NextToken</code> value when requesting the next set of items. This
     * value is null when there are no more items to return.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>A string that indicates that the response contains more items than can be
     * returned in a single response. To receive additional items, specify this string
     * for the <code>NextToken</code> value when requesting the next set of items. This
     * value is null when there are no more items to return.</p>
     */
    inline DescribeLoadBalancerTargetGroupsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A string that indicates that the response contains more items than can be
     * returned in a single response. To receive additional items, specify this string
     * for the <code>NextToken</code> value when requesting the next set of items. This
     * value is null when there are no more items to return.</p>
     */
    inline DescribeLoadBalancerTargetGroupsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A string that indicates that the response contains more items than can be
     * returned in a single response. To receive additional items, specify this string
     * for the <code>NextToken</code> value when requesting the next set of items. This
     * value is null when there are no more items to return.</p>
     */
    inline DescribeLoadBalancerTargetGroupsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline DescribeLoadBalancerTargetGroupsResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DescribeLoadBalancerTargetGroupsResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::Vector<LoadBalancerTargetGroupState> m_loadBalancerTargetGroups;

    Aws::String m_nextToken;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace AutoScaling
} // namespace Aws

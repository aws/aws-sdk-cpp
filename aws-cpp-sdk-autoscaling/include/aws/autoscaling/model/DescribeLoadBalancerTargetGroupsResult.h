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
#include <aws/autoscaling/AutoScaling_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/autoscaling/model/ResponseMetadata.h>
#include <aws/autoscaling/model/LoadBalancerTargetGroupState.h>

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
  /**
   * <p>Contains the output of DescribeLoadBalancerTargetGroups.</p>
   */
  class AWS_AUTOSCALING_API DescribeLoadBalancerTargetGroupsResult
  {
  public:
    DescribeLoadBalancerTargetGroupsResult();
    DescribeLoadBalancerTargetGroupsResult(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    DescribeLoadBalancerTargetGroupsResult& operator=(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

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
    inline void SetLoadBalancerTargetGroups(Aws::Vector<LoadBalancerTargetGroupState>&& value) { m_loadBalancerTargetGroups = value; }

    /**
     * <p>Information about the target groups.</p>
     */
    inline DescribeLoadBalancerTargetGroupsResult& WithLoadBalancerTargetGroups(const Aws::Vector<LoadBalancerTargetGroupState>& value) { SetLoadBalancerTargetGroups(value); return *this;}

    /**
     * <p>Information about the target groups.</p>
     */
    inline DescribeLoadBalancerTargetGroupsResult& WithLoadBalancerTargetGroups(Aws::Vector<LoadBalancerTargetGroupState>&& value) { SetLoadBalancerTargetGroups(value); return *this;}

    /**
     * <p>Information about the target groups.</p>
     */
    inline DescribeLoadBalancerTargetGroupsResult& AddLoadBalancerTargetGroups(const LoadBalancerTargetGroupState& value) { m_loadBalancerTargetGroups.push_back(value); return *this; }

    /**
     * <p>Information about the target groups.</p>
     */
    inline DescribeLoadBalancerTargetGroupsResult& AddLoadBalancerTargetGroups(LoadBalancerTargetGroupState&& value) { m_loadBalancerTargetGroups.push_back(value); return *this; }

    /**
     * <p>The token to use when requesting the next set of items. If there are no
     * additional items to return, the string is empty.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token to use when requesting the next set of items. If there are no
     * additional items to return, the string is empty.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token to use when requesting the next set of items. If there are no
     * additional items to return, the string is empty.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = value; }

    /**
     * <p>The token to use when requesting the next set of items. If there are no
     * additional items to return, the string is empty.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token to use when requesting the next set of items. If there are no
     * additional items to return, the string is empty.</p>
     */
    inline DescribeLoadBalancerTargetGroupsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to use when requesting the next set of items. If there are no
     * additional items to return, the string is empty.</p>
     */
    inline DescribeLoadBalancerTargetGroupsResult& WithNextToken(Aws::String&& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to use when requesting the next set of items. If there are no
     * additional items to return, the string is empty.</p>
     */
    inline DescribeLoadBalancerTargetGroupsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = value; }

    
    inline DescribeLoadBalancerTargetGroupsResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DescribeLoadBalancerTargetGroupsResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(value); return *this;}

  private:
    Aws::Vector<LoadBalancerTargetGroupState> m_loadBalancerTargetGroups;
    Aws::String m_nextToken;
    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace AutoScaling
} // namespace Aws
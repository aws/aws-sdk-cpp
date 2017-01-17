﻿/*
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
#include <aws/elasticloadbalancingv2/ElasticLoadBalancingv2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/elasticloadbalancingv2/model/ResponseMetadata.h>
#include <aws/elasticloadbalancingv2/model/TargetGroup.h>

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
namespace ElasticLoadBalancingv2
{
namespace Model
{
  /**
   * <p>Contains the output of DescribeTargetGroups.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancingv2-2015-12-01/DescribeTargetGroupsOutput">AWS
   * API Reference</a></p>
   */
  class AWS_ELASTICLOADBALANCINGV2_API DescribeTargetGroupsResult
  {
  public:
    DescribeTargetGroupsResult();
    DescribeTargetGroupsResult(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    DescribeTargetGroupsResult& operator=(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

    /**
     * <p>Information about the target groups.</p>
     */
    inline const Aws::Vector<TargetGroup>& GetTargetGroups() const{ return m_targetGroups; }

    /**
     * <p>Information about the target groups.</p>
     */
    inline void SetTargetGroups(const Aws::Vector<TargetGroup>& value) { m_targetGroups = value; }

    /**
     * <p>Information about the target groups.</p>
     */
    inline void SetTargetGroups(Aws::Vector<TargetGroup>&& value) { m_targetGroups = value; }

    /**
     * <p>Information about the target groups.</p>
     */
    inline DescribeTargetGroupsResult& WithTargetGroups(const Aws::Vector<TargetGroup>& value) { SetTargetGroups(value); return *this;}

    /**
     * <p>Information about the target groups.</p>
     */
    inline DescribeTargetGroupsResult& WithTargetGroups(Aws::Vector<TargetGroup>&& value) { SetTargetGroups(value); return *this;}

    /**
     * <p>Information about the target groups.</p>
     */
    inline DescribeTargetGroupsResult& AddTargetGroups(const TargetGroup& value) { m_targetGroups.push_back(value); return *this; }

    /**
     * <p>Information about the target groups.</p>
     */
    inline DescribeTargetGroupsResult& AddTargetGroups(TargetGroup&& value) { m_targetGroups.push_back(value); return *this; }

    /**
     * <p>The marker to use when requesting the next set of results. If there are no
     * additional results, the string is empty.</p>
     */
    inline const Aws::String& GetNextMarker() const{ return m_nextMarker; }

    /**
     * <p>The marker to use when requesting the next set of results. If there are no
     * additional results, the string is empty.</p>
     */
    inline void SetNextMarker(const Aws::String& value) { m_nextMarker = value; }

    /**
     * <p>The marker to use when requesting the next set of results. If there are no
     * additional results, the string is empty.</p>
     */
    inline void SetNextMarker(Aws::String&& value) { m_nextMarker = value; }

    /**
     * <p>The marker to use when requesting the next set of results. If there are no
     * additional results, the string is empty.</p>
     */
    inline void SetNextMarker(const char* value) { m_nextMarker.assign(value); }

    /**
     * <p>The marker to use when requesting the next set of results. If there are no
     * additional results, the string is empty.</p>
     */
    inline DescribeTargetGroupsResult& WithNextMarker(const Aws::String& value) { SetNextMarker(value); return *this;}

    /**
     * <p>The marker to use when requesting the next set of results. If there are no
     * additional results, the string is empty.</p>
     */
    inline DescribeTargetGroupsResult& WithNextMarker(Aws::String&& value) { SetNextMarker(value); return *this;}

    /**
     * <p>The marker to use when requesting the next set of results. If there are no
     * additional results, the string is empty.</p>
     */
    inline DescribeTargetGroupsResult& WithNextMarker(const char* value) { SetNextMarker(value); return *this;}

    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = value; }

    
    inline DescribeTargetGroupsResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DescribeTargetGroupsResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(value); return *this;}

  private:
    Aws::Vector<TargetGroup> m_targetGroups;
    Aws::String m_nextMarker;
    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace ElasticLoadBalancingv2
} // namespace Aws
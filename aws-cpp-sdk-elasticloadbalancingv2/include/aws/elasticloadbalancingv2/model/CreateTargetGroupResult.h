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
   * <p>Contains the output of CreateTargetGroup.</p>
   */
  class AWS_ELASTICLOADBALANCINGV2_API CreateTargetGroupResult
  {
  public:
    CreateTargetGroupResult();
    CreateTargetGroupResult(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    CreateTargetGroupResult& operator=(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

    /**
     * <p>Information about the target group.</p>
     */
    inline const Aws::Vector<TargetGroup>& GetTargetGroups() const{ return m_targetGroups; }

    /**
     * <p>Information about the target group.</p>
     */
    inline void SetTargetGroups(const Aws::Vector<TargetGroup>& value) { m_targetGroups = value; }

    /**
     * <p>Information about the target group.</p>
     */
    inline void SetTargetGroups(Aws::Vector<TargetGroup>&& value) { m_targetGroups = value; }

    /**
     * <p>Information about the target group.</p>
     */
    inline CreateTargetGroupResult& WithTargetGroups(const Aws::Vector<TargetGroup>& value) { SetTargetGroups(value); return *this;}

    /**
     * <p>Information about the target group.</p>
     */
    inline CreateTargetGroupResult& WithTargetGroups(Aws::Vector<TargetGroup>&& value) { SetTargetGroups(value); return *this;}

    /**
     * <p>Information about the target group.</p>
     */
    inline CreateTargetGroupResult& AddTargetGroups(const TargetGroup& value) { m_targetGroups.push_back(value); return *this; }

    /**
     * <p>Information about the target group.</p>
     */
    inline CreateTargetGroupResult& AddTargetGroups(TargetGroup&& value) { m_targetGroups.push_back(value); return *this; }

    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = value; }

    
    inline CreateTargetGroupResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline CreateTargetGroupResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(value); return *this;}

  private:
    Aws::Vector<TargetGroup> m_targetGroups;
    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace ElasticLoadBalancingv2
} // namespace Aws
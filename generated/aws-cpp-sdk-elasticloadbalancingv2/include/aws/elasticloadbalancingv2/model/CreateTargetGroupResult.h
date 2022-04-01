﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticloadbalancingv2/ElasticLoadBalancingv2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/elasticloadbalancingv2/model/ResponseMetadata.h>
#include <aws/elasticloadbalancingv2/model/TargetGroup.h>
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
namespace ElasticLoadBalancingv2
{
namespace Model
{
  class AWS_ELASTICLOADBALANCINGV2_API CreateTargetGroupResult
  {
  public:
    CreateTargetGroupResult();
    CreateTargetGroupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    CreateTargetGroupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


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
    inline void SetTargetGroups(Aws::Vector<TargetGroup>&& value) { m_targetGroups = std::move(value); }

    /**
     * <p>Information about the target group.</p>
     */
    inline CreateTargetGroupResult& WithTargetGroups(const Aws::Vector<TargetGroup>& value) { SetTargetGroups(value); return *this;}

    /**
     * <p>Information about the target group.</p>
     */
    inline CreateTargetGroupResult& WithTargetGroups(Aws::Vector<TargetGroup>&& value) { SetTargetGroups(std::move(value)); return *this;}

    /**
     * <p>Information about the target group.</p>
     */
    inline CreateTargetGroupResult& AddTargetGroups(const TargetGroup& value) { m_targetGroups.push_back(value); return *this; }

    /**
     * <p>Information about the target group.</p>
     */
    inline CreateTargetGroupResult& AddTargetGroups(TargetGroup&& value) { m_targetGroups.push_back(std::move(value)); return *this; }


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline CreateTargetGroupResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline CreateTargetGroupResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::Vector<TargetGroup> m_targetGroups;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace ElasticLoadBalancingv2
} // namespace Aws

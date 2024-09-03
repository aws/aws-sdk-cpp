/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticloadbalancingv2/ElasticLoadBalancingv2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/elasticloadbalancingv2/model/ResponseMetadata.h>
#include <aws/elasticloadbalancingv2/model/ListenerAttribute.h>
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
  class DescribeListenerAttributesResult
  {
  public:
    AWS_ELASTICLOADBALANCINGV2_API DescribeListenerAttributesResult();
    AWS_ELASTICLOADBALANCINGV2_API DescribeListenerAttributesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_ELASTICLOADBALANCINGV2_API DescribeListenerAttributesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>Information about the listener attributes.</p>
     */
    inline const Aws::Vector<ListenerAttribute>& GetAttributes() const{ return m_attributes; }
    inline void SetAttributes(const Aws::Vector<ListenerAttribute>& value) { m_attributes = value; }
    inline void SetAttributes(Aws::Vector<ListenerAttribute>&& value) { m_attributes = std::move(value); }
    inline DescribeListenerAttributesResult& WithAttributes(const Aws::Vector<ListenerAttribute>& value) { SetAttributes(value); return *this;}
    inline DescribeListenerAttributesResult& WithAttributes(Aws::Vector<ListenerAttribute>&& value) { SetAttributes(std::move(value)); return *this;}
    inline DescribeListenerAttributesResult& AddAttributes(const ListenerAttribute& value) { m_attributes.push_back(value); return *this; }
    inline DescribeListenerAttributesResult& AddAttributes(ListenerAttribute&& value) { m_attributes.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }
    inline DescribeListenerAttributesResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}
    inline DescribeListenerAttributesResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ListenerAttribute> m_attributes;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace ElasticLoadBalancingv2
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticloadbalancingv2/ElasticLoadBalancingv2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/elasticloadbalancingv2/model/ResponseMetadata.h>
#include <aws/elasticloadbalancingv2/model/TargetHealthDescription.h>
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
  class DescribeTargetHealthResult
  {
  public:
    AWS_ELASTICLOADBALANCINGV2_API DescribeTargetHealthResult();
    AWS_ELASTICLOADBALANCINGV2_API DescribeTargetHealthResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_ELASTICLOADBALANCINGV2_API DescribeTargetHealthResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>Information about the health of the targets.</p>
     */
    inline const Aws::Vector<TargetHealthDescription>& GetTargetHealthDescriptions() const{ return m_targetHealthDescriptions; }

    /**
     * <p>Information about the health of the targets.</p>
     */
    inline void SetTargetHealthDescriptions(const Aws::Vector<TargetHealthDescription>& value) { m_targetHealthDescriptions = value; }

    /**
     * <p>Information about the health of the targets.</p>
     */
    inline void SetTargetHealthDescriptions(Aws::Vector<TargetHealthDescription>&& value) { m_targetHealthDescriptions = std::move(value); }

    /**
     * <p>Information about the health of the targets.</p>
     */
    inline DescribeTargetHealthResult& WithTargetHealthDescriptions(const Aws::Vector<TargetHealthDescription>& value) { SetTargetHealthDescriptions(value); return *this;}

    /**
     * <p>Information about the health of the targets.</p>
     */
    inline DescribeTargetHealthResult& WithTargetHealthDescriptions(Aws::Vector<TargetHealthDescription>&& value) { SetTargetHealthDescriptions(std::move(value)); return *this;}

    /**
     * <p>Information about the health of the targets.</p>
     */
    inline DescribeTargetHealthResult& AddTargetHealthDescriptions(const TargetHealthDescription& value) { m_targetHealthDescriptions.push_back(value); return *this; }

    /**
     * <p>Information about the health of the targets.</p>
     */
    inline DescribeTargetHealthResult& AddTargetHealthDescriptions(TargetHealthDescription&& value) { m_targetHealthDescriptions.push_back(std::move(value)); return *this; }


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline DescribeTargetHealthResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DescribeTargetHealthResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::Vector<TargetHealthDescription> m_targetHealthDescriptions;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace ElasticLoadBalancingv2
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <aws/ec2/model/EgressOnlyInternetGateway.h>
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
namespace EC2
{
namespace Model
{
  class DescribeEgressOnlyInternetGatewaysResponse
  {
  public:
    AWS_EC2_API DescribeEgressOnlyInternetGatewaysResponse();
    AWS_EC2_API DescribeEgressOnlyInternetGatewaysResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API DescribeEgressOnlyInternetGatewaysResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>Information about the egress-only internet gateways.</p>
     */
    inline const Aws::Vector<EgressOnlyInternetGateway>& GetEgressOnlyInternetGateways() const{ return m_egressOnlyInternetGateways; }

    /**
     * <p>Information about the egress-only internet gateways.</p>
     */
    inline void SetEgressOnlyInternetGateways(const Aws::Vector<EgressOnlyInternetGateway>& value) { m_egressOnlyInternetGateways = value; }

    /**
     * <p>Information about the egress-only internet gateways.</p>
     */
    inline void SetEgressOnlyInternetGateways(Aws::Vector<EgressOnlyInternetGateway>&& value) { m_egressOnlyInternetGateways = std::move(value); }

    /**
     * <p>Information about the egress-only internet gateways.</p>
     */
    inline DescribeEgressOnlyInternetGatewaysResponse& WithEgressOnlyInternetGateways(const Aws::Vector<EgressOnlyInternetGateway>& value) { SetEgressOnlyInternetGateways(value); return *this;}

    /**
     * <p>Information about the egress-only internet gateways.</p>
     */
    inline DescribeEgressOnlyInternetGatewaysResponse& WithEgressOnlyInternetGateways(Aws::Vector<EgressOnlyInternetGateway>&& value) { SetEgressOnlyInternetGateways(std::move(value)); return *this;}

    /**
     * <p>Information about the egress-only internet gateways.</p>
     */
    inline DescribeEgressOnlyInternetGatewaysResponse& AddEgressOnlyInternetGateways(const EgressOnlyInternetGateway& value) { m_egressOnlyInternetGateways.push_back(value); return *this; }

    /**
     * <p>Information about the egress-only internet gateways.</p>
     */
    inline DescribeEgressOnlyInternetGatewaysResponse& AddEgressOnlyInternetGateways(EgressOnlyInternetGateway&& value) { m_egressOnlyInternetGateways.push_back(std::move(value)); return *this; }


    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline DescribeEgressOnlyInternetGatewaysResponse& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline DescribeEgressOnlyInternetGatewaysResponse& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline DescribeEgressOnlyInternetGatewaysResponse& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline DescribeEgressOnlyInternetGatewaysResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DescribeEgressOnlyInternetGatewaysResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::Vector<EgressOnlyInternetGateway> m_egressOnlyInternetGateways;

    Aws::String m_nextToken;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws

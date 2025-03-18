/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <aws/ec2/model/TransitGatewayMulticastDomain.h>
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
  class DescribeTransitGatewayMulticastDomainsResponse
  {
  public:
    AWS_EC2_API DescribeTransitGatewayMulticastDomainsResponse() = default;
    AWS_EC2_API DescribeTransitGatewayMulticastDomainsResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API DescribeTransitGatewayMulticastDomainsResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>Information about the transit gateway multicast domains.</p>
     */
    inline const Aws::Vector<TransitGatewayMulticastDomain>& GetTransitGatewayMulticastDomains() const { return m_transitGatewayMulticastDomains; }
    template<typename TransitGatewayMulticastDomainsT = Aws::Vector<TransitGatewayMulticastDomain>>
    void SetTransitGatewayMulticastDomains(TransitGatewayMulticastDomainsT&& value) { m_transitGatewayMulticastDomainsHasBeenSet = true; m_transitGatewayMulticastDomains = std::forward<TransitGatewayMulticastDomainsT>(value); }
    template<typename TransitGatewayMulticastDomainsT = Aws::Vector<TransitGatewayMulticastDomain>>
    DescribeTransitGatewayMulticastDomainsResponse& WithTransitGatewayMulticastDomains(TransitGatewayMulticastDomainsT&& value) { SetTransitGatewayMulticastDomains(std::forward<TransitGatewayMulticastDomainsT>(value)); return *this;}
    template<typename TransitGatewayMulticastDomainsT = TransitGatewayMulticastDomain>
    DescribeTransitGatewayMulticastDomainsResponse& AddTransitGatewayMulticastDomains(TransitGatewayMulticastDomainsT&& value) { m_transitGatewayMulticastDomainsHasBeenSet = true; m_transitGatewayMulticastDomains.emplace_back(std::forward<TransitGatewayMulticastDomainsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeTransitGatewayMulticastDomainsResponse& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    DescribeTransitGatewayMulticastDomainsResponse& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<TransitGatewayMulticastDomain> m_transitGatewayMulticastDomains;
    bool m_transitGatewayMulticastDomainsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws

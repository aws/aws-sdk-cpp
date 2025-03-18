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
    AWS_EC2_API DescribeEgressOnlyInternetGatewaysResponse() = default;
    AWS_EC2_API DescribeEgressOnlyInternetGatewaysResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API DescribeEgressOnlyInternetGatewaysResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>Information about the egress-only internet gateways.</p>
     */
    inline const Aws::Vector<EgressOnlyInternetGateway>& GetEgressOnlyInternetGateways() const { return m_egressOnlyInternetGateways; }
    template<typename EgressOnlyInternetGatewaysT = Aws::Vector<EgressOnlyInternetGateway>>
    void SetEgressOnlyInternetGateways(EgressOnlyInternetGatewaysT&& value) { m_egressOnlyInternetGatewaysHasBeenSet = true; m_egressOnlyInternetGateways = std::forward<EgressOnlyInternetGatewaysT>(value); }
    template<typename EgressOnlyInternetGatewaysT = Aws::Vector<EgressOnlyInternetGateway>>
    DescribeEgressOnlyInternetGatewaysResponse& WithEgressOnlyInternetGateways(EgressOnlyInternetGatewaysT&& value) { SetEgressOnlyInternetGateways(std::forward<EgressOnlyInternetGatewaysT>(value)); return *this;}
    template<typename EgressOnlyInternetGatewaysT = EgressOnlyInternetGateway>
    DescribeEgressOnlyInternetGatewaysResponse& AddEgressOnlyInternetGateways(EgressOnlyInternetGatewaysT&& value) { m_egressOnlyInternetGatewaysHasBeenSet = true; m_egressOnlyInternetGateways.emplace_back(std::forward<EgressOnlyInternetGatewaysT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token to include in another request to get the next page of items. This
     * value is <code>null</code> when there are no more items to return.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeEgressOnlyInternetGatewaysResponse& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    DescribeEgressOnlyInternetGatewaysResponse& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<EgressOnlyInternetGateway> m_egressOnlyInternetGateways;
    bool m_egressOnlyInternetGatewaysHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws

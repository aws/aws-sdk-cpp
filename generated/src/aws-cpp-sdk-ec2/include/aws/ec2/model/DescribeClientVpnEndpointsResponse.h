/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <aws/ec2/model/ClientVpnEndpoint.h>
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
  class DescribeClientVpnEndpointsResponse
  {
  public:
    AWS_EC2_API DescribeClientVpnEndpointsResponse() = default;
    AWS_EC2_API DescribeClientVpnEndpointsResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API DescribeClientVpnEndpointsResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>Information about the Client VPN endpoints.</p>
     */
    inline const Aws::Vector<ClientVpnEndpoint>& GetClientVpnEndpoints() const { return m_clientVpnEndpoints; }
    template<typename ClientVpnEndpointsT = Aws::Vector<ClientVpnEndpoint>>
    void SetClientVpnEndpoints(ClientVpnEndpointsT&& value) { m_clientVpnEndpointsHasBeenSet = true; m_clientVpnEndpoints = std::forward<ClientVpnEndpointsT>(value); }
    template<typename ClientVpnEndpointsT = Aws::Vector<ClientVpnEndpoint>>
    DescribeClientVpnEndpointsResponse& WithClientVpnEndpoints(ClientVpnEndpointsT&& value) { SetClientVpnEndpoints(std::forward<ClientVpnEndpointsT>(value)); return *this;}
    template<typename ClientVpnEndpointsT = ClientVpnEndpoint>
    DescribeClientVpnEndpointsResponse& AddClientVpnEndpoints(ClientVpnEndpointsT&& value) { m_clientVpnEndpointsHasBeenSet = true; m_clientVpnEndpoints.emplace_back(std::forward<ClientVpnEndpointsT>(value)); return *this; }
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
    DescribeClientVpnEndpointsResponse& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    DescribeClientVpnEndpointsResponse& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ClientVpnEndpoint> m_clientVpnEndpoints;
    bool m_clientVpnEndpointsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws

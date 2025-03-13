/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/TransitGatewayRouteTable.h>
#include <aws/ec2/model/ResponseMetadata.h>
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
  class CreateTransitGatewayRouteTableResponse
  {
  public:
    AWS_EC2_API CreateTransitGatewayRouteTableResponse() = default;
    AWS_EC2_API CreateTransitGatewayRouteTableResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API CreateTransitGatewayRouteTableResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>Information about the transit gateway route table.</p>
     */
    inline const TransitGatewayRouteTable& GetTransitGatewayRouteTable() const { return m_transitGatewayRouteTable; }
    template<typename TransitGatewayRouteTableT = TransitGatewayRouteTable>
    void SetTransitGatewayRouteTable(TransitGatewayRouteTableT&& value) { m_transitGatewayRouteTableHasBeenSet = true; m_transitGatewayRouteTable = std::forward<TransitGatewayRouteTableT>(value); }
    template<typename TransitGatewayRouteTableT = TransitGatewayRouteTable>
    CreateTransitGatewayRouteTableResponse& WithTransitGatewayRouteTable(TransitGatewayRouteTableT&& value) { SetTransitGatewayRouteTable(std::forward<TransitGatewayRouteTableT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    CreateTransitGatewayRouteTableResponse& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    TransitGatewayRouteTable m_transitGatewayRouteTable;
    bool m_transitGatewayRouteTableHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws

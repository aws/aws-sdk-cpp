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
    AWS_EC2_API CreateTransitGatewayRouteTableResponse();
    AWS_EC2_API CreateTransitGatewayRouteTableResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API CreateTransitGatewayRouteTableResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>Information about the transit gateway route table.</p>
     */
    inline const TransitGatewayRouteTable& GetTransitGatewayRouteTable() const{ return m_transitGatewayRouteTable; }

    /**
     * <p>Information about the transit gateway route table.</p>
     */
    inline void SetTransitGatewayRouteTable(const TransitGatewayRouteTable& value) { m_transitGatewayRouteTable = value; }

    /**
     * <p>Information about the transit gateway route table.</p>
     */
    inline void SetTransitGatewayRouteTable(TransitGatewayRouteTable&& value) { m_transitGatewayRouteTable = std::move(value); }

    /**
     * <p>Information about the transit gateway route table.</p>
     */
    inline CreateTransitGatewayRouteTableResponse& WithTransitGatewayRouteTable(const TransitGatewayRouteTable& value) { SetTransitGatewayRouteTable(value); return *this;}

    /**
     * <p>Information about the transit gateway route table.</p>
     */
    inline CreateTransitGatewayRouteTableResponse& WithTransitGatewayRouteTable(TransitGatewayRouteTable&& value) { SetTransitGatewayRouteTable(std::move(value)); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline CreateTransitGatewayRouteTableResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline CreateTransitGatewayRouteTableResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    TransitGatewayRouteTable m_transitGatewayRouteTable;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/LocalGatewayRouteTable.h>
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
  class CreateLocalGatewayRouteTableResponse
  {
  public:
    AWS_EC2_API CreateLocalGatewayRouteTableResponse();
    AWS_EC2_API CreateLocalGatewayRouteTableResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API CreateLocalGatewayRouteTableResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>Information about the local gateway route table.</p>
     */
    inline const LocalGatewayRouteTable& GetLocalGatewayRouteTable() const{ return m_localGatewayRouteTable; }

    /**
     * <p>Information about the local gateway route table.</p>
     */
    inline void SetLocalGatewayRouteTable(const LocalGatewayRouteTable& value) { m_localGatewayRouteTable = value; }

    /**
     * <p>Information about the local gateway route table.</p>
     */
    inline void SetLocalGatewayRouteTable(LocalGatewayRouteTable&& value) { m_localGatewayRouteTable = std::move(value); }

    /**
     * <p>Information about the local gateway route table.</p>
     */
    inline CreateLocalGatewayRouteTableResponse& WithLocalGatewayRouteTable(const LocalGatewayRouteTable& value) { SetLocalGatewayRouteTable(value); return *this;}

    /**
     * <p>Information about the local gateway route table.</p>
     */
    inline CreateLocalGatewayRouteTableResponse& WithLocalGatewayRouteTable(LocalGatewayRouteTable&& value) { SetLocalGatewayRouteTable(std::move(value)); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline CreateLocalGatewayRouteTableResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline CreateLocalGatewayRouteTableResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    LocalGatewayRouteTable m_localGatewayRouteTable;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws

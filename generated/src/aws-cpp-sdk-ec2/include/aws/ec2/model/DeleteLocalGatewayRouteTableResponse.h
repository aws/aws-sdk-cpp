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
  class DeleteLocalGatewayRouteTableResponse
  {
  public:
    AWS_EC2_API DeleteLocalGatewayRouteTableResponse() = default;
    AWS_EC2_API DeleteLocalGatewayRouteTableResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API DeleteLocalGatewayRouteTableResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>Information about the local gateway route table.</p>
     */
    inline const LocalGatewayRouteTable& GetLocalGatewayRouteTable() const { return m_localGatewayRouteTable; }
    template<typename LocalGatewayRouteTableT = LocalGatewayRouteTable>
    void SetLocalGatewayRouteTable(LocalGatewayRouteTableT&& value) { m_localGatewayRouteTableHasBeenSet = true; m_localGatewayRouteTable = std::forward<LocalGatewayRouteTableT>(value); }
    template<typename LocalGatewayRouteTableT = LocalGatewayRouteTable>
    DeleteLocalGatewayRouteTableResponse& WithLocalGatewayRouteTable(LocalGatewayRouteTableT&& value) { SetLocalGatewayRouteTable(std::forward<LocalGatewayRouteTableT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    DeleteLocalGatewayRouteTableResponse& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    LocalGatewayRouteTable m_localGatewayRouteTable;
    bool m_localGatewayRouteTableHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws

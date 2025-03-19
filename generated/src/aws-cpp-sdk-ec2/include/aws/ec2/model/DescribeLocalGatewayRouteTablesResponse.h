/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <aws/ec2/model/LocalGatewayRouteTable.h>
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
  class DescribeLocalGatewayRouteTablesResponse
  {
  public:
    AWS_EC2_API DescribeLocalGatewayRouteTablesResponse() = default;
    AWS_EC2_API DescribeLocalGatewayRouteTablesResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API DescribeLocalGatewayRouteTablesResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>Information about the local gateway route tables.</p>
     */
    inline const Aws::Vector<LocalGatewayRouteTable>& GetLocalGatewayRouteTables() const { return m_localGatewayRouteTables; }
    template<typename LocalGatewayRouteTablesT = Aws::Vector<LocalGatewayRouteTable>>
    void SetLocalGatewayRouteTables(LocalGatewayRouteTablesT&& value) { m_localGatewayRouteTablesHasBeenSet = true; m_localGatewayRouteTables = std::forward<LocalGatewayRouteTablesT>(value); }
    template<typename LocalGatewayRouteTablesT = Aws::Vector<LocalGatewayRouteTable>>
    DescribeLocalGatewayRouteTablesResponse& WithLocalGatewayRouteTables(LocalGatewayRouteTablesT&& value) { SetLocalGatewayRouteTables(std::forward<LocalGatewayRouteTablesT>(value)); return *this;}
    template<typename LocalGatewayRouteTablesT = LocalGatewayRouteTable>
    DescribeLocalGatewayRouteTablesResponse& AddLocalGatewayRouteTables(LocalGatewayRouteTablesT&& value) { m_localGatewayRouteTablesHasBeenSet = true; m_localGatewayRouteTables.emplace_back(std::forward<LocalGatewayRouteTablesT>(value)); return *this; }
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
    DescribeLocalGatewayRouteTablesResponse& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    DescribeLocalGatewayRouteTablesResponse& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<LocalGatewayRouteTable> m_localGatewayRouteTables;
    bool m_localGatewayRouteTablesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <aws/ec2/model/TransitGatewayPolicyTable.h>
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
  class DescribeTransitGatewayPolicyTablesResponse
  {
  public:
    AWS_EC2_API DescribeTransitGatewayPolicyTablesResponse() = default;
    AWS_EC2_API DescribeTransitGatewayPolicyTablesResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API DescribeTransitGatewayPolicyTablesResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>Describes the transit gateway policy tables.</p>
     */
    inline const Aws::Vector<TransitGatewayPolicyTable>& GetTransitGatewayPolicyTables() const { return m_transitGatewayPolicyTables; }
    template<typename TransitGatewayPolicyTablesT = Aws::Vector<TransitGatewayPolicyTable>>
    void SetTransitGatewayPolicyTables(TransitGatewayPolicyTablesT&& value) { m_transitGatewayPolicyTablesHasBeenSet = true; m_transitGatewayPolicyTables = std::forward<TransitGatewayPolicyTablesT>(value); }
    template<typename TransitGatewayPolicyTablesT = Aws::Vector<TransitGatewayPolicyTable>>
    DescribeTransitGatewayPolicyTablesResponse& WithTransitGatewayPolicyTables(TransitGatewayPolicyTablesT&& value) { SetTransitGatewayPolicyTables(std::forward<TransitGatewayPolicyTablesT>(value)); return *this;}
    template<typename TransitGatewayPolicyTablesT = TransitGatewayPolicyTable>
    DescribeTransitGatewayPolicyTablesResponse& AddTransitGatewayPolicyTables(TransitGatewayPolicyTablesT&& value) { m_transitGatewayPolicyTablesHasBeenSet = true; m_transitGatewayPolicyTables.emplace_back(std::forward<TransitGatewayPolicyTablesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token for the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeTransitGatewayPolicyTablesResponse& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    DescribeTransitGatewayPolicyTablesResponse& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<TransitGatewayPolicyTable> m_transitGatewayPolicyTables;
    bool m_transitGatewayPolicyTablesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/TransitGatewayPolicyTable.h>
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
  class DeleteTransitGatewayPolicyTableResponse
  {
  public:
    AWS_EC2_API DeleteTransitGatewayPolicyTableResponse() = default;
    AWS_EC2_API DeleteTransitGatewayPolicyTableResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API DeleteTransitGatewayPolicyTableResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>Provides details about the deleted transit gateway policy table.</p>
     */
    inline const TransitGatewayPolicyTable& GetTransitGatewayPolicyTable() const { return m_transitGatewayPolicyTable; }
    template<typename TransitGatewayPolicyTableT = TransitGatewayPolicyTable>
    void SetTransitGatewayPolicyTable(TransitGatewayPolicyTableT&& value) { m_transitGatewayPolicyTableHasBeenSet = true; m_transitGatewayPolicyTable = std::forward<TransitGatewayPolicyTableT>(value); }
    template<typename TransitGatewayPolicyTableT = TransitGatewayPolicyTable>
    DeleteTransitGatewayPolicyTableResponse& WithTransitGatewayPolicyTable(TransitGatewayPolicyTableT&& value) { SetTransitGatewayPolicyTable(std::forward<TransitGatewayPolicyTableT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    DeleteTransitGatewayPolicyTableResponse& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    TransitGatewayPolicyTable m_transitGatewayPolicyTable;
    bool m_transitGatewayPolicyTableHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws

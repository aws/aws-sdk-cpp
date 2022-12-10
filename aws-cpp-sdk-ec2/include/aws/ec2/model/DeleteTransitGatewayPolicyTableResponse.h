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
    AWS_EC2_API DeleteTransitGatewayPolicyTableResponse();
    AWS_EC2_API DeleteTransitGatewayPolicyTableResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API DeleteTransitGatewayPolicyTableResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>Provides details about the deleted transit gateway policy table.</p>
     */
    inline const TransitGatewayPolicyTable& GetTransitGatewayPolicyTable() const{ return m_transitGatewayPolicyTable; }

    /**
     * <p>Provides details about the deleted transit gateway policy table.</p>
     */
    inline void SetTransitGatewayPolicyTable(const TransitGatewayPolicyTable& value) { m_transitGatewayPolicyTable = value; }

    /**
     * <p>Provides details about the deleted transit gateway policy table.</p>
     */
    inline void SetTransitGatewayPolicyTable(TransitGatewayPolicyTable&& value) { m_transitGatewayPolicyTable = std::move(value); }

    /**
     * <p>Provides details about the deleted transit gateway policy table.</p>
     */
    inline DeleteTransitGatewayPolicyTableResponse& WithTransitGatewayPolicyTable(const TransitGatewayPolicyTable& value) { SetTransitGatewayPolicyTable(value); return *this;}

    /**
     * <p>Provides details about the deleted transit gateway policy table.</p>
     */
    inline DeleteTransitGatewayPolicyTableResponse& WithTransitGatewayPolicyTable(TransitGatewayPolicyTable&& value) { SetTransitGatewayPolicyTable(std::move(value)); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline DeleteTransitGatewayPolicyTableResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DeleteTransitGatewayPolicyTableResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    TransitGatewayPolicyTable m_transitGatewayPolicyTable;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws

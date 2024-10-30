/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/SecurityGroupVpcAssociationState.h>
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
  class DisassociateSecurityGroupVpcResponse
  {
  public:
    AWS_EC2_API DisassociateSecurityGroupVpcResponse();
    AWS_EC2_API DisassociateSecurityGroupVpcResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API DisassociateSecurityGroupVpcResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The state of the disassociation.</p>
     */
    inline const SecurityGroupVpcAssociationState& GetState() const{ return m_state; }
    inline void SetState(const SecurityGroupVpcAssociationState& value) { m_state = value; }
    inline void SetState(SecurityGroupVpcAssociationState&& value) { m_state = std::move(value); }
    inline DisassociateSecurityGroupVpcResponse& WithState(const SecurityGroupVpcAssociationState& value) { SetState(value); return *this;}
    inline DisassociateSecurityGroupVpcResponse& WithState(SecurityGroupVpcAssociationState&& value) { SetState(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }
    inline DisassociateSecurityGroupVpcResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}
    inline DisassociateSecurityGroupVpcResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}
    ///@}
  private:

    SecurityGroupVpcAssociationState m_state;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws

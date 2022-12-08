/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/VpcAttachment.h>
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
  /**
   * <p>Contains the output of AttachVpnGateway.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/AttachVpnGatewayResult">AWS
   * API Reference</a></p>
   */
  class AttachVpnGatewayResponse
  {
  public:
    AWS_EC2_API AttachVpnGatewayResponse();
    AWS_EC2_API AttachVpnGatewayResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API AttachVpnGatewayResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>Information about the attachment.</p>
     */
    inline const VpcAttachment& GetVpcAttachment() const{ return m_vpcAttachment; }

    /**
     * <p>Information about the attachment.</p>
     */
    inline void SetVpcAttachment(const VpcAttachment& value) { m_vpcAttachment = value; }

    /**
     * <p>Information about the attachment.</p>
     */
    inline void SetVpcAttachment(VpcAttachment&& value) { m_vpcAttachment = std::move(value); }

    /**
     * <p>Information about the attachment.</p>
     */
    inline AttachVpnGatewayResponse& WithVpcAttachment(const VpcAttachment& value) { SetVpcAttachment(value); return *this;}

    /**
     * <p>Information about the attachment.</p>
     */
    inline AttachVpnGatewayResponse& WithVpcAttachment(VpcAttachment&& value) { SetVpcAttachment(std::move(value)); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline AttachVpnGatewayResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline AttachVpnGatewayResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    VpcAttachment m_vpcAttachment;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws

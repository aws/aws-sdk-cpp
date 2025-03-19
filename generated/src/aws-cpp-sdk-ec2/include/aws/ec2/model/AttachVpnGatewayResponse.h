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
    AWS_EC2_API AttachVpnGatewayResponse() = default;
    AWS_EC2_API AttachVpnGatewayResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API AttachVpnGatewayResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>Information about the attachment.</p>
     */
    inline const VpcAttachment& GetVpcAttachment() const { return m_vpcAttachment; }
    template<typename VpcAttachmentT = VpcAttachment>
    void SetVpcAttachment(VpcAttachmentT&& value) { m_vpcAttachmentHasBeenSet = true; m_vpcAttachment = std::forward<VpcAttachmentT>(value); }
    template<typename VpcAttachmentT = VpcAttachment>
    AttachVpnGatewayResponse& WithVpcAttachment(VpcAttachmentT&& value) { SetVpcAttachment(std::forward<VpcAttachmentT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    AttachVpnGatewayResponse& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    VpcAttachment m_vpcAttachment;
    bool m_vpcAttachmentHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws

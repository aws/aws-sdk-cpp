/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/ActiveVpnTunnelStatus.h>
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
  class GetActiveVpnTunnelStatusResponse
  {
  public:
    AWS_EC2_API GetActiveVpnTunnelStatusResponse() = default;
    AWS_EC2_API GetActiveVpnTunnelStatusResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API GetActiveVpnTunnelStatusResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>Information about the current security configuration of the VPN tunnel.</p>
     */
    inline const ActiveVpnTunnelStatus& GetActiveVpnTunnelStatus() const { return m_activeVpnTunnelStatus; }
    template<typename ActiveVpnTunnelStatusT = ActiveVpnTunnelStatus>
    void SetActiveVpnTunnelStatus(ActiveVpnTunnelStatusT&& value) { m_activeVpnTunnelStatusHasBeenSet = true; m_activeVpnTunnelStatus = std::forward<ActiveVpnTunnelStatusT>(value); }
    template<typename ActiveVpnTunnelStatusT = ActiveVpnTunnelStatus>
    GetActiveVpnTunnelStatusResponse& WithActiveVpnTunnelStatus(ActiveVpnTunnelStatusT&& value) { SetActiveVpnTunnelStatus(std::forward<ActiveVpnTunnelStatusT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    GetActiveVpnTunnelStatusResponse& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    ActiveVpnTunnelStatus m_activeVpnTunnelStatus;
    bool m_activeVpnTunnelStatusHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws

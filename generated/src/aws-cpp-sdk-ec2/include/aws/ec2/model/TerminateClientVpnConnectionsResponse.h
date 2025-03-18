/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <aws/ec2/model/TerminateConnectionStatus.h>
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
  class TerminateClientVpnConnectionsResponse
  {
  public:
    AWS_EC2_API TerminateClientVpnConnectionsResponse() = default;
    AWS_EC2_API TerminateClientVpnConnectionsResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API TerminateClientVpnConnectionsResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The ID of the Client VPN endpoint.</p>
     */
    inline const Aws::String& GetClientVpnEndpointId() const { return m_clientVpnEndpointId; }
    template<typename ClientVpnEndpointIdT = Aws::String>
    void SetClientVpnEndpointId(ClientVpnEndpointIdT&& value) { m_clientVpnEndpointIdHasBeenSet = true; m_clientVpnEndpointId = std::forward<ClientVpnEndpointIdT>(value); }
    template<typename ClientVpnEndpointIdT = Aws::String>
    TerminateClientVpnConnectionsResponse& WithClientVpnEndpointId(ClientVpnEndpointIdT&& value) { SetClientVpnEndpointId(std::forward<ClientVpnEndpointIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user who established the terminated client connections.</p>
     */
    inline const Aws::String& GetUsername() const { return m_username; }
    template<typename UsernameT = Aws::String>
    void SetUsername(UsernameT&& value) { m_usernameHasBeenSet = true; m_username = std::forward<UsernameT>(value); }
    template<typename UsernameT = Aws::String>
    TerminateClientVpnConnectionsResponse& WithUsername(UsernameT&& value) { SetUsername(std::forward<UsernameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current state of the client connections.</p>
     */
    inline const Aws::Vector<TerminateConnectionStatus>& GetConnectionStatuses() const { return m_connectionStatuses; }
    template<typename ConnectionStatusesT = Aws::Vector<TerminateConnectionStatus>>
    void SetConnectionStatuses(ConnectionStatusesT&& value) { m_connectionStatusesHasBeenSet = true; m_connectionStatuses = std::forward<ConnectionStatusesT>(value); }
    template<typename ConnectionStatusesT = Aws::Vector<TerminateConnectionStatus>>
    TerminateClientVpnConnectionsResponse& WithConnectionStatuses(ConnectionStatusesT&& value) { SetConnectionStatuses(std::forward<ConnectionStatusesT>(value)); return *this;}
    template<typename ConnectionStatusesT = TerminateConnectionStatus>
    TerminateClientVpnConnectionsResponse& AddConnectionStatuses(ConnectionStatusesT&& value) { m_connectionStatusesHasBeenSet = true; m_connectionStatuses.emplace_back(std::forward<ConnectionStatusesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    TerminateClientVpnConnectionsResponse& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_clientVpnEndpointId;
    bool m_clientVpnEndpointIdHasBeenSet = false;

    Aws::String m_username;
    bool m_usernameHasBeenSet = false;

    Aws::Vector<TerminateConnectionStatus> m_connectionStatuses;
    bool m_connectionStatusesHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws

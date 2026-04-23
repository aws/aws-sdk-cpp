/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_EC2_API TerminateClientVpnConnectionsResponse
  {
  public:
    TerminateClientVpnConnectionsResponse();
    TerminateClientVpnConnectionsResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    TerminateClientVpnConnectionsResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>The ID of the Client VPN endpoint.</p>
     */
    inline const Aws::String& GetClientVpnEndpointId() const{ return m_clientVpnEndpointId; }

    /**
     * <p>The ID of the Client VPN endpoint.</p>
     */
    inline void SetClientVpnEndpointId(const Aws::String& value) { m_clientVpnEndpointId = value; }

    /**
     * <p>The ID of the Client VPN endpoint.</p>
     */
    inline void SetClientVpnEndpointId(Aws::String&& value) { m_clientVpnEndpointId = std::move(value); }

    /**
     * <p>The ID of the Client VPN endpoint.</p>
     */
    inline void SetClientVpnEndpointId(const char* value) { m_clientVpnEndpointId.assign(value); }

    /**
     * <p>The ID of the Client VPN endpoint.</p>
     */
    inline TerminateClientVpnConnectionsResponse& WithClientVpnEndpointId(const Aws::String& value) { SetClientVpnEndpointId(value); return *this;}

    /**
     * <p>The ID of the Client VPN endpoint.</p>
     */
    inline TerminateClientVpnConnectionsResponse& WithClientVpnEndpointId(Aws::String&& value) { SetClientVpnEndpointId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Client VPN endpoint.</p>
     */
    inline TerminateClientVpnConnectionsResponse& WithClientVpnEndpointId(const char* value) { SetClientVpnEndpointId(value); return *this;}


    /**
     * <p>The user who established the terminated client connections.</p>
     */
    inline const Aws::String& GetUsername() const{ return m_username; }

    /**
     * <p>The user who established the terminated client connections.</p>
     */
    inline void SetUsername(const Aws::String& value) { m_username = value; }

    /**
     * <p>The user who established the terminated client connections.</p>
     */
    inline void SetUsername(Aws::String&& value) { m_username = std::move(value); }

    /**
     * <p>The user who established the terminated client connections.</p>
     */
    inline void SetUsername(const char* value) { m_username.assign(value); }

    /**
     * <p>The user who established the terminated client connections.</p>
     */
    inline TerminateClientVpnConnectionsResponse& WithUsername(const Aws::String& value) { SetUsername(value); return *this;}

    /**
     * <p>The user who established the terminated client connections.</p>
     */
    inline TerminateClientVpnConnectionsResponse& WithUsername(Aws::String&& value) { SetUsername(std::move(value)); return *this;}

    /**
     * <p>The user who established the terminated client connections.</p>
     */
    inline TerminateClientVpnConnectionsResponse& WithUsername(const char* value) { SetUsername(value); return *this;}


    /**
     * <p>The current state of the client connections.</p>
     */
    inline const Aws::Vector<TerminateConnectionStatus>& GetConnectionStatuses() const{ return m_connectionStatuses; }

    /**
     * <p>The current state of the client connections.</p>
     */
    inline void SetConnectionStatuses(const Aws::Vector<TerminateConnectionStatus>& value) { m_connectionStatuses = value; }

    /**
     * <p>The current state of the client connections.</p>
     */
    inline void SetConnectionStatuses(Aws::Vector<TerminateConnectionStatus>&& value) { m_connectionStatuses = std::move(value); }

    /**
     * <p>The current state of the client connections.</p>
     */
    inline TerminateClientVpnConnectionsResponse& WithConnectionStatuses(const Aws::Vector<TerminateConnectionStatus>& value) { SetConnectionStatuses(value); return *this;}

    /**
     * <p>The current state of the client connections.</p>
     */
    inline TerminateClientVpnConnectionsResponse& WithConnectionStatuses(Aws::Vector<TerminateConnectionStatus>&& value) { SetConnectionStatuses(std::move(value)); return *this;}

    /**
     * <p>The current state of the client connections.</p>
     */
    inline TerminateClientVpnConnectionsResponse& AddConnectionStatuses(const TerminateConnectionStatus& value) { m_connectionStatuses.push_back(value); return *this; }

    /**
     * <p>The current state of the client connections.</p>
     */
    inline TerminateClientVpnConnectionsResponse& AddConnectionStatuses(TerminateConnectionStatus&& value) { m_connectionStatuses.push_back(std::move(value)); return *this; }


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline TerminateClientVpnConnectionsResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline TerminateClientVpnConnectionsResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::String m_clientVpnEndpointId;

    Aws::String m_username;

    Aws::Vector<TerminateConnectionStatus> m_connectionStatuses;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws

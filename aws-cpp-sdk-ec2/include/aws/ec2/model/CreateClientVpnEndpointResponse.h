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
#include <aws/ec2/model/ClientVpnEndpointStatus.h>
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
  class AWS_EC2_API CreateClientVpnEndpointResponse
  {
  public:
    CreateClientVpnEndpointResponse();
    CreateClientVpnEndpointResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    CreateClientVpnEndpointResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


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
    inline CreateClientVpnEndpointResponse& WithClientVpnEndpointId(const Aws::String& value) { SetClientVpnEndpointId(value); return *this;}

    /**
     * <p>The ID of the Client VPN endpoint.</p>
     */
    inline CreateClientVpnEndpointResponse& WithClientVpnEndpointId(Aws::String&& value) { SetClientVpnEndpointId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Client VPN endpoint.</p>
     */
    inline CreateClientVpnEndpointResponse& WithClientVpnEndpointId(const char* value) { SetClientVpnEndpointId(value); return *this;}


    /**
     * <p>The current state of the Client VPN endpoint.</p>
     */
    inline const ClientVpnEndpointStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The current state of the Client VPN endpoint.</p>
     */
    inline void SetStatus(const ClientVpnEndpointStatus& value) { m_status = value; }

    /**
     * <p>The current state of the Client VPN endpoint.</p>
     */
    inline void SetStatus(ClientVpnEndpointStatus&& value) { m_status = std::move(value); }

    /**
     * <p>The current state of the Client VPN endpoint.</p>
     */
    inline CreateClientVpnEndpointResponse& WithStatus(const ClientVpnEndpointStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The current state of the Client VPN endpoint.</p>
     */
    inline CreateClientVpnEndpointResponse& WithStatus(ClientVpnEndpointStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The DNS name to be used by clients when establishing their VPN session.</p>
     */
    inline const Aws::String& GetDnsName() const{ return m_dnsName; }

    /**
     * <p>The DNS name to be used by clients when establishing their VPN session.</p>
     */
    inline void SetDnsName(const Aws::String& value) { m_dnsName = value; }

    /**
     * <p>The DNS name to be used by clients when establishing their VPN session.</p>
     */
    inline void SetDnsName(Aws::String&& value) { m_dnsName = std::move(value); }

    /**
     * <p>The DNS name to be used by clients when establishing their VPN session.</p>
     */
    inline void SetDnsName(const char* value) { m_dnsName.assign(value); }

    /**
     * <p>The DNS name to be used by clients when establishing their VPN session.</p>
     */
    inline CreateClientVpnEndpointResponse& WithDnsName(const Aws::String& value) { SetDnsName(value); return *this;}

    /**
     * <p>The DNS name to be used by clients when establishing their VPN session.</p>
     */
    inline CreateClientVpnEndpointResponse& WithDnsName(Aws::String&& value) { SetDnsName(std::move(value)); return *this;}

    /**
     * <p>The DNS name to be used by clients when establishing their VPN session.</p>
     */
    inline CreateClientVpnEndpointResponse& WithDnsName(const char* value) { SetDnsName(value); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline CreateClientVpnEndpointResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline CreateClientVpnEndpointResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::String m_clientVpnEndpointId;

    ClientVpnEndpointStatus m_status;

    Aws::String m_dnsName;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
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
  class DeleteClientVpnEndpointResponse
  {
  public:
    AWS_EC2_API DeleteClientVpnEndpointResponse();
    AWS_EC2_API DeleteClientVpnEndpointResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API DeleteClientVpnEndpointResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


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
    inline DeleteClientVpnEndpointResponse& WithStatus(const ClientVpnEndpointStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The current state of the Client VPN endpoint.</p>
     */
    inline DeleteClientVpnEndpointResponse& WithStatus(ClientVpnEndpointStatus&& value) { SetStatus(std::move(value)); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline DeleteClientVpnEndpointResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DeleteClientVpnEndpointResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    ClientVpnEndpointStatus m_status;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws

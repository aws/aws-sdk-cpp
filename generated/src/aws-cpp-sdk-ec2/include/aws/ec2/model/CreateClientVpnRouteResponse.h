/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/ClientVpnRouteStatus.h>
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
  class CreateClientVpnRouteResponse
  {
  public:
    AWS_EC2_API CreateClientVpnRouteResponse();
    AWS_EC2_API CreateClientVpnRouteResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API CreateClientVpnRouteResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>The current state of the route.</p>
     */
    inline const ClientVpnRouteStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The current state of the route.</p>
     */
    inline void SetStatus(const ClientVpnRouteStatus& value) { m_status = value; }

    /**
     * <p>The current state of the route.</p>
     */
    inline void SetStatus(ClientVpnRouteStatus&& value) { m_status = std::move(value); }

    /**
     * <p>The current state of the route.</p>
     */
    inline CreateClientVpnRouteResponse& WithStatus(const ClientVpnRouteStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The current state of the route.</p>
     */
    inline CreateClientVpnRouteResponse& WithStatus(ClientVpnRouteStatus&& value) { SetStatus(std::move(value)); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline CreateClientVpnRouteResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline CreateClientVpnRouteResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    ClientVpnRouteStatus m_status;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws

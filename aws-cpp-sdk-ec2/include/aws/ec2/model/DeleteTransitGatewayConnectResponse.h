﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/TransitGatewayConnect.h>
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
  class AWS_EC2_API DeleteTransitGatewayConnectResponse
  {
  public:
    DeleteTransitGatewayConnectResponse();
    DeleteTransitGatewayConnectResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    DeleteTransitGatewayConnectResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>Information about the deleted Connect attachment.</p>
     */
    inline const TransitGatewayConnect& GetTransitGatewayConnect() const{ return m_transitGatewayConnect; }

    /**
     * <p>Information about the deleted Connect attachment.</p>
     */
    inline void SetTransitGatewayConnect(const TransitGatewayConnect& value) { m_transitGatewayConnect = value; }

    /**
     * <p>Information about the deleted Connect attachment.</p>
     */
    inline void SetTransitGatewayConnect(TransitGatewayConnect&& value) { m_transitGatewayConnect = std::move(value); }

    /**
     * <p>Information about the deleted Connect attachment.</p>
     */
    inline DeleteTransitGatewayConnectResponse& WithTransitGatewayConnect(const TransitGatewayConnect& value) { SetTransitGatewayConnect(value); return *this;}

    /**
     * <p>Information about the deleted Connect attachment.</p>
     */
    inline DeleteTransitGatewayConnectResponse& WithTransitGatewayConnect(TransitGatewayConnect&& value) { SetTransitGatewayConnect(std::move(value)); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline DeleteTransitGatewayConnectResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DeleteTransitGatewayConnectResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    TransitGatewayConnect m_transitGatewayConnect;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws

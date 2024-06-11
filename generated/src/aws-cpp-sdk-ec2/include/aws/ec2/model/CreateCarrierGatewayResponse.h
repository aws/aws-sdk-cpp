﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/CarrierGateway.h>
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
  class CreateCarrierGatewayResponse
  {
  public:
    AWS_EC2_API CreateCarrierGatewayResponse();
    AWS_EC2_API CreateCarrierGatewayResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API CreateCarrierGatewayResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>Information about the carrier gateway.</p>
     */
    inline const CarrierGateway& GetCarrierGateway() const{ return m_carrierGateway; }
    inline void SetCarrierGateway(const CarrierGateway& value) { m_carrierGateway = value; }
    inline void SetCarrierGateway(CarrierGateway&& value) { m_carrierGateway = std::move(value); }
    inline CreateCarrierGatewayResponse& WithCarrierGateway(const CarrierGateway& value) { SetCarrierGateway(value); return *this;}
    inline CreateCarrierGatewayResponse& WithCarrierGateway(CarrierGateway&& value) { SetCarrierGateway(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }
    inline CreateCarrierGatewayResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}
    inline CreateCarrierGatewayResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}
    ///@}
  private:

    CarrierGateway m_carrierGateway;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws

/**
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
    AWS_EC2_API CreateCarrierGatewayResponse() = default;
    AWS_EC2_API CreateCarrierGatewayResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API CreateCarrierGatewayResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>Information about the carrier gateway.</p>
     */
    inline const CarrierGateway& GetCarrierGateway() const { return m_carrierGateway; }
    template<typename CarrierGatewayT = CarrierGateway>
    void SetCarrierGateway(CarrierGatewayT&& value) { m_carrierGatewayHasBeenSet = true; m_carrierGateway = std::forward<CarrierGatewayT>(value); }
    template<typename CarrierGatewayT = CarrierGateway>
    CreateCarrierGatewayResponse& WithCarrierGateway(CarrierGatewayT&& value) { SetCarrierGateway(std::forward<CarrierGatewayT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    CreateCarrierGatewayResponse& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    CarrierGateway m_carrierGateway;
    bool m_carrierGatewayHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/TransitGatewayPropagation.h>
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
  class EnableTransitGatewayRouteTablePropagationResponse
  {
  public:
    AWS_EC2_API EnableTransitGatewayRouteTablePropagationResponse() = default;
    AWS_EC2_API EnableTransitGatewayRouteTablePropagationResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API EnableTransitGatewayRouteTablePropagationResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>Information about route propagation.</p>
     */
    inline const TransitGatewayPropagation& GetPropagation() const { return m_propagation; }
    template<typename PropagationT = TransitGatewayPropagation>
    void SetPropagation(PropagationT&& value) { m_propagationHasBeenSet = true; m_propagation = std::forward<PropagationT>(value); }
    template<typename PropagationT = TransitGatewayPropagation>
    EnableTransitGatewayRouteTablePropagationResponse& WithPropagation(PropagationT&& value) { SetPropagation(std::forward<PropagationT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    EnableTransitGatewayRouteTablePropagationResponse& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    TransitGatewayPropagation m_propagation;
    bool m_propagationHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws

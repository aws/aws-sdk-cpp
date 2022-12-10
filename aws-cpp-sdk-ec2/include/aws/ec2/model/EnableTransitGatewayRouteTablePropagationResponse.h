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
    AWS_EC2_API EnableTransitGatewayRouteTablePropagationResponse();
    AWS_EC2_API EnableTransitGatewayRouteTablePropagationResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API EnableTransitGatewayRouteTablePropagationResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>Information about route propagation.</p>
     */
    inline const TransitGatewayPropagation& GetPropagation() const{ return m_propagation; }

    /**
     * <p>Information about route propagation.</p>
     */
    inline void SetPropagation(const TransitGatewayPropagation& value) { m_propagation = value; }

    /**
     * <p>Information about route propagation.</p>
     */
    inline void SetPropagation(TransitGatewayPropagation&& value) { m_propagation = std::move(value); }

    /**
     * <p>Information about route propagation.</p>
     */
    inline EnableTransitGatewayRouteTablePropagationResponse& WithPropagation(const TransitGatewayPropagation& value) { SetPropagation(value); return *this;}

    /**
     * <p>Information about route propagation.</p>
     */
    inline EnableTransitGatewayRouteTablePropagationResponse& WithPropagation(TransitGatewayPropagation&& value) { SetPropagation(std::move(value)); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline EnableTransitGatewayRouteTablePropagationResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline EnableTransitGatewayRouteTablePropagationResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    TransitGatewayPropagation m_propagation;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws

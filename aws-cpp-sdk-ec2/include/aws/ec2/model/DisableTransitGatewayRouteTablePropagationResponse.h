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
  class AWS_EC2_API DisableTransitGatewayRouteTablePropagationResponse
  {
  public:
    DisableTransitGatewayRouteTablePropagationResponse();
    DisableTransitGatewayRouteTablePropagationResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    DisableTransitGatewayRouteTablePropagationResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


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
    inline DisableTransitGatewayRouteTablePropagationResponse& WithPropagation(const TransitGatewayPropagation& value) { SetPropagation(value); return *this;}

    /**
     * <p>Information about route propagation.</p>
     */
    inline DisableTransitGatewayRouteTablePropagationResponse& WithPropagation(TransitGatewayPropagation&& value) { SetPropagation(std::move(value)); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline DisableTransitGatewayRouteTablePropagationResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DisableTransitGatewayRouteTablePropagationResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    TransitGatewayPropagation m_propagation;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws

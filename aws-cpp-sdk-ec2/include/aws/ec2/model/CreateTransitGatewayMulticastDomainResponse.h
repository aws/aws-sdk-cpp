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
#include <aws/ec2/model/TransitGatewayMulticastDomain.h>
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
  class AWS_EC2_API CreateTransitGatewayMulticastDomainResponse
  {
  public:
    CreateTransitGatewayMulticastDomainResponse();
    CreateTransitGatewayMulticastDomainResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    CreateTransitGatewayMulticastDomainResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>Information about the transit gateway multicast domain.</p>
     */
    inline const TransitGatewayMulticastDomain& GetTransitGatewayMulticastDomain() const{ return m_transitGatewayMulticastDomain; }

    /**
     * <p>Information about the transit gateway multicast domain.</p>
     */
    inline void SetTransitGatewayMulticastDomain(const TransitGatewayMulticastDomain& value) { m_transitGatewayMulticastDomain = value; }

    /**
     * <p>Information about the transit gateway multicast domain.</p>
     */
    inline void SetTransitGatewayMulticastDomain(TransitGatewayMulticastDomain&& value) { m_transitGatewayMulticastDomain = std::move(value); }

    /**
     * <p>Information about the transit gateway multicast domain.</p>
     */
    inline CreateTransitGatewayMulticastDomainResponse& WithTransitGatewayMulticastDomain(const TransitGatewayMulticastDomain& value) { SetTransitGatewayMulticastDomain(value); return *this;}

    /**
     * <p>Information about the transit gateway multicast domain.</p>
     */
    inline CreateTransitGatewayMulticastDomainResponse& WithTransitGatewayMulticastDomain(TransitGatewayMulticastDomain&& value) { SetTransitGatewayMulticastDomain(std::move(value)); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline CreateTransitGatewayMulticastDomainResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline CreateTransitGatewayMulticastDomainResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    TransitGatewayMulticastDomain m_transitGatewayMulticastDomain;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws

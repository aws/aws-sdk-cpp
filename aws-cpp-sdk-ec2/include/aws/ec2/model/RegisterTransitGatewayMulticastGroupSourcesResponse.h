/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/TransitGatewayMulticastRegisteredGroupSources.h>
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
  class RegisterTransitGatewayMulticastGroupSourcesResponse
  {
  public:
    AWS_EC2_API RegisterTransitGatewayMulticastGroupSourcesResponse();
    AWS_EC2_API RegisterTransitGatewayMulticastGroupSourcesResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API RegisterTransitGatewayMulticastGroupSourcesResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>Information about the transit gateway multicast group sources.</p>
     */
    inline const TransitGatewayMulticastRegisteredGroupSources& GetRegisteredMulticastGroupSources() const{ return m_registeredMulticastGroupSources; }

    /**
     * <p>Information about the transit gateway multicast group sources.</p>
     */
    inline void SetRegisteredMulticastGroupSources(const TransitGatewayMulticastRegisteredGroupSources& value) { m_registeredMulticastGroupSources = value; }

    /**
     * <p>Information about the transit gateway multicast group sources.</p>
     */
    inline void SetRegisteredMulticastGroupSources(TransitGatewayMulticastRegisteredGroupSources&& value) { m_registeredMulticastGroupSources = std::move(value); }

    /**
     * <p>Information about the transit gateway multicast group sources.</p>
     */
    inline RegisterTransitGatewayMulticastGroupSourcesResponse& WithRegisteredMulticastGroupSources(const TransitGatewayMulticastRegisteredGroupSources& value) { SetRegisteredMulticastGroupSources(value); return *this;}

    /**
     * <p>Information about the transit gateway multicast group sources.</p>
     */
    inline RegisterTransitGatewayMulticastGroupSourcesResponse& WithRegisteredMulticastGroupSources(TransitGatewayMulticastRegisteredGroupSources&& value) { SetRegisteredMulticastGroupSources(std::move(value)); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline RegisterTransitGatewayMulticastGroupSourcesResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline RegisterTransitGatewayMulticastGroupSourcesResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    TransitGatewayMulticastRegisteredGroupSources m_registeredMulticastGroupSources;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws

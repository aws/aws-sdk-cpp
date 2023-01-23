/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/TransitGatewayMulticastDeregisteredGroupSources.h>
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
  class DeregisterTransitGatewayMulticastGroupSourcesResponse
  {
  public:
    AWS_EC2_API DeregisterTransitGatewayMulticastGroupSourcesResponse();
    AWS_EC2_API DeregisterTransitGatewayMulticastGroupSourcesResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API DeregisterTransitGatewayMulticastGroupSourcesResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>Information about the deregistered group sources.</p>
     */
    inline const TransitGatewayMulticastDeregisteredGroupSources& GetDeregisteredMulticastGroupSources() const{ return m_deregisteredMulticastGroupSources; }

    /**
     * <p>Information about the deregistered group sources.</p>
     */
    inline void SetDeregisteredMulticastGroupSources(const TransitGatewayMulticastDeregisteredGroupSources& value) { m_deregisteredMulticastGroupSources = value; }

    /**
     * <p>Information about the deregistered group sources.</p>
     */
    inline void SetDeregisteredMulticastGroupSources(TransitGatewayMulticastDeregisteredGroupSources&& value) { m_deregisteredMulticastGroupSources = std::move(value); }

    /**
     * <p>Information about the deregistered group sources.</p>
     */
    inline DeregisterTransitGatewayMulticastGroupSourcesResponse& WithDeregisteredMulticastGroupSources(const TransitGatewayMulticastDeregisteredGroupSources& value) { SetDeregisteredMulticastGroupSources(value); return *this;}

    /**
     * <p>Information about the deregistered group sources.</p>
     */
    inline DeregisterTransitGatewayMulticastGroupSourcesResponse& WithDeregisteredMulticastGroupSources(TransitGatewayMulticastDeregisteredGroupSources&& value) { SetDeregisteredMulticastGroupSources(std::move(value)); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline DeregisterTransitGatewayMulticastGroupSourcesResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DeregisterTransitGatewayMulticastGroupSourcesResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    TransitGatewayMulticastDeregisteredGroupSources m_deregisteredMulticastGroupSources;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws

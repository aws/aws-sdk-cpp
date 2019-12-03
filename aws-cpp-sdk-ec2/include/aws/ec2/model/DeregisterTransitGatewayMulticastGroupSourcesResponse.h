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
  class AWS_EC2_API DeregisterTransitGatewayMulticastGroupSourcesResponse
  {
  public:
    DeregisterTransitGatewayMulticastGroupSourcesResponse();
    DeregisterTransitGatewayMulticastGroupSourcesResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    DeregisterTransitGatewayMulticastGroupSourcesResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


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

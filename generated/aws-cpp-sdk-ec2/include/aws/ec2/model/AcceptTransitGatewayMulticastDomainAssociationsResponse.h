﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/TransitGatewayMulticastDomainAssociations.h>
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
  class AWS_EC2_API AcceptTransitGatewayMulticastDomainAssociationsResponse
  {
  public:
    AcceptTransitGatewayMulticastDomainAssociationsResponse();
    AcceptTransitGatewayMulticastDomainAssociationsResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AcceptTransitGatewayMulticastDomainAssociationsResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    
    inline const TransitGatewayMulticastDomainAssociations& GetAssociations() const{ return m_associations; }

    
    inline void SetAssociations(const TransitGatewayMulticastDomainAssociations& value) { m_associations = value; }

    
    inline void SetAssociations(TransitGatewayMulticastDomainAssociations&& value) { m_associations = std::move(value); }

    
    inline AcceptTransitGatewayMulticastDomainAssociationsResponse& WithAssociations(const TransitGatewayMulticastDomainAssociations& value) { SetAssociations(value); return *this;}

    
    inline AcceptTransitGatewayMulticastDomainAssociationsResponse& WithAssociations(TransitGatewayMulticastDomainAssociations&& value) { SetAssociations(std::move(value)); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline AcceptTransitGatewayMulticastDomainAssociationsResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline AcceptTransitGatewayMulticastDomainAssociationsResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    TransitGatewayMulticastDomainAssociations m_associations;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws

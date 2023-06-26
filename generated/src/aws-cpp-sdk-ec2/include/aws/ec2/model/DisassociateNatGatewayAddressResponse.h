﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <aws/ec2/model/NatGatewayAddress.h>
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
  class DisassociateNatGatewayAddressResponse
  {
  public:
    AWS_EC2_API DisassociateNatGatewayAddressResponse();
    AWS_EC2_API DisassociateNatGatewayAddressResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API DisassociateNatGatewayAddressResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>The NAT gateway ID.</p>
     */
    inline const Aws::String& GetNatGatewayId() const{ return m_natGatewayId; }

    /**
     * <p>The NAT gateway ID.</p>
     */
    inline void SetNatGatewayId(const Aws::String& value) { m_natGatewayId = value; }

    /**
     * <p>The NAT gateway ID.</p>
     */
    inline void SetNatGatewayId(Aws::String&& value) { m_natGatewayId = std::move(value); }

    /**
     * <p>The NAT gateway ID.</p>
     */
    inline void SetNatGatewayId(const char* value) { m_natGatewayId.assign(value); }

    /**
     * <p>The NAT gateway ID.</p>
     */
    inline DisassociateNatGatewayAddressResponse& WithNatGatewayId(const Aws::String& value) { SetNatGatewayId(value); return *this;}

    /**
     * <p>The NAT gateway ID.</p>
     */
    inline DisassociateNatGatewayAddressResponse& WithNatGatewayId(Aws::String&& value) { SetNatGatewayId(std::move(value)); return *this;}

    /**
     * <p>The NAT gateway ID.</p>
     */
    inline DisassociateNatGatewayAddressResponse& WithNatGatewayId(const char* value) { SetNatGatewayId(value); return *this;}


    /**
     * <p>Information about the NAT gateway IP addresses.</p>
     */
    inline const Aws::Vector<NatGatewayAddress>& GetNatGatewayAddresses() const{ return m_natGatewayAddresses; }

    /**
     * <p>Information about the NAT gateway IP addresses.</p>
     */
    inline void SetNatGatewayAddresses(const Aws::Vector<NatGatewayAddress>& value) { m_natGatewayAddresses = value; }

    /**
     * <p>Information about the NAT gateway IP addresses.</p>
     */
    inline void SetNatGatewayAddresses(Aws::Vector<NatGatewayAddress>&& value) { m_natGatewayAddresses = std::move(value); }

    /**
     * <p>Information about the NAT gateway IP addresses.</p>
     */
    inline DisassociateNatGatewayAddressResponse& WithNatGatewayAddresses(const Aws::Vector<NatGatewayAddress>& value) { SetNatGatewayAddresses(value); return *this;}

    /**
     * <p>Information about the NAT gateway IP addresses.</p>
     */
    inline DisassociateNatGatewayAddressResponse& WithNatGatewayAddresses(Aws::Vector<NatGatewayAddress>&& value) { SetNatGatewayAddresses(std::move(value)); return *this;}

    /**
     * <p>Information about the NAT gateway IP addresses.</p>
     */
    inline DisassociateNatGatewayAddressResponse& AddNatGatewayAddresses(const NatGatewayAddress& value) { m_natGatewayAddresses.push_back(value); return *this; }

    /**
     * <p>Information about the NAT gateway IP addresses.</p>
     */
    inline DisassociateNatGatewayAddressResponse& AddNatGatewayAddresses(NatGatewayAddress&& value) { m_natGatewayAddresses.push_back(std::move(value)); return *this; }


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline DisassociateNatGatewayAddressResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DisassociateNatGatewayAddressResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::String m_natGatewayId;

    Aws::Vector<NatGatewayAddress> m_natGatewayAddresses;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws

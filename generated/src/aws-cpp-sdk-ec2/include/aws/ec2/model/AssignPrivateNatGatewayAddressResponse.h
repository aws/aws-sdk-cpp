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
  class AssignPrivateNatGatewayAddressResponse
  {
  public:
    AWS_EC2_API AssignPrivateNatGatewayAddressResponse();
    AWS_EC2_API AssignPrivateNatGatewayAddressResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API AssignPrivateNatGatewayAddressResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The ID of the NAT gateway.</p>
     */
    inline const Aws::String& GetNatGatewayId() const{ return m_natGatewayId; }
    inline void SetNatGatewayId(const Aws::String& value) { m_natGatewayId = value; }
    inline void SetNatGatewayId(Aws::String&& value) { m_natGatewayId = std::move(value); }
    inline void SetNatGatewayId(const char* value) { m_natGatewayId.assign(value); }
    inline AssignPrivateNatGatewayAddressResponse& WithNatGatewayId(const Aws::String& value) { SetNatGatewayId(value); return *this;}
    inline AssignPrivateNatGatewayAddressResponse& WithNatGatewayId(Aws::String&& value) { SetNatGatewayId(std::move(value)); return *this;}
    inline AssignPrivateNatGatewayAddressResponse& WithNatGatewayId(const char* value) { SetNatGatewayId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>NAT gateway IP addresses.</p>
     */
    inline const Aws::Vector<NatGatewayAddress>& GetNatGatewayAddresses() const{ return m_natGatewayAddresses; }
    inline void SetNatGatewayAddresses(const Aws::Vector<NatGatewayAddress>& value) { m_natGatewayAddresses = value; }
    inline void SetNatGatewayAddresses(Aws::Vector<NatGatewayAddress>&& value) { m_natGatewayAddresses = std::move(value); }
    inline AssignPrivateNatGatewayAddressResponse& WithNatGatewayAddresses(const Aws::Vector<NatGatewayAddress>& value) { SetNatGatewayAddresses(value); return *this;}
    inline AssignPrivateNatGatewayAddressResponse& WithNatGatewayAddresses(Aws::Vector<NatGatewayAddress>&& value) { SetNatGatewayAddresses(std::move(value)); return *this;}
    inline AssignPrivateNatGatewayAddressResponse& AddNatGatewayAddresses(const NatGatewayAddress& value) { m_natGatewayAddresses.push_back(value); return *this; }
    inline AssignPrivateNatGatewayAddressResponse& AddNatGatewayAddresses(NatGatewayAddress&& value) { m_natGatewayAddresses.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }
    inline AssignPrivateNatGatewayAddressResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}
    inline AssignPrivateNatGatewayAddressResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_natGatewayId;

    Aws::Vector<NatGatewayAddress> m_natGatewayAddresses;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws

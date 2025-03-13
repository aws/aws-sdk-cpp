/**
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
  class AssociateNatGatewayAddressResponse
  {
  public:
    AWS_EC2_API AssociateNatGatewayAddressResponse() = default;
    AWS_EC2_API AssociateNatGatewayAddressResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API AssociateNatGatewayAddressResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The ID of the NAT gateway.</p>
     */
    inline const Aws::String& GetNatGatewayId() const { return m_natGatewayId; }
    template<typename NatGatewayIdT = Aws::String>
    void SetNatGatewayId(NatGatewayIdT&& value) { m_natGatewayIdHasBeenSet = true; m_natGatewayId = std::forward<NatGatewayIdT>(value); }
    template<typename NatGatewayIdT = Aws::String>
    AssociateNatGatewayAddressResponse& WithNatGatewayId(NatGatewayIdT&& value) { SetNatGatewayId(std::forward<NatGatewayIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IP addresses.</p>
     */
    inline const Aws::Vector<NatGatewayAddress>& GetNatGatewayAddresses() const { return m_natGatewayAddresses; }
    template<typename NatGatewayAddressesT = Aws::Vector<NatGatewayAddress>>
    void SetNatGatewayAddresses(NatGatewayAddressesT&& value) { m_natGatewayAddressesHasBeenSet = true; m_natGatewayAddresses = std::forward<NatGatewayAddressesT>(value); }
    template<typename NatGatewayAddressesT = Aws::Vector<NatGatewayAddress>>
    AssociateNatGatewayAddressResponse& WithNatGatewayAddresses(NatGatewayAddressesT&& value) { SetNatGatewayAddresses(std::forward<NatGatewayAddressesT>(value)); return *this;}
    template<typename NatGatewayAddressesT = NatGatewayAddress>
    AssociateNatGatewayAddressResponse& AddNatGatewayAddresses(NatGatewayAddressesT&& value) { m_natGatewayAddressesHasBeenSet = true; m_natGatewayAddresses.emplace_back(std::forward<NatGatewayAddressesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    AssociateNatGatewayAddressResponse& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_natGatewayId;
    bool m_natGatewayIdHasBeenSet = false;

    Aws::Vector<NatGatewayAddress> m_natGatewayAddresses;
    bool m_natGatewayAddressesHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws

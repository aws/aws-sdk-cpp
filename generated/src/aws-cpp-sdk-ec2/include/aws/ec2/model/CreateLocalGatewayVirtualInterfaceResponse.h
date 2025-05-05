/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/LocalGatewayVirtualInterface.h>
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
  class CreateLocalGatewayVirtualInterfaceResponse
  {
  public:
    AWS_EC2_API CreateLocalGatewayVirtualInterfaceResponse() = default;
    AWS_EC2_API CreateLocalGatewayVirtualInterfaceResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API CreateLocalGatewayVirtualInterfaceResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>Information about the local gateway virtual interface.</p>
     */
    inline const LocalGatewayVirtualInterface& GetLocalGatewayVirtualInterface() const { return m_localGatewayVirtualInterface; }
    template<typename LocalGatewayVirtualInterfaceT = LocalGatewayVirtualInterface>
    void SetLocalGatewayVirtualInterface(LocalGatewayVirtualInterfaceT&& value) { m_localGatewayVirtualInterfaceHasBeenSet = true; m_localGatewayVirtualInterface = std::forward<LocalGatewayVirtualInterfaceT>(value); }
    template<typename LocalGatewayVirtualInterfaceT = LocalGatewayVirtualInterface>
    CreateLocalGatewayVirtualInterfaceResponse& WithLocalGatewayVirtualInterface(LocalGatewayVirtualInterfaceT&& value) { SetLocalGatewayVirtualInterface(std::forward<LocalGatewayVirtualInterfaceT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    CreateLocalGatewayVirtualInterfaceResponse& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    LocalGatewayVirtualInterface m_localGatewayVirtualInterface;
    bool m_localGatewayVirtualInterfaceHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws

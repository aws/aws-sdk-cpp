/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/LocalGatewayVirtualInterfaceGroup.h>
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
  class DeleteLocalGatewayVirtualInterfaceGroupResponse
  {
  public:
    AWS_EC2_API DeleteLocalGatewayVirtualInterfaceGroupResponse() = default;
    AWS_EC2_API DeleteLocalGatewayVirtualInterfaceGroupResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API DeleteLocalGatewayVirtualInterfaceGroupResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>Information about the deleted local gateway virtual interface group.</p>
     */
    inline const LocalGatewayVirtualInterfaceGroup& GetLocalGatewayVirtualInterfaceGroup() const { return m_localGatewayVirtualInterfaceGroup; }
    template<typename LocalGatewayVirtualInterfaceGroupT = LocalGatewayVirtualInterfaceGroup>
    void SetLocalGatewayVirtualInterfaceGroup(LocalGatewayVirtualInterfaceGroupT&& value) { m_localGatewayVirtualInterfaceGroupHasBeenSet = true; m_localGatewayVirtualInterfaceGroup = std::forward<LocalGatewayVirtualInterfaceGroupT>(value); }
    template<typename LocalGatewayVirtualInterfaceGroupT = LocalGatewayVirtualInterfaceGroup>
    DeleteLocalGatewayVirtualInterfaceGroupResponse& WithLocalGatewayVirtualInterfaceGroup(LocalGatewayVirtualInterfaceGroupT&& value) { SetLocalGatewayVirtualInterfaceGroup(std::forward<LocalGatewayVirtualInterfaceGroupT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    DeleteLocalGatewayVirtualInterfaceGroupResponse& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    LocalGatewayVirtualInterfaceGroup m_localGatewayVirtualInterfaceGroup;
    bool m_localGatewayVirtualInterfaceGroupHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws

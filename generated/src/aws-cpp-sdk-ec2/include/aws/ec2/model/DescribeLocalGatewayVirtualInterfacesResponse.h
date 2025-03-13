/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <aws/ec2/model/LocalGatewayVirtualInterface.h>
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
  class DescribeLocalGatewayVirtualInterfacesResponse
  {
  public:
    AWS_EC2_API DescribeLocalGatewayVirtualInterfacesResponse() = default;
    AWS_EC2_API DescribeLocalGatewayVirtualInterfacesResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API DescribeLocalGatewayVirtualInterfacesResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>Information about the virtual interfaces.</p>
     */
    inline const Aws::Vector<LocalGatewayVirtualInterface>& GetLocalGatewayVirtualInterfaces() const { return m_localGatewayVirtualInterfaces; }
    template<typename LocalGatewayVirtualInterfacesT = Aws::Vector<LocalGatewayVirtualInterface>>
    void SetLocalGatewayVirtualInterfaces(LocalGatewayVirtualInterfacesT&& value) { m_localGatewayVirtualInterfacesHasBeenSet = true; m_localGatewayVirtualInterfaces = std::forward<LocalGatewayVirtualInterfacesT>(value); }
    template<typename LocalGatewayVirtualInterfacesT = Aws::Vector<LocalGatewayVirtualInterface>>
    DescribeLocalGatewayVirtualInterfacesResponse& WithLocalGatewayVirtualInterfaces(LocalGatewayVirtualInterfacesT&& value) { SetLocalGatewayVirtualInterfaces(std::forward<LocalGatewayVirtualInterfacesT>(value)); return *this;}
    template<typename LocalGatewayVirtualInterfacesT = LocalGatewayVirtualInterface>
    DescribeLocalGatewayVirtualInterfacesResponse& AddLocalGatewayVirtualInterfaces(LocalGatewayVirtualInterfacesT&& value) { m_localGatewayVirtualInterfacesHasBeenSet = true; m_localGatewayVirtualInterfaces.emplace_back(std::forward<LocalGatewayVirtualInterfacesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeLocalGatewayVirtualInterfacesResponse& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    DescribeLocalGatewayVirtualInterfacesResponse& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<LocalGatewayVirtualInterface> m_localGatewayVirtualInterfaces;
    bool m_localGatewayVirtualInterfacesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws

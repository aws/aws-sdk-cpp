/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <aws/ec2/model/ServiceLinkVirtualInterface.h>
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
  class DescribeServiceLinkVirtualInterfacesResponse
  {
  public:
    AWS_EC2_API DescribeServiceLinkVirtualInterfacesResponse() = default;
    AWS_EC2_API DescribeServiceLinkVirtualInterfacesResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API DescribeServiceLinkVirtualInterfacesResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>Describes the service link virtual interfaces.</p>
     */
    inline const Aws::Vector<ServiceLinkVirtualInterface>& GetServiceLinkVirtualInterfaces() const { return m_serviceLinkVirtualInterfaces; }
    template<typename ServiceLinkVirtualInterfacesT = Aws::Vector<ServiceLinkVirtualInterface>>
    void SetServiceLinkVirtualInterfaces(ServiceLinkVirtualInterfacesT&& value) { m_serviceLinkVirtualInterfacesHasBeenSet = true; m_serviceLinkVirtualInterfaces = std::forward<ServiceLinkVirtualInterfacesT>(value); }
    template<typename ServiceLinkVirtualInterfacesT = Aws::Vector<ServiceLinkVirtualInterface>>
    DescribeServiceLinkVirtualInterfacesResponse& WithServiceLinkVirtualInterfaces(ServiceLinkVirtualInterfacesT&& value) { SetServiceLinkVirtualInterfaces(std::forward<ServiceLinkVirtualInterfacesT>(value)); return *this;}
    template<typename ServiceLinkVirtualInterfacesT = ServiceLinkVirtualInterface>
    DescribeServiceLinkVirtualInterfacesResponse& AddServiceLinkVirtualInterfaces(ServiceLinkVirtualInterfacesT&& value) { m_serviceLinkVirtualInterfacesHasBeenSet = true; m_serviceLinkVirtualInterfaces.emplace_back(std::forward<ServiceLinkVirtualInterfacesT>(value)); return *this; }
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
    DescribeServiceLinkVirtualInterfacesResponse& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    DescribeServiceLinkVirtualInterfacesResponse& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ServiceLinkVirtualInterface> m_serviceLinkVirtualInterfaces;
    bool m_serviceLinkVirtualInterfacesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws

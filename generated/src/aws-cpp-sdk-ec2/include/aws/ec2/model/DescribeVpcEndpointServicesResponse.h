/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <aws/ec2/model/ServiceDetail.h>
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
  class DescribeVpcEndpointServicesResponse
  {
  public:
    AWS_EC2_API DescribeVpcEndpointServicesResponse() = default;
    AWS_EC2_API DescribeVpcEndpointServicesResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API DescribeVpcEndpointServicesResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The supported services.</p>
     */
    inline const Aws::Vector<Aws::String>& GetServiceNames() const { return m_serviceNames; }
    template<typename ServiceNamesT = Aws::Vector<Aws::String>>
    void SetServiceNames(ServiceNamesT&& value) { m_serviceNamesHasBeenSet = true; m_serviceNames = std::forward<ServiceNamesT>(value); }
    template<typename ServiceNamesT = Aws::Vector<Aws::String>>
    DescribeVpcEndpointServicesResponse& WithServiceNames(ServiceNamesT&& value) { SetServiceNames(std::forward<ServiceNamesT>(value)); return *this;}
    template<typename ServiceNamesT = Aws::String>
    DescribeVpcEndpointServicesResponse& AddServiceNames(ServiceNamesT&& value) { m_serviceNamesHasBeenSet = true; m_serviceNames.emplace_back(std::forward<ServiceNamesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Information about the service.</p>
     */
    inline const Aws::Vector<ServiceDetail>& GetServiceDetails() const { return m_serviceDetails; }
    template<typename ServiceDetailsT = Aws::Vector<ServiceDetail>>
    void SetServiceDetails(ServiceDetailsT&& value) { m_serviceDetailsHasBeenSet = true; m_serviceDetails = std::forward<ServiceDetailsT>(value); }
    template<typename ServiceDetailsT = Aws::Vector<ServiceDetail>>
    DescribeVpcEndpointServicesResponse& WithServiceDetails(ServiceDetailsT&& value) { SetServiceDetails(std::forward<ServiceDetailsT>(value)); return *this;}
    template<typename ServiceDetailsT = ServiceDetail>
    DescribeVpcEndpointServicesResponse& AddServiceDetails(ServiceDetailsT&& value) { m_serviceDetailsHasBeenSet = true; m_serviceDetails.emplace_back(std::forward<ServiceDetailsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token to use when requesting the next set of items. If there are no
     * additional items to return, the string is empty.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeVpcEndpointServicesResponse& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    DescribeVpcEndpointServicesResponse& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_serviceNames;
    bool m_serviceNamesHasBeenSet = false;

    Aws::Vector<ServiceDetail> m_serviceDetails;
    bool m_serviceDetailsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws

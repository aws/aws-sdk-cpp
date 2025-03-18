/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <aws/ec2/model/InternetGateway.h>
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
  class DescribeInternetGatewaysResponse
  {
  public:
    AWS_EC2_API DescribeInternetGatewaysResponse() = default;
    AWS_EC2_API DescribeInternetGatewaysResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API DescribeInternetGatewaysResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>Information about the internet gateways.</p>
     */
    inline const Aws::Vector<InternetGateway>& GetInternetGateways() const { return m_internetGateways; }
    template<typename InternetGatewaysT = Aws::Vector<InternetGateway>>
    void SetInternetGateways(InternetGatewaysT&& value) { m_internetGatewaysHasBeenSet = true; m_internetGateways = std::forward<InternetGatewaysT>(value); }
    template<typename InternetGatewaysT = Aws::Vector<InternetGateway>>
    DescribeInternetGatewaysResponse& WithInternetGateways(InternetGatewaysT&& value) { SetInternetGateways(std::forward<InternetGatewaysT>(value)); return *this;}
    template<typename InternetGatewaysT = InternetGateway>
    DescribeInternetGatewaysResponse& AddInternetGateways(InternetGatewaysT&& value) { m_internetGatewaysHasBeenSet = true; m_internetGateways.emplace_back(std::forward<InternetGatewaysT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token to include in another request to get the next page of items. This
     * value is <code>null</code> when there are no more items to return.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeInternetGatewaysResponse& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    DescribeInternetGatewaysResponse& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<InternetGateway> m_internetGateways;
    bool m_internetGatewaysHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws

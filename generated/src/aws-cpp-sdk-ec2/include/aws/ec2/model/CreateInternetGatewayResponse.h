/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/InternetGateway.h>
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
  class CreateInternetGatewayResponse
  {
  public:
    AWS_EC2_API CreateInternetGatewayResponse() = default;
    AWS_EC2_API CreateInternetGatewayResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API CreateInternetGatewayResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>Information about the internet gateway.</p>
     */
    inline const InternetGateway& GetInternetGateway() const { return m_internetGateway; }
    template<typename InternetGatewayT = InternetGateway>
    void SetInternetGateway(InternetGatewayT&& value) { m_internetGatewayHasBeenSet = true; m_internetGateway = std::forward<InternetGatewayT>(value); }
    template<typename InternetGatewayT = InternetGateway>
    CreateInternetGatewayResponse& WithInternetGateway(InternetGatewayT&& value) { SetInternetGateway(std::forward<InternetGatewayT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    CreateInternetGatewayResponse& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    InternetGateway m_internetGateway;
    bool m_internetGatewayHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws

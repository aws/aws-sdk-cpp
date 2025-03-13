/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/DhcpOptions.h>
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
  class CreateDhcpOptionsResponse
  {
  public:
    AWS_EC2_API CreateDhcpOptionsResponse() = default;
    AWS_EC2_API CreateDhcpOptionsResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API CreateDhcpOptionsResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>A set of DHCP options.</p>
     */
    inline const DhcpOptions& GetDhcpOptions() const { return m_dhcpOptions; }
    template<typename DhcpOptionsT = DhcpOptions>
    void SetDhcpOptions(DhcpOptionsT&& value) { m_dhcpOptionsHasBeenSet = true; m_dhcpOptions = std::forward<DhcpOptionsT>(value); }
    template<typename DhcpOptionsT = DhcpOptions>
    CreateDhcpOptionsResponse& WithDhcpOptions(DhcpOptionsT&& value) { SetDhcpOptions(std::forward<DhcpOptionsT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    CreateDhcpOptionsResponse& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    DhcpOptions m_dhcpOptions;
    bool m_dhcpOptionsHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws

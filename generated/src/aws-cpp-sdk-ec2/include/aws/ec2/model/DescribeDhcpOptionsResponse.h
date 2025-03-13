/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <aws/ec2/model/DhcpOptions.h>
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
  class DescribeDhcpOptionsResponse
  {
  public:
    AWS_EC2_API DescribeDhcpOptionsResponse() = default;
    AWS_EC2_API DescribeDhcpOptionsResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API DescribeDhcpOptionsResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The token to include in another request to get the next page of items. This
     * value is <code>null</code> when there are no more items to return.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeDhcpOptionsResponse& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the DHCP options sets.</p>
     */
    inline const Aws::Vector<DhcpOptions>& GetDhcpOptions() const { return m_dhcpOptions; }
    template<typename DhcpOptionsT = Aws::Vector<DhcpOptions>>
    void SetDhcpOptions(DhcpOptionsT&& value) { m_dhcpOptionsHasBeenSet = true; m_dhcpOptions = std::forward<DhcpOptionsT>(value); }
    template<typename DhcpOptionsT = Aws::Vector<DhcpOptions>>
    DescribeDhcpOptionsResponse& WithDhcpOptions(DhcpOptionsT&& value) { SetDhcpOptions(std::forward<DhcpOptionsT>(value)); return *this;}
    template<typename DhcpOptionsT = DhcpOptions>
    DescribeDhcpOptionsResponse& AddDhcpOptions(DhcpOptionsT&& value) { m_dhcpOptionsHasBeenSet = true; m_dhcpOptions.emplace_back(std::forward<DhcpOptionsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    DescribeDhcpOptionsResponse& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<DhcpOptions> m_dhcpOptions;
    bool m_dhcpOptionsHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws

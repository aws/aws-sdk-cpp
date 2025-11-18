/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <aws/ec2/model/VpnConcentrator.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Xml {
class XmlDocument;
}  // namespace Xml
}  // namespace Utils
namespace EC2 {
namespace Model {
class DescribeVpnConcentratorsResponse {
 public:
  AWS_EC2_API DescribeVpnConcentratorsResponse() = default;
  AWS_EC2_API DescribeVpnConcentratorsResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
  AWS_EC2_API DescribeVpnConcentratorsResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

  ///@{
  /**
   * <p>Information about the VPN concentrators.</p>
   */
  inline const Aws::Vector<VpnConcentrator>& GetVpnConcentrators() const { return m_vpnConcentrators; }
  template <typename VpnConcentratorsT = Aws::Vector<VpnConcentrator>>
  void SetVpnConcentrators(VpnConcentratorsT&& value) {
    m_vpnConcentratorsHasBeenSet = true;
    m_vpnConcentrators = std::forward<VpnConcentratorsT>(value);
  }
  template <typename VpnConcentratorsT = Aws::Vector<VpnConcentrator>>
  DescribeVpnConcentratorsResponse& WithVpnConcentrators(VpnConcentratorsT&& value) {
    SetVpnConcentrators(std::forward<VpnConcentratorsT>(value));
    return *this;
  }
  template <typename VpnConcentratorsT = VpnConcentrator>
  DescribeVpnConcentratorsResponse& AddVpnConcentrators(VpnConcentratorsT&& value) {
    m_vpnConcentratorsHasBeenSet = true;
    m_vpnConcentrators.emplace_back(std::forward<VpnConcentratorsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The token to use to retrieve the next page of results. This value is
   * <code>null</code> when there are no more results to return.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  DescribeVpnConcentratorsResponse& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
  template <typename ResponseMetadataT = ResponseMetadata>
  void SetResponseMetadata(ResponseMetadataT&& value) {
    m_responseMetadataHasBeenSet = true;
    m_responseMetadata = std::forward<ResponseMetadataT>(value);
  }
  template <typename ResponseMetadataT = ResponseMetadata>
  DescribeVpnConcentratorsResponse& WithResponseMetadata(ResponseMetadataT&& value) {
    SetResponseMetadata(std::forward<ResponseMetadataT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<VpnConcentrator> m_vpnConcentrators;
  bool m_vpnConcentratorsHasBeenSet = false;

  Aws::String m_nextToken;
  bool m_nextTokenHasBeenSet = false;

  ResponseMetadata m_responseMetadata;
  bool m_responseMetadataHasBeenSet = false;
};

}  // namespace Model
}  // namespace EC2
}  // namespace Aws

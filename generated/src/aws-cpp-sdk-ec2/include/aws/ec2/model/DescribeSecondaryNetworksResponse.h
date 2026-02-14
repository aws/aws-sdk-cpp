/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <aws/ec2/model/SecondaryNetwork.h>

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
class DescribeSecondaryNetworksResponse {
 public:
  AWS_EC2_API DescribeSecondaryNetworksResponse() = default;
  AWS_EC2_API DescribeSecondaryNetworksResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
  AWS_EC2_API DescribeSecondaryNetworksResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

  ///@{
  /**
   * <p>Information about the secondary networks.</p>
   */
  inline const Aws::Vector<SecondaryNetwork>& GetSecondaryNetworks() const { return m_secondaryNetworks; }
  template <typename SecondaryNetworksT = Aws::Vector<SecondaryNetwork>>
  void SetSecondaryNetworks(SecondaryNetworksT&& value) {
    m_secondaryNetworksHasBeenSet = true;
    m_secondaryNetworks = std::forward<SecondaryNetworksT>(value);
  }
  template <typename SecondaryNetworksT = Aws::Vector<SecondaryNetwork>>
  DescribeSecondaryNetworksResponse& WithSecondaryNetworks(SecondaryNetworksT&& value) {
    SetSecondaryNetworks(std::forward<SecondaryNetworksT>(value));
    return *this;
  }
  template <typename SecondaryNetworksT = SecondaryNetwork>
  DescribeSecondaryNetworksResponse& AddSecondaryNetworks(SecondaryNetworksT&& value) {
    m_secondaryNetworksHasBeenSet = true;
    m_secondaryNetworks.emplace_back(std::forward<SecondaryNetworksT>(value));
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
  DescribeSecondaryNetworksResponse& WithNextToken(NextTokenT&& value) {
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
  DescribeSecondaryNetworksResponse& WithResponseMetadata(ResponseMetadataT&& value) {
    SetResponseMetadata(std::forward<ResponseMetadataT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetResponseCode() const { return m_responseCode; }

 private:
  Aws::Vector<SecondaryNetwork> m_secondaryNetworks;

  Aws::String m_nextToken;

  ResponseMetadata m_responseMetadata;
  Aws::Http::HttpResponseCode m_responseCode;
  bool m_secondaryNetworksHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_responseMetadataHasBeenSet = false;
};

}  // namespace Model
}  // namespace EC2
}  // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <aws/ec2/model/SecondarySubnet.h>

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
class DescribeSecondarySubnetsResponse {
 public:
  AWS_EC2_API DescribeSecondarySubnetsResponse() = default;
  AWS_EC2_API DescribeSecondarySubnetsResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
  AWS_EC2_API DescribeSecondarySubnetsResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

  ///@{
  /**
   * <p>Information about the secondary subnets.</p>
   */
  inline const Aws::Vector<SecondarySubnet>& GetSecondarySubnets() const { return m_secondarySubnets; }
  template <typename SecondarySubnetsT = Aws::Vector<SecondarySubnet>>
  void SetSecondarySubnets(SecondarySubnetsT&& value) {
    m_secondarySubnetsHasBeenSet = true;
    m_secondarySubnets = std::forward<SecondarySubnetsT>(value);
  }
  template <typename SecondarySubnetsT = Aws::Vector<SecondarySubnet>>
  DescribeSecondarySubnetsResponse& WithSecondarySubnets(SecondarySubnetsT&& value) {
    SetSecondarySubnets(std::forward<SecondarySubnetsT>(value));
    return *this;
  }
  template <typename SecondarySubnetsT = SecondarySubnet>
  DescribeSecondarySubnetsResponse& AddSecondarySubnets(SecondarySubnetsT&& value) {
    m_secondarySubnetsHasBeenSet = true;
    m_secondarySubnets.emplace_back(std::forward<SecondarySubnetsT>(value));
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
  DescribeSecondarySubnetsResponse& WithNextToken(NextTokenT&& value) {
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
  DescribeSecondarySubnetsResponse& WithResponseMetadata(ResponseMetadataT&& value) {
    SetResponseMetadata(std::forward<ResponseMetadataT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<SecondarySubnet> m_secondarySubnets;

  Aws::String m_nextToken;

  ResponseMetadata m_responseMetadata;
  bool m_secondarySubnetsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_responseMetadataHasBeenSet = false;
};

}  // namespace Model
}  // namespace EC2
}  // namespace Aws

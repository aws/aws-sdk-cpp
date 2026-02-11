/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <aws/ec2/model/SecondaryInterface.h>

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
class DescribeSecondaryInterfacesResponse {
 public:
  AWS_EC2_API DescribeSecondaryInterfacesResponse() = default;
  AWS_EC2_API DescribeSecondaryInterfacesResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
  AWS_EC2_API DescribeSecondaryInterfacesResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

  ///@{
  /**
   * <p>Information about the secondary interfaces.</p>
   */
  inline const Aws::Vector<SecondaryInterface>& GetSecondaryInterfaces() const { return m_secondaryInterfaces; }
  template <typename SecondaryInterfacesT = Aws::Vector<SecondaryInterface>>
  void SetSecondaryInterfaces(SecondaryInterfacesT&& value) {
    m_secondaryInterfacesHasBeenSet = true;
    m_secondaryInterfaces = std::forward<SecondaryInterfacesT>(value);
  }
  template <typename SecondaryInterfacesT = Aws::Vector<SecondaryInterface>>
  DescribeSecondaryInterfacesResponse& WithSecondaryInterfaces(SecondaryInterfacesT&& value) {
    SetSecondaryInterfaces(std::forward<SecondaryInterfacesT>(value));
    return *this;
  }
  template <typename SecondaryInterfacesT = SecondaryInterface>
  DescribeSecondaryInterfacesResponse& AddSecondaryInterfaces(SecondaryInterfacesT&& value) {
    m_secondaryInterfacesHasBeenSet = true;
    m_secondaryInterfaces.emplace_back(std::forward<SecondaryInterfacesT>(value));
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
  DescribeSecondaryInterfacesResponse& WithNextToken(NextTokenT&& value) {
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
  DescribeSecondaryInterfacesResponse& WithResponseMetadata(ResponseMetadataT&& value) {
    SetResponseMetadata(std::forward<ResponseMetadataT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetResponseCode() const { return m_responseCode; }

 private:
  Aws::Vector<SecondaryInterface> m_secondaryInterfaces;

  Aws::String m_nextToken;

  ResponseMetadata m_responseMetadata;
  Aws::Http::HttpResponseCode m_responseCode;
  bool m_secondaryInterfacesHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_responseMetadataHasBeenSet = false;
};

}  // namespace Model
}  // namespace EC2
}  // namespace Aws

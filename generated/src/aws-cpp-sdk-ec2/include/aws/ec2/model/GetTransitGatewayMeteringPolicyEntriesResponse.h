/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <aws/ec2/model/TransitGatewayMeteringPolicyEntry.h>

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
class GetTransitGatewayMeteringPolicyEntriesResponse {
 public:
  AWS_EC2_API GetTransitGatewayMeteringPolicyEntriesResponse() = default;
  AWS_EC2_API GetTransitGatewayMeteringPolicyEntriesResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
  AWS_EC2_API GetTransitGatewayMeteringPolicyEntriesResponse& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

  ///@{
  /**
   * <p>Information about the transit gateway metering policy entries.</p>
   */
  inline const Aws::Vector<TransitGatewayMeteringPolicyEntry>& GetTransitGatewayMeteringPolicyEntries() const {
    return m_transitGatewayMeteringPolicyEntries;
  }
  template <typename TransitGatewayMeteringPolicyEntriesT = Aws::Vector<TransitGatewayMeteringPolicyEntry>>
  void SetTransitGatewayMeteringPolicyEntries(TransitGatewayMeteringPolicyEntriesT&& value) {
    m_transitGatewayMeteringPolicyEntriesHasBeenSet = true;
    m_transitGatewayMeteringPolicyEntries = std::forward<TransitGatewayMeteringPolicyEntriesT>(value);
  }
  template <typename TransitGatewayMeteringPolicyEntriesT = Aws::Vector<TransitGatewayMeteringPolicyEntry>>
  GetTransitGatewayMeteringPolicyEntriesResponse& WithTransitGatewayMeteringPolicyEntries(TransitGatewayMeteringPolicyEntriesT&& value) {
    SetTransitGatewayMeteringPolicyEntries(std::forward<TransitGatewayMeteringPolicyEntriesT>(value));
    return *this;
  }
  template <typename TransitGatewayMeteringPolicyEntriesT = TransitGatewayMeteringPolicyEntry>
  GetTransitGatewayMeteringPolicyEntriesResponse& AddTransitGatewayMeteringPolicyEntries(TransitGatewayMeteringPolicyEntriesT&& value) {
    m_transitGatewayMeteringPolicyEntriesHasBeenSet = true;
    m_transitGatewayMeteringPolicyEntries.emplace_back(std::forward<TransitGatewayMeteringPolicyEntriesT>(value));
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
  GetTransitGatewayMeteringPolicyEntriesResponse& WithNextToken(NextTokenT&& value) {
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
  GetTransitGatewayMeteringPolicyEntriesResponse& WithResponseMetadata(ResponseMetadataT&& value) {
    SetResponseMetadata(std::forward<ResponseMetadataT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<TransitGatewayMeteringPolicyEntry> m_transitGatewayMeteringPolicyEntries;
  bool m_transitGatewayMeteringPolicyEntriesHasBeenSet = false;

  Aws::String m_nextToken;
  bool m_nextTokenHasBeenSet = false;

  ResponseMetadata m_responseMetadata;
  bool m_responseMetadataHasBeenSet = false;
};

}  // namespace Model
}  // namespace EC2
}  // namespace Aws

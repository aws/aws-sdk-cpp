/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/CapacityManagerDataExportResponse.h>
#include <aws/ec2/model/ResponseMetadata.h>

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
class DescribeCapacityManagerDataExportsResponse {
 public:
  AWS_EC2_API DescribeCapacityManagerDataExportsResponse() = default;
  AWS_EC2_API DescribeCapacityManagerDataExportsResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
  AWS_EC2_API DescribeCapacityManagerDataExportsResponse& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

  ///@{
  /**
   * <p> Information about the data export configurations, including export settings,
   * delivery status, and recent activity. </p>
   */
  inline const Aws::Vector<CapacityManagerDataExportResponse>& GetCapacityManagerDataExports() const {
    return m_capacityManagerDataExports;
  }
  template <typename CapacityManagerDataExportsT = Aws::Vector<CapacityManagerDataExportResponse>>
  void SetCapacityManagerDataExports(CapacityManagerDataExportsT&& value) {
    m_capacityManagerDataExportsHasBeenSet = true;
    m_capacityManagerDataExports = std::forward<CapacityManagerDataExportsT>(value);
  }
  template <typename CapacityManagerDataExportsT = Aws::Vector<CapacityManagerDataExportResponse>>
  DescribeCapacityManagerDataExportsResponse& WithCapacityManagerDataExports(CapacityManagerDataExportsT&& value) {
    SetCapacityManagerDataExports(std::forward<CapacityManagerDataExportsT>(value));
    return *this;
  }
  template <typename CapacityManagerDataExportsT = CapacityManagerDataExportResponse>
  DescribeCapacityManagerDataExportsResponse& AddCapacityManagerDataExports(CapacityManagerDataExportsT&& value) {
    m_capacityManagerDataExportsHasBeenSet = true;
    m_capacityManagerDataExports.emplace_back(std::forward<CapacityManagerDataExportsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The token to use to retrieve the next page of results. This value is null
   * when there are no more results to return. </p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  DescribeCapacityManagerDataExportsResponse& WithNextToken(NextTokenT&& value) {
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
  DescribeCapacityManagerDataExportsResponse& WithResponseMetadata(ResponseMetadataT&& value) {
    SetResponseMetadata(std::forward<ResponseMetadataT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<CapacityManagerDataExportResponse> m_capacityManagerDataExports;

  Aws::String m_nextToken;

  ResponseMetadata m_responseMetadata;
  bool m_capacityManagerDataExportsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_responseMetadataHasBeenSet = false;
};

}  // namespace Model
}  // namespace EC2
}  // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/CapacityManagerDimension.h>
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
class GetCapacityManagerMetricDimensionsResponse {
 public:
  AWS_EC2_API GetCapacityManagerMetricDimensionsResponse() = default;
  AWS_EC2_API GetCapacityManagerMetricDimensionsResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
  AWS_EC2_API GetCapacityManagerMetricDimensionsResponse& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

  ///@{
  /**
   * <p> The available dimension combinations that have data within the specified
   * time range and filters. </p>
   */
  inline const Aws::Vector<CapacityManagerDimension>& GetMetricDimensionResults() const { return m_metricDimensionResults; }
  template <typename MetricDimensionResultsT = Aws::Vector<CapacityManagerDimension>>
  void SetMetricDimensionResults(MetricDimensionResultsT&& value) {
    m_metricDimensionResultsHasBeenSet = true;
    m_metricDimensionResults = std::forward<MetricDimensionResultsT>(value);
  }
  template <typename MetricDimensionResultsT = Aws::Vector<CapacityManagerDimension>>
  GetCapacityManagerMetricDimensionsResponse& WithMetricDimensionResults(MetricDimensionResultsT&& value) {
    SetMetricDimensionResults(std::forward<MetricDimensionResultsT>(value));
    return *this;
  }
  template <typename MetricDimensionResultsT = CapacityManagerDimension>
  GetCapacityManagerMetricDimensionsResponse& AddMetricDimensionResults(MetricDimensionResultsT&& value) {
    m_metricDimensionResultsHasBeenSet = true;
    m_metricDimensionResults.emplace_back(std::forward<MetricDimensionResultsT>(value));
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
  GetCapacityManagerMetricDimensionsResponse& WithNextToken(NextTokenT&& value) {
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
  GetCapacityManagerMetricDimensionsResponse& WithResponseMetadata(ResponseMetadataT&& value) {
    SetResponseMetadata(std::forward<ResponseMetadataT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<CapacityManagerDimension> m_metricDimensionResults;

  Aws::String m_nextToken;

  ResponseMetadata m_responseMetadata;
  bool m_metricDimensionResultsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_responseMetadataHasBeenSet = false;
};

}  // namespace Model
}  // namespace EC2
}  // namespace Aws

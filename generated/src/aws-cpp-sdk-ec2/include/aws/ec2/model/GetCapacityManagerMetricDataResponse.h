/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/MetricDataResponse.h>
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
class GetCapacityManagerMetricDataResponse {
 public:
  AWS_EC2_API GetCapacityManagerMetricDataResponse() = default;
  AWS_EC2_API GetCapacityManagerMetricDataResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
  AWS_EC2_API GetCapacityManagerMetricDataResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

  ///@{
  /**
   * <p> The metric data points returned by the query. Each result contains dimension
   * values, timestamp, and metric values with their associated statistics. </p>
   */
  inline const Aws::Vector<MetricDataResponse>& GetMetricDataResults() const { return m_metricDataResults; }
  template <typename MetricDataResultsT = Aws::Vector<MetricDataResponse>>
  void SetMetricDataResults(MetricDataResultsT&& value) {
    m_metricDataResultsHasBeenSet = true;
    m_metricDataResults = std::forward<MetricDataResultsT>(value);
  }
  template <typename MetricDataResultsT = Aws::Vector<MetricDataResponse>>
  GetCapacityManagerMetricDataResponse& WithMetricDataResults(MetricDataResultsT&& value) {
    SetMetricDataResults(std::forward<MetricDataResultsT>(value));
    return *this;
  }
  template <typename MetricDataResultsT = MetricDataResponse>
  GetCapacityManagerMetricDataResponse& AddMetricDataResults(MetricDataResultsT&& value) {
    m_metricDataResultsHasBeenSet = true;
    m_metricDataResults.emplace_back(std::forward<MetricDataResultsT>(value));
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
  GetCapacityManagerMetricDataResponse& WithNextToken(NextTokenT&& value) {
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
  GetCapacityManagerMetricDataResponse& WithResponseMetadata(ResponseMetadataT&& value) {
    SetResponseMetadata(std::forward<ResponseMetadataT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<MetricDataResponse> m_metricDataResults;
  bool m_metricDataResultsHasBeenSet = false;

  Aws::String m_nextToken;
  bool m_nextTokenHasBeenSet = false;

  ResponseMetadata m_responseMetadata;
  bool m_responseMetadataHasBeenSet = false;
};

}  // namespace Model
}  // namespace EC2
}  // namespace Aws

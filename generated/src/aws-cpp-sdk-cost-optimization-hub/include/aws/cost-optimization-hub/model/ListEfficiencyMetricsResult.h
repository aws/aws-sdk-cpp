/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/cost-optimization-hub/CostOptimizationHub_EXPORTS.h>
#include <aws/cost-optimization-hub/model/EfficiencyMetricsByGroup.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace CostOptimizationHub {
namespace Model {
class ListEfficiencyMetricsResult {
 public:
  AWS_COSTOPTIMIZATIONHUB_API ListEfficiencyMetricsResult() = default;
  AWS_COSTOPTIMIZATIONHUB_API ListEfficiencyMetricsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_COSTOPTIMIZATIONHUB_API ListEfficiencyMetricsResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>A list of cost efficiency metrics grouped by the specified dimension. Each
   * group contains time-series data points with cost efficiency, potential savings,
   * and optimzable spend for the specified time period.</p>
   */
  inline const Aws::Vector<EfficiencyMetricsByGroup>& GetEfficiencyMetricsByGroup() const { return m_efficiencyMetricsByGroup; }
  template <typename EfficiencyMetricsByGroupT = Aws::Vector<EfficiencyMetricsByGroup>>
  void SetEfficiencyMetricsByGroup(EfficiencyMetricsByGroupT&& value) {
    m_efficiencyMetricsByGroupHasBeenSet = true;
    m_efficiencyMetricsByGroup = std::forward<EfficiencyMetricsByGroupT>(value);
  }
  template <typename EfficiencyMetricsByGroupT = Aws::Vector<EfficiencyMetricsByGroup>>
  ListEfficiencyMetricsResult& WithEfficiencyMetricsByGroup(EfficiencyMetricsByGroupT&& value) {
    SetEfficiencyMetricsByGroup(std::forward<EfficiencyMetricsByGroupT>(value));
    return *this;
  }
  template <typename EfficiencyMetricsByGroupT = EfficiencyMetricsByGroup>
  ListEfficiencyMetricsResult& AddEfficiencyMetricsByGroup(EfficiencyMetricsByGroupT&& value) {
    m_efficiencyMetricsByGroupHasBeenSet = true;
    m_efficiencyMetricsByGroup.emplace_back(std::forward<EfficiencyMetricsByGroupT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The token to retrieve the next page of results. When this value is present in
   * the response, additional groups are available. Pass this token in the
   * <code>nextToken</code> parameter of a subsequent request to retrieve the next
   * page.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListEfficiencyMetricsResult& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetRequestId() const { return m_requestId; }
  template <typename RequestIdT = Aws::String>
  void SetRequestId(RequestIdT&& value) {
    m_requestIdHasBeenSet = true;
    m_requestId = std::forward<RequestIdT>(value);
  }
  template <typename RequestIdT = Aws::String>
  ListEfficiencyMetricsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<EfficiencyMetricsByGroup> m_efficiencyMetricsByGroup;

  Aws::String m_nextToken;

  Aws::String m_requestId;
  bool m_efficiencyMetricsByGroupHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace CostOptimizationHub
}  // namespace Aws

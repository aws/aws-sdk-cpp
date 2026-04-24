/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/launch-wizard/LaunchWizardRequest.h>
#include <aws/launch-wizard/LaunchWizard_EXPORTS.h>
#include <aws/launch-wizard/model/DeploymentPatternVersionFilter.h>

#include <utility>

namespace Aws {
namespace LaunchWizard {
namespace Model {

/**
 */
class ListDeploymentPatternVersionsRequest : public LaunchWizardRequest {
 public:
  AWS_LAUNCHWIZARD_API ListDeploymentPatternVersionsRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "ListDeploymentPatternVersions"; }

  AWS_LAUNCHWIZARD_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The name of the workload. You can use the <a
   * href="https://docs.aws.amazon.com/launchwizard/latest/APIReference/API_ListWorkloads.html">
   * <code>ListWorkloads</code> </a> operation to discover supported values for this
   * parameter.</p>
   */
  inline const Aws::String& GetWorkloadName() const { return m_workloadName; }
  inline bool WorkloadNameHasBeenSet() const { return m_workloadNameHasBeenSet; }
  template <typename WorkloadNameT = Aws::String>
  void SetWorkloadName(WorkloadNameT&& value) {
    m_workloadNameHasBeenSet = true;
    m_workloadName = std::forward<WorkloadNameT>(value);
  }
  template <typename WorkloadNameT = Aws::String>
  ListDeploymentPatternVersionsRequest& WithWorkloadName(WorkloadNameT&& value) {
    SetWorkloadName(std::forward<WorkloadNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the deployment pattern. You can use the <a
   * href="https://docs.aws.amazon.com/launchwizard/latest/APIReference/API_ListWorkloadDeploymentPatterns.html">
   * <code>ListWorkloadDeploymentPatterns</code> </a> operation to discover supported
   * values for this parameter.</p>
   */
  inline const Aws::String& GetDeploymentPatternName() const { return m_deploymentPatternName; }
  inline bool DeploymentPatternNameHasBeenSet() const { return m_deploymentPatternNameHasBeenSet; }
  template <typename DeploymentPatternNameT = Aws::String>
  void SetDeploymentPatternName(DeploymentPatternNameT&& value) {
    m_deploymentPatternNameHasBeenSet = true;
    m_deploymentPatternName = std::forward<DeploymentPatternNameT>(value);
  }
  template <typename DeploymentPatternNameT = Aws::String>
  ListDeploymentPatternVersionsRequest& WithDeploymentPatternName(DeploymentPatternNameT&& value) {
    SetDeploymentPatternName(std::forward<DeploymentPatternNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum number of deployment pattern versions to list.</p>
   */
  inline int GetMaxResults() const { return m_maxResults; }
  inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
  inline void SetMaxResults(int value) {
    m_maxResultsHasBeenSet = true;
    m_maxResults = value;
  }
  inline ListDeploymentPatternVersionsRequest& WithMaxResults(int value) {
    SetMaxResults(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The token for the next set of results.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListDeploymentPatternVersionsRequest& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Filters to apply when listing deployment pattern versions.</p>
   */
  inline const Aws::Vector<DeploymentPatternVersionFilter>& GetFilters() const { return m_filters; }
  inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }
  template <typename FiltersT = Aws::Vector<DeploymentPatternVersionFilter>>
  void SetFilters(FiltersT&& value) {
    m_filtersHasBeenSet = true;
    m_filters = std::forward<FiltersT>(value);
  }
  template <typename FiltersT = Aws::Vector<DeploymentPatternVersionFilter>>
  ListDeploymentPatternVersionsRequest& WithFilters(FiltersT&& value) {
    SetFilters(std::forward<FiltersT>(value));
    return *this;
  }
  template <typename FiltersT = DeploymentPatternVersionFilter>
  ListDeploymentPatternVersionsRequest& AddFilters(FiltersT&& value) {
    m_filtersHasBeenSet = true;
    m_filters.emplace_back(std::forward<FiltersT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_workloadName;

  Aws::String m_deploymentPatternName;

  int m_maxResults{0};

  Aws::String m_nextToken;

  Aws::Vector<DeploymentPatternVersionFilter> m_filters;
  bool m_workloadNameHasBeenSet = false;
  bool m_deploymentPatternNameHasBeenSet = false;
  bool m_maxResultsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_filtersHasBeenSet = false;
};

}  // namespace Model
}  // namespace LaunchWizard
}  // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amp/PrometheusServiceRequest.h>
#include <aws/amp/PrometheusService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Http {
class URI;
}  // namespace Http
namespace PrometheusService {
namespace Model {

/**
 */
class ListAnomalyDetectorsRequest : public PrometheusServiceRequest {
 public:
  AWS_PROMETHEUSSERVICE_API ListAnomalyDetectorsRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "ListAnomalyDetectors"; }

  AWS_PROMETHEUSSERVICE_API Aws::String SerializePayload() const override;

  AWS_PROMETHEUSSERVICE_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;

  ///@{
  /**
   * <p>The identifier of the workspace containing the anomaly detectors to list.</p>
   */
  inline const Aws::String& GetWorkspaceId() const { return m_workspaceId; }
  inline bool WorkspaceIdHasBeenSet() const { return m_workspaceIdHasBeenSet; }
  template <typename WorkspaceIdT = Aws::String>
  void SetWorkspaceId(WorkspaceIdT&& value) {
    m_workspaceIdHasBeenSet = true;
    m_workspaceId = std::forward<WorkspaceIdT>(value);
  }
  template <typename WorkspaceIdT = Aws::String>
  ListAnomalyDetectorsRequest& WithWorkspaceId(WorkspaceIdT&& value) {
    SetWorkspaceId(std::forward<WorkspaceIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Filters the results to anomaly detectors with the specified alias.</p>
   */
  inline const Aws::String& GetAlias() const { return m_alias; }
  inline bool AliasHasBeenSet() const { return m_aliasHasBeenSet; }
  template <typename AliasT = Aws::String>
  void SetAlias(AliasT&& value) {
    m_aliasHasBeenSet = true;
    m_alias = std::forward<AliasT>(value);
  }
  template <typename AliasT = Aws::String>
  ListAnomalyDetectorsRequest& WithAlias(AliasT&& value) {
    SetAlias(std::forward<AliasT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum number of results to return in a single call. Valid range is 1 to
   * 1000.</p>
   */
  inline int GetMaxResults() const { return m_maxResults; }
  inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
  inline void SetMaxResults(int value) {
    m_maxResultsHasBeenSet = true;
    m_maxResults = value;
  }
  inline ListAnomalyDetectorsRequest& WithMaxResults(int value) {
    SetMaxResults(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The pagination token to continue retrieving results.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListAnomalyDetectorsRequest& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_workspaceId;

  Aws::String m_alias;

  int m_maxResults{0};

  Aws::String m_nextToken;
  bool m_workspaceIdHasBeenSet = false;
  bool m_aliasHasBeenSet = false;
  bool m_maxResultsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
};

}  // namespace Model
}  // namespace PrometheusService
}  // namespace Aws

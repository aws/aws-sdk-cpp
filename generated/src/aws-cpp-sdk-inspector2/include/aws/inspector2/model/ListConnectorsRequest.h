/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/inspector2/Inspector2Request.h>
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/inspector2/model/ConnectorFilterCriteria.h>

#include <utility>

namespace Aws {
namespace Inspector2 {
namespace Model {

/**
 */
class ListConnectorsRequest : public Inspector2Request {
 public:
  AWS_INSPECTOR2_API ListConnectorsRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "ListConnectors"; }

  AWS_INSPECTOR2_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The maximum number of results to return in a single call. To retrieve the
   * remaining results, make another request with the <code>nextToken</code> value
   * returned from this request.</p>
   */
  inline int GetMaxResults() const { return m_maxResults; }
  inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
  inline void SetMaxResults(int value) {
    m_maxResultsHasBeenSet = true;
    m_maxResults = value;
  }
  inline ListConnectorsRequest& WithMaxResults(int value) {
    SetMaxResults(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A token to use for paginating results. Set this value to null for the first
   * request. For subsequent calls, use the <code>nextToken</code> value returned
   * from the previous request.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListConnectorsRequest& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The filter criteria to apply to the list of connectors.</p>
   */
  inline const ConnectorFilterCriteria& GetFilterCriteria() const { return m_filterCriteria; }
  inline bool FilterCriteriaHasBeenSet() const { return m_filterCriteriaHasBeenSet; }
  template <typename FilterCriteriaT = ConnectorFilterCriteria>
  void SetFilterCriteria(FilterCriteriaT&& value) {
    m_filterCriteriaHasBeenSet = true;
    m_filterCriteria = std::forward<FilterCriteriaT>(value);
  }
  template <typename FilterCriteriaT = ConnectorFilterCriteria>
  ListConnectorsRequest& WithFilterCriteria(FilterCriteriaT&& value) {
    SetFilterCriteria(std::forward<FilterCriteriaT>(value));
    return *this;
  }
  ///@}
 private:
  int m_maxResults{0};

  Aws::String m_nextToken;

  ConnectorFilterCriteria m_filterCriteria;
  bool m_maxResultsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_filterCriteriaHasBeenSet = false;
};

}  // namespace Model
}  // namespace Inspector2
}  // namespace Aws

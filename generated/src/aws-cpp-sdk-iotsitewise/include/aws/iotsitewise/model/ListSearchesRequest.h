/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotsitewise/IoTSiteWiseRequest.h>
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/iotsitewise/model/ListSearchesFilters.h>

#include <utility>

namespace Aws {
namespace IoTSiteWise {
namespace Model {

/**
 * <p>Input for the ListSearches operation.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/ListSearchesRequest">AWS
 * API Reference</a></p>
 */
class ListSearchesRequest : public IoTSiteWiseRequest {
 public:
  AWS_IOTSITEWISE_API ListSearchesRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "ListSearches"; }

  AWS_IOTSITEWISE_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The name of the workspace whose searches are listed.</p>
   */
  inline const Aws::String& GetWorkspaceName() const { return m_workspaceName; }
  inline bool WorkspaceNameHasBeenSet() const { return m_workspaceNameHasBeenSet; }
  template <typename WorkspaceNameT = Aws::String>
  void SetWorkspaceName(WorkspaceNameT&& value) {
    m_workspaceNameHasBeenSet = true;
    m_workspaceName = std::forward<WorkspaceNameT>(value);
  }
  template <typename WorkspaceNameT = Aws::String>
  ListSearchesRequest& WithWorkspaceName(WorkspaceNameT&& value) {
    SetWorkspaceName(std::forward<WorkspaceNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum number of searches to return in a single page. Valid range is 1
   * to 1,000; if omitted, a service-defined default is used.</p>
   */
  inline int GetMaxResults() const { return m_maxResults; }
  inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
  inline void SetMaxResults(int value) {
    m_maxResultsHasBeenSet = true;
    m_maxResults = value;
  }
  inline ListSearchesRequest& WithMaxResults(int value) {
    SetMaxResults(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The pagination token returned by a previous ListSearches call. Provide it to
   * retrieve the next page; omit it to retrieve the first page.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListSearchesRequest& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Optional filters that restrict which searches are returned.</p>
   */
  inline const ListSearchesFilters& GetListSearchesFilters() const { return m_listSearchesFilters; }
  inline bool ListSearchesFiltersHasBeenSet() const { return m_listSearchesFiltersHasBeenSet; }
  template <typename ListSearchesFiltersT = ListSearchesFilters>
  void SetListSearchesFilters(ListSearchesFiltersT&& value) {
    m_listSearchesFiltersHasBeenSet = true;
    m_listSearchesFilters = std::forward<ListSearchesFiltersT>(value);
  }
  template <typename ListSearchesFiltersT = ListSearchesFilters>
  ListSearchesRequest& WithListSearchesFilters(ListSearchesFiltersT&& value) {
    SetListSearchesFilters(std::forward<ListSearchesFiltersT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_workspaceName;

  int m_maxResults{0};

  Aws::String m_nextToken;

  ListSearchesFilters m_listSearchesFilters;
  bool m_workspaceNameHasBeenSet = false;
  bool m_maxResultsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_listSearchesFiltersHasBeenSet = false;
};

}  // namespace Model
}  // namespace IoTSiteWise
}  // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/UUID.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotsitewise/IoTSiteWiseRequest.h>
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/iotsitewise/model/SearchFilters.h>
#include <aws/iotsitewise/model/SearchType.h>

#include <utility>

namespace Aws {
namespace IoTSiteWise {
namespace Model {

/**
 * <p>Input for the StartSearch operation.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/StartSearchRequest">AWS
 * API Reference</a></p>
 */
class StartSearchRequest : public IoTSiteWiseRequest {
 public:
  AWS_IOTSITEWISE_API StartSearchRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "StartSearch"; }

  AWS_IOTSITEWISE_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The name of the workspace whose data is searched.</p>
   */
  inline const Aws::String& GetWorkspaceName() const { return m_workspaceName; }
  inline bool WorkspaceNameHasBeenSet() const { return m_workspaceNameHasBeenSet; }
  template <typename WorkspaceNameT = Aws::String>
  void SetWorkspaceName(WorkspaceNameT&& value) {
    m_workspaceNameHasBeenSet = true;
    m_workspaceName = std::forward<WorkspaceNameT>(value);
  }
  template <typename WorkspaceNameT = Aws::String>
  StartSearchRequest& WithWorkspaceName(WorkspaceNameT&& value) {
    SetWorkspaceName(std::forward<WorkspaceNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The natural-language query describing the data to search for.</p>
   */
  inline const Aws::String& GetQueryStatement() const { return m_queryStatement; }
  inline bool QueryStatementHasBeenSet() const { return m_queryStatementHasBeenSet; }
  template <typename QueryStatementT = Aws::String>
  void SetQueryStatement(QueryStatementT&& value) {
    m_queryStatementHasBeenSet = true;
    m_queryStatement = std::forward<QueryStatementT>(value);
  }
  template <typename QueryStatementT = Aws::String>
  StartSearchRequest& WithQueryStatement(QueryStatementT&& value) {
    SetQueryStatement(std::forward<QueryStatementT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A unique, case-sensitive identifier you provide to ensure the request is
   * idempotent. Repeating a StartSearch call with the same <code>clientToken</code>
   * returns the original search rather than starting a new one. If omitted, the SDK
   * autogenerates one.</p>
   */
  inline const Aws::String& GetClientToken() const { return m_clientToken; }
  inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
  template <typename ClientTokenT = Aws::String>
  void SetClientToken(ClientTokenT&& value) {
    m_clientTokenHasBeenSet = true;
    m_clientToken = std::forward<ClientTokenT>(value);
  }
  template <typename ClientTokenT = Aws::String>
  StartSearchRequest& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The search strategy to use. Defaults to <code>QUICK</code> when omitted.</p>
   */
  inline SearchType GetSearchType() const { return m_searchType; }
  inline bool SearchTypeHasBeenSet() const { return m_searchTypeHasBeenSet; }
  inline void SetSearchType(SearchType value) {
    m_searchTypeHasBeenSet = true;
    m_searchType = value;
  }
  inline StartSearchRequest& WithSearchType(SearchType value) {
    SetSearchType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Optional filters that restrict the search to a subset of the workspace's
   * data.</p>
   */
  inline const SearchFilters& GetSearchFilters() const { return m_searchFilters; }
  inline bool SearchFiltersHasBeenSet() const { return m_searchFiltersHasBeenSet; }
  template <typename SearchFiltersT = SearchFilters>
  void SetSearchFilters(SearchFiltersT&& value) {
    m_searchFiltersHasBeenSet = true;
    m_searchFilters = std::forward<SearchFiltersT>(value);
  }
  template <typename SearchFiltersT = SearchFilters>
  StartSearchRequest& WithSearchFilters(SearchFiltersT&& value) {
    SetSearchFilters(std::forward<SearchFiltersT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An optional caller-supplied identifier used to group related searches
   * together.</p>
   */
  inline const Aws::String& GetGroupId() const { return m_groupId; }
  inline bool GroupIdHasBeenSet() const { return m_groupIdHasBeenSet; }
  template <typename GroupIdT = Aws::String>
  void SetGroupId(GroupIdT&& value) {
    m_groupIdHasBeenSet = true;
    m_groupId = std::forward<GroupIdT>(value);
  }
  template <typename GroupIdT = Aws::String>
  StartSearchRequest& WithGroupId(GroupIdT&& value) {
    SetGroupId(std::forward<GroupIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_workspaceName;

  Aws::String m_queryStatement;

  Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};

  SearchType m_searchType{SearchType::NOT_SET};

  SearchFilters m_searchFilters;

  Aws::String m_groupId;
  bool m_workspaceNameHasBeenSet = false;
  bool m_queryStatementHasBeenSet = false;
  bool m_clientTokenHasBeenSet = true;
  bool m_searchTypeHasBeenSet = false;
  bool m_searchFiltersHasBeenSet = false;
  bool m_groupIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace IoTSiteWise
}  // namespace Aws

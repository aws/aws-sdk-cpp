/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotsitewise/IoTSiteWiseRequest.h>
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Http {
class URI;
}  // namespace Http
namespace IoTSiteWise {
namespace Model {

/**
 * <p>Input for the GetSearchResults operation.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/GetSearchResultsRequest">AWS
 * API Reference</a></p>
 */
class GetSearchResultsRequest : public IoTSiteWiseRequest {
 public:
  AWS_IOTSITEWISE_API GetSearchResultsRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "GetSearchResults"; }

  AWS_IOTSITEWISE_API Aws::String SerializePayload() const override;

  AWS_IOTSITEWISE_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;

  ///@{
  /**
   * <p>The identifier of the search whose results are retrieved.</p>
   */
  inline const Aws::String& GetSearchId() const { return m_searchId; }
  inline bool SearchIdHasBeenSet() const { return m_searchIdHasBeenSet; }
  template <typename SearchIdT = Aws::String>
  void SetSearchId(SearchIdT&& value) {
    m_searchIdHasBeenSet = true;
    m_searchId = std::forward<SearchIdT>(value);
  }
  template <typename SearchIdT = Aws::String>
  GetSearchResultsRequest& WithSearchId(SearchIdT&& value) {
    SetSearchId(std::forward<SearchIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the workspace the search belongs to.</p>
   */
  inline const Aws::String& GetWorkspaceName() const { return m_workspaceName; }
  inline bool WorkspaceNameHasBeenSet() const { return m_workspaceNameHasBeenSet; }
  template <typename WorkspaceNameT = Aws::String>
  void SetWorkspaceName(WorkspaceNameT&& value) {
    m_workspaceNameHasBeenSet = true;
    m_workspaceName = std::forward<WorkspaceNameT>(value);
  }
  template <typename WorkspaceNameT = Aws::String>
  GetSearchResultsRequest& WithWorkspaceName(WorkspaceNameT&& value) {
    SetWorkspaceName(std::forward<WorkspaceNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum number of results to return in a single page. Valid range is 1 to
   * 10,000; if omitted, a service-defined default is used.</p>
   */
  inline int GetMaxResults() const { return m_maxResults; }
  inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
  inline void SetMaxResults(int value) {
    m_maxResultsHasBeenSet = true;
    m_maxResults = value;
  }
  inline GetSearchResultsRequest& WithMaxResults(int value) {
    SetMaxResults(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The pagination token returned by a previous GetSearchResults call. Provide it
   * to retrieve the next page of results; omit it to retrieve the first page.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  GetSearchResultsRequest& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_searchId;

  Aws::String m_workspaceName;

  int m_maxResults{0};

  Aws::String m_nextToken;
  bool m_searchIdHasBeenSet = false;
  bool m_workspaceNameHasBeenSet = false;
  bool m_maxResultsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
};

}  // namespace Model
}  // namespace IoTSiteWise
}  // namespace Aws

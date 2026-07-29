/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/iotsitewise/model/SearchStatus.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace IoTSiteWise {
namespace Model {
/**
 * <p>Output of the StartSearch operation.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/StartSearchResponse">AWS
 * API Reference</a></p>
 */
class StartSearchResult {
 public:
  AWS_IOTSITEWISE_API StartSearchResult() = default;
  AWS_IOTSITEWISE_API StartSearchResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_IOTSITEWISE_API StartSearchResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The unique identifier assigned to the newly started search.</p>
   */
  inline const Aws::String& GetSearchId() const { return m_searchId; }
  template <typename SearchIdT = Aws::String>
  void SetSearchId(SearchIdT&& value) {
    m_searchIdHasBeenSet = true;
    m_searchId = std::forward<SearchIdT>(value);
  }
  template <typename SearchIdT = Aws::String>
  StartSearchResult& WithSearchId(SearchIdT&& value) {
    SetSearchId(std::forward<SearchIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the workspace the search runs against.</p>
   */
  inline const Aws::String& GetWorkspaceName() const { return m_workspaceName; }
  template <typename WorkspaceNameT = Aws::String>
  void SetWorkspaceName(WorkspaceNameT&& value) {
    m_workspaceNameHasBeenSet = true;
    m_workspaceName = std::forward<WorkspaceNameT>(value);
  }
  template <typename WorkspaceNameT = Aws::String>
  StartSearchResult& WithWorkspaceName(WorkspaceNameT&& value) {
    SetWorkspaceName(std::forward<WorkspaceNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The initial status of the search. A newly started search is
   * <code>QUEUED</code>.</p>
   */
  inline SearchStatus GetStatus() const { return m_status; }
  inline void SetStatus(SearchStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline StartSearchResult& WithStatus(SearchStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The group identifier associated with the search, if one was supplied on the
   * request.</p>
   */
  inline const Aws::String& GetGroupId() const { return m_groupId; }
  template <typename GroupIdT = Aws::String>
  void SetGroupId(GroupIdT&& value) {
    m_groupIdHasBeenSet = true;
    m_groupId = std::forward<GroupIdT>(value);
  }
  template <typename GroupIdT = Aws::String>
  StartSearchResult& WithGroupId(GroupIdT&& value) {
    SetGroupId(std::forward<GroupIdT>(value));
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
  StartSearchResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_searchId;

  Aws::String m_workspaceName;

  SearchStatus m_status{SearchStatus::NOT_SET};

  Aws::String m_groupId;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_searchIdHasBeenSet = false;
  bool m_workspaceNameHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_groupIdHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace IoTSiteWise
}  // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/model/MaterializedViewRefreshTaskRun.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace Glue {
namespace Model {
class ListMaterializedViewRefreshTaskRunsResult {
 public:
  AWS_GLUE_API ListMaterializedViewRefreshTaskRunsResult() = default;
  AWS_GLUE_API ListMaterializedViewRefreshTaskRunsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_GLUE_API ListMaterializedViewRefreshTaskRunsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The results of the ListMaterializedViewRefreshTaskRuns action. </p>
   */
  inline const Aws::Vector<MaterializedViewRefreshTaskRun>& GetMaterializedViewRefreshTaskRuns() const {
    return m_materializedViewRefreshTaskRuns;
  }
  template <typename MaterializedViewRefreshTaskRunsT = Aws::Vector<MaterializedViewRefreshTaskRun>>
  void SetMaterializedViewRefreshTaskRuns(MaterializedViewRefreshTaskRunsT&& value) {
    m_materializedViewRefreshTaskRunsHasBeenSet = true;
    m_materializedViewRefreshTaskRuns = std::forward<MaterializedViewRefreshTaskRunsT>(value);
  }
  template <typename MaterializedViewRefreshTaskRunsT = Aws::Vector<MaterializedViewRefreshTaskRun>>
  ListMaterializedViewRefreshTaskRunsResult& WithMaterializedViewRefreshTaskRuns(MaterializedViewRefreshTaskRunsT&& value) {
    SetMaterializedViewRefreshTaskRuns(std::forward<MaterializedViewRefreshTaskRunsT>(value));
    return *this;
  }
  template <typename MaterializedViewRefreshTaskRunsT = MaterializedViewRefreshTaskRun>
  ListMaterializedViewRefreshTaskRunsResult& AddMaterializedViewRefreshTaskRuns(MaterializedViewRefreshTaskRunsT&& value) {
    m_materializedViewRefreshTaskRunsHasBeenSet = true;
    m_materializedViewRefreshTaskRuns.emplace_back(std::forward<MaterializedViewRefreshTaskRunsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A continuation token, if not all task run IDs have yet been returned.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListMaterializedViewRefreshTaskRunsResult& WithNextToken(NextTokenT&& value) {
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
  ListMaterializedViewRefreshTaskRunsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<MaterializedViewRefreshTaskRun> m_materializedViewRefreshTaskRuns;

  Aws::String m_nextToken;

  Aws::String m_requestId;
  bool m_materializedViewRefreshTaskRunsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Glue
}  // namespace Aws

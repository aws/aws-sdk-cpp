/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
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
class GetMaterializedViewRefreshTaskRunResult {
 public:
  AWS_GLUE_API GetMaterializedViewRefreshTaskRunResult() = default;
  AWS_GLUE_API GetMaterializedViewRefreshTaskRunResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_GLUE_API GetMaterializedViewRefreshTaskRunResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>A MaterializedViewRefreshTaskRun object representing the details of the task
   * run.</p>
   */
  inline const MaterializedViewRefreshTaskRun& GetMaterializedViewRefreshTaskRun() const { return m_materializedViewRefreshTaskRun; }
  template <typename MaterializedViewRefreshTaskRunT = MaterializedViewRefreshTaskRun>
  void SetMaterializedViewRefreshTaskRun(MaterializedViewRefreshTaskRunT&& value) {
    m_materializedViewRefreshTaskRunHasBeenSet = true;
    m_materializedViewRefreshTaskRun = std::forward<MaterializedViewRefreshTaskRunT>(value);
  }
  template <typename MaterializedViewRefreshTaskRunT = MaterializedViewRefreshTaskRun>
  GetMaterializedViewRefreshTaskRunResult& WithMaterializedViewRefreshTaskRun(MaterializedViewRefreshTaskRunT&& value) {
    SetMaterializedViewRefreshTaskRun(std::forward<MaterializedViewRefreshTaskRunT>(value));
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
  GetMaterializedViewRefreshTaskRunResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  MaterializedViewRefreshTaskRun m_materializedViewRefreshTaskRun;

  Aws::String m_requestId;
  bool m_materializedViewRefreshTaskRunHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Glue
}  // namespace Aws

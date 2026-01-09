/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glue/Glue_EXPORTS.h>

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
class StartMaterializedViewRefreshTaskRunResult {
 public:
  AWS_GLUE_API StartMaterializedViewRefreshTaskRunResult() = default;
  AWS_GLUE_API StartMaterializedViewRefreshTaskRunResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_GLUE_API StartMaterializedViewRefreshTaskRunResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The identifier for the materialized view refresh task run.</p>
   */
  inline const Aws::String& GetMaterializedViewRefreshTaskRunId() const { return m_materializedViewRefreshTaskRunId; }
  template <typename MaterializedViewRefreshTaskRunIdT = Aws::String>
  void SetMaterializedViewRefreshTaskRunId(MaterializedViewRefreshTaskRunIdT&& value) {
    m_materializedViewRefreshTaskRunIdHasBeenSet = true;
    m_materializedViewRefreshTaskRunId = std::forward<MaterializedViewRefreshTaskRunIdT>(value);
  }
  template <typename MaterializedViewRefreshTaskRunIdT = Aws::String>
  StartMaterializedViewRefreshTaskRunResult& WithMaterializedViewRefreshTaskRunId(MaterializedViewRefreshTaskRunIdT&& value) {
    SetMaterializedViewRefreshTaskRunId(std::forward<MaterializedViewRefreshTaskRunIdT>(value));
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
  StartMaterializedViewRefreshTaskRunResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_materializedViewRefreshTaskRunId;

  Aws::String m_requestId;
  bool m_materializedViewRefreshTaskRunIdHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Glue
}  // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/DataTableLockVersion.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace Connect {
namespace Model {
class UpdateDataTableMetadataResult {
 public:
  AWS_CONNECT_API UpdateDataTableMetadataResult() = default;
  AWS_CONNECT_API UpdateDataTableMetadataResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_CONNECT_API UpdateDataTableMetadataResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The new lock version for the data table after the update.</p>
   */
  inline const DataTableLockVersion& GetLockVersion() const { return m_lockVersion; }
  template <typename LockVersionT = DataTableLockVersion>
  void SetLockVersion(LockVersionT&& value) {
    m_lockVersionHasBeenSet = true;
    m_lockVersion = std::forward<LockVersionT>(value);
  }
  template <typename LockVersionT = DataTableLockVersion>
  UpdateDataTableMetadataResult& WithLockVersion(LockVersionT&& value) {
    SetLockVersion(std::forward<LockVersionT>(value));
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
  UpdateDataTableMetadataResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  DataTableLockVersion m_lockVersion;

  Aws::String m_requestId;
  bool m_lockVersionHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Connect
}  // namespace Aws

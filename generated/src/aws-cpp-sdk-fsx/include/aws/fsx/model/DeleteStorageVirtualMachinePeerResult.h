/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/fsx/FSx_EXPORTS.h>
#include <aws/fsx/model/StorageVirtualMachinePeerLifecycle.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace FSx {
namespace Model {
class DeleteStorageVirtualMachinePeerResult {
 public:
  AWS_FSX_API DeleteStorageVirtualMachinePeerResult() = default;
  AWS_FSX_API DeleteStorageVirtualMachinePeerResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_FSX_API DeleteStorageVirtualMachinePeerResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The ID of the SVM peer that's being deleted.</p>
   */
  inline const Aws::String& GetStorageVirtualMachinePeerId() const { return m_storageVirtualMachinePeerId; }
  template <typename StorageVirtualMachinePeerIdT = Aws::String>
  void SetStorageVirtualMachinePeerId(StorageVirtualMachinePeerIdT&& value) {
    m_storageVirtualMachinePeerIdHasBeenSet = true;
    m_storageVirtualMachinePeerId = std::forward<StorageVirtualMachinePeerIdT>(value);
  }
  template <typename StorageVirtualMachinePeerIdT = Aws::String>
  DeleteStorageVirtualMachinePeerResult& WithStorageVirtualMachinePeerId(StorageVirtualMachinePeerIdT&& value) {
    SetStorageVirtualMachinePeerId(std::forward<StorageVirtualMachinePeerIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The lifecycle state of the SVM peer being deleted. If the
   * <code>DeleteStorageVirtualMachinePeer</code> operation is successful, this value
   * is <code>DELETING</code>.</p>
   */
  inline StorageVirtualMachinePeerLifecycle GetLifecycle() const { return m_lifecycle; }
  inline void SetLifecycle(StorageVirtualMachinePeerLifecycle value) {
    m_lifecycleHasBeenSet = true;
    m_lifecycle = value;
  }
  inline DeleteStorageVirtualMachinePeerResult& WithLifecycle(StorageVirtualMachinePeerLifecycle value) {
    SetLifecycle(value);
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
  DeleteStorageVirtualMachinePeerResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_storageVirtualMachinePeerId;

  StorageVirtualMachinePeerLifecycle m_lifecycle{StorageVirtualMachinePeerLifecycle::NOT_SET};

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_storageVirtualMachinePeerIdHasBeenSet = false;
  bool m_lifecycleHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace FSx
}  // namespace Aws

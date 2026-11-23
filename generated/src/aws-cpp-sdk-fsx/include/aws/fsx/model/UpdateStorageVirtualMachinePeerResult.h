/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/fsx/FSx_EXPORTS.h>
#include <aws/fsx/model/StorageVirtualMachinePeer.h>

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
class UpdateStorageVirtualMachinePeerResult {
 public:
  AWS_FSX_API UpdateStorageVirtualMachinePeerResult() = default;
  AWS_FSX_API UpdateStorageVirtualMachinePeerResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_FSX_API UpdateStorageVirtualMachinePeerResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>A description of the SVM peer that was just updated.</p>
   */
  inline const StorageVirtualMachinePeer& GetStorageVirtualMachinePeer() const { return m_storageVirtualMachinePeer; }
  template <typename StorageVirtualMachinePeerT = StorageVirtualMachinePeer>
  void SetStorageVirtualMachinePeer(StorageVirtualMachinePeerT&& value) {
    m_storageVirtualMachinePeerHasBeenSet = true;
    m_storageVirtualMachinePeer = std::forward<StorageVirtualMachinePeerT>(value);
  }
  template <typename StorageVirtualMachinePeerT = StorageVirtualMachinePeer>
  UpdateStorageVirtualMachinePeerResult& WithStorageVirtualMachinePeer(StorageVirtualMachinePeerT&& value) {
    SetStorageVirtualMachinePeer(std::forward<StorageVirtualMachinePeerT>(value));
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
  UpdateStorageVirtualMachinePeerResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  StorageVirtualMachinePeer m_storageVirtualMachinePeer;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_storageVirtualMachinePeerHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace FSx
}  // namespace Aws

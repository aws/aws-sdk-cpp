/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
class DescribeStorageVirtualMachinePeersResult {
 public:
  AWS_FSX_API DescribeStorageVirtualMachinePeersResult() = default;
  AWS_FSX_API DescribeStorageVirtualMachinePeersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_FSX_API DescribeStorageVirtualMachinePeersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>Describes each SVM peer returned by the
   * <code>DescribeStorageVirtualMachinePeers</code> operation.</p>
   */
  inline const Aws::Vector<StorageVirtualMachinePeer>& GetStorageVirtualMachinePeers() const { return m_storageVirtualMachinePeers; }
  template <typename StorageVirtualMachinePeersT = Aws::Vector<StorageVirtualMachinePeer>>
  void SetStorageVirtualMachinePeers(StorageVirtualMachinePeersT&& value) {
    m_storageVirtualMachinePeersHasBeenSet = true;
    m_storageVirtualMachinePeers = std::forward<StorageVirtualMachinePeersT>(value);
  }
  template <typename StorageVirtualMachinePeersT = Aws::Vector<StorageVirtualMachinePeer>>
  DescribeStorageVirtualMachinePeersResult& WithStorageVirtualMachinePeers(StorageVirtualMachinePeersT&& value) {
    SetStorageVirtualMachinePeers(std::forward<StorageVirtualMachinePeersT>(value));
    return *this;
  }
  template <typename StorageVirtualMachinePeersT = StorageVirtualMachinePeer>
  DescribeStorageVirtualMachinePeersResult& AddStorageVirtualMachinePeers(StorageVirtualMachinePeersT&& value) {
    m_storageVirtualMachinePeersHasBeenSet = true;
    m_storageVirtualMachinePeers.emplace_back(std::forward<StorageVirtualMachinePeersT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  DescribeStorageVirtualMachinePeersResult& WithNextToken(NextTokenT&& value) {
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
  DescribeStorageVirtualMachinePeersResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<StorageVirtualMachinePeer> m_storageVirtualMachinePeers;

  Aws::String m_nextToken;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_storageVirtualMachinePeersHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace FSx
}  // namespace Aws

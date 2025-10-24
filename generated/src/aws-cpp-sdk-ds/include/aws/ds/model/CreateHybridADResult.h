﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ds/DirectoryService_EXPORTS.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace DirectoryService {
namespace Model {
class CreateHybridADResult {
 public:
  AWS_DIRECTORYSERVICE_API CreateHybridADResult() = default;
  AWS_DIRECTORYSERVICE_API CreateHybridADResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_DIRECTORYSERVICE_API CreateHybridADResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The unique identifier of the newly created hybrid directory.</p>
   */
  inline const Aws::String& GetDirectoryId() const { return m_directoryId; }
  template <typename DirectoryIdT = Aws::String>
  void SetDirectoryId(DirectoryIdT&& value) {
    m_directoryIdHasBeenSet = true;
    m_directoryId = std::forward<DirectoryIdT>(value);
  }
  template <typename DirectoryIdT = Aws::String>
  CreateHybridADResult& WithDirectoryId(DirectoryIdT&& value) {
    SetDirectoryId(std::forward<DirectoryIdT>(value));
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
  CreateHybridADResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_directoryId;
  bool m_directoryIdHasBeenSet = false;

  Aws::String m_requestId;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace DirectoryService
}  // namespace Aws

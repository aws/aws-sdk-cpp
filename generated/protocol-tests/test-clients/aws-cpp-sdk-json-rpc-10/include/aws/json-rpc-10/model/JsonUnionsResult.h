/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/json-rpc-10/JSONRPC10_EXPORTS.h>
#include <aws/json-rpc-10/model/MyUnion.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace JSONRPC10 {
namespace Model {
class JsonUnionsResult {
 public:
  AWS_JSONRPC10_API JsonUnionsResult() = default;
  AWS_JSONRPC10_API JsonUnionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_JSONRPC10_API JsonUnionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{

  inline const MyUnion& GetContents() const { return m_contents; }
  template <typename ContentsT = MyUnion>
  void SetContents(ContentsT&& value) {
    m_contentsHasBeenSet = true;
    m_contents = std::forward<ContentsT>(value);
  }
  template <typename ContentsT = MyUnion>
  JsonUnionsResult& WithContents(ContentsT&& value) {
    SetContents(std::forward<ContentsT>(value));
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
  JsonUnionsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  MyUnion m_contents;
  bool m_contentsHasBeenSet = false;

  Aws::String m_requestId;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace JSONRPC10
}  // namespace Aws

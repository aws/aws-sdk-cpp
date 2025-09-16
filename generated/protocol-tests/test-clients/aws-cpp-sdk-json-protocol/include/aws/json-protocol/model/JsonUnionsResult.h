/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/json-protocol/JsonProtocol_EXPORTS.h>
#include <aws/json-protocol/model/MyUnion.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace JsonProtocol {
namespace Model {
/**
 * <p>A shared structure that contains a single union member.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/json-protocol-2018-01-01/UnionInputOutput">AWS
 * API Reference</a></p>
 */
class JsonUnionsResult {
 public:
  AWS_JSONPROTOCOL_API JsonUnionsResult() = default;
  AWS_JSONPROTOCOL_API JsonUnionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_JSONPROTOCOL_API JsonUnionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

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
}  // namespace JsonProtocol
}  // namespace Aws

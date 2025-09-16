/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rest-json-protocol/RestJsonProtocol_EXPORTS.h>
#include <aws/rest-json-protocol/model/UnionPayload.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace RestJsonProtocol {
namespace Model {
class HttpPayloadWithUnionResult {
 public:
  AWS_RESTJSONPROTOCOL_API HttpPayloadWithUnionResult() = default;
  AWS_RESTJSONPROTOCOL_API HttpPayloadWithUnionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_RESTJSONPROTOCOL_API HttpPayloadWithUnionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{

  inline const UnionPayload& GetNested() const { return m_nested; }
  template <typename NestedT = UnionPayload>
  void SetNested(NestedT&& value) {
    m_nestedHasBeenSet = true;
    m_nested = std::forward<NestedT>(value);
  }
  template <typename NestedT = UnionPayload>
  HttpPayloadWithUnionResult& WithNested(NestedT&& value) {
    SetNested(std::forward<NestedT>(value));
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
  HttpPayloadWithUnionResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  UnionPayload m_nested;
  bool m_nestedHasBeenSet = false;

  Aws::String m_requestId;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace RestJsonProtocol
}  // namespace Aws

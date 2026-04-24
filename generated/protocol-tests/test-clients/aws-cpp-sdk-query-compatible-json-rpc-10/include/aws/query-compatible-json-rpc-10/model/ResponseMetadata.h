/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/query-compatible-json-rpc-10/QueryCompatibleJSONRPC10_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace QueryCompatibleJSONRPC10 {
namespace Model {

class ResponseMetadata {
 public:
  AWS_QUERYCOMPATIBLEJSONRPC10_API ResponseMetadata() = default;
  AWS_QUERYCOMPATIBLEJSONRPC10_API ResponseMetadata(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUERYCOMPATIBLEJSONRPC10_API ResponseMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUERYCOMPATIBLEJSONRPC10_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{

  inline const Aws::String& GetRequestId() const { return m_requestId; }
  inline bool RequestIdHasBeenSet() const { return m_requestIdHasBeenSet; }
  template <typename RequestIdT = Aws::String>
  void SetRequestId(RequestIdT&& value) {
    m_requestIdHasBeenSet = true;
    m_requestId = std::forward<RequestIdT>(value);
  }
  template <typename RequestIdT = Aws::String>
  ResponseMetadata& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_requestId;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace QueryCompatibleJSONRPC10
}  // namespace Aws

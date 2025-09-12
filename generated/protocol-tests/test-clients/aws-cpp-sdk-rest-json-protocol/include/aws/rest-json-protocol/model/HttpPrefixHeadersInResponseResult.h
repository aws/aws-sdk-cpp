/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rest-json-protocol/RestJsonProtocol_EXPORTS.h>

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
class HttpPrefixHeadersInResponseResult {
 public:
  AWS_RESTJSONPROTOCOL_API HttpPrefixHeadersInResponseResult() = default;
  AWS_RESTJSONPROTOCOL_API HttpPrefixHeadersInResponseResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_RESTJSONPROTOCOL_API HttpPrefixHeadersInResponseResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{

  inline const Aws::Map<Aws::String, Aws::String>& GetPrefixHeaders() const { return m_prefixHeaders; }
  template <typename PrefixHeadersT = Aws::Map<Aws::String, Aws::String>>
  void SetPrefixHeaders(PrefixHeadersT&& value) {
    m_prefixHeadersHasBeenSet = true;
    m_prefixHeaders = std::forward<PrefixHeadersT>(value);
  }
  template <typename PrefixHeadersT = Aws::Map<Aws::String, Aws::String>>
  HttpPrefixHeadersInResponseResult& WithPrefixHeaders(PrefixHeadersT&& value) {
    SetPrefixHeaders(std::forward<PrefixHeadersT>(value));
    return *this;
  }
  template <typename PrefixHeadersKeyT = Aws::String, typename PrefixHeadersValueT = Aws::String>
  HttpPrefixHeadersInResponseResult& AddPrefixHeaders(PrefixHeadersKeyT&& key, PrefixHeadersValueT&& value) {
    m_prefixHeadersHasBeenSet = true;
    m_prefixHeaders.emplace(std::forward<PrefixHeadersKeyT>(key), std::forward<PrefixHeadersValueT>(value));
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
  HttpPrefixHeadersInResponseResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Map<Aws::String, Aws::String> m_prefixHeaders;
  bool m_prefixHeadersHasBeenSet = false;

  Aws::String m_requestId;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace RestJsonProtocol
}  // namespace Aws

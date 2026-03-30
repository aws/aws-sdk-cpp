/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
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
class HttpEmptyPrefixHeadersResult {
 public:
  AWS_RESTJSONPROTOCOL_API HttpEmptyPrefixHeadersResult() = default;
  AWS_RESTJSONPROTOCOL_API HttpEmptyPrefixHeadersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_RESTJSONPROTOCOL_API HttpEmptyPrefixHeadersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{

  inline const Aws::Map<Aws::String, Aws::String>& GetPrefixHeaders() const { return m_prefixHeaders; }
  template <typename PrefixHeadersT = Aws::Map<Aws::String, Aws::String>>
  void SetPrefixHeaders(PrefixHeadersT&& value) {
    m_prefixHeadersHasBeenSet = true;
    m_prefixHeaders = std::forward<PrefixHeadersT>(value);
  }
  template <typename PrefixHeadersT = Aws::Map<Aws::String, Aws::String>>
  HttpEmptyPrefixHeadersResult& WithPrefixHeaders(PrefixHeadersT&& value) {
    SetPrefixHeaders(std::forward<PrefixHeadersT>(value));
    return *this;
  }
  template <typename PrefixHeadersKeyT = Aws::String, typename PrefixHeadersValueT = Aws::String>
  HttpEmptyPrefixHeadersResult& AddPrefixHeaders(PrefixHeadersKeyT&& key, PrefixHeadersValueT&& value) {
    m_prefixHeadersHasBeenSet = true;
    m_prefixHeaders.emplace(std::forward<PrefixHeadersKeyT>(key), std::forward<PrefixHeadersValueT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetSpecificHeader() const { return m_specificHeader; }
  template <typename SpecificHeaderT = Aws::String>
  void SetSpecificHeader(SpecificHeaderT&& value) {
    m_specificHeaderHasBeenSet = true;
    m_specificHeader = std::forward<SpecificHeaderT>(value);
  }
  template <typename SpecificHeaderT = Aws::String>
  HttpEmptyPrefixHeadersResult& WithSpecificHeader(SpecificHeaderT&& value) {
    SetSpecificHeader(std::forward<SpecificHeaderT>(value));
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
  HttpEmptyPrefixHeadersResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Map<Aws::String, Aws::String> m_prefixHeaders;

  Aws::String m_specificHeader;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_prefixHeadersHasBeenSet = false;
  bool m_specificHeaderHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace RestJsonProtocol
}  // namespace Aws

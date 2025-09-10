/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Document.h>
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
class DocumentTypeAsMapValueResult {
 public:
  AWS_RESTJSONPROTOCOL_API DocumentTypeAsMapValueResult() = default;
  AWS_RESTJSONPROTOCOL_API DocumentTypeAsMapValueResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_RESTJSONPROTOCOL_API DocumentTypeAsMapValueResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{

  inline const Aws::Map<Aws::String, Aws::Utils::Document>& GetDocValuedMap() const { return m_docValuedMap; }
  template <typename DocValuedMapT = Aws::Map<Aws::String, Aws::Utils::Document>>
  void SetDocValuedMap(DocValuedMapT&& value) {
    m_docValuedMapHasBeenSet = true;
    m_docValuedMap = std::forward<DocValuedMapT>(value);
  }
  template <typename DocValuedMapT = Aws::Map<Aws::String, Aws::Utils::Document>>
  DocumentTypeAsMapValueResult& WithDocValuedMap(DocValuedMapT&& value) {
    SetDocValuedMap(std::forward<DocValuedMapT>(value));
    return *this;
  }
  template <typename DocValuedMapKeyT = Aws::String, typename DocValuedMapValueT = Aws::Utils::Document>
  DocumentTypeAsMapValueResult& AddDocValuedMap(DocValuedMapKeyT&& key, DocValuedMapValueT&& value) {
    m_docValuedMapHasBeenSet = true;
    m_docValuedMap.emplace(std::forward<DocValuedMapKeyT>(key), std::forward<DocValuedMapValueT>(value));
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
  DocumentTypeAsMapValueResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Map<Aws::String, Aws::Utils::Document> m_docValuedMap;
  bool m_docValuedMapHasBeenSet = false;

  Aws::String m_requestId;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace RestJsonProtocol
}  // namespace Aws

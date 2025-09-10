/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Document.h>
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
class DocumentTypeAsPayloadResult {
 public:
  AWS_RESTJSONPROTOCOL_API DocumentTypeAsPayloadResult() = default;
  AWS_RESTJSONPROTOCOL_API DocumentTypeAsPayloadResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_RESTJSONPROTOCOL_API DocumentTypeAsPayloadResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{

  inline Aws::Utils::DocumentView GetDocumentValue() const { return m_documentValue; }
  template <typename DocumentValueT = Aws::Utils::Document>
  void SetDocumentValue(DocumentValueT&& value) {
    m_documentValueHasBeenSet = true;
    m_documentValue = std::forward<DocumentValueT>(value);
  }
  template <typename DocumentValueT = Aws::Utils::Document>
  DocumentTypeAsPayloadResult& WithDocumentValue(DocumentValueT&& value) {
    SetDocumentValue(std::forward<DocumentValueT>(value));
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
  DocumentTypeAsPayloadResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Utils::Document m_documentValue;
  bool m_documentValueHasBeenSet = false;

  Aws::String m_requestId;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace RestJsonProtocol
}  // namespace Aws

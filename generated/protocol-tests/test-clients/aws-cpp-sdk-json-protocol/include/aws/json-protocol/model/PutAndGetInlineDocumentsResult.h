/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Document.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/json-protocol/JsonProtocol_EXPORTS.h>

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
class PutAndGetInlineDocumentsResult {
 public:
  AWS_JSONPROTOCOL_API PutAndGetInlineDocumentsResult() = default;
  AWS_JSONPROTOCOL_API PutAndGetInlineDocumentsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_JSONPROTOCOL_API PutAndGetInlineDocumentsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{

  inline Aws::Utils::DocumentView GetInlineDocument() const { return m_inlineDocument; }
  template <typename InlineDocumentT = Aws::Utils::Document>
  void SetInlineDocument(InlineDocumentT&& value) {
    m_inlineDocumentHasBeenSet = true;
    m_inlineDocument = std::forward<InlineDocumentT>(value);
  }
  template <typename InlineDocumentT = Aws::Utils::Document>
  PutAndGetInlineDocumentsResult& WithInlineDocument(InlineDocumentT&& value) {
    SetInlineDocument(std::forward<InlineDocumentT>(value));
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
  PutAndGetInlineDocumentsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Utils::Document m_inlineDocument;
  bool m_inlineDocumentHasBeenSet = false;

  Aws::String m_requestId;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace JsonProtocol
}  // namespace Aws

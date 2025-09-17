/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Document.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rest-json-protocol/RestJsonProtocolRequest.h>
#include <aws/rest-json-protocol/RestJsonProtocol_EXPORTS.h>

#include <utility>

namespace Aws {
namespace RestJsonProtocol {
namespace Model {

/**
 */
class DocumentTypeAsMapValueRequest : public RestJsonProtocolRequest {
 public:
  AWS_RESTJSONPROTOCOL_API DocumentTypeAsMapValueRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "DocumentTypeAsMapValue"; }

  AWS_RESTJSONPROTOCOL_API Aws::String SerializePayload() const override;

  AWS_RESTJSONPROTOCOL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{

  inline const Aws::Map<Aws::String, Aws::Utils::Document>& GetDocValuedMap() const { return m_docValuedMap; }
  inline bool DocValuedMapHasBeenSet() const { return m_docValuedMapHasBeenSet; }
  template <typename DocValuedMapT = Aws::Map<Aws::String, Aws::Utils::Document>>
  void SetDocValuedMap(DocValuedMapT&& value) {
    m_docValuedMapHasBeenSet = true;
    m_docValuedMap = std::forward<DocValuedMapT>(value);
  }
  template <typename DocValuedMapT = Aws::Map<Aws::String, Aws::Utils::Document>>
  DocumentTypeAsMapValueRequest& WithDocValuedMap(DocValuedMapT&& value) {
    SetDocValuedMap(std::forward<DocValuedMapT>(value));
    return *this;
  }
  template <typename DocValuedMapKeyT = Aws::String, typename DocValuedMapValueT = Aws::Utils::Document>
  DocumentTypeAsMapValueRequest& AddDocValuedMap(DocValuedMapKeyT&& key, DocValuedMapValueT&& value) {
    m_docValuedMapHasBeenSet = true;
    m_docValuedMap.emplace(std::forward<DocValuedMapKeyT>(key), std::forward<DocValuedMapValueT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetRequestId() const { return m_requestId; }
  inline bool RequestIdHasBeenSet() const { return m_requestIdHasBeenSet; }
  template <typename RequestIdT = Aws::String>
  void SetRequestId(RequestIdT&& value) {
    m_requestIdHasBeenSet = true;
    m_requestId = std::forward<RequestIdT>(value);
  }
  template <typename RequestIdT = Aws::String>
  DocumentTypeAsMapValueRequest& WithRequestId(RequestIdT&& value) {
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

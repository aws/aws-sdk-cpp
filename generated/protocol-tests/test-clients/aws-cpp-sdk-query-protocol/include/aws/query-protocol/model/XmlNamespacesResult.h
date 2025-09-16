/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/query-protocol/QueryProtocol_EXPORTS.h>
#include <aws/query-protocol/model/ResponseMetadata.h>
#include <aws/query-protocol/model/XmlNamespaceNested.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Xml {
class XmlDocument;
}  // namespace Xml
}  // namespace Utils
namespace QueryProtocol {
namespace Model {
class XmlNamespacesResult {
 public:
  AWS_QUERYPROTOCOL_API XmlNamespacesResult() = default;
  AWS_QUERYPROTOCOL_API XmlNamespacesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
  AWS_QUERYPROTOCOL_API XmlNamespacesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

  ///@{

  inline const XmlNamespaceNested& GetNested() const { return m_nested; }
  template <typename NestedT = XmlNamespaceNested>
  void SetNested(NestedT&& value) {
    m_nestedHasBeenSet = true;
    m_nested = std::forward<NestedT>(value);
  }
  template <typename NestedT = XmlNamespaceNested>
  XmlNamespacesResult& WithNested(NestedT&& value) {
    SetNested(std::forward<NestedT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
  template <typename ResponseMetadataT = ResponseMetadata>
  void SetResponseMetadata(ResponseMetadataT&& value) {
    m_responseMetadataHasBeenSet = true;
    m_responseMetadata = std::forward<ResponseMetadataT>(value);
  }
  template <typename ResponseMetadataT = ResponseMetadata>
  XmlNamespacesResult& WithResponseMetadata(ResponseMetadataT&& value) {
    SetResponseMetadata(std::forward<ResponseMetadataT>(value));
    return *this;
  }
  ///@}
 private:
  XmlNamespaceNested m_nested;
  bool m_nestedHasBeenSet = false;

  ResponseMetadata m_responseMetadata;
  bool m_responseMetadataHasBeenSet = false;
};

}  // namespace Model
}  // namespace QueryProtocol
}  // namespace Aws

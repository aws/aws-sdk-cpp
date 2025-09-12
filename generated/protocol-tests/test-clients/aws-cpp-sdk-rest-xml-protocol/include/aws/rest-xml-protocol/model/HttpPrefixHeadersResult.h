/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rest-xml-protocol/RestXmlProtocol_EXPORTS.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Xml {
class XmlDocument;
}  // namespace Xml
}  // namespace Utils
namespace RestXmlProtocol {
namespace Model {
class HttpPrefixHeadersResult {
 public:
  AWS_RESTXMLPROTOCOL_API HttpPrefixHeadersResult() = default;
  AWS_RESTXMLPROTOCOL_API HttpPrefixHeadersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
  AWS_RESTXMLPROTOCOL_API HttpPrefixHeadersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

  ///@{

  inline const Aws::String& GetFoo() const { return m_foo; }
  template <typename FooT = Aws::String>
  void SetFoo(FooT&& value) {
    m_fooHasBeenSet = true;
    m_foo = std::forward<FooT>(value);
  }
  template <typename FooT = Aws::String>
  HttpPrefixHeadersResult& WithFoo(FooT&& value) {
    SetFoo(std::forward<FooT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::Map<Aws::String, Aws::String>& GetFooMap() const { return m_fooMap; }
  template <typename FooMapT = Aws::Map<Aws::String, Aws::String>>
  void SetFooMap(FooMapT&& value) {
    m_fooMapHasBeenSet = true;
    m_fooMap = std::forward<FooMapT>(value);
  }
  template <typename FooMapT = Aws::Map<Aws::String, Aws::String>>
  HttpPrefixHeadersResult& WithFooMap(FooMapT&& value) {
    SetFooMap(std::forward<FooMapT>(value));
    return *this;
  }
  template <typename FooMapKeyT = Aws::String, typename FooMapValueT = Aws::String>
  HttpPrefixHeadersResult& AddFooMap(FooMapKeyT&& key, FooMapValueT&& value) {
    m_fooMapHasBeenSet = true;
    m_fooMap.emplace(std::forward<FooMapKeyT>(key), std::forward<FooMapValueT>(value));
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
  HttpPrefixHeadersResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_foo;
  bool m_fooHasBeenSet = false;

  Aws::Map<Aws::String, Aws::String> m_fooMap;
  bool m_fooMapHasBeenSet = false;

  Aws::String m_requestId;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace RestXmlProtocol
}  // namespace Aws

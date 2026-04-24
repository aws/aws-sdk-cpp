/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rest-xml-protocol/RestXmlProtocolRequest.h>
#include <aws/rest-xml-protocol/RestXmlProtocol_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Http {
class URI;
}  // namespace Http
namespace RestXmlProtocol {
namespace Model {

/**
 */
class QueryParamsAsStringListMapRequest : public RestXmlProtocolRequest {
 public:
  AWS_RESTXMLPROTOCOL_API QueryParamsAsStringListMapRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "QueryParamsAsStringListMap"; }

  AWS_RESTXMLPROTOCOL_API Aws::String SerializePayload() const override;

  AWS_RESTXMLPROTOCOL_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;

  ///@{

  inline const Aws::String& GetQux() const { return m_qux; }
  inline bool QuxHasBeenSet() const { return m_quxHasBeenSet; }
  template <typename QuxT = Aws::String>
  void SetQux(QuxT&& value) {
    m_quxHasBeenSet = true;
    m_qux = std::forward<QuxT>(value);
  }
  template <typename QuxT = Aws::String>
  QueryParamsAsStringListMapRequest& WithQux(QuxT&& value) {
    SetQux(std::forward<QuxT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& GetFoo() const { return m_foo; }
  inline bool FooHasBeenSet() const { return m_fooHasBeenSet; }
  template <typename FooT = Aws::Map<Aws::String, Aws::Vector<Aws::String>>>
  void SetFoo(FooT&& value) {
    m_fooHasBeenSet = true;
    m_foo = std::forward<FooT>(value);
  }
  template <typename FooT = Aws::Map<Aws::String, Aws::Vector<Aws::String>>>
  QueryParamsAsStringListMapRequest& WithFoo(FooT&& value) {
    SetFoo(std::forward<FooT>(value));
    return *this;
  }
  template <typename FooKeyT = Aws::String, typename FooValueT = Aws::Vector<Aws::String>>
  QueryParamsAsStringListMapRequest& AddFoo(FooKeyT&& key, FooValueT&& value) {
    m_fooHasBeenSet = true;
    m_foo.emplace(std::forward<FooKeyT>(key), std::forward<FooValueT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_qux;
  bool m_quxHasBeenSet = false;

  Aws::Map<Aws::String, Aws::Vector<Aws::String>> m_foo;
  bool m_fooHasBeenSet = false;
};

}  // namespace Model
}  // namespace RestXmlProtocol
}  // namespace Aws

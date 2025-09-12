/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rest-json-protocol/RestJsonProtocolRequest.h>
#include <aws/rest-json-protocol/RestJsonProtocol_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Http {
class URI;
}  // namespace Http
namespace RestJsonProtocol {
namespace Model {

/**
 */
class QueryPrecedenceRequest : public RestJsonProtocolRequest {
 public:
  AWS_RESTJSONPROTOCOL_API QueryPrecedenceRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "QueryPrecedence"; }

  AWS_RESTJSONPROTOCOL_API Aws::String SerializePayload() const override;

  AWS_RESTJSONPROTOCOL_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;

  ///@{

  inline const Aws::String& GetFoo() const { return m_foo; }
  inline bool FooHasBeenSet() const { return m_fooHasBeenSet; }
  template <typename FooT = Aws::String>
  void SetFoo(FooT&& value) {
    m_fooHasBeenSet = true;
    m_foo = std::forward<FooT>(value);
  }
  template <typename FooT = Aws::String>
  QueryPrecedenceRequest& WithFoo(FooT&& value) {
    SetFoo(std::forward<FooT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::Map<Aws::String, Aws::String>& GetBaz() const { return m_baz; }
  inline bool BazHasBeenSet() const { return m_bazHasBeenSet; }
  template <typename BazT = Aws::Map<Aws::String, Aws::String>>
  void SetBaz(BazT&& value) {
    m_bazHasBeenSet = true;
    m_baz = std::forward<BazT>(value);
  }
  template <typename BazT = Aws::Map<Aws::String, Aws::String>>
  QueryPrecedenceRequest& WithBaz(BazT&& value) {
    SetBaz(std::forward<BazT>(value));
    return *this;
  }
  template <typename BazKeyT = Aws::String, typename BazValueT = Aws::String>
  QueryPrecedenceRequest& AddBaz(BazKeyT&& key, BazValueT&& value) {
    m_bazHasBeenSet = true;
    m_baz.emplace(std::forward<BazKeyT>(key), std::forward<BazValueT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_foo;
  bool m_fooHasBeenSet = false;

  Aws::Map<Aws::String, Aws::String> m_baz;
  bool m_bazHasBeenSet = false;
};

}  // namespace Model
}  // namespace RestJsonProtocol
}  // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rest-xml-protocol/RestXmlProtocolRequest.h>
#include <aws/rest-xml-protocol/RestXmlProtocol_EXPORTS.h>

#include <utility>

namespace Aws {
namespace RestXmlProtocol {
namespace Model {

/**
 */
class ConstantQueryStringRequest : public RestXmlProtocolRequest {
 public:
  AWS_RESTXMLPROTOCOL_API ConstantQueryStringRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "ConstantQueryString"; }

  AWS_RESTXMLPROTOCOL_API Aws::String SerializePayload() const override;

  ///@{

  inline const Aws::String& GetHello() const { return m_hello; }
  inline bool HelloHasBeenSet() const { return m_helloHasBeenSet; }
  template <typename HelloT = Aws::String>
  void SetHello(HelloT&& value) {
    m_helloHasBeenSet = true;
    m_hello = std::forward<HelloT>(value);
  }
  template <typename HelloT = Aws::String>
  ConstantQueryStringRequest& WithHello(HelloT&& value) {
    SetHello(std::forward<HelloT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_hello;
  bool m_helloHasBeenSet = false;
};

}  // namespace Model
}  // namespace RestXmlProtocol
}  // namespace Aws

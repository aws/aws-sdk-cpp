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
namespace Http {
class URI;
}  // namespace Http
namespace RestXmlProtocol {
namespace Model {

/**
 */
class ConstantAndVariableQueryStringRequest : public RestXmlProtocolRequest {
 public:
  AWS_RESTXMLPROTOCOL_API ConstantAndVariableQueryStringRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "ConstantAndVariableQueryString"; }

  AWS_RESTXMLPROTOCOL_API Aws::String SerializePayload() const override;

  AWS_RESTXMLPROTOCOL_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;

  ///@{

  inline const Aws::String& GetBaz() const { return m_baz; }
  inline bool BazHasBeenSet() const { return m_bazHasBeenSet; }
  template <typename BazT = Aws::String>
  void SetBaz(BazT&& value) {
    m_bazHasBeenSet = true;
    m_baz = std::forward<BazT>(value);
  }
  template <typename BazT = Aws::String>
  ConstantAndVariableQueryStringRequest& WithBaz(BazT&& value) {
    SetBaz(std::forward<BazT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetMaybeSet() const { return m_maybeSet; }
  inline bool MaybeSetHasBeenSet() const { return m_maybeSetHasBeenSet; }
  template <typename MaybeSetT = Aws::String>
  void SetMaybeSet(MaybeSetT&& value) {
    m_maybeSetHasBeenSet = true;
    m_maybeSet = std::forward<MaybeSetT>(value);
  }
  template <typename MaybeSetT = Aws::String>
  ConstantAndVariableQueryStringRequest& WithMaybeSet(MaybeSetT&& value) {
    SetMaybeSet(std::forward<MaybeSetT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_baz;
  bool m_bazHasBeenSet = false;

  Aws::String m_maybeSet;
  bool m_maybeSetHasBeenSet = false;
};

}  // namespace Model
}  // namespace RestXmlProtocol
}  // namespace Aws

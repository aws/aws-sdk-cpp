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
class XmlEmptyStringsRequest : public RestXmlProtocolRequest {
 public:
  AWS_RESTXMLPROTOCOL_API XmlEmptyStringsRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "XmlEmptyStrings"; }

  AWS_RESTXMLPROTOCOL_API Aws::String SerializePayload() const override;

  ///@{

  inline const Aws::String& GetEmptyString() const { return m_emptyString; }
  inline bool EmptyStringHasBeenSet() const { return m_emptyStringHasBeenSet; }
  template <typename EmptyStringT = Aws::String>
  void SetEmptyString(EmptyStringT&& value) {
    m_emptyStringHasBeenSet = true;
    m_emptyString = std::forward<EmptyStringT>(value);
  }
  template <typename EmptyStringT = Aws::String>
  XmlEmptyStringsRequest& WithEmptyString(EmptyStringT&& value) {
    SetEmptyString(std::forward<EmptyStringT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_emptyString;
  bool m_emptyStringHasBeenSet = false;
};

}  // namespace Model
}  // namespace RestXmlProtocol
}  // namespace Aws

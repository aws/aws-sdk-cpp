/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rest-xml-protocol/RestXmlProtocolRequest.h>
#include <aws/rest-xml-protocol/RestXmlProtocol_EXPORTS.h>
#include <aws/rest-xml-protocol/model/XmlAttributesPayloadRequest.h>

#include <utility>

namespace Aws {
namespace RestXmlProtocol {
namespace Model {

/**
 */
class XmlAttributesOnPayloadRequest : public RestXmlProtocolRequest {
 public:
  AWS_RESTXMLPROTOCOL_API XmlAttributesOnPayloadRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "XmlAttributesOnPayload"; }

  AWS_RESTXMLPROTOCOL_API Aws::String SerializePayload() const override;

  ///@{

  inline const XmlAttributesPayloadRequest& GetPayload() const { return m_payload; }
  inline bool PayloadHasBeenSet() const { return m_payloadHasBeenSet; }
  template <typename PayloadT = XmlAttributesPayloadRequest>
  void SetPayload(PayloadT&& value) {
    m_payloadHasBeenSet = true;
    m_payload = std::forward<PayloadT>(value);
  }
  template <typename PayloadT = XmlAttributesPayloadRequest>
  XmlAttributesOnPayloadRequest& WithPayload(PayloadT&& value) {
    SetPayload(std::forward<PayloadT>(value));
    return *this;
  }
  ///@}
 private:
  XmlAttributesPayloadRequest m_payload;
  bool m_payloadHasBeenSet = false;
};

}  // namespace Model
}  // namespace RestXmlProtocol
}  // namespace Aws

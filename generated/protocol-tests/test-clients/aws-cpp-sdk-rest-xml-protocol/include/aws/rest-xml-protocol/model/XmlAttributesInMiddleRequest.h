/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rest-xml-protocol/RestXmlProtocolRequest.h>
#include <aws/rest-xml-protocol/RestXmlProtocol_EXPORTS.h>
#include <aws/rest-xml-protocol/model/XmlAttributesInMiddlePayloadRequest.h>

#include <utility>

namespace Aws {
namespace RestXmlProtocol {
namespace Model {

/**
 */
class XmlAttributesInMiddleRequest : public RestXmlProtocolRequest {
 public:
  AWS_RESTXMLPROTOCOL_API XmlAttributesInMiddleRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "XmlAttributesInMiddle"; }

  AWS_RESTXMLPROTOCOL_API Aws::String SerializePayload() const override;
  AWS_RESTXMLPROTOCOL_API smithy::schema::OperationRequestContext GetSchemaSerdeContext() const override;
  AWS_RESTXMLPROTOCOL_API Aws::UniquePtr<smithy::schema::SerializableStruct> GetSchemaSerdeInput() const override;

  ///@{

  inline const XmlAttributesInMiddlePayloadRequest& GetPayload() const { return m_payload; }
  inline bool PayloadHasBeenSet() const { return m_payloadHasBeenSet; }
  template <typename PayloadT = XmlAttributesInMiddlePayloadRequest>
  void SetPayload(PayloadT&& value) {
    m_payloadHasBeenSet = true;
    m_payload = std::forward<PayloadT>(value);
  }
  template <typename PayloadT = XmlAttributesInMiddlePayloadRequest>
  XmlAttributesInMiddleRequest& WithPayload(PayloadT&& value) {
    SetPayload(std::forward<PayloadT>(value));
    return *this;
  }
  ///@}
 private:
  XmlAttributesInMiddlePayloadRequest m_payload;
  bool m_payloadHasBeenSet = false;
};

}  // namespace Model
}  // namespace RestXmlProtocol
}  // namespace Aws

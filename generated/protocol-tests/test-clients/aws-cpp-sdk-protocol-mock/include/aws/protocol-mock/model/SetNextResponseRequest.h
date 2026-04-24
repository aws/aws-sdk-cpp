/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/protocol-mock/ProtocolMockRequest.h>
#include <aws/protocol-mock/ProtocolMock_EXPORTS.h>
#include <aws/protocol-mock/model/HttpHeader.h>

#include <utility>

namespace Aws {
namespace ProtocolMock {
namespace Model {

/**
 */
class SetNextResponseRequest : public ProtocolMockRequest {
 public:
  AWS_PROTOCOLMOCK_API SetNextResponseRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "SetNextResponse"; }

  AWS_PROTOCOLMOCK_API Aws::String SerializePayload() const override;

  ///@{

  inline int GetStatusCode() const { return m_statusCode; }
  inline bool StatusCodeHasBeenSet() const { return m_statusCodeHasBeenSet; }
  inline void SetStatusCode(int value) {
    m_statusCodeHasBeenSet = true;
    m_statusCode = value;
  }
  inline SetNextResponseRequest& WithStatusCode(int value) {
    SetStatusCode(value);
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetRequestBody() const { return m_requestBody; }
  inline bool RequestBodyHasBeenSet() const { return m_requestBodyHasBeenSet; }
  template <typename RequestBodyT = Aws::String>
  void SetRequestBody(RequestBodyT&& value) {
    m_requestBodyHasBeenSet = true;
    m_requestBody = std::forward<RequestBodyT>(value);
  }
  template <typename RequestBodyT = Aws::String>
  SetNextResponseRequest& WithRequestBody(RequestBodyT&& value) {
    SetRequestBody(std::forward<RequestBodyT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::Vector<HttpHeader>& GetHeaderValues() const { return m_headerValues; }
  inline bool HeaderValuesHasBeenSet() const { return m_headerValuesHasBeenSet; }
  template <typename HeaderValuesT = Aws::Vector<HttpHeader>>
  void SetHeaderValues(HeaderValuesT&& value) {
    m_headerValuesHasBeenSet = true;
    m_headerValues = std::forward<HeaderValuesT>(value);
  }
  template <typename HeaderValuesT = Aws::Vector<HttpHeader>>
  SetNextResponseRequest& WithHeaderValues(HeaderValuesT&& value) {
    SetHeaderValues(std::forward<HeaderValuesT>(value));
    return *this;
  }
  template <typename HeaderValuesT = HttpHeader>
  SetNextResponseRequest& AddHeaderValues(HeaderValuesT&& value) {
    m_headerValuesHasBeenSet = true;
    m_headerValues.emplace_back(std::forward<HeaderValuesT>(value));
    return *this;
  }
  ///@}
 private:
  int m_statusCode{0};
  bool m_statusCodeHasBeenSet = false;

  Aws::String m_requestBody;
  bool m_requestBodyHasBeenSet = false;

  Aws::Vector<HttpHeader> m_headerValues;
  bool m_headerValuesHasBeenSet = false;
};

}  // namespace Model
}  // namespace ProtocolMock
}  // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rest-json-protocol/RestJsonProtocolRequest.h>
#include <aws/rest-json-protocol/RestJsonProtocol_EXPORTS.h>

#include <utility>

namespace Aws {
namespace RestJsonProtocol {
namespace Model {

/**
 */
class NullAndEmptyHeadersServerRequest : public RestJsonProtocolRequest {
 public:
  AWS_RESTJSONPROTOCOL_API NullAndEmptyHeadersServerRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "NullAndEmptyHeadersServer"; }

  AWS_RESTJSONPROTOCOL_API Aws::String SerializePayload() const override;

  AWS_RESTJSONPROTOCOL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{

  inline const Aws::String& GetA() const { return m_a; }
  inline bool AHasBeenSet() const { return m_aHasBeenSet; }
  template <typename AT = Aws::String>
  void SetA(AT&& value) {
    m_aHasBeenSet = true;
    m_a = std::forward<AT>(value);
  }
  template <typename AT = Aws::String>
  NullAndEmptyHeadersServerRequest& WithA(AT&& value) {
    SetA(std::forward<AT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetB() const { return m_b; }
  inline bool BHasBeenSet() const { return m_bHasBeenSet; }
  template <typename BT = Aws::String>
  void SetB(BT&& value) {
    m_bHasBeenSet = true;
    m_b = std::forward<BT>(value);
  }
  template <typename BT = Aws::String>
  NullAndEmptyHeadersServerRequest& WithB(BT&& value) {
    SetB(std::forward<BT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::Vector<Aws::String>& GetC() const { return m_c; }
  inline bool CHasBeenSet() const { return m_cHasBeenSet; }
  template <typename CT = Aws::Vector<Aws::String>>
  void SetC(CT&& value) {
    m_cHasBeenSet = true;
    m_c = std::forward<CT>(value);
  }
  template <typename CT = Aws::Vector<Aws::String>>
  NullAndEmptyHeadersServerRequest& WithC(CT&& value) {
    SetC(std::forward<CT>(value));
    return *this;
  }
  template <typename CT = Aws::String>
  NullAndEmptyHeadersServerRequest& AddC(CT&& value) {
    m_cHasBeenSet = true;
    m_c.emplace_back(std::forward<CT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetRequestId() const { return m_requestId; }
  inline bool RequestIdHasBeenSet() const { return m_requestIdHasBeenSet; }
  template <typename RequestIdT = Aws::String>
  void SetRequestId(RequestIdT&& value) {
    m_requestIdHasBeenSet = true;
    m_requestId = std::forward<RequestIdT>(value);
  }
  template <typename RequestIdT = Aws::String>
  NullAndEmptyHeadersServerRequest& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_a;
  bool m_aHasBeenSet = false;

  Aws::String m_b;
  bool m_bHasBeenSet = false;

  Aws::Vector<Aws::String> m_c;
  bool m_cHasBeenSet = false;

  Aws::String m_requestId;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace RestJsonProtocol
}  // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpTypes.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rest-json-protocol/RestJsonProtocol_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace RestJsonProtocol {
namespace Model {

class OutputStreamWithInitialResponseInitialResponse {
 public:
  AWS_RESTJSONPROTOCOL_API OutputStreamWithInitialResponseInitialResponse() = default;
  AWS_RESTJSONPROTOCOL_API OutputStreamWithInitialResponseInitialResponse(Aws::Utils::Json::JsonView jsonValue);
  AWS_RESTJSONPROTOCOL_API OutputStreamWithInitialResponseInitialResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_RESTJSONPROTOCOL_API OutputStreamWithInitialResponseInitialResponse(const Http::HeaderValueCollection& responseHeaders);
  AWS_RESTJSONPROTOCOL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{

  inline const Aws::String& GetInitialResponseMember() const { return m_initialResponseMember; }
  inline bool InitialResponseMemberHasBeenSet() const { return m_initialResponseMemberHasBeenSet; }
  template <typename InitialResponseMemberT = Aws::String>
  void SetInitialResponseMember(InitialResponseMemberT&& value) {
    m_initialResponseMemberHasBeenSet = true;
    m_initialResponseMember = std::forward<InitialResponseMemberT>(value);
  }
  template <typename InitialResponseMemberT = Aws::String>
  OutputStreamWithInitialResponseInitialResponse& WithInitialResponseMember(InitialResponseMemberT&& value) {
    SetInitialResponseMember(std::forward<InitialResponseMemberT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_initialResponseMember;
  bool m_initialResponseMemberHasBeenSet = false;
};

}  // namespace Model
}  // namespace RestJsonProtocol
}  // namespace Aws

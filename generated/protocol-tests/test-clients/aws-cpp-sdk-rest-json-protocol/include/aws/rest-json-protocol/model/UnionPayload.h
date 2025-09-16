/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
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

class UnionPayload {
 public:
  AWS_RESTJSONPROTOCOL_API UnionPayload() = default;
  AWS_RESTJSONPROTOCOL_API UnionPayload(Aws::Utils::Json::JsonView jsonValue);
  AWS_RESTJSONPROTOCOL_API UnionPayload& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_RESTJSONPROTOCOL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{

  inline const Aws::String& GetGreeting() const { return m_greeting; }
  inline bool GreetingHasBeenSet() const { return m_greetingHasBeenSet; }
  template <typename GreetingT = Aws::String>
  void SetGreeting(GreetingT&& value) {
    m_greetingHasBeenSet = true;
    m_greeting = std::forward<GreetingT>(value);
  }
  template <typename GreetingT = Aws::String>
  UnionPayload& WithGreeting(GreetingT&& value) {
    SetGreeting(std::forward<GreetingT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_greeting;
  bool m_greetingHasBeenSet = false;
};

}  // namespace Model
}  // namespace RestJsonProtocol
}  // namespace Aws

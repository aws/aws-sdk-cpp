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

class NestedPayload {
 public:
  AWS_RESTJSONPROTOCOL_API NestedPayload() = default;
  AWS_RESTJSONPROTOCOL_API NestedPayload(Aws::Utils::Json::JsonView jsonValue);
  AWS_RESTJSONPROTOCOL_API NestedPayload& operator=(Aws::Utils::Json::JsonView jsonValue);
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
  NestedPayload& WithGreeting(GreetingT&& value) {
    SetGreeting(std::forward<GreetingT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  NestedPayload& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_greeting;
  bool m_greetingHasBeenSet = false;

  Aws::String m_name;
  bool m_nameHasBeenSet = false;
};

}  // namespace Model
}  // namespace RestJsonProtocol
}  // namespace Aws

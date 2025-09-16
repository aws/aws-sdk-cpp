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

class RenamedGreeting {
 public:
  AWS_RESTJSONPROTOCOL_API RenamedGreeting() = default;
  AWS_RESTJSONPROTOCOL_API RenamedGreeting(Aws::Utils::Json::JsonView jsonValue);
  AWS_RESTJSONPROTOCOL_API RenamedGreeting& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_RESTJSONPROTOCOL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{

  inline const Aws::String& GetSalutation() const { return m_salutation; }
  inline bool SalutationHasBeenSet() const { return m_salutationHasBeenSet; }
  template <typename SalutationT = Aws::String>
  void SetSalutation(SalutationT&& value) {
    m_salutationHasBeenSet = true;
    m_salutation = std::forward<SalutationT>(value);
  }
  template <typename SalutationT = Aws::String>
  RenamedGreeting& WithSalutation(SalutationT&& value) {
    SetSalutation(std::forward<SalutationT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_salutation;
  bool m_salutationHasBeenSet = false;
};

}  // namespace Model
}  // namespace RestJsonProtocol
}  // namespace Aws

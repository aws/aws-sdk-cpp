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

/**
 * <p>A union used to test unions nested inside unions.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/rest-json-protocol-2019-12-16/NestedUnion">AWS
 * API Reference</a></p>
 */
class NestedUnion {
 public:
  AWS_RESTJSONPROTOCOL_API NestedUnion() = default;
  AWS_RESTJSONPROTOCOL_API NestedUnion(Aws::Utils::Json::JsonView jsonValue);
  AWS_RESTJSONPROTOCOL_API NestedUnion& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_RESTJSONPROTOCOL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{

  inline const Aws::String& GetStringValue() const { return m_stringValue; }
  inline bool StringValueHasBeenSet() const { return m_stringValueHasBeenSet; }
  template <typename StringValueT = Aws::String>
  void SetStringValue(StringValueT&& value) {
    m_stringValueHasBeenSet = true;
    m_stringValue = std::forward<StringValueT>(value);
  }
  template <typename StringValueT = Aws::String>
  NestedUnion& WithStringValue(StringValueT&& value) {
    SetStringValue(std::forward<StringValueT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_stringValue;
  bool m_stringValueHasBeenSet = false;
};

}  // namespace Model
}  // namespace RestJsonProtocol
}  // namespace Aws

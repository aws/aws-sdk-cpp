/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/json-protocol/JsonProtocol_EXPORTS.h>
#include <aws/json-protocol/model/ComplexNestedErrorData.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace JsonProtocol {
namespace Model {

/**
 * <p>This error is thrown when a request is invalid.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/json-protocol-2018-01-01/ComplexError">AWS
 * API Reference</a></p>
 */
class ComplexError {
 public:
  AWS_JSONPROTOCOL_API ComplexError() = default;
  AWS_JSONPROTOCOL_API ComplexError(Aws::Utils::Json::JsonView jsonValue);
  AWS_JSONPROTOCOL_API ComplexError& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_JSONPROTOCOL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{

  inline const Aws::String& GetTopLevel() const { return m_topLevel; }
  inline bool TopLevelHasBeenSet() const { return m_topLevelHasBeenSet; }
  template <typename TopLevelT = Aws::String>
  void SetTopLevel(TopLevelT&& value) {
    m_topLevelHasBeenSet = true;
    m_topLevel = std::forward<TopLevelT>(value);
  }
  template <typename TopLevelT = Aws::String>
  ComplexError& WithTopLevel(TopLevelT&& value) {
    SetTopLevel(std::forward<TopLevelT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const ComplexNestedErrorData& GetNested() const { return m_nested; }
  inline bool NestedHasBeenSet() const { return m_nestedHasBeenSet; }
  template <typename NestedT = ComplexNestedErrorData>
  void SetNested(NestedT&& value) {
    m_nestedHasBeenSet = true;
    m_nested = std::forward<NestedT>(value);
  }
  template <typename NestedT = ComplexNestedErrorData>
  ComplexError& WithNested(NestedT&& value) {
    SetNested(std::forward<NestedT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_topLevel;
  bool m_topLevelHasBeenSet = false;

  ComplexNestedErrorData m_nested;
  bool m_nestedHasBeenSet = false;
};

}  // namespace Model
}  // namespace JsonProtocol
}  // namespace Aws

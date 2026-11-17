/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elementalinference/ElementalInference_EXPORTS.h>
#include <aws/elementalinference/model/BedrockFunctionTarget.h>
#include <aws/elementalinference/model/PassthroughFunctionTarget.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace ElementalInference {
namespace Model {

/**
 * <p>The destination for the request that a function builds. Specify exactly one
 * member.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/elementalinference-2018-11-14/FunctionTarget">AWS
 * API Reference</a></p>
 */
class FunctionTarget {
 public:
  AWS_ELEMENTALINFERENCE_API FunctionTarget() = default;
  AWS_ELEMENTALINFERENCE_API FunctionTarget(Aws::Utils::Json::JsonView jsonValue);
  AWS_ELEMENTALINFERENCE_API FunctionTarget& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ELEMENTALINFERENCE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Send the request to an Amazon Bedrock model.</p>
   */
  inline const BedrockFunctionTarget& GetBedrock() const { return m_bedrock; }
  inline bool BedrockHasBeenSet() const { return m_bedrockHasBeenSet; }
  template <typename BedrockT = BedrockFunctionTarget>
  void SetBedrock(BedrockT&& value) {
    m_bedrockHasBeenSet = true;
    m_bedrock = std::forward<BedrockT>(value);
  }
  template <typename BedrockT = BedrockFunctionTarget>
  FunctionTarget& WithBedrock(BedrockT&& value) {
    SetBedrock(std::forward<BedrockT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Send the request nowhere. Use this target to reshape the metadata that
   * Elemental Inference already produces, with no model invocation and no model
   * charges. </p>
   */
  inline const PassthroughFunctionTarget& GetPassthrough() const { return m_passthrough; }
  inline bool PassthroughHasBeenSet() const { return m_passthroughHasBeenSet; }
  template <typename PassthroughT = PassthroughFunctionTarget>
  void SetPassthrough(PassthroughT&& value) {
    m_passthroughHasBeenSet = true;
    m_passthrough = std::forward<PassthroughT>(value);
  }
  template <typename PassthroughT = PassthroughFunctionTarget>
  FunctionTarget& WithPassthrough(PassthroughT&& value) {
    SetPassthrough(std::forward<PassthroughT>(value));
    return *this;
  }
  ///@}
 private:
  BedrockFunctionTarget m_bedrock;

  PassthroughFunctionTarget m_passthrough;
  bool m_bedrockHasBeenSet = false;
  bool m_passthroughHasBeenSet = false;
};

}  // namespace Model
}  // namespace ElementalInference
}  // namespace Aws

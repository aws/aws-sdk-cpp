/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lambda/Lambda_EXPORTS.h>
#include <aws/lambda/model/State.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Lambda {
namespace Model {

/**
 * <p>Information about a function version that uses a specific capacity provider,
 * including its ARN and current state.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/FunctionVersionsByCapacityProviderListItem">AWS
 * API Reference</a></p>
 */
class FunctionVersionsByCapacityProviderListItem {
 public:
  AWS_LAMBDA_API FunctionVersionsByCapacityProviderListItem() = default;
  AWS_LAMBDA_API FunctionVersionsByCapacityProviderListItem(Aws::Utils::Json::JsonView jsonValue);
  AWS_LAMBDA_API FunctionVersionsByCapacityProviderListItem& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_LAMBDA_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the function version.</p>
   */
  inline const Aws::String& GetFunctionArn() const { return m_functionArn; }
  inline bool FunctionArnHasBeenSet() const { return m_functionArnHasBeenSet; }
  template <typename FunctionArnT = Aws::String>
  void SetFunctionArn(FunctionArnT&& value) {
    m_functionArnHasBeenSet = true;
    m_functionArn = std::forward<FunctionArnT>(value);
  }
  template <typename FunctionArnT = Aws::String>
  FunctionVersionsByCapacityProviderListItem& WithFunctionArn(FunctionArnT&& value) {
    SetFunctionArn(std::forward<FunctionArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current state of the function version.</p>
   */
  inline State GetState() const { return m_state; }
  inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
  inline void SetState(State value) {
    m_stateHasBeenSet = true;
    m_state = value;
  }
  inline FunctionVersionsByCapacityProviderListItem& WithState(State value) {
    SetState(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_functionArn;

  State m_state{State::NOT_SET};
  bool m_functionArnHasBeenSet = false;
  bool m_stateHasBeenSet = false;
};

}  // namespace Model
}  // namespace Lambda
}  // namespace Aws

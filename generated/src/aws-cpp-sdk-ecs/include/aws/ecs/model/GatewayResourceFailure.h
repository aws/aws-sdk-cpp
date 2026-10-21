/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/ecs/model/GatewayOperationError.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace ECS {
namespace Model {

/**
 * <p>The failures for a single resource that was touched by an asynchronous
 * gateway process.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/GatewayResourceFailure">AWS
 * API Reference</a></p>
 */
class GatewayResourceFailure {
 public:
  AWS_ECS_API GatewayResourceFailure() = default;
  AWS_ECS_API GatewayResourceFailure(Aws::Utils::Json::JsonView jsonValue);
  AWS_ECS_API GatewayResourceFailure& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ECS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the resource that failed to update, such as
   * a load balancer ARN.</p>
   */
  inline const Aws::String& GetArn() const { return m_arn; }
  inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
  template <typename ArnT = Aws::String>
  void SetArn(ArnT&& value) {
    m_arnHasBeenSet = true;
    m_arn = std::forward<ArnT>(value);
  }
  template <typename ArnT = Aws::String>
  GatewayResourceFailure& WithArn(ArnT&& value) {
    SetArn(std::forward<ArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The errors that were encountered while operating on the resource.</p>
   */
  inline const Aws::Vector<GatewayOperationError>& GetErrors() const { return m_errors; }
  inline bool ErrorsHasBeenSet() const { return m_errorsHasBeenSet; }
  template <typename ErrorsT = Aws::Vector<GatewayOperationError>>
  void SetErrors(ErrorsT&& value) {
    m_errorsHasBeenSet = true;
    m_errors = std::forward<ErrorsT>(value);
  }
  template <typename ErrorsT = Aws::Vector<GatewayOperationError>>
  GatewayResourceFailure& WithErrors(ErrorsT&& value) {
    SetErrors(std::forward<ErrorsT>(value));
    return *this;
  }
  template <typename ErrorsT = GatewayOperationError>
  GatewayResourceFailure& AddErrors(ErrorsT&& value) {
    m_errorsHasBeenSet = true;
    m_errors.emplace_back(std::forward<ErrorsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_arn;

  Aws::Vector<GatewayOperationError> m_errors;
  bool m_arnHasBeenSet = false;
  bool m_errorsHasBeenSet = false;
};

}  // namespace Model
}  // namespace ECS
}  // namespace Aws

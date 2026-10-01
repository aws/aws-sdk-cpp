/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lambda-web/LambdaWeb_EXPORTS.h>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace LambdaWeb {
namespace Model {

/**
 * <p>The scaling configuration for a web function endpoint.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-web-2025-03-07/ScalingConfig">AWS
 * API Reference</a></p>
 */
class ScalingConfig {
 public:
  AWS_LAMBDAWEB_API ScalingConfig() = default;
  AWS_LAMBDAWEB_API ScalingConfig(Aws::Utils::Json::JsonView jsonValue);
  AWS_LAMBDAWEB_API ScalingConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_LAMBDAWEB_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The maximum number of concurrent execution environments for the endpoint.
   * Minimum value of 2, maximum value of 10000. There is no default value. If you
   * don't specify a value, the scaling configuration is absent from the response. On
   * an update, omit <code>scalingConfig</code> to keep the current value, or specify
   * an empty object to clear a previously set value.</p>
   */
  inline int GetMaxEnvironments() const { return m_maxEnvironments; }
  inline bool MaxEnvironmentsHasBeenSet() const { return m_maxEnvironmentsHasBeenSet; }
  inline void SetMaxEnvironments(int value) {
    m_maxEnvironmentsHasBeenSet = true;
    m_maxEnvironments = value;
  }
  inline ScalingConfig& WithMaxEnvironments(int value) {
    SetMaxEnvironments(value);
    return *this;
  }
  ///@}
 private:
  int m_maxEnvironments{0};
  bool m_maxEnvironmentsHasBeenSet = false;
};

}  // namespace Model
}  // namespace LambdaWeb
}  // namespace Aws

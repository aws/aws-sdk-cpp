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
 * <p>The throttling configuration for a web function endpoint.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-web-2025-03-07/ThrottleConfig">AWS
 * API Reference</a></p>
 */
class ThrottleConfig {
 public:
  AWS_LAMBDAWEB_API ThrottleConfig() = default;
  AWS_LAMBDAWEB_API ThrottleConfig(Aws::Utils::Json::JsonView jsonValue);
  AWS_LAMBDAWEB_API ThrottleConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_LAMBDAWEB_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The maximum request rate per second for the endpoint. The value must be one
   * of the following supported values: <code>0</code>, <code>100</code>,
   * <code>200</code>, <code>300</code>, <code>400</code>, <code>500</code>,
   * <code>600</code>, <code>700</code>, <code>800</code>, <code>900</code>,
   * <code>1000</code>, <code>2000</code>, <code>3000</code>, <code>4000</code>,
   * <code>5000</code>, <code>6000</code>, <code>7000</code>, <code>8000</code>,
   * <code>9000</code>, or <code>10000</code>. The maximum effective value is also
   * bounded by your account-level maximum total rate limit. There is no default
   * value. If you don't specify a value, the throttling configuration is absent from
   * the response. On an update, omit <code>throttleConfig</code> to keep the current
   * value, or specify an empty object to clear a previously set value.</p>
   */
  inline int GetRateLimit() const { return m_rateLimit; }
  inline bool RateLimitHasBeenSet() const { return m_rateLimitHasBeenSet; }
  inline void SetRateLimit(int value) {
    m_rateLimitHasBeenSet = true;
    m_rateLimit = value;
  }
  inline ThrottleConfig& WithRateLimit(int value) {
    SetRateLimit(value);
    return *this;
  }
  ///@}
 private:
  int m_rateLimit{0};
  bool m_rateLimitHasBeenSet = false;
};

}  // namespace Model
}  // namespace LambdaWeb
}  // namespace Aws

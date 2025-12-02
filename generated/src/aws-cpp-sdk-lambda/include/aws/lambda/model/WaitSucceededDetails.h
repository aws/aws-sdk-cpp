/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lambda/Lambda_EXPORTS.h>

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
 * <p>Details about a wait operation that succeeded.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/WaitSucceededDetails">AWS
 * API Reference</a></p>
 */
class WaitSucceededDetails {
 public:
  AWS_LAMBDA_API WaitSucceededDetails() = default;
  AWS_LAMBDA_API WaitSucceededDetails(Aws::Utils::Json::JsonView jsonValue);
  AWS_LAMBDA_API WaitSucceededDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_LAMBDA_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The wait duration, in seconds.</p>
   */
  inline int GetDuration() const { return m_duration; }
  inline bool DurationHasBeenSet() const { return m_durationHasBeenSet; }
  inline void SetDuration(int value) {
    m_durationHasBeenSet = true;
    m_duration = value;
  }
  inline WaitSucceededDetails& WithDuration(int value) {
    SetDuration(value);
    return *this;
  }
  ///@}
 private:
  int m_duration{0};
  bool m_durationHasBeenSet = false;
};

}  // namespace Model
}  // namespace Lambda
}  // namespace Aws

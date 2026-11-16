/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/emr-serverless/EMRServerless_EXPORTS.h>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace EMRServerless {
namespace Model {

/**
 * <p>The Amazon EMR Serverless Flex settings for the job run.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/emr-serverless-2021-07-13/FlexExecution">AWS
 * API Reference</a></p>
 */
class FlexExecution {
 public:
  AWS_EMRSERVERLESS_API FlexExecution() = default;
  AWS_EMRSERVERLESS_API FlexExecution(Aws::Utils::Json::JsonView jsonValue);
  AWS_EMRSERVERLESS_API FlexExecution& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_EMRSERVERLESS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Enables Amazon EMR Serverless Flex capacity for the job run and defaults to
   * false. If set to true, the job run uses Flex capacity.</p>
   */
  inline bool GetEnabled() const { return m_enabled; }
  inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }
  inline void SetEnabled(bool value) {
    m_enabledHasBeenSet = true;
    m_enabled = value;
  }
  inline FlexExecution& WithEnabled(bool value) {
    SetEnabled(value);
    return *this;
  }
  ///@}
 private:
  bool m_enabled{false};
  bool m_enabledHasBeenSet = false;
};

}  // namespace Model
}  // namespace EMRServerless
}  // namespace Aws

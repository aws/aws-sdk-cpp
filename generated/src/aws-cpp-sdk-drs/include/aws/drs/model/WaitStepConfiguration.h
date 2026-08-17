/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/drs/Drs_EXPORTS.h>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace drs {
namespace Model {

/**
 * <p>Configuration for a <code>WAIT</code> type step.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/drs-2020-02-26/WaitStepConfiguration">AWS
 * API Reference</a></p>
 */
class WaitStepConfiguration {
 public:
  AWS_DRS_API WaitStepConfiguration() = default;
  AWS_DRS_API WaitStepConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_DRS_API WaitStepConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_DRS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{

  inline int GetWaitDurationMinutes() const { return m_waitDurationMinutes; }
  inline bool WaitDurationMinutesHasBeenSet() const { return m_waitDurationMinutesHasBeenSet; }
  inline void SetWaitDurationMinutes(int value) {
    m_waitDurationMinutesHasBeenSet = true;
    m_waitDurationMinutes = value;
  }
  inline WaitStepConfiguration& WithWaitDurationMinutes(int value) {
    SetWaitDurationMinutes(value);
    return *this;
  }
  ///@}
 private:
  int m_waitDurationMinutes{0};
  bool m_waitDurationMinutesHasBeenSet = false;
};

}  // namespace Model
}  // namespace drs
}  // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectcases/ConnectCases_EXPORTS.h>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace ConnectCases {
namespace Model {

/**
 * <p>Represents the SLA configuration to update.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connectcases-2022-10-03/SlaUpdateConfiguration">AWS
 * API Reference</a></p>
 */
class SlaUpdateConfiguration {
 public:
  AWS_CONNECTCASES_API SlaUpdateConfiguration() = default;
  AWS_CONNECTCASES_API SlaUpdateConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECTCASES_API SlaUpdateConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECTCASES_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>New target duration in minutes within which an SLA should be completed. The
   * new deadline is counted from when the SLA was created.</p>
   */
  inline long long GetTargetSlaMinutes() const { return m_targetSlaMinutes; }
  inline bool TargetSlaMinutesHasBeenSet() const { return m_targetSlaMinutesHasBeenSet; }
  inline void SetTargetSlaMinutes(long long value) {
    m_targetSlaMinutesHasBeenSet = true;
    m_targetSlaMinutes = value;
  }
  inline SlaUpdateConfiguration& WithTargetSlaMinutes(long long value) {
    SetTargetSlaMinutes(value);
    return *this;
  }
  ///@}
 private:
  long long m_targetSlaMinutes{0};
  bool m_targetSlaMinutesHasBeenSet = false;
};

}  // namespace Model
}  // namespace ConnectCases
}  // namespace Aws

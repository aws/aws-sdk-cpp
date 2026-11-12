/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace GuardDuty {
namespace Model {

/**
 * <p>Contains operational details about an investigation, such as how long it
 * took.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/MetadataRecord">AWS
 * API Reference</a></p>
 */
class MetadataRecord {
 public:
  AWS_GUARDDUTY_API MetadataRecord() = default;
  AWS_GUARDDUTY_API MetadataRecord(Aws::Utils::Json::JsonView jsonValue);
  AWS_GUARDDUTY_API MetadataRecord& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The total time that the investigation took, in milliseconds.</p>
   */
  inline long long GetTotalTimeMilliseconds() const { return m_totalTimeMilliseconds; }
  inline bool TotalTimeMillisecondsHasBeenSet() const { return m_totalTimeMillisecondsHasBeenSet; }
  inline void SetTotalTimeMilliseconds(long long value) {
    m_totalTimeMillisecondsHasBeenSet = true;
    m_totalTimeMilliseconds = value;
  }
  inline MetadataRecord& WithTotalTimeMilliseconds(long long value) {
    SetTotalTimeMilliseconds(value);
    return *this;
  }
  ///@}
 private:
  long long m_totalTimeMilliseconds{0};
  bool m_totalTimeMillisecondsHasBeenSet = false;
};

}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws

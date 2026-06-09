/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace DataZone {
namespace Model {

/**
 * <p>The timeout configuration for a notebook run in Amazon SageMaker Unified
 * Studio.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/TimeoutConfig">AWS
 * API Reference</a></p>
 */
class TimeoutConfig {
 public:
  AWS_DATAZONE_API TimeoutConfig() = default;
  AWS_DATAZONE_API TimeoutConfig(Aws::Utils::Json::JsonView jsonValue);
  AWS_DATAZONE_API TimeoutConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The timeout for the notebook run, in minutes. The minimum value is 60 minutes
   * (1 hour), the maximum value is 1440 minutes (24 hours), and the default value is
   * 720 minutes (12 hours).</p>
   */
  inline int GetRunTimeoutInMinutes() const { return m_runTimeoutInMinutes; }
  inline bool RunTimeoutInMinutesHasBeenSet() const { return m_runTimeoutInMinutesHasBeenSet; }
  inline void SetRunTimeoutInMinutes(int value) {
    m_runTimeoutInMinutesHasBeenSet = true;
    m_runTimeoutInMinutes = value;
  }
  inline TimeoutConfig& WithRunTimeoutInMinutes(int value) {
    SetRunTimeoutInMinutes(value);
    return *this;
  }
  ///@}
 private:
  int m_runTimeoutInMinutes{0};
  bool m_runTimeoutInMinutesHasBeenSet = false;
};

}  // namespace Model
}  // namespace DataZone
}  // namespace Aws

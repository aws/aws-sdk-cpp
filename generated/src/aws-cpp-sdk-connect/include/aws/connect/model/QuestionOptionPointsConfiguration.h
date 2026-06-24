/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Connect {
namespace Model {

/**
 * <p>Information about the points configuration for an answer
 * option.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/QuestionOptionPointsConfiguration">AWS
 * API Reference</a></p>
 */
class QuestionOptionPointsConfiguration {
 public:
  AWS_CONNECT_API QuestionOptionPointsConfiguration() = default;
  AWS_CONNECT_API QuestionOptionPointsConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API QuestionOptionPointsConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The point value assigned to the answer option.</p>
   */
  inline int GetPointValue() const { return m_pointValue; }
  inline bool PointValueHasBeenSet() const { return m_pointValueHasBeenSet; }
  inline void SetPointValue(int value) {
    m_pointValueHasBeenSet = true;
    m_pointValue = value;
  }
  inline QuestionOptionPointsConfiguration& WithPointValue(int value) {
    SetPointValue(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The flag to mark the option as a bonus option.</p>
   */
  inline bool GetIsBonus() const { return m_isBonus; }
  inline bool IsBonusHasBeenSet() const { return m_isBonusHasBeenSet; }
  inline void SetIsBonus(bool value) {
    m_isBonusHasBeenSet = true;
    m_isBonus = value;
  }
  inline QuestionOptionPointsConfiguration& WithIsBonus(bool value) {
    SetIsBonus(value);
    return *this;
  }
  ///@}
 private:
  int m_pointValue{0};

  bool m_isBonus{false};
  bool m_pointValueHasBeenSet = false;
  bool m_isBonusHasBeenSet = false;
};

}  // namespace Model
}  // namespace Connect
}  // namespace Aws

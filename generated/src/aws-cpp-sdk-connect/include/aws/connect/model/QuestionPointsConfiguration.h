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
 * <p>Information about the points configuration for a question.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/QuestionPointsConfiguration">AWS
 * API Reference</a></p>
 */
class QuestionPointsConfiguration {
 public:
  AWS_CONNECT_API QuestionPointsConfiguration() = default;
  AWS_CONNECT_API QuestionPointsConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API QuestionPointsConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The maximum point value.</p>
   */
  inline int GetMaxPointValue() const { return m_maxPointValue; }
  inline bool MaxPointValueHasBeenSet() const { return m_maxPointValueHasBeenSet; }
  inline void SetMaxPointValue(int value) {
    m_maxPointValueHasBeenSet = true;
    m_maxPointValue = value;
  }
  inline QuestionPointsConfiguration& WithMaxPointValue(int value) {
    SetMaxPointValue(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The minimum point value.</p>
   */
  inline int GetMinPointValue() const { return m_minPointValue; }
  inline bool MinPointValueHasBeenSet() const { return m_minPointValueHasBeenSet; }
  inline void SetMinPointValue(int value) {
    m_minPointValueHasBeenSet = true;
    m_minPointValue = value;
  }
  inline QuestionPointsConfiguration& WithMinPointValue(int value) {
    SetMinPointValue(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The flag to mark the question as a bonus question.</p>
   */
  inline bool GetIsBonus() const { return m_isBonus; }
  inline bool IsBonusHasBeenSet() const { return m_isBonusHasBeenSet; }
  inline void SetIsBonus(bool value) {
    m_isBonusHasBeenSet = true;
    m_isBonus = value;
  }
  inline QuestionPointsConfiguration& WithIsBonus(bool value) {
    SetIsBonus(value);
    return *this;
  }
  ///@}
 private:
  int m_maxPointValue{0};

  int m_minPointValue{0};

  bool m_isBonus{false};
  bool m_maxPointValueHasBeenSet = false;
  bool m_minPointValueHasBeenSet = false;
  bool m_isBonusHasBeenSet = false;
};

}  // namespace Model
}  // namespace Connect
}  // namespace Aws

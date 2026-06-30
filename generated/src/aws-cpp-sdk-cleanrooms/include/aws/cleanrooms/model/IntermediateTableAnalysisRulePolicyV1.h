/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/cleanrooms/model/IntermediateTableAnalysisRuleCustom.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace CleanRooms {
namespace Model {

/**
 * <p>Contains the version 1 policy for an intermediate table analysis
 * rule.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/cleanrooms-2022-02-17/IntermediateTableAnalysisRulePolicyV1">AWS
 * API Reference</a></p>
 */
class IntermediateTableAnalysisRulePolicyV1 {
 public:
  AWS_CLEANROOMS_API IntermediateTableAnalysisRulePolicyV1() = default;
  AWS_CLEANROOMS_API IntermediateTableAnalysisRulePolicyV1(Aws::Utils::Json::JsonView jsonValue);
  AWS_CLEANROOMS_API IntermediateTableAnalysisRulePolicyV1& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CLEANROOMS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The custom analysis rule policy.</p>
   */
  inline const IntermediateTableAnalysisRuleCustom& GetCustom() const { return m_custom; }
  inline bool CustomHasBeenSet() const { return m_customHasBeenSet; }
  template <typename CustomT = IntermediateTableAnalysisRuleCustom>
  void SetCustom(CustomT&& value) {
    m_customHasBeenSet = true;
    m_custom = std::forward<CustomT>(value);
  }
  template <typename CustomT = IntermediateTableAnalysisRuleCustom>
  IntermediateTableAnalysisRulePolicyV1& WithCustom(CustomT&& value) {
    SetCustom(std::forward<CustomT>(value));
    return *this;
  }
  ///@}
 private:
  IntermediateTableAnalysisRuleCustom m_custom;
  bool m_customHasBeenSet = false;
};

}  // namespace Model
}  // namespace CleanRooms
}  // namespace Aws

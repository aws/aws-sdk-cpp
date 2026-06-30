/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/cleanrooms/model/IntermediateTableAnalysisRulePolicyV1.h>

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
 * <p>Contains the policy for an intermediate table analysis rule.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/cleanrooms-2022-02-17/IntermediateTableAnalysisRulePolicy">AWS
 * API Reference</a></p>
 */
class IntermediateTableAnalysisRulePolicy {
 public:
  AWS_CLEANROOMS_API IntermediateTableAnalysisRulePolicy() = default;
  AWS_CLEANROOMS_API IntermediateTableAnalysisRulePolicy(Aws::Utils::Json::JsonView jsonValue);
  AWS_CLEANROOMS_API IntermediateTableAnalysisRulePolicy& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CLEANROOMS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The version 1 policy for the analysis rule.</p>
   */
  inline const IntermediateTableAnalysisRulePolicyV1& GetV1() const { return m_v1; }
  inline bool V1HasBeenSet() const { return m_v1HasBeenSet; }
  template <typename V1T = IntermediateTableAnalysisRulePolicyV1>
  void SetV1(V1T&& value) {
    m_v1HasBeenSet = true;
    m_v1 = std::forward<V1T>(value);
  }
  template <typename V1T = IntermediateTableAnalysisRulePolicyV1>
  IntermediateTableAnalysisRulePolicy& WithV1(V1T&& value) {
    SetV1(std::forward<V1T>(value));
    return *this;
  }
  ///@}
 private:
  IntermediateTableAnalysisRulePolicyV1 m_v1;
  bool m_v1HasBeenSet = false;
};

}  // namespace Model
}  // namespace CleanRooms
}  // namespace Aws

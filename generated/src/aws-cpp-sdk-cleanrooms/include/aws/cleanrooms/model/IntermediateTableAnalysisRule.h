/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/cleanrooms/model/IntermediateTableAnalysisRulePolicy.h>
#include <aws/cleanrooms/model/IntermediateTableAnalysisRuleType.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>

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
 * <p>Contains the details of an analysis rule for an intermediate
 * table.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/cleanrooms-2022-02-17/IntermediateTableAnalysisRule">AWS
 * API Reference</a></p>
 */
class IntermediateTableAnalysisRule {
 public:
  AWS_CLEANROOMS_API IntermediateTableAnalysisRule() = default;
  AWS_CLEANROOMS_API IntermediateTableAnalysisRule(Aws::Utils::Json::JsonView jsonValue);
  AWS_CLEANROOMS_API IntermediateTableAnalysisRule& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CLEANROOMS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The unique identifier of the intermediate table associated with this analysis
   * rule.</p>
   */
  inline const Aws::String& GetIntermediateTableIdentifier() const { return m_intermediateTableIdentifier; }
  inline bool IntermediateTableIdentifierHasBeenSet() const { return m_intermediateTableIdentifierHasBeenSet; }
  template <typename IntermediateTableIdentifierT = Aws::String>
  void SetIntermediateTableIdentifier(IntermediateTableIdentifierT&& value) {
    m_intermediateTableIdentifierHasBeenSet = true;
    m_intermediateTableIdentifier = std::forward<IntermediateTableIdentifierT>(value);
  }
  template <typename IntermediateTableIdentifierT = Aws::String>
  IntermediateTableAnalysisRule& WithIntermediateTableIdentifier(IntermediateTableIdentifierT&& value) {
    SetIntermediateTableIdentifier(std::forward<IntermediateTableIdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the intermediate table associated with this
   * analysis rule.</p>
   */
  inline const Aws::String& GetIntermediateTableArn() const { return m_intermediateTableArn; }
  inline bool IntermediateTableArnHasBeenSet() const { return m_intermediateTableArnHasBeenSet; }
  template <typename IntermediateTableArnT = Aws::String>
  void SetIntermediateTableArn(IntermediateTableArnT&& value) {
    m_intermediateTableArnHasBeenSet = true;
    m_intermediateTableArn = std::forward<IntermediateTableArnT>(value);
  }
  template <typename IntermediateTableArnT = Aws::String>
  IntermediateTableAnalysisRule& WithIntermediateTableArn(IntermediateTableArnT&& value) {
    SetIntermediateTableArn(std::forward<IntermediateTableArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The policy of the analysis rule.</p>
   */
  inline const IntermediateTableAnalysisRulePolicy& GetAnalysisRulePolicy() const { return m_analysisRulePolicy; }
  inline bool AnalysisRulePolicyHasBeenSet() const { return m_analysisRulePolicyHasBeenSet; }
  template <typename AnalysisRulePolicyT = IntermediateTableAnalysisRulePolicy>
  void SetAnalysisRulePolicy(AnalysisRulePolicyT&& value) {
    m_analysisRulePolicyHasBeenSet = true;
    m_analysisRulePolicy = std::forward<AnalysisRulePolicyT>(value);
  }
  template <typename AnalysisRulePolicyT = IntermediateTableAnalysisRulePolicy>
  IntermediateTableAnalysisRule& WithAnalysisRulePolicy(AnalysisRulePolicyT&& value) {
    SetAnalysisRulePolicy(std::forward<AnalysisRulePolicyT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of the analysis rule.</p>
   */
  inline IntermediateTableAnalysisRuleType GetAnalysisRuleType() const { return m_analysisRuleType; }
  inline bool AnalysisRuleTypeHasBeenSet() const { return m_analysisRuleTypeHasBeenSet; }
  inline void SetAnalysisRuleType(IntermediateTableAnalysisRuleType value) {
    m_analysisRuleTypeHasBeenSet = true;
    m_analysisRuleType = value;
  }
  inline IntermediateTableAnalysisRule& WithAnalysisRuleType(IntermediateTableAnalysisRuleType value) {
    SetAnalysisRuleType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The time the analysis rule was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreateTime() const { return m_createTime; }
  inline bool CreateTimeHasBeenSet() const { return m_createTimeHasBeenSet; }
  template <typename CreateTimeT = Aws::Utils::DateTime>
  void SetCreateTime(CreateTimeT&& value) {
    m_createTimeHasBeenSet = true;
    m_createTime = std::forward<CreateTimeT>(value);
  }
  template <typename CreateTimeT = Aws::Utils::DateTime>
  IntermediateTableAnalysisRule& WithCreateTime(CreateTimeT&& value) {
    SetCreateTime(std::forward<CreateTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The time the analysis rule was last updated.</p>
   */
  inline const Aws::Utils::DateTime& GetUpdateTime() const { return m_updateTime; }
  inline bool UpdateTimeHasBeenSet() const { return m_updateTimeHasBeenSet; }
  template <typename UpdateTimeT = Aws::Utils::DateTime>
  void SetUpdateTime(UpdateTimeT&& value) {
    m_updateTimeHasBeenSet = true;
    m_updateTime = std::forward<UpdateTimeT>(value);
  }
  template <typename UpdateTimeT = Aws::Utils::DateTime>
  IntermediateTableAnalysisRule& WithUpdateTime(UpdateTimeT&& value) {
    SetUpdateTime(std::forward<UpdateTimeT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_intermediateTableIdentifier;

  Aws::String m_intermediateTableArn;

  IntermediateTableAnalysisRulePolicy m_analysisRulePolicy;

  IntermediateTableAnalysisRuleType m_analysisRuleType{IntermediateTableAnalysisRuleType::NOT_SET};

  Aws::Utils::DateTime m_createTime{};

  Aws::Utils::DateTime m_updateTime{};
  bool m_intermediateTableIdentifierHasBeenSet = false;
  bool m_intermediateTableArnHasBeenSet = false;
  bool m_analysisRulePolicyHasBeenSet = false;
  bool m_analysisRuleTypeHasBeenSet = false;
  bool m_createTimeHasBeenSet = false;
  bool m_updateTimeHasBeenSet = false;
};

}  // namespace Model
}  // namespace CleanRooms
}  // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>
#include <aws/bedrock-agentcore/model/InsightRootCause.h>
#include <aws/bedrock-agentcore/model/InsightType.h>
#include <aws/bedrock-agentcore/model/SampleSession.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace BedrockAgentCore {
namespace Model {

/**
 * <p>An insight that groups related failures found across the sessions in a batch
 * evaluation.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-2024-02-28/InsightResult">AWS
 * API Reference</a></p>
 */
class InsightResult {
 public:
  AWS_BEDROCKAGENTCORE_API InsightResult() = default;
  AWS_BEDROCKAGENTCORE_API InsightResult(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API InsightResult& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The type of insight. <code>FAILURE</code> indicates a group of related
   * failures.</p>
   */
  inline InsightType GetType() const { return m_type; }
  inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
  inline void SetType(InsightType value) {
    m_typeHasBeenSet = true;
    m_type = value;
  }
  inline InsightResult& WithType(InsightType value) {
    SetType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A generated label for the insight. The name is not an identifier and can
   * differ between batch evaluations.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  InsightResult& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A description of the failure pattern that the insight represents.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  InsightResult& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the insight was generated.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  InsightResult& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of distinct sessions affected by the insight.</p>
   */
  inline int GetAffectedSessionCount() const { return m_affectedSessionCount; }
  inline bool AffectedSessionCountHasBeenSet() const { return m_affectedSessionCountHasBeenSet; }
  inline void SetAffectedSessionCount(int value) {
    m_affectedSessionCountHasBeenSet = true;
    m_affectedSessionCount = value;
  }
  inline InsightResult& WithAffectedSessionCount(int value) {
    SetAffectedSessionCount(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A sample of up to 10 sessions affected by the insight. Returned only when the
   * insight has no root causes. Otherwise, sample sessions are returned for each
   * root cause.</p>
   */
  inline const Aws::Vector<SampleSession>& GetSampleSessions() const { return m_sampleSessions; }
  inline bool SampleSessionsHasBeenSet() const { return m_sampleSessionsHasBeenSet; }
  template <typename SampleSessionsT = Aws::Vector<SampleSession>>
  void SetSampleSessions(SampleSessionsT&& value) {
    m_sampleSessionsHasBeenSet = true;
    m_sampleSessions = std::forward<SampleSessionsT>(value);
  }
  template <typename SampleSessionsT = Aws::Vector<SampleSession>>
  InsightResult& WithSampleSessions(SampleSessionsT&& value) {
    SetSampleSessions(std::forward<SampleSessionsT>(value));
    return *this;
  }
  template <typename SampleSessionsT = SampleSession>
  InsightResult& AddSampleSessions(SampleSessionsT&& value) {
    m_sampleSessionsHasBeenSet = true;
    m_sampleSessions.emplace_back(std::forward<SampleSessionsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The root causes identified for the insight.</p>
   */
  inline const Aws::Vector<InsightRootCause>& GetRootCauses() const { return m_rootCauses; }
  inline bool RootCausesHasBeenSet() const { return m_rootCausesHasBeenSet; }
  template <typename RootCausesT = Aws::Vector<InsightRootCause>>
  void SetRootCauses(RootCausesT&& value) {
    m_rootCausesHasBeenSet = true;
    m_rootCauses = std::forward<RootCausesT>(value);
  }
  template <typename RootCausesT = Aws::Vector<InsightRootCause>>
  InsightResult& WithRootCauses(RootCausesT&& value) {
    SetRootCauses(std::forward<RootCausesT>(value));
    return *this;
  }
  template <typename RootCausesT = InsightRootCause>
  InsightResult& AddRootCauses(RootCausesT&& value) {
    m_rootCausesHasBeenSet = true;
    m_rootCauses.emplace_back(std::forward<RootCausesT>(value));
    return *this;
  }
  ///@}
 private:
  InsightType m_type{InsightType::NOT_SET};

  Aws::String m_name;

  Aws::String m_description;

  Aws::Utils::DateTime m_createdAt{};

  int m_affectedSessionCount{0};

  Aws::Vector<SampleSession> m_sampleSessions;

  Aws::Vector<InsightRootCause> m_rootCauses;
  bool m_typeHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
  bool m_affectedSessionCountHasBeenSet = false;
  bool m_sampleSessionsHasBeenSet = false;
  bool m_rootCausesHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws

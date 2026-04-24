/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/lexv2-models/model/IssueLocation.h>
#include <aws/lexv2-models/model/Priority.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace LexModelsV2 {
namespace Model {

/**
 * <p>Contains a recommendation for bot optimization identified by the Bot
 * Analyzer.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/BotAnalyzerRecommendation">AWS
 * API Reference</a></p>
 */
class BotAnalyzerRecommendation {
 public:
  AWS_LEXMODELSV2_API BotAnalyzerRecommendation() = default;
  AWS_LEXMODELSV2_API BotAnalyzerRecommendation(Aws::Utils::Json::JsonView jsonValue);
  AWS_LEXMODELSV2_API BotAnalyzerRecommendation& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The location information for the identified issue within the bot
   * configuration.</p>
   */
  inline const IssueLocation& GetIssueLocation() const { return m_issueLocation; }
  inline bool IssueLocationHasBeenSet() const { return m_issueLocationHasBeenSet; }
  template <typename IssueLocationT = IssueLocation>
  void SetIssueLocation(IssueLocationT&& value) {
    m_issueLocationHasBeenSet = true;
    m_issueLocation = std::forward<IssueLocationT>(value);
  }
  template <typename IssueLocationT = IssueLocation>
  BotAnalyzerRecommendation& WithIssueLocation(IssueLocationT&& value) {
    SetIssueLocation(std::forward<IssueLocationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The priority level of the recommendation.</p> <p>Valid Values: <code>High |
   * Medium | Low</code> </p>
   */
  inline Priority GetPriority() const { return m_priority; }
  inline bool PriorityHasBeenSet() const { return m_priorityHasBeenSet; }
  inline void SetPriority(Priority value) {
    m_priorityHasBeenSet = true;
    m_priority = value;
  }
  inline BotAnalyzerRecommendation& WithPriority(Priority value) {
    SetPriority(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A detailed description of the identified configuration issue.</p>
   */
  inline const Aws::String& GetIssueDescription() const { return m_issueDescription; }
  inline bool IssueDescriptionHasBeenSet() const { return m_issueDescriptionHasBeenSet; }
  template <typename IssueDescriptionT = Aws::String>
  void SetIssueDescription(IssueDescriptionT&& value) {
    m_issueDescriptionHasBeenSet = true;
    m_issueDescription = std::forward<IssueDescriptionT>(value);
  }
  template <typename IssueDescriptionT = Aws::String>
  BotAnalyzerRecommendation& WithIssueDescription(IssueDescriptionT&& value) {
    SetIssueDescription(std::forward<IssueDescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The recommended solution to address the identified issue.</p>
   */
  inline const Aws::String& GetProposedFix() const { return m_proposedFix; }
  inline bool ProposedFixHasBeenSet() const { return m_proposedFixHasBeenSet; }
  template <typename ProposedFixT = Aws::String>
  void SetProposedFix(ProposedFixT&& value) {
    m_proposedFixHasBeenSet = true;
    m_proposedFix = std::forward<ProposedFixT>(value);
  }
  template <typename ProposedFixT = Aws::String>
  BotAnalyzerRecommendation& WithProposedFix(ProposedFixT&& value) {
    SetProposedFix(std::forward<ProposedFixT>(value));
    return *this;
  }
  ///@}
 private:
  IssueLocation m_issueLocation;

  Priority m_priority{Priority::NOT_SET};

  Aws::String m_issueDescription;

  Aws::String m_proposedFix;
  bool m_issueLocationHasBeenSet = false;
  bool m_priorityHasBeenSet = false;
  bool m_issueDescriptionHasBeenSet = false;
  bool m_proposedFixHasBeenSet = false;
};

}  // namespace Model
}  // namespace LexModelsV2
}  // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wellarchitected/WellArchitected_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/wellarchitected/model/Risk.h>
#include <aws/wellarchitected/model/AnswerReason.h>
#include <aws/wellarchitected/model/Choice.h>
#include <aws/wellarchitected/model/ChoiceAnswer.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace WellArchitected
{
namespace Model
{

  /**
   * <p>An answer of the question.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/Answer">AWS
   * API Reference</a></p>
   */
  class Answer
  {
  public:
    AWS_WELLARCHITECTED_API Answer();
    AWS_WELLARCHITECTED_API Answer(Aws::Utils::Json::JsonView jsonValue);
    AWS_WELLARCHITECTED_API Answer& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WELLARCHITECTED_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::String& GetQuestionId() const{ return m_questionId; }

    
    inline bool QuestionIdHasBeenSet() const { return m_questionIdHasBeenSet; }

    
    inline void SetQuestionId(const Aws::String& value) { m_questionIdHasBeenSet = true; m_questionId = value; }

    
    inline void SetQuestionId(Aws::String&& value) { m_questionIdHasBeenSet = true; m_questionId = std::move(value); }

    
    inline void SetQuestionId(const char* value) { m_questionIdHasBeenSet = true; m_questionId.assign(value); }

    
    inline Answer& WithQuestionId(const Aws::String& value) { SetQuestionId(value); return *this;}

    
    inline Answer& WithQuestionId(Aws::String&& value) { SetQuestionId(std::move(value)); return *this;}

    
    inline Answer& WithQuestionId(const char* value) { SetQuestionId(value); return *this;}


    
    inline const Aws::String& GetPillarId() const{ return m_pillarId; }

    
    inline bool PillarIdHasBeenSet() const { return m_pillarIdHasBeenSet; }

    
    inline void SetPillarId(const Aws::String& value) { m_pillarIdHasBeenSet = true; m_pillarId = value; }

    
    inline void SetPillarId(Aws::String&& value) { m_pillarIdHasBeenSet = true; m_pillarId = std::move(value); }

    
    inline void SetPillarId(const char* value) { m_pillarIdHasBeenSet = true; m_pillarId.assign(value); }

    
    inline Answer& WithPillarId(const Aws::String& value) { SetPillarId(value); return *this;}

    
    inline Answer& WithPillarId(Aws::String&& value) { SetPillarId(std::move(value)); return *this;}

    
    inline Answer& WithPillarId(const char* value) { SetPillarId(value); return *this;}


    
    inline const Aws::String& GetQuestionTitle() const{ return m_questionTitle; }

    
    inline bool QuestionTitleHasBeenSet() const { return m_questionTitleHasBeenSet; }

    
    inline void SetQuestionTitle(const Aws::String& value) { m_questionTitleHasBeenSet = true; m_questionTitle = value; }

    
    inline void SetQuestionTitle(Aws::String&& value) { m_questionTitleHasBeenSet = true; m_questionTitle = std::move(value); }

    
    inline void SetQuestionTitle(const char* value) { m_questionTitleHasBeenSet = true; m_questionTitle.assign(value); }

    
    inline Answer& WithQuestionTitle(const Aws::String& value) { SetQuestionTitle(value); return *this;}

    
    inline Answer& WithQuestionTitle(Aws::String&& value) { SetQuestionTitle(std::move(value)); return *this;}

    
    inline Answer& WithQuestionTitle(const char* value) { SetQuestionTitle(value); return *this;}


    
    inline const Aws::String& GetQuestionDescription() const{ return m_questionDescription; }

    
    inline bool QuestionDescriptionHasBeenSet() const { return m_questionDescriptionHasBeenSet; }

    
    inline void SetQuestionDescription(const Aws::String& value) { m_questionDescriptionHasBeenSet = true; m_questionDescription = value; }

    
    inline void SetQuestionDescription(Aws::String&& value) { m_questionDescriptionHasBeenSet = true; m_questionDescription = std::move(value); }

    
    inline void SetQuestionDescription(const char* value) { m_questionDescriptionHasBeenSet = true; m_questionDescription.assign(value); }

    
    inline Answer& WithQuestionDescription(const Aws::String& value) { SetQuestionDescription(value); return *this;}

    
    inline Answer& WithQuestionDescription(Aws::String&& value) { SetQuestionDescription(std::move(value)); return *this;}

    
    inline Answer& WithQuestionDescription(const char* value) { SetQuestionDescription(value); return *this;}


    
    inline const Aws::String& GetImprovementPlanUrl() const{ return m_improvementPlanUrl; }

    
    inline bool ImprovementPlanUrlHasBeenSet() const { return m_improvementPlanUrlHasBeenSet; }

    
    inline void SetImprovementPlanUrl(const Aws::String& value) { m_improvementPlanUrlHasBeenSet = true; m_improvementPlanUrl = value; }

    
    inline void SetImprovementPlanUrl(Aws::String&& value) { m_improvementPlanUrlHasBeenSet = true; m_improvementPlanUrl = std::move(value); }

    
    inline void SetImprovementPlanUrl(const char* value) { m_improvementPlanUrlHasBeenSet = true; m_improvementPlanUrl.assign(value); }

    
    inline Answer& WithImprovementPlanUrl(const Aws::String& value) { SetImprovementPlanUrl(value); return *this;}

    
    inline Answer& WithImprovementPlanUrl(Aws::String&& value) { SetImprovementPlanUrl(std::move(value)); return *this;}

    
    inline Answer& WithImprovementPlanUrl(const char* value) { SetImprovementPlanUrl(value); return *this;}


    
    inline const Aws::String& GetHelpfulResourceUrl() const{ return m_helpfulResourceUrl; }

    
    inline bool HelpfulResourceUrlHasBeenSet() const { return m_helpfulResourceUrlHasBeenSet; }

    
    inline void SetHelpfulResourceUrl(const Aws::String& value) { m_helpfulResourceUrlHasBeenSet = true; m_helpfulResourceUrl = value; }

    
    inline void SetHelpfulResourceUrl(Aws::String&& value) { m_helpfulResourceUrlHasBeenSet = true; m_helpfulResourceUrl = std::move(value); }

    
    inline void SetHelpfulResourceUrl(const char* value) { m_helpfulResourceUrlHasBeenSet = true; m_helpfulResourceUrl.assign(value); }

    
    inline Answer& WithHelpfulResourceUrl(const Aws::String& value) { SetHelpfulResourceUrl(value); return *this;}

    
    inline Answer& WithHelpfulResourceUrl(Aws::String&& value) { SetHelpfulResourceUrl(std::move(value)); return *this;}

    
    inline Answer& WithHelpfulResourceUrl(const char* value) { SetHelpfulResourceUrl(value); return *this;}


    /**
     * <p>The helpful resource text to be displayed.</p>
     */
    inline const Aws::String& GetHelpfulResourceDisplayText() const{ return m_helpfulResourceDisplayText; }

    /**
     * <p>The helpful resource text to be displayed.</p>
     */
    inline bool HelpfulResourceDisplayTextHasBeenSet() const { return m_helpfulResourceDisplayTextHasBeenSet; }

    /**
     * <p>The helpful resource text to be displayed.</p>
     */
    inline void SetHelpfulResourceDisplayText(const Aws::String& value) { m_helpfulResourceDisplayTextHasBeenSet = true; m_helpfulResourceDisplayText = value; }

    /**
     * <p>The helpful resource text to be displayed.</p>
     */
    inline void SetHelpfulResourceDisplayText(Aws::String&& value) { m_helpfulResourceDisplayTextHasBeenSet = true; m_helpfulResourceDisplayText = std::move(value); }

    /**
     * <p>The helpful resource text to be displayed.</p>
     */
    inline void SetHelpfulResourceDisplayText(const char* value) { m_helpfulResourceDisplayTextHasBeenSet = true; m_helpfulResourceDisplayText.assign(value); }

    /**
     * <p>The helpful resource text to be displayed.</p>
     */
    inline Answer& WithHelpfulResourceDisplayText(const Aws::String& value) { SetHelpfulResourceDisplayText(value); return *this;}

    /**
     * <p>The helpful resource text to be displayed.</p>
     */
    inline Answer& WithHelpfulResourceDisplayText(Aws::String&& value) { SetHelpfulResourceDisplayText(std::move(value)); return *this;}

    /**
     * <p>The helpful resource text to be displayed.</p>
     */
    inline Answer& WithHelpfulResourceDisplayText(const char* value) { SetHelpfulResourceDisplayText(value); return *this;}


    
    inline const Aws::Vector<Choice>& GetChoices() const{ return m_choices; }

    
    inline bool ChoicesHasBeenSet() const { return m_choicesHasBeenSet; }

    
    inline void SetChoices(const Aws::Vector<Choice>& value) { m_choicesHasBeenSet = true; m_choices = value; }

    
    inline void SetChoices(Aws::Vector<Choice>&& value) { m_choicesHasBeenSet = true; m_choices = std::move(value); }

    
    inline Answer& WithChoices(const Aws::Vector<Choice>& value) { SetChoices(value); return *this;}

    
    inline Answer& WithChoices(Aws::Vector<Choice>&& value) { SetChoices(std::move(value)); return *this;}

    
    inline Answer& AddChoices(const Choice& value) { m_choicesHasBeenSet = true; m_choices.push_back(value); return *this; }

    
    inline Answer& AddChoices(Choice&& value) { m_choicesHasBeenSet = true; m_choices.push_back(std::move(value)); return *this; }


    
    inline const Aws::Vector<Aws::String>& GetSelectedChoices() const{ return m_selectedChoices; }

    
    inline bool SelectedChoicesHasBeenSet() const { return m_selectedChoicesHasBeenSet; }

    
    inline void SetSelectedChoices(const Aws::Vector<Aws::String>& value) { m_selectedChoicesHasBeenSet = true; m_selectedChoices = value; }

    
    inline void SetSelectedChoices(Aws::Vector<Aws::String>&& value) { m_selectedChoicesHasBeenSet = true; m_selectedChoices = std::move(value); }

    
    inline Answer& WithSelectedChoices(const Aws::Vector<Aws::String>& value) { SetSelectedChoices(value); return *this;}

    
    inline Answer& WithSelectedChoices(Aws::Vector<Aws::String>&& value) { SetSelectedChoices(std::move(value)); return *this;}

    
    inline Answer& AddSelectedChoices(const Aws::String& value) { m_selectedChoicesHasBeenSet = true; m_selectedChoices.push_back(value); return *this; }

    
    inline Answer& AddSelectedChoices(Aws::String&& value) { m_selectedChoicesHasBeenSet = true; m_selectedChoices.push_back(std::move(value)); return *this; }

    
    inline Answer& AddSelectedChoices(const char* value) { m_selectedChoicesHasBeenSet = true; m_selectedChoices.push_back(value); return *this; }


    /**
     * <p>A list of selected choices to a question in your workload.</p>
     */
    inline const Aws::Vector<ChoiceAnswer>& GetChoiceAnswers() const{ return m_choiceAnswers; }

    /**
     * <p>A list of selected choices to a question in your workload.</p>
     */
    inline bool ChoiceAnswersHasBeenSet() const { return m_choiceAnswersHasBeenSet; }

    /**
     * <p>A list of selected choices to a question in your workload.</p>
     */
    inline void SetChoiceAnswers(const Aws::Vector<ChoiceAnswer>& value) { m_choiceAnswersHasBeenSet = true; m_choiceAnswers = value; }

    /**
     * <p>A list of selected choices to a question in your workload.</p>
     */
    inline void SetChoiceAnswers(Aws::Vector<ChoiceAnswer>&& value) { m_choiceAnswersHasBeenSet = true; m_choiceAnswers = std::move(value); }

    /**
     * <p>A list of selected choices to a question in your workload.</p>
     */
    inline Answer& WithChoiceAnswers(const Aws::Vector<ChoiceAnswer>& value) { SetChoiceAnswers(value); return *this;}

    /**
     * <p>A list of selected choices to a question in your workload.</p>
     */
    inline Answer& WithChoiceAnswers(Aws::Vector<ChoiceAnswer>&& value) { SetChoiceAnswers(std::move(value)); return *this;}

    /**
     * <p>A list of selected choices to a question in your workload.</p>
     */
    inline Answer& AddChoiceAnswers(const ChoiceAnswer& value) { m_choiceAnswersHasBeenSet = true; m_choiceAnswers.push_back(value); return *this; }

    /**
     * <p>A list of selected choices to a question in your workload.</p>
     */
    inline Answer& AddChoiceAnswers(ChoiceAnswer&& value) { m_choiceAnswersHasBeenSet = true; m_choiceAnswers.push_back(std::move(value)); return *this; }


    
    inline bool GetIsApplicable() const{ return m_isApplicable; }

    
    inline bool IsApplicableHasBeenSet() const { return m_isApplicableHasBeenSet; }

    
    inline void SetIsApplicable(bool value) { m_isApplicableHasBeenSet = true; m_isApplicable = value; }

    
    inline Answer& WithIsApplicable(bool value) { SetIsApplicable(value); return *this;}


    
    inline const Risk& GetRisk() const{ return m_risk; }

    
    inline bool RiskHasBeenSet() const { return m_riskHasBeenSet; }

    
    inline void SetRisk(const Risk& value) { m_riskHasBeenSet = true; m_risk = value; }

    
    inline void SetRisk(Risk&& value) { m_riskHasBeenSet = true; m_risk = std::move(value); }

    
    inline Answer& WithRisk(const Risk& value) { SetRisk(value); return *this;}

    
    inline Answer& WithRisk(Risk&& value) { SetRisk(std::move(value)); return *this;}


    
    inline const Aws::String& GetNotes() const{ return m_notes; }

    
    inline bool NotesHasBeenSet() const { return m_notesHasBeenSet; }

    
    inline void SetNotes(const Aws::String& value) { m_notesHasBeenSet = true; m_notes = value; }

    
    inline void SetNotes(Aws::String&& value) { m_notesHasBeenSet = true; m_notes = std::move(value); }

    
    inline void SetNotes(const char* value) { m_notesHasBeenSet = true; m_notes.assign(value); }

    
    inline Answer& WithNotes(const Aws::String& value) { SetNotes(value); return *this;}

    
    inline Answer& WithNotes(Aws::String&& value) { SetNotes(std::move(value)); return *this;}

    
    inline Answer& WithNotes(const char* value) { SetNotes(value); return *this;}


    /**
     * <p>The reason why the question is not applicable to your workload.</p>
     */
    inline const AnswerReason& GetReason() const{ return m_reason; }

    /**
     * <p>The reason why the question is not applicable to your workload.</p>
     */
    inline bool ReasonHasBeenSet() const { return m_reasonHasBeenSet; }

    /**
     * <p>The reason why the question is not applicable to your workload.</p>
     */
    inline void SetReason(const AnswerReason& value) { m_reasonHasBeenSet = true; m_reason = value; }

    /**
     * <p>The reason why the question is not applicable to your workload.</p>
     */
    inline void SetReason(AnswerReason&& value) { m_reasonHasBeenSet = true; m_reason = std::move(value); }

    /**
     * <p>The reason why the question is not applicable to your workload.</p>
     */
    inline Answer& WithReason(const AnswerReason& value) { SetReason(value); return *this;}

    /**
     * <p>The reason why the question is not applicable to your workload.</p>
     */
    inline Answer& WithReason(AnswerReason&& value) { SetReason(std::move(value)); return *this;}

  private:

    Aws::String m_questionId;
    bool m_questionIdHasBeenSet = false;

    Aws::String m_pillarId;
    bool m_pillarIdHasBeenSet = false;

    Aws::String m_questionTitle;
    bool m_questionTitleHasBeenSet = false;

    Aws::String m_questionDescription;
    bool m_questionDescriptionHasBeenSet = false;

    Aws::String m_improvementPlanUrl;
    bool m_improvementPlanUrlHasBeenSet = false;

    Aws::String m_helpfulResourceUrl;
    bool m_helpfulResourceUrlHasBeenSet = false;

    Aws::String m_helpfulResourceDisplayText;
    bool m_helpfulResourceDisplayTextHasBeenSet = false;

    Aws::Vector<Choice> m_choices;
    bool m_choicesHasBeenSet = false;

    Aws::Vector<Aws::String> m_selectedChoices;
    bool m_selectedChoicesHasBeenSet = false;

    Aws::Vector<ChoiceAnswer> m_choiceAnswers;
    bool m_choiceAnswersHasBeenSet = false;

    bool m_isApplicable;
    bool m_isApplicableHasBeenSet = false;

    Risk m_risk;
    bool m_riskHasBeenSet = false;

    Aws::String m_notes;
    bool m_notesHasBeenSet = false;

    AnswerReason m_reason;
    bool m_reasonHasBeenSet = false;
  };

} // namespace Model
} // namespace WellArchitected
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wellarchitected/WellArchitected_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/wellarchitected/model/Risk.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/wellarchitected/model/ChoiceImprovementPlan.h>
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
   * <p>An improvement summary of a lens review in a workload.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/ImprovementSummary">AWS
   * API Reference</a></p>
   */
  class ImprovementSummary
  {
  public:
    AWS_WELLARCHITECTED_API ImprovementSummary();
    AWS_WELLARCHITECTED_API ImprovementSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_WELLARCHITECTED_API ImprovementSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WELLARCHITECTED_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::String& GetQuestionId() const{ return m_questionId; }

    
    inline bool QuestionIdHasBeenSet() const { return m_questionIdHasBeenSet; }

    
    inline void SetQuestionId(const Aws::String& value) { m_questionIdHasBeenSet = true; m_questionId = value; }

    
    inline void SetQuestionId(Aws::String&& value) { m_questionIdHasBeenSet = true; m_questionId = std::move(value); }

    
    inline void SetQuestionId(const char* value) { m_questionIdHasBeenSet = true; m_questionId.assign(value); }

    
    inline ImprovementSummary& WithQuestionId(const Aws::String& value) { SetQuestionId(value); return *this;}

    
    inline ImprovementSummary& WithQuestionId(Aws::String&& value) { SetQuestionId(std::move(value)); return *this;}

    
    inline ImprovementSummary& WithQuestionId(const char* value) { SetQuestionId(value); return *this;}


    
    inline const Aws::String& GetPillarId() const{ return m_pillarId; }

    
    inline bool PillarIdHasBeenSet() const { return m_pillarIdHasBeenSet; }

    
    inline void SetPillarId(const Aws::String& value) { m_pillarIdHasBeenSet = true; m_pillarId = value; }

    
    inline void SetPillarId(Aws::String&& value) { m_pillarIdHasBeenSet = true; m_pillarId = std::move(value); }

    
    inline void SetPillarId(const char* value) { m_pillarIdHasBeenSet = true; m_pillarId.assign(value); }

    
    inline ImprovementSummary& WithPillarId(const Aws::String& value) { SetPillarId(value); return *this;}

    
    inline ImprovementSummary& WithPillarId(Aws::String&& value) { SetPillarId(std::move(value)); return *this;}

    
    inline ImprovementSummary& WithPillarId(const char* value) { SetPillarId(value); return *this;}


    
    inline const Aws::String& GetQuestionTitle() const{ return m_questionTitle; }

    
    inline bool QuestionTitleHasBeenSet() const { return m_questionTitleHasBeenSet; }

    
    inline void SetQuestionTitle(const Aws::String& value) { m_questionTitleHasBeenSet = true; m_questionTitle = value; }

    
    inline void SetQuestionTitle(Aws::String&& value) { m_questionTitleHasBeenSet = true; m_questionTitle = std::move(value); }

    
    inline void SetQuestionTitle(const char* value) { m_questionTitleHasBeenSet = true; m_questionTitle.assign(value); }

    
    inline ImprovementSummary& WithQuestionTitle(const Aws::String& value) { SetQuestionTitle(value); return *this;}

    
    inline ImprovementSummary& WithQuestionTitle(Aws::String&& value) { SetQuestionTitle(std::move(value)); return *this;}

    
    inline ImprovementSummary& WithQuestionTitle(const char* value) { SetQuestionTitle(value); return *this;}


    
    inline const Risk& GetRisk() const{ return m_risk; }

    
    inline bool RiskHasBeenSet() const { return m_riskHasBeenSet; }

    
    inline void SetRisk(const Risk& value) { m_riskHasBeenSet = true; m_risk = value; }

    
    inline void SetRisk(Risk&& value) { m_riskHasBeenSet = true; m_risk = std::move(value); }

    
    inline ImprovementSummary& WithRisk(const Risk& value) { SetRisk(value); return *this;}

    
    inline ImprovementSummary& WithRisk(Risk&& value) { SetRisk(std::move(value)); return *this;}


    
    inline const Aws::String& GetImprovementPlanUrl() const{ return m_improvementPlanUrl; }

    
    inline bool ImprovementPlanUrlHasBeenSet() const { return m_improvementPlanUrlHasBeenSet; }

    
    inline void SetImprovementPlanUrl(const Aws::String& value) { m_improvementPlanUrlHasBeenSet = true; m_improvementPlanUrl = value; }

    
    inline void SetImprovementPlanUrl(Aws::String&& value) { m_improvementPlanUrlHasBeenSet = true; m_improvementPlanUrl = std::move(value); }

    
    inline void SetImprovementPlanUrl(const char* value) { m_improvementPlanUrlHasBeenSet = true; m_improvementPlanUrl.assign(value); }

    
    inline ImprovementSummary& WithImprovementPlanUrl(const Aws::String& value) { SetImprovementPlanUrl(value); return *this;}

    
    inline ImprovementSummary& WithImprovementPlanUrl(Aws::String&& value) { SetImprovementPlanUrl(std::move(value)); return *this;}

    
    inline ImprovementSummary& WithImprovementPlanUrl(const char* value) { SetImprovementPlanUrl(value); return *this;}


    /**
     * <p>The improvement plan details.</p>
     */
    inline const Aws::Vector<ChoiceImprovementPlan>& GetImprovementPlans() const{ return m_improvementPlans; }

    /**
     * <p>The improvement plan details.</p>
     */
    inline bool ImprovementPlansHasBeenSet() const { return m_improvementPlansHasBeenSet; }

    /**
     * <p>The improvement plan details.</p>
     */
    inline void SetImprovementPlans(const Aws::Vector<ChoiceImprovementPlan>& value) { m_improvementPlansHasBeenSet = true; m_improvementPlans = value; }

    /**
     * <p>The improvement plan details.</p>
     */
    inline void SetImprovementPlans(Aws::Vector<ChoiceImprovementPlan>&& value) { m_improvementPlansHasBeenSet = true; m_improvementPlans = std::move(value); }

    /**
     * <p>The improvement plan details.</p>
     */
    inline ImprovementSummary& WithImprovementPlans(const Aws::Vector<ChoiceImprovementPlan>& value) { SetImprovementPlans(value); return *this;}

    /**
     * <p>The improvement plan details.</p>
     */
    inline ImprovementSummary& WithImprovementPlans(Aws::Vector<ChoiceImprovementPlan>&& value) { SetImprovementPlans(std::move(value)); return *this;}

    /**
     * <p>The improvement plan details.</p>
     */
    inline ImprovementSummary& AddImprovementPlans(const ChoiceImprovementPlan& value) { m_improvementPlansHasBeenSet = true; m_improvementPlans.push_back(value); return *this; }

    /**
     * <p>The improvement plan details.</p>
     */
    inline ImprovementSummary& AddImprovementPlans(ChoiceImprovementPlan&& value) { m_improvementPlansHasBeenSet = true; m_improvementPlans.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_questionId;
    bool m_questionIdHasBeenSet = false;

    Aws::String m_pillarId;
    bool m_pillarIdHasBeenSet = false;

    Aws::String m_questionTitle;
    bool m_questionTitleHasBeenSet = false;

    Risk m_risk;
    bool m_riskHasBeenSet = false;

    Aws::String m_improvementPlanUrl;
    bool m_improvementPlanUrlHasBeenSet = false;

    Aws::Vector<ChoiceImprovementPlan> m_improvementPlans;
    bool m_improvementPlansHasBeenSet = false;
  };

} // namespace Model
} // namespace WellArchitected
} // namespace Aws

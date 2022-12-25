/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wellarchitected/WellArchitected_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>The choice level improvement plan.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/ChoiceImprovementPlan">AWS
   * API Reference</a></p>
   */
  class ChoiceImprovementPlan
  {
  public:
    AWS_WELLARCHITECTED_API ChoiceImprovementPlan();
    AWS_WELLARCHITECTED_API ChoiceImprovementPlan(Aws::Utils::Json::JsonView jsonValue);
    AWS_WELLARCHITECTED_API ChoiceImprovementPlan& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WELLARCHITECTED_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::String& GetChoiceId() const{ return m_choiceId; }

    
    inline bool ChoiceIdHasBeenSet() const { return m_choiceIdHasBeenSet; }

    
    inline void SetChoiceId(const Aws::String& value) { m_choiceIdHasBeenSet = true; m_choiceId = value; }

    
    inline void SetChoiceId(Aws::String&& value) { m_choiceIdHasBeenSet = true; m_choiceId = std::move(value); }

    
    inline void SetChoiceId(const char* value) { m_choiceIdHasBeenSet = true; m_choiceId.assign(value); }

    
    inline ChoiceImprovementPlan& WithChoiceId(const Aws::String& value) { SetChoiceId(value); return *this;}

    
    inline ChoiceImprovementPlan& WithChoiceId(Aws::String&& value) { SetChoiceId(std::move(value)); return *this;}

    
    inline ChoiceImprovementPlan& WithChoiceId(const char* value) { SetChoiceId(value); return *this;}


    /**
     * <p>The display text for the improvement plan.</p>
     */
    inline const Aws::String& GetDisplayText() const{ return m_displayText; }

    /**
     * <p>The display text for the improvement plan.</p>
     */
    inline bool DisplayTextHasBeenSet() const { return m_displayTextHasBeenSet; }

    /**
     * <p>The display text for the improvement plan.</p>
     */
    inline void SetDisplayText(const Aws::String& value) { m_displayTextHasBeenSet = true; m_displayText = value; }

    /**
     * <p>The display text for the improvement plan.</p>
     */
    inline void SetDisplayText(Aws::String&& value) { m_displayTextHasBeenSet = true; m_displayText = std::move(value); }

    /**
     * <p>The display text for the improvement plan.</p>
     */
    inline void SetDisplayText(const char* value) { m_displayTextHasBeenSet = true; m_displayText.assign(value); }

    /**
     * <p>The display text for the improvement plan.</p>
     */
    inline ChoiceImprovementPlan& WithDisplayText(const Aws::String& value) { SetDisplayText(value); return *this;}

    /**
     * <p>The display text for the improvement plan.</p>
     */
    inline ChoiceImprovementPlan& WithDisplayText(Aws::String&& value) { SetDisplayText(std::move(value)); return *this;}

    /**
     * <p>The display text for the improvement plan.</p>
     */
    inline ChoiceImprovementPlan& WithDisplayText(const char* value) { SetDisplayText(value); return *this;}


    
    inline const Aws::String& GetImprovementPlanUrl() const{ return m_improvementPlanUrl; }

    
    inline bool ImprovementPlanUrlHasBeenSet() const { return m_improvementPlanUrlHasBeenSet; }

    
    inline void SetImprovementPlanUrl(const Aws::String& value) { m_improvementPlanUrlHasBeenSet = true; m_improvementPlanUrl = value; }

    
    inline void SetImprovementPlanUrl(Aws::String&& value) { m_improvementPlanUrlHasBeenSet = true; m_improvementPlanUrl = std::move(value); }

    
    inline void SetImprovementPlanUrl(const char* value) { m_improvementPlanUrlHasBeenSet = true; m_improvementPlanUrl.assign(value); }

    
    inline ChoiceImprovementPlan& WithImprovementPlanUrl(const Aws::String& value) { SetImprovementPlanUrl(value); return *this;}

    
    inline ChoiceImprovementPlan& WithImprovementPlanUrl(Aws::String&& value) { SetImprovementPlanUrl(std::move(value)); return *this;}

    
    inline ChoiceImprovementPlan& WithImprovementPlanUrl(const char* value) { SetImprovementPlanUrl(value); return *this;}

  private:

    Aws::String m_choiceId;
    bool m_choiceIdHasBeenSet = false;

    Aws::String m_displayText;
    bool m_displayTextHasBeenSet = false;

    Aws::String m_improvementPlanUrl;
    bool m_improvementPlanUrlHasBeenSet = false;
  };

} // namespace Model
} // namespace WellArchitected
} // namespace Aws

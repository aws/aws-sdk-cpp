/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/connect/model/EvaluationFormScoringStrategy.h>
#include <aws/connect/model/EvaluationFormItem.h>
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
namespace Connect
{
namespace Model
{

  /**
   * <p>Information about an evaluation form used in a contact
   * evaluation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/EvaluationFormContent">AWS
   * API Reference</a></p>
   */
  class EvaluationFormContent
  {
  public:
    AWS_CONNECT_API EvaluationFormContent();
    AWS_CONNECT_API EvaluationFormContent(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API EvaluationFormContent& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A version of the evaluation form.</p>
     */
    inline int GetEvaluationFormVersion() const{ return m_evaluationFormVersion; }
    inline bool EvaluationFormVersionHasBeenSet() const { return m_evaluationFormVersionHasBeenSet; }
    inline void SetEvaluationFormVersion(int value) { m_evaluationFormVersionHasBeenSet = true; m_evaluationFormVersion = value; }
    inline EvaluationFormContent& WithEvaluationFormVersion(int value) { SetEvaluationFormVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier for the evaluation form.</p>
     */
    inline const Aws::String& GetEvaluationFormId() const{ return m_evaluationFormId; }
    inline bool EvaluationFormIdHasBeenSet() const { return m_evaluationFormIdHasBeenSet; }
    inline void SetEvaluationFormId(const Aws::String& value) { m_evaluationFormIdHasBeenSet = true; m_evaluationFormId = value; }
    inline void SetEvaluationFormId(Aws::String&& value) { m_evaluationFormIdHasBeenSet = true; m_evaluationFormId = std::move(value); }
    inline void SetEvaluationFormId(const char* value) { m_evaluationFormIdHasBeenSet = true; m_evaluationFormId.assign(value); }
    inline EvaluationFormContent& WithEvaluationFormId(const Aws::String& value) { SetEvaluationFormId(value); return *this;}
    inline EvaluationFormContent& WithEvaluationFormId(Aws::String&& value) { SetEvaluationFormId(std::move(value)); return *this;}
    inline EvaluationFormContent& WithEvaluationFormId(const char* value) { SetEvaluationFormId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) for the evaluation form resource.</p>
     */
    inline const Aws::String& GetEvaluationFormArn() const{ return m_evaluationFormArn; }
    inline bool EvaluationFormArnHasBeenSet() const { return m_evaluationFormArnHasBeenSet; }
    inline void SetEvaluationFormArn(const Aws::String& value) { m_evaluationFormArnHasBeenSet = true; m_evaluationFormArn = value; }
    inline void SetEvaluationFormArn(Aws::String&& value) { m_evaluationFormArnHasBeenSet = true; m_evaluationFormArn = std::move(value); }
    inline void SetEvaluationFormArn(const char* value) { m_evaluationFormArnHasBeenSet = true; m_evaluationFormArn.assign(value); }
    inline EvaluationFormContent& WithEvaluationFormArn(const Aws::String& value) { SetEvaluationFormArn(value); return *this;}
    inline EvaluationFormContent& WithEvaluationFormArn(Aws::String&& value) { SetEvaluationFormArn(std::move(value)); return *this;}
    inline EvaluationFormContent& WithEvaluationFormArn(const char* value) { SetEvaluationFormArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A title of the evaluation form.</p>
     */
    inline const Aws::String& GetTitle() const{ return m_title; }
    inline bool TitleHasBeenSet() const { return m_titleHasBeenSet; }
    inline void SetTitle(const Aws::String& value) { m_titleHasBeenSet = true; m_title = value; }
    inline void SetTitle(Aws::String&& value) { m_titleHasBeenSet = true; m_title = std::move(value); }
    inline void SetTitle(const char* value) { m_titleHasBeenSet = true; m_title.assign(value); }
    inline EvaluationFormContent& WithTitle(const Aws::String& value) { SetTitle(value); return *this;}
    inline EvaluationFormContent& WithTitle(Aws::String&& value) { SetTitle(std::move(value)); return *this;}
    inline EvaluationFormContent& WithTitle(const char* value) { SetTitle(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the evaluation form.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline EvaluationFormContent& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline EvaluationFormContent& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline EvaluationFormContent& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Items that are part of the evaluation form. The total number of sections and
     * questions must not exceed 100 each. Questions must be contained in a
     * section.</p>
     */
    inline const Aws::Vector<EvaluationFormItem>& GetItems() const{ return m_items; }
    inline bool ItemsHasBeenSet() const { return m_itemsHasBeenSet; }
    inline void SetItems(const Aws::Vector<EvaluationFormItem>& value) { m_itemsHasBeenSet = true; m_items = value; }
    inline void SetItems(Aws::Vector<EvaluationFormItem>&& value) { m_itemsHasBeenSet = true; m_items = std::move(value); }
    inline EvaluationFormContent& WithItems(const Aws::Vector<EvaluationFormItem>& value) { SetItems(value); return *this;}
    inline EvaluationFormContent& WithItems(Aws::Vector<EvaluationFormItem>&& value) { SetItems(std::move(value)); return *this;}
    inline EvaluationFormContent& AddItems(const EvaluationFormItem& value) { m_itemsHasBeenSet = true; m_items.push_back(value); return *this; }
    inline EvaluationFormContent& AddItems(EvaluationFormItem&& value) { m_itemsHasBeenSet = true; m_items.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A scoring strategy of the evaluation form.</p>
     */
    inline const EvaluationFormScoringStrategy& GetScoringStrategy() const{ return m_scoringStrategy; }
    inline bool ScoringStrategyHasBeenSet() const { return m_scoringStrategyHasBeenSet; }
    inline void SetScoringStrategy(const EvaluationFormScoringStrategy& value) { m_scoringStrategyHasBeenSet = true; m_scoringStrategy = value; }
    inline void SetScoringStrategy(EvaluationFormScoringStrategy&& value) { m_scoringStrategyHasBeenSet = true; m_scoringStrategy = std::move(value); }
    inline EvaluationFormContent& WithScoringStrategy(const EvaluationFormScoringStrategy& value) { SetScoringStrategy(value); return *this;}
    inline EvaluationFormContent& WithScoringStrategy(EvaluationFormScoringStrategy&& value) { SetScoringStrategy(std::move(value)); return *this;}
    ///@}
  private:

    int m_evaluationFormVersion;
    bool m_evaluationFormVersionHasBeenSet = false;

    Aws::String m_evaluationFormId;
    bool m_evaluationFormIdHasBeenSet = false;

    Aws::String m_evaluationFormArn;
    bool m_evaluationFormArnHasBeenSet = false;

    Aws::String m_title;
    bool m_titleHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Vector<EvaluationFormItem> m_items;
    bool m_itemsHasBeenSet = false;

    EvaluationFormScoringStrategy m_scoringStrategy;
    bool m_scoringStrategyHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws

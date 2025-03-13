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
    AWS_CONNECT_API EvaluationFormContent() = default;
    AWS_CONNECT_API EvaluationFormContent(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API EvaluationFormContent& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A version of the evaluation form.</p>
     */
    inline int GetEvaluationFormVersion() const { return m_evaluationFormVersion; }
    inline bool EvaluationFormVersionHasBeenSet() const { return m_evaluationFormVersionHasBeenSet; }
    inline void SetEvaluationFormVersion(int value) { m_evaluationFormVersionHasBeenSet = true; m_evaluationFormVersion = value; }
    inline EvaluationFormContent& WithEvaluationFormVersion(int value) { SetEvaluationFormVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier for the evaluation form.</p>
     */
    inline const Aws::String& GetEvaluationFormId() const { return m_evaluationFormId; }
    inline bool EvaluationFormIdHasBeenSet() const { return m_evaluationFormIdHasBeenSet; }
    template<typename EvaluationFormIdT = Aws::String>
    void SetEvaluationFormId(EvaluationFormIdT&& value) { m_evaluationFormIdHasBeenSet = true; m_evaluationFormId = std::forward<EvaluationFormIdT>(value); }
    template<typename EvaluationFormIdT = Aws::String>
    EvaluationFormContent& WithEvaluationFormId(EvaluationFormIdT&& value) { SetEvaluationFormId(std::forward<EvaluationFormIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) for the evaluation form resource.</p>
     */
    inline const Aws::String& GetEvaluationFormArn() const { return m_evaluationFormArn; }
    inline bool EvaluationFormArnHasBeenSet() const { return m_evaluationFormArnHasBeenSet; }
    template<typename EvaluationFormArnT = Aws::String>
    void SetEvaluationFormArn(EvaluationFormArnT&& value) { m_evaluationFormArnHasBeenSet = true; m_evaluationFormArn = std::forward<EvaluationFormArnT>(value); }
    template<typename EvaluationFormArnT = Aws::String>
    EvaluationFormContent& WithEvaluationFormArn(EvaluationFormArnT&& value) { SetEvaluationFormArn(std::forward<EvaluationFormArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A title of the evaluation form.</p>
     */
    inline const Aws::String& GetTitle() const { return m_title; }
    inline bool TitleHasBeenSet() const { return m_titleHasBeenSet; }
    template<typename TitleT = Aws::String>
    void SetTitle(TitleT&& value) { m_titleHasBeenSet = true; m_title = std::forward<TitleT>(value); }
    template<typename TitleT = Aws::String>
    EvaluationFormContent& WithTitle(TitleT&& value) { SetTitle(std::forward<TitleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the evaluation form.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    EvaluationFormContent& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Items that are part of the evaluation form. The total number of sections and
     * questions must not exceed 100 each. Questions must be contained in a
     * section.</p>
     */
    inline const Aws::Vector<EvaluationFormItem>& GetItems() const { return m_items; }
    inline bool ItemsHasBeenSet() const { return m_itemsHasBeenSet; }
    template<typename ItemsT = Aws::Vector<EvaluationFormItem>>
    void SetItems(ItemsT&& value) { m_itemsHasBeenSet = true; m_items = std::forward<ItemsT>(value); }
    template<typename ItemsT = Aws::Vector<EvaluationFormItem>>
    EvaluationFormContent& WithItems(ItemsT&& value) { SetItems(std::forward<ItemsT>(value)); return *this;}
    template<typename ItemsT = EvaluationFormItem>
    EvaluationFormContent& AddItems(ItemsT&& value) { m_itemsHasBeenSet = true; m_items.emplace_back(std::forward<ItemsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A scoring strategy of the evaluation form.</p>
     */
    inline const EvaluationFormScoringStrategy& GetScoringStrategy() const { return m_scoringStrategy; }
    inline bool ScoringStrategyHasBeenSet() const { return m_scoringStrategyHasBeenSet; }
    template<typename ScoringStrategyT = EvaluationFormScoringStrategy>
    void SetScoringStrategy(ScoringStrategyT&& value) { m_scoringStrategyHasBeenSet = true; m_scoringStrategy = std::forward<ScoringStrategyT>(value); }
    template<typename ScoringStrategyT = EvaluationFormScoringStrategy>
    EvaluationFormContent& WithScoringStrategy(ScoringStrategyT&& value) { SetScoringStrategy(std::forward<ScoringStrategyT>(value)); return *this;}
    ///@}
  private:

    int m_evaluationFormVersion{0};
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

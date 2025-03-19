/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/connect/model/EvaluationFormItem.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
  class EvaluationFormItem;

  /**
   * <p>Information about a section from an evaluation form. A section can contain
   * sections and/or questions. Evaluation forms can only contain sections and
   * subsections (two level nesting).</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/EvaluationFormSection">AWS
   * API Reference</a></p>
   */
  class EvaluationFormSection
  {
  public:
    AWS_CONNECT_API EvaluationFormSection() = default;
    AWS_CONNECT_API EvaluationFormSection(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API EvaluationFormSection& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The title of the section.</p>
     */
    inline const Aws::String& GetTitle() const { return m_title; }
    inline bool TitleHasBeenSet() const { return m_titleHasBeenSet; }
    template<typename TitleT = Aws::String>
    void SetTitle(TitleT&& value) { m_titleHasBeenSet = true; m_title = std::forward<TitleT>(value); }
    template<typename TitleT = Aws::String>
    EvaluationFormSection& WithTitle(TitleT&& value) { SetTitle(std::forward<TitleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the section. An identifier must be unique within the
     * evaluation form.</p>
     */
    inline const Aws::String& GetRefId() const { return m_refId; }
    inline bool RefIdHasBeenSet() const { return m_refIdHasBeenSet; }
    template<typename RefIdT = Aws::String>
    void SetRefId(RefIdT&& value) { m_refIdHasBeenSet = true; m_refId = std::forward<RefIdT>(value); }
    template<typename RefIdT = Aws::String>
    EvaluationFormSection& WithRefId(RefIdT&& value) { SetRefId(std::forward<RefIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The instructions of the section.</p>
     */
    inline const Aws::String& GetInstructions() const { return m_instructions; }
    inline bool InstructionsHasBeenSet() const { return m_instructionsHasBeenSet; }
    template<typename InstructionsT = Aws::String>
    void SetInstructions(InstructionsT&& value) { m_instructionsHasBeenSet = true; m_instructions = std::forward<InstructionsT>(value); }
    template<typename InstructionsT = Aws::String>
    EvaluationFormSection& WithInstructions(InstructionsT&& value) { SetInstructions(std::forward<InstructionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The items of the section.</p>
     */
    inline const Aws::Vector<EvaluationFormItem>& GetItems() const { return m_items; }
    inline bool ItemsHasBeenSet() const { return m_itemsHasBeenSet; }
    template<typename ItemsT = Aws::Vector<EvaluationFormItem>>
    void SetItems(ItemsT&& value) { m_itemsHasBeenSet = true; m_items = std::forward<ItemsT>(value); }
    template<typename ItemsT = Aws::Vector<EvaluationFormItem>>
    EvaluationFormSection& WithItems(ItemsT&& value) { SetItems(std::forward<ItemsT>(value)); return *this;}
    template<typename ItemsT = EvaluationFormItem>
    EvaluationFormSection& AddItems(ItemsT&& value) { m_itemsHasBeenSet = true; m_items.emplace_back(std::forward<ItemsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The scoring weight of the section.</p>
     */
    inline double GetWeight() const { return m_weight; }
    inline bool WeightHasBeenSet() const { return m_weightHasBeenSet; }
    inline void SetWeight(double value) { m_weightHasBeenSet = true; m_weight = value; }
    inline EvaluationFormSection& WithWeight(double value) { SetWeight(value); return *this;}
    ///@}
  private:

    Aws::String m_title;
    bool m_titleHasBeenSet = false;

    Aws::String m_refId;
    bool m_refIdHasBeenSet = false;

    Aws::String m_instructions;
    bool m_instructionsHasBeenSet = false;

    Aws::Vector<EvaluationFormItem> m_items;
    bool m_itemsHasBeenSet = false;

    double m_weight{0.0};
    bool m_weightHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws

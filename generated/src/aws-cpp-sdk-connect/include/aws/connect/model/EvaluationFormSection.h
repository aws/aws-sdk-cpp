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
    AWS_CONNECT_API EvaluationFormSection();
    AWS_CONNECT_API EvaluationFormSection(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API EvaluationFormSection& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The title of the section.</p>
     */
    inline const Aws::String& GetTitle() const{ return m_title; }
    inline bool TitleHasBeenSet() const { return m_titleHasBeenSet; }
    inline void SetTitle(const Aws::String& value) { m_titleHasBeenSet = true; m_title = value; }
    inline void SetTitle(Aws::String&& value) { m_titleHasBeenSet = true; m_title = std::move(value); }
    inline void SetTitle(const char* value) { m_titleHasBeenSet = true; m_title.assign(value); }
    inline EvaluationFormSection& WithTitle(const Aws::String& value) { SetTitle(value); return *this;}
    inline EvaluationFormSection& WithTitle(Aws::String&& value) { SetTitle(std::move(value)); return *this;}
    inline EvaluationFormSection& WithTitle(const char* value) { SetTitle(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the section. An identifier must be unique within the
     * evaluation form.</p>
     */
    inline const Aws::String& GetRefId() const{ return m_refId; }
    inline bool RefIdHasBeenSet() const { return m_refIdHasBeenSet; }
    inline void SetRefId(const Aws::String& value) { m_refIdHasBeenSet = true; m_refId = value; }
    inline void SetRefId(Aws::String&& value) { m_refIdHasBeenSet = true; m_refId = std::move(value); }
    inline void SetRefId(const char* value) { m_refIdHasBeenSet = true; m_refId.assign(value); }
    inline EvaluationFormSection& WithRefId(const Aws::String& value) { SetRefId(value); return *this;}
    inline EvaluationFormSection& WithRefId(Aws::String&& value) { SetRefId(std::move(value)); return *this;}
    inline EvaluationFormSection& WithRefId(const char* value) { SetRefId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The instructions of the section.</p>
     */
    inline const Aws::String& GetInstructions() const{ return m_instructions; }
    inline bool InstructionsHasBeenSet() const { return m_instructionsHasBeenSet; }
    inline void SetInstructions(const Aws::String& value) { m_instructionsHasBeenSet = true; m_instructions = value; }
    inline void SetInstructions(Aws::String&& value) { m_instructionsHasBeenSet = true; m_instructions = std::move(value); }
    inline void SetInstructions(const char* value) { m_instructionsHasBeenSet = true; m_instructions.assign(value); }
    inline EvaluationFormSection& WithInstructions(const Aws::String& value) { SetInstructions(value); return *this;}
    inline EvaluationFormSection& WithInstructions(Aws::String&& value) { SetInstructions(std::move(value)); return *this;}
    inline EvaluationFormSection& WithInstructions(const char* value) { SetInstructions(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The items of the section.</p>
     */
    inline const Aws::Vector<EvaluationFormItem>& GetItems() const{ return m_items; }
    inline bool ItemsHasBeenSet() const { return m_itemsHasBeenSet; }
    inline void SetItems(const Aws::Vector<EvaluationFormItem>& value) { m_itemsHasBeenSet = true; m_items = value; }
    inline void SetItems(Aws::Vector<EvaluationFormItem>&& value) { m_itemsHasBeenSet = true; m_items = std::move(value); }
    inline EvaluationFormSection& WithItems(const Aws::Vector<EvaluationFormItem>& value) { SetItems(value); return *this;}
    inline EvaluationFormSection& WithItems(Aws::Vector<EvaluationFormItem>&& value) { SetItems(std::move(value)); return *this;}
    inline EvaluationFormSection& AddItems(const EvaluationFormItem& value) { m_itemsHasBeenSet = true; m_items.push_back(value); return *this; }
    inline EvaluationFormSection& AddItems(EvaluationFormItem&& value) { m_itemsHasBeenSet = true; m_items.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The scoring weight of the section.</p>
     */
    inline double GetWeight() const{ return m_weight; }
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

    double m_weight;
    bool m_weightHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws

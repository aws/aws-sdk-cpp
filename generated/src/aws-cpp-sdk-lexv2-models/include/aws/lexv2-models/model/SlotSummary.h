/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lexv2-models/model/SlotConstraint.h>
#include <aws/lexv2-models/model/PromptSpecification.h>
#include <aws/core/utils/DateTime.h>
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
namespace LexModelsV2
{
namespace Model
{

  /**
   * <p>Summary information about a slot, a value that the bot elicits from the
   * user.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/SlotSummary">AWS
   * API Reference</a></p>
   */
  class SlotSummary
  {
  public:
    AWS_LEXMODELSV2_API SlotSummary() = default;
    AWS_LEXMODELSV2_API SlotSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API SlotSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique identifier of the slot.</p>
     */
    inline const Aws::String& GetSlotId() const { return m_slotId; }
    inline bool SlotIdHasBeenSet() const { return m_slotIdHasBeenSet; }
    template<typename SlotIdT = Aws::String>
    void SetSlotId(SlotIdT&& value) { m_slotIdHasBeenSet = true; m_slotId = std::forward<SlotIdT>(value); }
    template<typename SlotIdT = Aws::String>
    SlotSummary& WithSlotId(SlotIdT&& value) { SetSlotId(std::forward<SlotIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name given to the slot.</p>
     */
    inline const Aws::String& GetSlotName() const { return m_slotName; }
    inline bool SlotNameHasBeenSet() const { return m_slotNameHasBeenSet; }
    template<typename SlotNameT = Aws::String>
    void SetSlotName(SlotNameT&& value) { m_slotNameHasBeenSet = true; m_slotName = std::forward<SlotNameT>(value); }
    template<typename SlotNameT = Aws::String>
    SlotSummary& WithSlotName(SlotNameT&& value) { SetSlotName(std::forward<SlotNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the slot.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    SlotSummary& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether the slot is required or optional. An intent is complete when all
     * required slots are filled.</p>
     */
    inline SlotConstraint GetSlotConstraint() const { return m_slotConstraint; }
    inline bool SlotConstraintHasBeenSet() const { return m_slotConstraintHasBeenSet; }
    inline void SetSlotConstraint(SlotConstraint value) { m_slotConstraintHasBeenSet = true; m_slotConstraint = value; }
    inline SlotSummary& WithSlotConstraint(SlotConstraint value) { SetSlotConstraint(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier for the slot type that defines the values for the
     * slot.</p>
     */
    inline const Aws::String& GetSlotTypeId() const { return m_slotTypeId; }
    inline bool SlotTypeIdHasBeenSet() const { return m_slotTypeIdHasBeenSet; }
    template<typename SlotTypeIdT = Aws::String>
    void SetSlotTypeId(SlotTypeIdT&& value) { m_slotTypeIdHasBeenSet = true; m_slotTypeId = std::forward<SlotTypeIdT>(value); }
    template<typename SlotTypeIdT = Aws::String>
    SlotSummary& WithSlotTypeId(SlotTypeIdT&& value) { SetSlotTypeId(std::forward<SlotTypeIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Prompts that are sent to the user to elicit a value for the slot.</p>
     */
    inline const PromptSpecification& GetValueElicitationPromptSpecification() const { return m_valueElicitationPromptSpecification; }
    inline bool ValueElicitationPromptSpecificationHasBeenSet() const { return m_valueElicitationPromptSpecificationHasBeenSet; }
    template<typename ValueElicitationPromptSpecificationT = PromptSpecification>
    void SetValueElicitationPromptSpecification(ValueElicitationPromptSpecificationT&& value) { m_valueElicitationPromptSpecificationHasBeenSet = true; m_valueElicitationPromptSpecification = std::forward<ValueElicitationPromptSpecificationT>(value); }
    template<typename ValueElicitationPromptSpecificationT = PromptSpecification>
    SlotSummary& WithValueElicitationPromptSpecification(ValueElicitationPromptSpecificationT&& value) { SetValueElicitationPromptSpecification(std::forward<ValueElicitationPromptSpecificationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of the last date and time that the slot was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedDateTime() const { return m_lastUpdatedDateTime; }
    inline bool LastUpdatedDateTimeHasBeenSet() const { return m_lastUpdatedDateTimeHasBeenSet; }
    template<typename LastUpdatedDateTimeT = Aws::Utils::DateTime>
    void SetLastUpdatedDateTime(LastUpdatedDateTimeT&& value) { m_lastUpdatedDateTimeHasBeenSet = true; m_lastUpdatedDateTime = std::forward<LastUpdatedDateTimeT>(value); }
    template<typename LastUpdatedDateTimeT = Aws::Utils::DateTime>
    SlotSummary& WithLastUpdatedDateTime(LastUpdatedDateTimeT&& value) { SetLastUpdatedDateTime(std::forward<LastUpdatedDateTimeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_slotId;
    bool m_slotIdHasBeenSet = false;

    Aws::String m_slotName;
    bool m_slotNameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    SlotConstraint m_slotConstraint{SlotConstraint::NOT_SET};
    bool m_slotConstraintHasBeenSet = false;

    Aws::String m_slotTypeId;
    bool m_slotTypeIdHasBeenSet = false;

    PromptSpecification m_valueElicitationPromptSpecification;
    bool m_valueElicitationPromptSpecificationHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedDateTime{};
    bool m_lastUpdatedDateTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws

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
    AWS_LEXMODELSV2_API SlotSummary();
    AWS_LEXMODELSV2_API SlotSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API SlotSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique identifier of the slot.</p>
     */
    inline const Aws::String& GetSlotId() const{ return m_slotId; }
    inline bool SlotIdHasBeenSet() const { return m_slotIdHasBeenSet; }
    inline void SetSlotId(const Aws::String& value) { m_slotIdHasBeenSet = true; m_slotId = value; }
    inline void SetSlotId(Aws::String&& value) { m_slotIdHasBeenSet = true; m_slotId = std::move(value); }
    inline void SetSlotId(const char* value) { m_slotIdHasBeenSet = true; m_slotId.assign(value); }
    inline SlotSummary& WithSlotId(const Aws::String& value) { SetSlotId(value); return *this;}
    inline SlotSummary& WithSlotId(Aws::String&& value) { SetSlotId(std::move(value)); return *this;}
    inline SlotSummary& WithSlotId(const char* value) { SetSlotId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name given to the slot.</p>
     */
    inline const Aws::String& GetSlotName() const{ return m_slotName; }
    inline bool SlotNameHasBeenSet() const { return m_slotNameHasBeenSet; }
    inline void SetSlotName(const Aws::String& value) { m_slotNameHasBeenSet = true; m_slotName = value; }
    inline void SetSlotName(Aws::String&& value) { m_slotNameHasBeenSet = true; m_slotName = std::move(value); }
    inline void SetSlotName(const char* value) { m_slotNameHasBeenSet = true; m_slotName.assign(value); }
    inline SlotSummary& WithSlotName(const Aws::String& value) { SetSlotName(value); return *this;}
    inline SlotSummary& WithSlotName(Aws::String&& value) { SetSlotName(std::move(value)); return *this;}
    inline SlotSummary& WithSlotName(const char* value) { SetSlotName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the slot.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline SlotSummary& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline SlotSummary& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline SlotSummary& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether the slot is required or optional. An intent is complete when all
     * required slots are filled.</p>
     */
    inline const SlotConstraint& GetSlotConstraint() const{ return m_slotConstraint; }
    inline bool SlotConstraintHasBeenSet() const { return m_slotConstraintHasBeenSet; }
    inline void SetSlotConstraint(const SlotConstraint& value) { m_slotConstraintHasBeenSet = true; m_slotConstraint = value; }
    inline void SetSlotConstraint(SlotConstraint&& value) { m_slotConstraintHasBeenSet = true; m_slotConstraint = std::move(value); }
    inline SlotSummary& WithSlotConstraint(const SlotConstraint& value) { SetSlotConstraint(value); return *this;}
    inline SlotSummary& WithSlotConstraint(SlotConstraint&& value) { SetSlotConstraint(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier for the slot type that defines the values for the
     * slot.</p>
     */
    inline const Aws::String& GetSlotTypeId() const{ return m_slotTypeId; }
    inline bool SlotTypeIdHasBeenSet() const { return m_slotTypeIdHasBeenSet; }
    inline void SetSlotTypeId(const Aws::String& value) { m_slotTypeIdHasBeenSet = true; m_slotTypeId = value; }
    inline void SetSlotTypeId(Aws::String&& value) { m_slotTypeIdHasBeenSet = true; m_slotTypeId = std::move(value); }
    inline void SetSlotTypeId(const char* value) { m_slotTypeIdHasBeenSet = true; m_slotTypeId.assign(value); }
    inline SlotSummary& WithSlotTypeId(const Aws::String& value) { SetSlotTypeId(value); return *this;}
    inline SlotSummary& WithSlotTypeId(Aws::String&& value) { SetSlotTypeId(std::move(value)); return *this;}
    inline SlotSummary& WithSlotTypeId(const char* value) { SetSlotTypeId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Prompts that are sent to the user to elicit a value for the slot.</p>
     */
    inline const PromptSpecification& GetValueElicitationPromptSpecification() const{ return m_valueElicitationPromptSpecification; }
    inline bool ValueElicitationPromptSpecificationHasBeenSet() const { return m_valueElicitationPromptSpecificationHasBeenSet; }
    inline void SetValueElicitationPromptSpecification(const PromptSpecification& value) { m_valueElicitationPromptSpecificationHasBeenSet = true; m_valueElicitationPromptSpecification = value; }
    inline void SetValueElicitationPromptSpecification(PromptSpecification&& value) { m_valueElicitationPromptSpecificationHasBeenSet = true; m_valueElicitationPromptSpecification = std::move(value); }
    inline SlotSummary& WithValueElicitationPromptSpecification(const PromptSpecification& value) { SetValueElicitationPromptSpecification(value); return *this;}
    inline SlotSummary& WithValueElicitationPromptSpecification(PromptSpecification&& value) { SetValueElicitationPromptSpecification(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of the last date and time that the slot was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedDateTime() const{ return m_lastUpdatedDateTime; }
    inline bool LastUpdatedDateTimeHasBeenSet() const { return m_lastUpdatedDateTimeHasBeenSet; }
    inline void SetLastUpdatedDateTime(const Aws::Utils::DateTime& value) { m_lastUpdatedDateTimeHasBeenSet = true; m_lastUpdatedDateTime = value; }
    inline void SetLastUpdatedDateTime(Aws::Utils::DateTime&& value) { m_lastUpdatedDateTimeHasBeenSet = true; m_lastUpdatedDateTime = std::move(value); }
    inline SlotSummary& WithLastUpdatedDateTime(const Aws::Utils::DateTime& value) { SetLastUpdatedDateTime(value); return *this;}
    inline SlotSummary& WithLastUpdatedDateTime(Aws::Utils::DateTime&& value) { SetLastUpdatedDateTime(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_slotId;
    bool m_slotIdHasBeenSet = false;

    Aws::String m_slotName;
    bool m_slotNameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    SlotConstraint m_slotConstraint;
    bool m_slotConstraintHasBeenSet = false;

    Aws::String m_slotTypeId;
    bool m_slotTypeIdHasBeenSet = false;

    PromptSpecification m_valueElicitationPromptSpecification;
    bool m_valueElicitationPromptSpecificationHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedDateTime;
    bool m_lastUpdatedDateTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws

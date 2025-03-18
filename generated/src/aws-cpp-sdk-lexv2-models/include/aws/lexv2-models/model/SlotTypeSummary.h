/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/lexv2-models/model/SlotTypeCategory.h>
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
   * <p>Provides summary information about a slot type.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/SlotTypeSummary">AWS
   * API Reference</a></p>
   */
  class SlotTypeSummary
  {
  public:
    AWS_LEXMODELSV2_API SlotTypeSummary() = default;
    AWS_LEXMODELSV2_API SlotTypeSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API SlotTypeSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique identifier assigned to the slot type.</p>
     */
    inline const Aws::String& GetSlotTypeId() const { return m_slotTypeId; }
    inline bool SlotTypeIdHasBeenSet() const { return m_slotTypeIdHasBeenSet; }
    template<typename SlotTypeIdT = Aws::String>
    void SetSlotTypeId(SlotTypeIdT&& value) { m_slotTypeIdHasBeenSet = true; m_slotTypeId = std::forward<SlotTypeIdT>(value); }
    template<typename SlotTypeIdT = Aws::String>
    SlotTypeSummary& WithSlotTypeId(SlotTypeIdT&& value) { SetSlotTypeId(std::forward<SlotTypeIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the slot type.</p>
     */
    inline const Aws::String& GetSlotTypeName() const { return m_slotTypeName; }
    inline bool SlotTypeNameHasBeenSet() const { return m_slotTypeNameHasBeenSet; }
    template<typename SlotTypeNameT = Aws::String>
    void SetSlotTypeName(SlotTypeNameT&& value) { m_slotTypeNameHasBeenSet = true; m_slotTypeName = std::forward<SlotTypeNameT>(value); }
    template<typename SlotTypeNameT = Aws::String>
    SlotTypeSummary& WithSlotTypeName(SlotTypeNameT&& value) { SetSlotTypeName(std::forward<SlotTypeNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the slot type.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    SlotTypeSummary& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the slot type is derived from a built-on slot type, the name of the parent
     * slot type.</p>
     */
    inline const Aws::String& GetParentSlotTypeSignature() const { return m_parentSlotTypeSignature; }
    inline bool ParentSlotTypeSignatureHasBeenSet() const { return m_parentSlotTypeSignatureHasBeenSet; }
    template<typename ParentSlotTypeSignatureT = Aws::String>
    void SetParentSlotTypeSignature(ParentSlotTypeSignatureT&& value) { m_parentSlotTypeSignatureHasBeenSet = true; m_parentSlotTypeSignature = std::forward<ParentSlotTypeSignatureT>(value); }
    template<typename ParentSlotTypeSignatureT = Aws::String>
    SlotTypeSummary& WithParentSlotTypeSignature(ParentSlotTypeSignatureT&& value) { SetParentSlotTypeSignature(std::forward<ParentSlotTypeSignatureT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A timestamp of the date and time that the slot type was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedDateTime() const { return m_lastUpdatedDateTime; }
    inline bool LastUpdatedDateTimeHasBeenSet() const { return m_lastUpdatedDateTimeHasBeenSet; }
    template<typename LastUpdatedDateTimeT = Aws::Utils::DateTime>
    void SetLastUpdatedDateTime(LastUpdatedDateTimeT&& value) { m_lastUpdatedDateTimeHasBeenSet = true; m_lastUpdatedDateTime = std::forward<LastUpdatedDateTimeT>(value); }
    template<typename LastUpdatedDateTimeT = Aws::Utils::DateTime>
    SlotTypeSummary& WithLastUpdatedDateTime(LastUpdatedDateTimeT&& value) { SetLastUpdatedDateTime(std::forward<LastUpdatedDateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the type of the slot type.</p> <ul> <li> <p> <code>Custom</code> -
     * A slot type that you created using custom values. For more information, see <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/custom-slot-types.html">Creating
     * custom slot types</a>.</p> </li> <li> <p> <code>Extended</code> - A slot type
     * created by extending the <code>AMAZON.AlphaNumeric</code> built-in slot type.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/built-in-slot-alphanumerice.html">
     * <code>AMAZON.AlphaNumeric</code> </a>.</p> </li> <li> <p>
     * <code>ExternalGrammar</code> - A slot type using a custom GRXML grammar to
     * define values. For more information, see <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/building-grxml.html">Using a
     * custom grammar slot type</a>.</p> </li> </ul>
     */
    inline SlotTypeCategory GetSlotTypeCategory() const { return m_slotTypeCategory; }
    inline bool SlotTypeCategoryHasBeenSet() const { return m_slotTypeCategoryHasBeenSet; }
    inline void SetSlotTypeCategory(SlotTypeCategory value) { m_slotTypeCategoryHasBeenSet = true; m_slotTypeCategory = value; }
    inline SlotTypeSummary& WithSlotTypeCategory(SlotTypeCategory value) { SetSlotTypeCategory(value); return *this;}
    ///@}
  private:

    Aws::String m_slotTypeId;
    bool m_slotTypeIdHasBeenSet = false;

    Aws::String m_slotTypeName;
    bool m_slotTypeNameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_parentSlotTypeSignature;
    bool m_parentSlotTypeSignatureHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedDateTime{};
    bool m_lastUpdatedDateTimeHasBeenSet = false;

    SlotTypeCategory m_slotTypeCategory{SlotTypeCategory::NOT_SET};
    bool m_slotTypeCategoryHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws

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
    AWS_LEXMODELSV2_API SlotTypeSummary();
    AWS_LEXMODELSV2_API SlotTypeSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API SlotTypeSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The unique identifier assigned to the slot type.</p>
     */
    inline const Aws::String& GetSlotTypeId() const{ return m_slotTypeId; }

    /**
     * <p>The unique identifier assigned to the slot type.</p>
     */
    inline bool SlotTypeIdHasBeenSet() const { return m_slotTypeIdHasBeenSet; }

    /**
     * <p>The unique identifier assigned to the slot type.</p>
     */
    inline void SetSlotTypeId(const Aws::String& value) { m_slotTypeIdHasBeenSet = true; m_slotTypeId = value; }

    /**
     * <p>The unique identifier assigned to the slot type.</p>
     */
    inline void SetSlotTypeId(Aws::String&& value) { m_slotTypeIdHasBeenSet = true; m_slotTypeId = std::move(value); }

    /**
     * <p>The unique identifier assigned to the slot type.</p>
     */
    inline void SetSlotTypeId(const char* value) { m_slotTypeIdHasBeenSet = true; m_slotTypeId.assign(value); }

    /**
     * <p>The unique identifier assigned to the slot type.</p>
     */
    inline SlotTypeSummary& WithSlotTypeId(const Aws::String& value) { SetSlotTypeId(value); return *this;}

    /**
     * <p>The unique identifier assigned to the slot type.</p>
     */
    inline SlotTypeSummary& WithSlotTypeId(Aws::String&& value) { SetSlotTypeId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier assigned to the slot type.</p>
     */
    inline SlotTypeSummary& WithSlotTypeId(const char* value) { SetSlotTypeId(value); return *this;}


    /**
     * <p>The name of the slot type.</p>
     */
    inline const Aws::String& GetSlotTypeName() const{ return m_slotTypeName; }

    /**
     * <p>The name of the slot type.</p>
     */
    inline bool SlotTypeNameHasBeenSet() const { return m_slotTypeNameHasBeenSet; }

    /**
     * <p>The name of the slot type.</p>
     */
    inline void SetSlotTypeName(const Aws::String& value) { m_slotTypeNameHasBeenSet = true; m_slotTypeName = value; }

    /**
     * <p>The name of the slot type.</p>
     */
    inline void SetSlotTypeName(Aws::String&& value) { m_slotTypeNameHasBeenSet = true; m_slotTypeName = std::move(value); }

    /**
     * <p>The name of the slot type.</p>
     */
    inline void SetSlotTypeName(const char* value) { m_slotTypeNameHasBeenSet = true; m_slotTypeName.assign(value); }

    /**
     * <p>The name of the slot type.</p>
     */
    inline SlotTypeSummary& WithSlotTypeName(const Aws::String& value) { SetSlotTypeName(value); return *this;}

    /**
     * <p>The name of the slot type.</p>
     */
    inline SlotTypeSummary& WithSlotTypeName(Aws::String&& value) { SetSlotTypeName(std::move(value)); return *this;}

    /**
     * <p>The name of the slot type.</p>
     */
    inline SlotTypeSummary& WithSlotTypeName(const char* value) { SetSlotTypeName(value); return *this;}


    /**
     * <p>The description of the slot type.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the slot type.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description of the slot type.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the slot type.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description of the slot type.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of the slot type.</p>
     */
    inline SlotTypeSummary& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the slot type.</p>
     */
    inline SlotTypeSummary& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the slot type.</p>
     */
    inline SlotTypeSummary& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>If the slot type is derived from a built-on slot type, the name of the parent
     * slot type.</p>
     */
    inline const Aws::String& GetParentSlotTypeSignature() const{ return m_parentSlotTypeSignature; }

    /**
     * <p>If the slot type is derived from a built-on slot type, the name of the parent
     * slot type.</p>
     */
    inline bool ParentSlotTypeSignatureHasBeenSet() const { return m_parentSlotTypeSignatureHasBeenSet; }

    /**
     * <p>If the slot type is derived from a built-on slot type, the name of the parent
     * slot type.</p>
     */
    inline void SetParentSlotTypeSignature(const Aws::String& value) { m_parentSlotTypeSignatureHasBeenSet = true; m_parentSlotTypeSignature = value; }

    /**
     * <p>If the slot type is derived from a built-on slot type, the name of the parent
     * slot type.</p>
     */
    inline void SetParentSlotTypeSignature(Aws::String&& value) { m_parentSlotTypeSignatureHasBeenSet = true; m_parentSlotTypeSignature = std::move(value); }

    /**
     * <p>If the slot type is derived from a built-on slot type, the name of the parent
     * slot type.</p>
     */
    inline void SetParentSlotTypeSignature(const char* value) { m_parentSlotTypeSignatureHasBeenSet = true; m_parentSlotTypeSignature.assign(value); }

    /**
     * <p>If the slot type is derived from a built-on slot type, the name of the parent
     * slot type.</p>
     */
    inline SlotTypeSummary& WithParentSlotTypeSignature(const Aws::String& value) { SetParentSlotTypeSignature(value); return *this;}

    /**
     * <p>If the slot type is derived from a built-on slot type, the name of the parent
     * slot type.</p>
     */
    inline SlotTypeSummary& WithParentSlotTypeSignature(Aws::String&& value) { SetParentSlotTypeSignature(std::move(value)); return *this;}

    /**
     * <p>If the slot type is derived from a built-on slot type, the name of the parent
     * slot type.</p>
     */
    inline SlotTypeSummary& WithParentSlotTypeSignature(const char* value) { SetParentSlotTypeSignature(value); return *this;}


    /**
     * <p>A timestamp of the date and time that the slot type was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedDateTime() const{ return m_lastUpdatedDateTime; }

    /**
     * <p>A timestamp of the date and time that the slot type was last updated.</p>
     */
    inline bool LastUpdatedDateTimeHasBeenSet() const { return m_lastUpdatedDateTimeHasBeenSet; }

    /**
     * <p>A timestamp of the date and time that the slot type was last updated.</p>
     */
    inline void SetLastUpdatedDateTime(const Aws::Utils::DateTime& value) { m_lastUpdatedDateTimeHasBeenSet = true; m_lastUpdatedDateTime = value; }

    /**
     * <p>A timestamp of the date and time that the slot type was last updated.</p>
     */
    inline void SetLastUpdatedDateTime(Aws::Utils::DateTime&& value) { m_lastUpdatedDateTimeHasBeenSet = true; m_lastUpdatedDateTime = std::move(value); }

    /**
     * <p>A timestamp of the date and time that the slot type was last updated.</p>
     */
    inline SlotTypeSummary& WithLastUpdatedDateTime(const Aws::Utils::DateTime& value) { SetLastUpdatedDateTime(value); return *this;}

    /**
     * <p>A timestamp of the date and time that the slot type was last updated.</p>
     */
    inline SlotTypeSummary& WithLastUpdatedDateTime(Aws::Utils::DateTime&& value) { SetLastUpdatedDateTime(std::move(value)); return *this;}


    /**
     * <p>Indicates the type of the slot type.</p> <ul> <li> <p> <code>Custom</code> -
     * A slot type that you created using custom values. For more information, see <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/custom-slot-types.html">Creating
     * custom slot types</a>.</p> </li> <li> <p> <code>Extended</code> - A slot type
     * created by extending the AMAZON.AlphaNumeric built-in slot type. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/built-in-slot-alphanumerice.html">AMAZON.AlphaNumeric</a>.</p>
     * </li> <li> <p> <code>ExternalGrammar</code> - A slot type using a custom GRXML
     * grammar to define values. For more information, see <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/building-grxml.html">Using a
     * custom grammar slot type</a>.</p> </li> </ul>
     */
    inline const SlotTypeCategory& GetSlotTypeCategory() const{ return m_slotTypeCategory; }

    /**
     * <p>Indicates the type of the slot type.</p> <ul> <li> <p> <code>Custom</code> -
     * A slot type that you created using custom values. For more information, see <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/custom-slot-types.html">Creating
     * custom slot types</a>.</p> </li> <li> <p> <code>Extended</code> - A slot type
     * created by extending the AMAZON.AlphaNumeric built-in slot type. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/built-in-slot-alphanumerice.html">AMAZON.AlphaNumeric</a>.</p>
     * </li> <li> <p> <code>ExternalGrammar</code> - A slot type using a custom GRXML
     * grammar to define values. For more information, see <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/building-grxml.html">Using a
     * custom grammar slot type</a>.</p> </li> </ul>
     */
    inline bool SlotTypeCategoryHasBeenSet() const { return m_slotTypeCategoryHasBeenSet; }

    /**
     * <p>Indicates the type of the slot type.</p> <ul> <li> <p> <code>Custom</code> -
     * A slot type that you created using custom values. For more information, see <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/custom-slot-types.html">Creating
     * custom slot types</a>.</p> </li> <li> <p> <code>Extended</code> - A slot type
     * created by extending the AMAZON.AlphaNumeric built-in slot type. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/built-in-slot-alphanumerice.html">AMAZON.AlphaNumeric</a>.</p>
     * </li> <li> <p> <code>ExternalGrammar</code> - A slot type using a custom GRXML
     * grammar to define values. For more information, see <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/building-grxml.html">Using a
     * custom grammar slot type</a>.</p> </li> </ul>
     */
    inline void SetSlotTypeCategory(const SlotTypeCategory& value) { m_slotTypeCategoryHasBeenSet = true; m_slotTypeCategory = value; }

    /**
     * <p>Indicates the type of the slot type.</p> <ul> <li> <p> <code>Custom</code> -
     * A slot type that you created using custom values. For more information, see <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/custom-slot-types.html">Creating
     * custom slot types</a>.</p> </li> <li> <p> <code>Extended</code> - A slot type
     * created by extending the AMAZON.AlphaNumeric built-in slot type. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/built-in-slot-alphanumerice.html">AMAZON.AlphaNumeric</a>.</p>
     * </li> <li> <p> <code>ExternalGrammar</code> - A slot type using a custom GRXML
     * grammar to define values. For more information, see <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/building-grxml.html">Using a
     * custom grammar slot type</a>.</p> </li> </ul>
     */
    inline void SetSlotTypeCategory(SlotTypeCategory&& value) { m_slotTypeCategoryHasBeenSet = true; m_slotTypeCategory = std::move(value); }

    /**
     * <p>Indicates the type of the slot type.</p> <ul> <li> <p> <code>Custom</code> -
     * A slot type that you created using custom values. For more information, see <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/custom-slot-types.html">Creating
     * custom slot types</a>.</p> </li> <li> <p> <code>Extended</code> - A slot type
     * created by extending the AMAZON.AlphaNumeric built-in slot type. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/built-in-slot-alphanumerice.html">AMAZON.AlphaNumeric</a>.</p>
     * </li> <li> <p> <code>ExternalGrammar</code> - A slot type using a custom GRXML
     * grammar to define values. For more information, see <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/building-grxml.html">Using a
     * custom grammar slot type</a>.</p> </li> </ul>
     */
    inline SlotTypeSummary& WithSlotTypeCategory(const SlotTypeCategory& value) { SetSlotTypeCategory(value); return *this;}

    /**
     * <p>Indicates the type of the slot type.</p> <ul> <li> <p> <code>Custom</code> -
     * A slot type that you created using custom values. For more information, see <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/custom-slot-types.html">Creating
     * custom slot types</a>.</p> </li> <li> <p> <code>Extended</code> - A slot type
     * created by extending the AMAZON.AlphaNumeric built-in slot type. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/built-in-slot-alphanumerice.html">AMAZON.AlphaNumeric</a>.</p>
     * </li> <li> <p> <code>ExternalGrammar</code> - A slot type using a custom GRXML
     * grammar to define values. For more information, see <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/building-grxml.html">Using a
     * custom grammar slot type</a>.</p> </li> </ul>
     */
    inline SlotTypeSummary& WithSlotTypeCategory(SlotTypeCategory&& value) { SetSlotTypeCategory(std::move(value)); return *this;}

  private:

    Aws::String m_slotTypeId;
    bool m_slotTypeIdHasBeenSet = false;

    Aws::String m_slotTypeName;
    bool m_slotTypeNameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_parentSlotTypeSignature;
    bool m_parentSlotTypeSignatureHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedDateTime;
    bool m_lastUpdatedDateTimeHasBeenSet = false;

    SlotTypeCategory m_slotTypeCategory;
    bool m_slotTypeCategoryHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws

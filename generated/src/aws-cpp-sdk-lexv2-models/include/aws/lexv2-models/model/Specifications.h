/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lexv2-models/model/SubSlotValueElicitationSetting.h>
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
   * <p>Subslot specifications.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/Specifications">AWS
   * API Reference</a></p>
   */
  class Specifications
  {
  public:
    AWS_LEXMODELSV2_API Specifications();
    AWS_LEXMODELSV2_API Specifications(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Specifications& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    inline Specifications& WithSlotTypeId(const Aws::String& value) { SetSlotTypeId(value); return *this;}

    /**
     * <p>The unique identifier assigned to the slot type.</p>
     */
    inline Specifications& WithSlotTypeId(Aws::String&& value) { SetSlotTypeId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier assigned to the slot type.</p>
     */
    inline Specifications& WithSlotTypeId(const char* value) { SetSlotTypeId(value); return *this;}


    /**
     * <p>Specifies the elicitation setting details for constituent sub slots of a
     * composite slot.</p>
     */
    inline const SubSlotValueElicitationSetting& GetValueElicitationSetting() const{ return m_valueElicitationSetting; }

    /**
     * <p>Specifies the elicitation setting details for constituent sub slots of a
     * composite slot.</p>
     */
    inline bool ValueElicitationSettingHasBeenSet() const { return m_valueElicitationSettingHasBeenSet; }

    /**
     * <p>Specifies the elicitation setting details for constituent sub slots of a
     * composite slot.</p>
     */
    inline void SetValueElicitationSetting(const SubSlotValueElicitationSetting& value) { m_valueElicitationSettingHasBeenSet = true; m_valueElicitationSetting = value; }

    /**
     * <p>Specifies the elicitation setting details for constituent sub slots of a
     * composite slot.</p>
     */
    inline void SetValueElicitationSetting(SubSlotValueElicitationSetting&& value) { m_valueElicitationSettingHasBeenSet = true; m_valueElicitationSetting = std::move(value); }

    /**
     * <p>Specifies the elicitation setting details for constituent sub slots of a
     * composite slot.</p>
     */
    inline Specifications& WithValueElicitationSetting(const SubSlotValueElicitationSetting& value) { SetValueElicitationSetting(value); return *this;}

    /**
     * <p>Specifies the elicitation setting details for constituent sub slots of a
     * composite slot.</p>
     */
    inline Specifications& WithValueElicitationSetting(SubSlotValueElicitationSetting&& value) { SetValueElicitationSetting(std::move(value)); return *this;}

  private:

    Aws::String m_slotTypeId;
    bool m_slotTypeIdHasBeenSet = false;

    SubSlotValueElicitationSetting m_valueElicitationSetting;
    bool m_valueElicitationSettingHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws

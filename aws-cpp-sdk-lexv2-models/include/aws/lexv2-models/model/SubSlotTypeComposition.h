/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
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
namespace LexModelsV2
{
namespace Model
{

  /**
   * <p>Subslot type composition.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/SubSlotTypeComposition">AWS
   * API Reference</a></p>
   */
  class SubSlotTypeComposition
  {
  public:
    AWS_LEXMODELSV2_API SubSlotTypeComposition();
    AWS_LEXMODELSV2_API SubSlotTypeComposition(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API SubSlotTypeComposition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Name of a constituent sub slot inside a composite slot.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>Name of a constituent sub slot inside a composite slot.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>Name of a constituent sub slot inside a composite slot.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>Name of a constituent sub slot inside a composite slot.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>Name of a constituent sub slot inside a composite slot.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>Name of a constituent sub slot inside a composite slot.</p>
     */
    inline SubSlotTypeComposition& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>Name of a constituent sub slot inside a composite slot.</p>
     */
    inline SubSlotTypeComposition& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>Name of a constituent sub slot inside a composite slot.</p>
     */
    inline SubSlotTypeComposition& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The unique identifier assigned to a slot type. This refers to either a
     * built-in slot type or the unique slotTypeId of a custom slot type.</p>
     */
    inline const Aws::String& GetSlotTypeId() const{ return m_slotTypeId; }

    /**
     * <p>The unique identifier assigned to a slot type. This refers to either a
     * built-in slot type or the unique slotTypeId of a custom slot type.</p>
     */
    inline bool SlotTypeIdHasBeenSet() const { return m_slotTypeIdHasBeenSet; }

    /**
     * <p>The unique identifier assigned to a slot type. This refers to either a
     * built-in slot type or the unique slotTypeId of a custom slot type.</p>
     */
    inline void SetSlotTypeId(const Aws::String& value) { m_slotTypeIdHasBeenSet = true; m_slotTypeId = value; }

    /**
     * <p>The unique identifier assigned to a slot type. This refers to either a
     * built-in slot type or the unique slotTypeId of a custom slot type.</p>
     */
    inline void SetSlotTypeId(Aws::String&& value) { m_slotTypeIdHasBeenSet = true; m_slotTypeId = std::move(value); }

    /**
     * <p>The unique identifier assigned to a slot type. This refers to either a
     * built-in slot type or the unique slotTypeId of a custom slot type.</p>
     */
    inline void SetSlotTypeId(const char* value) { m_slotTypeIdHasBeenSet = true; m_slotTypeId.assign(value); }

    /**
     * <p>The unique identifier assigned to a slot type. This refers to either a
     * built-in slot type or the unique slotTypeId of a custom slot type.</p>
     */
    inline SubSlotTypeComposition& WithSlotTypeId(const Aws::String& value) { SetSlotTypeId(value); return *this;}

    /**
     * <p>The unique identifier assigned to a slot type. This refers to either a
     * built-in slot type or the unique slotTypeId of a custom slot type.</p>
     */
    inline SubSlotTypeComposition& WithSlotTypeId(Aws::String&& value) { SetSlotTypeId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier assigned to a slot type. This refers to either a
     * built-in slot type or the unique slotTypeId of a custom slot type.</p>
     */
    inline SubSlotTypeComposition& WithSlotTypeId(const char* value) { SetSlotTypeId(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_slotTypeId;
    bool m_slotTypeIdHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws

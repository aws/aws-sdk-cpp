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
   * <p>Provides summary information about a built-in slot type for the <a
   * href="https://docs.aws.amazon.com/lexv2/latest/APIReference/API_ListBuiltInSlotTypes.html">
   * ListBuiltInSlotTypes </a> operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/BuiltInSlotTypeSummary">AWS
   * API Reference</a></p>
   */
  class BuiltInSlotTypeSummary
  {
  public:
    AWS_LEXMODELSV2_API BuiltInSlotTypeSummary();
    AWS_LEXMODELSV2_API BuiltInSlotTypeSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API BuiltInSlotTypeSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The signature of the built-in slot type. Use this to specify the parent slot
     * type of a derived slot type.</p>
     */
    inline const Aws::String& GetSlotTypeSignature() const{ return m_slotTypeSignature; }
    inline bool SlotTypeSignatureHasBeenSet() const { return m_slotTypeSignatureHasBeenSet; }
    inline void SetSlotTypeSignature(const Aws::String& value) { m_slotTypeSignatureHasBeenSet = true; m_slotTypeSignature = value; }
    inline void SetSlotTypeSignature(Aws::String&& value) { m_slotTypeSignatureHasBeenSet = true; m_slotTypeSignature = std::move(value); }
    inline void SetSlotTypeSignature(const char* value) { m_slotTypeSignatureHasBeenSet = true; m_slotTypeSignature.assign(value); }
    inline BuiltInSlotTypeSummary& WithSlotTypeSignature(const Aws::String& value) { SetSlotTypeSignature(value); return *this;}
    inline BuiltInSlotTypeSummary& WithSlotTypeSignature(Aws::String&& value) { SetSlotTypeSignature(std::move(value)); return *this;}
    inline BuiltInSlotTypeSummary& WithSlotTypeSignature(const char* value) { SetSlotTypeSignature(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the built-in slot type.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline BuiltInSlotTypeSummary& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline BuiltInSlotTypeSummary& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline BuiltInSlotTypeSummary& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}
  private:

    Aws::String m_slotTypeSignature;
    bool m_slotTypeSignatureHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws

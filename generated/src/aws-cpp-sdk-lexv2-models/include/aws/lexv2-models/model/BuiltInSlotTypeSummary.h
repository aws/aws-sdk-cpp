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
    AWS_LEXMODELSV2_API BuiltInSlotTypeSummary() = default;
    AWS_LEXMODELSV2_API BuiltInSlotTypeSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API BuiltInSlotTypeSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The signature of the built-in slot type. Use this to specify the parent slot
     * type of a derived slot type.</p>
     */
    inline const Aws::String& GetSlotTypeSignature() const { return m_slotTypeSignature; }
    inline bool SlotTypeSignatureHasBeenSet() const { return m_slotTypeSignatureHasBeenSet; }
    template<typename SlotTypeSignatureT = Aws::String>
    void SetSlotTypeSignature(SlotTypeSignatureT&& value) { m_slotTypeSignatureHasBeenSet = true; m_slotTypeSignature = std::forward<SlotTypeSignatureT>(value); }
    template<typename SlotTypeSignatureT = Aws::String>
    BuiltInSlotTypeSummary& WithSlotTypeSignature(SlotTypeSignatureT&& value) { SetSlotTypeSignature(std::forward<SlotTypeSignatureT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the built-in slot type.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    BuiltInSlotTypeSummary& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
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

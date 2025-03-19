/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/lexv2-models/model/Specifications.h>
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
   * <p>Specifications for the constituent sub slots and the expression for the
   * composite slot.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/SubSlotSetting">AWS
   * API Reference</a></p>
   */
  class SubSlotSetting
  {
  public:
    AWS_LEXMODELSV2_API SubSlotSetting() = default;
    AWS_LEXMODELSV2_API SubSlotSetting(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API SubSlotSetting& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The expression text for defining the constituent sub slots in the composite
     * slot using logical AND and OR operators.</p>
     */
    inline const Aws::String& GetExpression() const { return m_expression; }
    inline bool ExpressionHasBeenSet() const { return m_expressionHasBeenSet; }
    template<typename ExpressionT = Aws::String>
    void SetExpression(ExpressionT&& value) { m_expressionHasBeenSet = true; m_expression = std::forward<ExpressionT>(value); }
    template<typename ExpressionT = Aws::String>
    SubSlotSetting& WithExpression(ExpressionT&& value) { SetExpression(std::forward<ExpressionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifications for the constituent sub slots of a composite slot.</p>
     */
    inline const Aws::Map<Aws::String, Specifications>& GetSlotSpecifications() const { return m_slotSpecifications; }
    inline bool SlotSpecificationsHasBeenSet() const { return m_slotSpecificationsHasBeenSet; }
    template<typename SlotSpecificationsT = Aws::Map<Aws::String, Specifications>>
    void SetSlotSpecifications(SlotSpecificationsT&& value) { m_slotSpecificationsHasBeenSet = true; m_slotSpecifications = std::forward<SlotSpecificationsT>(value); }
    template<typename SlotSpecificationsT = Aws::Map<Aws::String, Specifications>>
    SubSlotSetting& WithSlotSpecifications(SlotSpecificationsT&& value) { SetSlotSpecifications(std::forward<SlotSpecificationsT>(value)); return *this;}
    template<typename SlotSpecificationsKeyT = Aws::String, typename SlotSpecificationsValueT = Specifications>
    SubSlotSetting& AddSlotSpecifications(SlotSpecificationsKeyT&& key, SlotSpecificationsValueT&& value) {
      m_slotSpecificationsHasBeenSet = true; m_slotSpecifications.emplace(std::forward<SlotSpecificationsKeyT>(key), std::forward<SlotSpecificationsValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::String m_expression;
    bool m_expressionHasBeenSet = false;

    Aws::Map<Aws::String, Specifications> m_slotSpecifications;
    bool m_slotSpecificationsHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws

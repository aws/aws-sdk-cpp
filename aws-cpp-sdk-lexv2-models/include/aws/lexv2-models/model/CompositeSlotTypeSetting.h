/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lexv2-models/model/SubSlotTypeComposition.h>
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
   * <p>A composite slot is a combination of two or more slots that capture multiple
   * pieces of information in a single user input.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/CompositeSlotTypeSetting">AWS
   * API Reference</a></p>
   */
  class CompositeSlotTypeSetting
  {
  public:
    AWS_LEXMODELSV2_API CompositeSlotTypeSetting();
    AWS_LEXMODELSV2_API CompositeSlotTypeSetting(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API CompositeSlotTypeSetting& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Subslots in the composite slot.</p>
     */
    inline const Aws::Vector<SubSlotTypeComposition>& GetSubSlots() const{ return m_subSlots; }

    /**
     * <p>Subslots in the composite slot.</p>
     */
    inline bool SubSlotsHasBeenSet() const { return m_subSlotsHasBeenSet; }

    /**
     * <p>Subslots in the composite slot.</p>
     */
    inline void SetSubSlots(const Aws::Vector<SubSlotTypeComposition>& value) { m_subSlotsHasBeenSet = true; m_subSlots = value; }

    /**
     * <p>Subslots in the composite slot.</p>
     */
    inline void SetSubSlots(Aws::Vector<SubSlotTypeComposition>&& value) { m_subSlotsHasBeenSet = true; m_subSlots = std::move(value); }

    /**
     * <p>Subslots in the composite slot.</p>
     */
    inline CompositeSlotTypeSetting& WithSubSlots(const Aws::Vector<SubSlotTypeComposition>& value) { SetSubSlots(value); return *this;}

    /**
     * <p>Subslots in the composite slot.</p>
     */
    inline CompositeSlotTypeSetting& WithSubSlots(Aws::Vector<SubSlotTypeComposition>&& value) { SetSubSlots(std::move(value)); return *this;}

    /**
     * <p>Subslots in the composite slot.</p>
     */
    inline CompositeSlotTypeSetting& AddSubSlots(const SubSlotTypeComposition& value) { m_subSlotsHasBeenSet = true; m_subSlots.push_back(value); return *this; }

    /**
     * <p>Subslots in the composite slot.</p>
     */
    inline CompositeSlotTypeSetting& AddSubSlots(SubSlotTypeComposition&& value) { m_subSlotsHasBeenSet = true; m_subSlots.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<SubSlotTypeComposition> m_subSlots;
    bool m_subSlotsHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws

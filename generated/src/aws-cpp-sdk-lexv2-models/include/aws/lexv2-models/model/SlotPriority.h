﻿/**
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
   * <p>Sets the priority that Amazon Lex should use when eliciting slot values from
   * a user.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/SlotPriority">AWS
   * API Reference</a></p>
   */
  class SlotPriority
  {
  public:
    AWS_LEXMODELSV2_API SlotPriority();
    AWS_LEXMODELSV2_API SlotPriority(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API SlotPriority& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The priority that Amazon Lex should apply to the slot.</p>
     */
    inline int GetPriority() const{ return m_priority; }
    inline bool PriorityHasBeenSet() const { return m_priorityHasBeenSet; }
    inline void SetPriority(int value) { m_priorityHasBeenSet = true; m_priority = value; }
    inline SlotPriority& WithPriority(int value) { SetPriority(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the slot.</p>
     */
    inline const Aws::String& GetSlotId() const{ return m_slotId; }
    inline bool SlotIdHasBeenSet() const { return m_slotIdHasBeenSet; }
    inline void SetSlotId(const Aws::String& value) { m_slotIdHasBeenSet = true; m_slotId = value; }
    inline void SetSlotId(Aws::String&& value) { m_slotIdHasBeenSet = true; m_slotId = std::move(value); }
    inline void SetSlotId(const char* value) { m_slotIdHasBeenSet = true; m_slotId.assign(value); }
    inline SlotPriority& WithSlotId(const Aws::String& value) { SetSlotId(value); return *this;}
    inline SlotPriority& WithSlotId(Aws::String&& value) { SetSlotId(std::move(value)); return *this;}
    inline SlotPriority& WithSlotId(const char* value) { SetSlotId(value); return *this;}
    ///@}
  private:

    int m_priority;
    bool m_priorityHasBeenSet = false;

    Aws::String m_slotId;
    bool m_slotIdHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws

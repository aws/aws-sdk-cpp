/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lexv2-models/model/SlotResolutionTestResultItemCounts.h>
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
   * <p>Information about the success and failure rate of slot resolution in the
   * results of a test execution.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/SlotResolutionTestResultItem">AWS
   * API Reference</a></p>
   */
  class SlotResolutionTestResultItem
  {
  public:
    AWS_LEXMODELSV2_API SlotResolutionTestResultItem() = default;
    AWS_LEXMODELSV2_API SlotResolutionTestResultItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API SlotResolutionTestResultItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the slot.</p>
     */
    inline const Aws::String& GetSlotName() const { return m_slotName; }
    inline bool SlotNameHasBeenSet() const { return m_slotNameHasBeenSet; }
    template<typename SlotNameT = Aws::String>
    void SetSlotName(SlotNameT&& value) { m_slotNameHasBeenSet = true; m_slotName = std::forward<SlotNameT>(value); }
    template<typename SlotNameT = Aws::String>
    SlotResolutionTestResultItem& WithSlotName(SlotNameT&& value) { SetSlotName(std::forward<SlotNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A result for slot resolution in the results of a test execution.</p>
     */
    inline const SlotResolutionTestResultItemCounts& GetResultCounts() const { return m_resultCounts; }
    inline bool ResultCountsHasBeenSet() const { return m_resultCountsHasBeenSet; }
    template<typename ResultCountsT = SlotResolutionTestResultItemCounts>
    void SetResultCounts(ResultCountsT&& value) { m_resultCountsHasBeenSet = true; m_resultCounts = std::forward<ResultCountsT>(value); }
    template<typename ResultCountsT = SlotResolutionTestResultItemCounts>
    SlotResolutionTestResultItem& WithResultCounts(ResultCountsT&& value) { SetResultCounts(std::forward<ResultCountsT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_slotName;
    bool m_slotNameHasBeenSet = false;

    SlotResolutionTestResultItemCounts m_resultCounts;
    bool m_resultCountsHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws

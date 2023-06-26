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
    AWS_LEXMODELSV2_API SlotResolutionTestResultItem();
    AWS_LEXMODELSV2_API SlotResolutionTestResultItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API SlotResolutionTestResultItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the slot.</p>
     */
    inline const Aws::String& GetSlotName() const{ return m_slotName; }

    /**
     * <p>The name of the slot.</p>
     */
    inline bool SlotNameHasBeenSet() const { return m_slotNameHasBeenSet; }

    /**
     * <p>The name of the slot.</p>
     */
    inline void SetSlotName(const Aws::String& value) { m_slotNameHasBeenSet = true; m_slotName = value; }

    /**
     * <p>The name of the slot.</p>
     */
    inline void SetSlotName(Aws::String&& value) { m_slotNameHasBeenSet = true; m_slotName = std::move(value); }

    /**
     * <p>The name of the slot.</p>
     */
    inline void SetSlotName(const char* value) { m_slotNameHasBeenSet = true; m_slotName.assign(value); }

    /**
     * <p>The name of the slot.</p>
     */
    inline SlotResolutionTestResultItem& WithSlotName(const Aws::String& value) { SetSlotName(value); return *this;}

    /**
     * <p>The name of the slot.</p>
     */
    inline SlotResolutionTestResultItem& WithSlotName(Aws::String&& value) { SetSlotName(std::move(value)); return *this;}

    /**
     * <p>The name of the slot.</p>
     */
    inline SlotResolutionTestResultItem& WithSlotName(const char* value) { SetSlotName(value); return *this;}


    /**
     * <p>A result for slot resolution in the results of a test execution.</p>
     */
    inline const SlotResolutionTestResultItemCounts& GetResultCounts() const{ return m_resultCounts; }

    /**
     * <p>A result for slot resolution in the results of a test execution.</p>
     */
    inline bool ResultCountsHasBeenSet() const { return m_resultCountsHasBeenSet; }

    /**
     * <p>A result for slot resolution in the results of a test execution.</p>
     */
    inline void SetResultCounts(const SlotResolutionTestResultItemCounts& value) { m_resultCountsHasBeenSet = true; m_resultCounts = value; }

    /**
     * <p>A result for slot resolution in the results of a test execution.</p>
     */
    inline void SetResultCounts(SlotResolutionTestResultItemCounts&& value) { m_resultCountsHasBeenSet = true; m_resultCounts = std::move(value); }

    /**
     * <p>A result for slot resolution in the results of a test execution.</p>
     */
    inline SlotResolutionTestResultItem& WithResultCounts(const SlotResolutionTestResultItemCounts& value) { SetResultCounts(value); return *this;}

    /**
     * <p>A result for slot resolution in the results of a test execution.</p>
     */
    inline SlotResolutionTestResultItem& WithResultCounts(SlotResolutionTestResultItemCounts&& value) { SetResultCounts(std::move(value)); return *this;}

  private:

    Aws::String m_slotName;
    bool m_slotNameHasBeenSet = false;

    SlotResolutionTestResultItemCounts m_resultCounts;
    bool m_resultCountsHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws

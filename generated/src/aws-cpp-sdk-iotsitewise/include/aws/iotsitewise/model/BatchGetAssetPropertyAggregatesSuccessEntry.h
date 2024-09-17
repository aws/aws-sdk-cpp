/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iotsitewise/model/AggregatedValue.h>
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
namespace IoTSiteWise
{
namespace Model
{

  /**
   * <p>Contains success information for an entry that is associated with the <a
   * href="https://docs.aws.amazon.com/iot-sitewise/latest/APIReference/API_BatchGetAssetPropertyAggregates.html">BatchGetAssetPropertyAggregates</a>
   * API.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/BatchGetAssetPropertyAggregatesSuccessEntry">AWS
   * API Reference</a></p>
   */
  class BatchGetAssetPropertyAggregatesSuccessEntry
  {
  public:
    AWS_IOTSITEWISE_API BatchGetAssetPropertyAggregatesSuccessEntry();
    AWS_IOTSITEWISE_API BatchGetAssetPropertyAggregatesSuccessEntry(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTSITEWISE_API BatchGetAssetPropertyAggregatesSuccessEntry& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTSITEWISE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the entry.</p>
     */
    inline const Aws::String& GetEntryId() const{ return m_entryId; }
    inline bool EntryIdHasBeenSet() const { return m_entryIdHasBeenSet; }
    inline void SetEntryId(const Aws::String& value) { m_entryIdHasBeenSet = true; m_entryId = value; }
    inline void SetEntryId(Aws::String&& value) { m_entryIdHasBeenSet = true; m_entryId = std::move(value); }
    inline void SetEntryId(const char* value) { m_entryIdHasBeenSet = true; m_entryId.assign(value); }
    inline BatchGetAssetPropertyAggregatesSuccessEntry& WithEntryId(const Aws::String& value) { SetEntryId(value); return *this;}
    inline BatchGetAssetPropertyAggregatesSuccessEntry& WithEntryId(Aws::String&& value) { SetEntryId(std::move(value)); return *this;}
    inline BatchGetAssetPropertyAggregatesSuccessEntry& WithEntryId(const char* value) { SetEntryId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The requested aggregated asset property values (for example, average,
     * minimum, and maximum).</p>
     */
    inline const Aws::Vector<AggregatedValue>& GetAggregatedValues() const{ return m_aggregatedValues; }
    inline bool AggregatedValuesHasBeenSet() const { return m_aggregatedValuesHasBeenSet; }
    inline void SetAggregatedValues(const Aws::Vector<AggregatedValue>& value) { m_aggregatedValuesHasBeenSet = true; m_aggregatedValues = value; }
    inline void SetAggregatedValues(Aws::Vector<AggregatedValue>&& value) { m_aggregatedValuesHasBeenSet = true; m_aggregatedValues = std::move(value); }
    inline BatchGetAssetPropertyAggregatesSuccessEntry& WithAggregatedValues(const Aws::Vector<AggregatedValue>& value) { SetAggregatedValues(value); return *this;}
    inline BatchGetAssetPropertyAggregatesSuccessEntry& WithAggregatedValues(Aws::Vector<AggregatedValue>&& value) { SetAggregatedValues(std::move(value)); return *this;}
    inline BatchGetAssetPropertyAggregatesSuccessEntry& AddAggregatedValues(const AggregatedValue& value) { m_aggregatedValuesHasBeenSet = true; m_aggregatedValues.push_back(value); return *this; }
    inline BatchGetAssetPropertyAggregatesSuccessEntry& AddAggregatedValues(AggregatedValue&& value) { m_aggregatedValuesHasBeenSet = true; m_aggregatedValues.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_entryId;
    bool m_entryIdHasBeenSet = false;

    Aws::Vector<AggregatedValue> m_aggregatedValues;
    bool m_aggregatedValuesHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws

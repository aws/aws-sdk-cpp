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
    AWS_IOTSITEWISE_API BatchGetAssetPropertyAggregatesSuccessEntry() = default;
    AWS_IOTSITEWISE_API BatchGetAssetPropertyAggregatesSuccessEntry(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTSITEWISE_API BatchGetAssetPropertyAggregatesSuccessEntry& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTSITEWISE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the entry.</p>
     */
    inline const Aws::String& GetEntryId() const { return m_entryId; }
    inline bool EntryIdHasBeenSet() const { return m_entryIdHasBeenSet; }
    template<typename EntryIdT = Aws::String>
    void SetEntryId(EntryIdT&& value) { m_entryIdHasBeenSet = true; m_entryId = std::forward<EntryIdT>(value); }
    template<typename EntryIdT = Aws::String>
    BatchGetAssetPropertyAggregatesSuccessEntry& WithEntryId(EntryIdT&& value) { SetEntryId(std::forward<EntryIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The requested aggregated asset property values (for example, average,
     * minimum, and maximum).</p>
     */
    inline const Aws::Vector<AggregatedValue>& GetAggregatedValues() const { return m_aggregatedValues; }
    inline bool AggregatedValuesHasBeenSet() const { return m_aggregatedValuesHasBeenSet; }
    template<typename AggregatedValuesT = Aws::Vector<AggregatedValue>>
    void SetAggregatedValues(AggregatedValuesT&& value) { m_aggregatedValuesHasBeenSet = true; m_aggregatedValues = std::forward<AggregatedValuesT>(value); }
    template<typename AggregatedValuesT = Aws::Vector<AggregatedValue>>
    BatchGetAssetPropertyAggregatesSuccessEntry& WithAggregatedValues(AggregatedValuesT&& value) { SetAggregatedValues(std::forward<AggregatedValuesT>(value)); return *this;}
    template<typename AggregatedValuesT = AggregatedValue>
    BatchGetAssetPropertyAggregatesSuccessEntry& AddAggregatedValues(AggregatedValuesT&& value) { m_aggregatedValuesHasBeenSet = true; m_aggregatedValues.emplace_back(std::forward<AggregatedValuesT>(value)); return *this; }
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

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iotsitewise/model/AssetPropertyValue.h>
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
   * href="https://docs.aws.amazon.com/iot-sitewise/latest/APIReference/API_BatchGetAssetPropertyValue.html">BatchGetAssetPropertyValueHistory</a>
   * API.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/BatchGetAssetPropertyValueHistorySuccessEntry">AWS
   * API Reference</a></p>
   */
  class BatchGetAssetPropertyValueHistorySuccessEntry
  {
  public:
    AWS_IOTSITEWISE_API BatchGetAssetPropertyValueHistorySuccessEntry() = default;
    AWS_IOTSITEWISE_API BatchGetAssetPropertyValueHistorySuccessEntry(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTSITEWISE_API BatchGetAssetPropertyValueHistorySuccessEntry& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    BatchGetAssetPropertyValueHistorySuccessEntry& WithEntryId(EntryIdT&& value) { SetEntryId(std::forward<EntryIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The requested historical values for the specified asset property.</p>
     */
    inline const Aws::Vector<AssetPropertyValue>& GetAssetPropertyValueHistory() const { return m_assetPropertyValueHistory; }
    inline bool AssetPropertyValueHistoryHasBeenSet() const { return m_assetPropertyValueHistoryHasBeenSet; }
    template<typename AssetPropertyValueHistoryT = Aws::Vector<AssetPropertyValue>>
    void SetAssetPropertyValueHistory(AssetPropertyValueHistoryT&& value) { m_assetPropertyValueHistoryHasBeenSet = true; m_assetPropertyValueHistory = std::forward<AssetPropertyValueHistoryT>(value); }
    template<typename AssetPropertyValueHistoryT = Aws::Vector<AssetPropertyValue>>
    BatchGetAssetPropertyValueHistorySuccessEntry& WithAssetPropertyValueHistory(AssetPropertyValueHistoryT&& value) { SetAssetPropertyValueHistory(std::forward<AssetPropertyValueHistoryT>(value)); return *this;}
    template<typename AssetPropertyValueHistoryT = AssetPropertyValue>
    BatchGetAssetPropertyValueHistorySuccessEntry& AddAssetPropertyValueHistory(AssetPropertyValueHistoryT&& value) { m_assetPropertyValueHistoryHasBeenSet = true; m_assetPropertyValueHistory.emplace_back(std::forward<AssetPropertyValueHistoryT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_entryId;
    bool m_entryIdHasBeenSet = false;

    Aws::Vector<AssetPropertyValue> m_assetPropertyValueHistory;
    bool m_assetPropertyValueHistoryHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws

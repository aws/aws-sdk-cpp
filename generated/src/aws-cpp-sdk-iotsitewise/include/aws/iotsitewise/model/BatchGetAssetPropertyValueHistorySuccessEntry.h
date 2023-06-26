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
    AWS_IOTSITEWISE_API BatchGetAssetPropertyValueHistorySuccessEntry();
    AWS_IOTSITEWISE_API BatchGetAssetPropertyValueHistorySuccessEntry(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTSITEWISE_API BatchGetAssetPropertyValueHistorySuccessEntry& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTSITEWISE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID of the entry.</p>
     */
    inline const Aws::String& GetEntryId() const{ return m_entryId; }

    /**
     * <p>The ID of the entry.</p>
     */
    inline bool EntryIdHasBeenSet() const { return m_entryIdHasBeenSet; }

    /**
     * <p>The ID of the entry.</p>
     */
    inline void SetEntryId(const Aws::String& value) { m_entryIdHasBeenSet = true; m_entryId = value; }

    /**
     * <p>The ID of the entry.</p>
     */
    inline void SetEntryId(Aws::String&& value) { m_entryIdHasBeenSet = true; m_entryId = std::move(value); }

    /**
     * <p>The ID of the entry.</p>
     */
    inline void SetEntryId(const char* value) { m_entryIdHasBeenSet = true; m_entryId.assign(value); }

    /**
     * <p>The ID of the entry.</p>
     */
    inline BatchGetAssetPropertyValueHistorySuccessEntry& WithEntryId(const Aws::String& value) { SetEntryId(value); return *this;}

    /**
     * <p>The ID of the entry.</p>
     */
    inline BatchGetAssetPropertyValueHistorySuccessEntry& WithEntryId(Aws::String&& value) { SetEntryId(std::move(value)); return *this;}

    /**
     * <p>The ID of the entry.</p>
     */
    inline BatchGetAssetPropertyValueHistorySuccessEntry& WithEntryId(const char* value) { SetEntryId(value); return *this;}


    /**
     * <p>The requested historical values for the specified asset property.</p>
     */
    inline const Aws::Vector<AssetPropertyValue>& GetAssetPropertyValueHistory() const{ return m_assetPropertyValueHistory; }

    /**
     * <p>The requested historical values for the specified asset property.</p>
     */
    inline bool AssetPropertyValueHistoryHasBeenSet() const { return m_assetPropertyValueHistoryHasBeenSet; }

    /**
     * <p>The requested historical values for the specified asset property.</p>
     */
    inline void SetAssetPropertyValueHistory(const Aws::Vector<AssetPropertyValue>& value) { m_assetPropertyValueHistoryHasBeenSet = true; m_assetPropertyValueHistory = value; }

    /**
     * <p>The requested historical values for the specified asset property.</p>
     */
    inline void SetAssetPropertyValueHistory(Aws::Vector<AssetPropertyValue>&& value) { m_assetPropertyValueHistoryHasBeenSet = true; m_assetPropertyValueHistory = std::move(value); }

    /**
     * <p>The requested historical values for the specified asset property.</p>
     */
    inline BatchGetAssetPropertyValueHistorySuccessEntry& WithAssetPropertyValueHistory(const Aws::Vector<AssetPropertyValue>& value) { SetAssetPropertyValueHistory(value); return *this;}

    /**
     * <p>The requested historical values for the specified asset property.</p>
     */
    inline BatchGetAssetPropertyValueHistorySuccessEntry& WithAssetPropertyValueHistory(Aws::Vector<AssetPropertyValue>&& value) { SetAssetPropertyValueHistory(std::move(value)); return *this;}

    /**
     * <p>The requested historical values for the specified asset property.</p>
     */
    inline BatchGetAssetPropertyValueHistorySuccessEntry& AddAssetPropertyValueHistory(const AssetPropertyValue& value) { m_assetPropertyValueHistoryHasBeenSet = true; m_assetPropertyValueHistory.push_back(value); return *this; }

    /**
     * <p>The requested historical values for the specified asset property.</p>
     */
    inline BatchGetAssetPropertyValueHistorySuccessEntry& AddAssetPropertyValueHistory(AssetPropertyValue&& value) { m_assetPropertyValueHistoryHasBeenSet = true; m_assetPropertyValueHistory.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_entryId;
    bool m_entryIdHasBeenSet = false;

    Aws::Vector<AssetPropertyValue> m_assetPropertyValueHistory;
    bool m_assetPropertyValueHistoryHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws

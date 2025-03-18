/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/iotsitewise/IoTSiteWiseRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iotsitewise/model/PutAssetPropertyValueEntry.h>
#include <utility>

namespace Aws
{
namespace IoTSiteWise
{
namespace Model
{

  /**
   */
  class BatchPutAssetPropertyValueRequest : public IoTSiteWiseRequest
  {
  public:
    AWS_IOTSITEWISE_API BatchPutAssetPropertyValueRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "BatchPutAssetPropertyValue"; }

    AWS_IOTSITEWISE_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>This setting enables partial ingestion at entry-level. If set to
     * <code>true</code>, we ingest all TQVs not resulting in an error. If set to
     * <code>false</code>, an invalid TQV fails ingestion of the entire entry that
     * contains it.</p>
     */
    inline bool GetEnablePartialEntryProcessing() const { return m_enablePartialEntryProcessing; }
    inline bool EnablePartialEntryProcessingHasBeenSet() const { return m_enablePartialEntryProcessingHasBeenSet; }
    inline void SetEnablePartialEntryProcessing(bool value) { m_enablePartialEntryProcessingHasBeenSet = true; m_enablePartialEntryProcessing = value; }
    inline BatchPutAssetPropertyValueRequest& WithEnablePartialEntryProcessing(bool value) { SetEnablePartialEntryProcessing(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of asset property value entries for the batch put request. You can
     * specify up to 10 entries per request.</p>
     */
    inline const Aws::Vector<PutAssetPropertyValueEntry>& GetEntries() const { return m_entries; }
    inline bool EntriesHasBeenSet() const { return m_entriesHasBeenSet; }
    template<typename EntriesT = Aws::Vector<PutAssetPropertyValueEntry>>
    void SetEntries(EntriesT&& value) { m_entriesHasBeenSet = true; m_entries = std::forward<EntriesT>(value); }
    template<typename EntriesT = Aws::Vector<PutAssetPropertyValueEntry>>
    BatchPutAssetPropertyValueRequest& WithEntries(EntriesT&& value) { SetEntries(std::forward<EntriesT>(value)); return *this;}
    template<typename EntriesT = PutAssetPropertyValueEntry>
    BatchPutAssetPropertyValueRequest& AddEntries(EntriesT&& value) { m_entriesHasBeenSet = true; m_entries.emplace_back(std::forward<EntriesT>(value)); return *this; }
    ///@}
  private:

    bool m_enablePartialEntryProcessing{false};
    bool m_enablePartialEntryProcessingHasBeenSet = false;

    Aws::Vector<PutAssetPropertyValueEntry> m_entries;
    bool m_entriesHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws

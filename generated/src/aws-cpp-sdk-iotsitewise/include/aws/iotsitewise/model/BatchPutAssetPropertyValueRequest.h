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
    AWS_IOTSITEWISE_API BatchPutAssetPropertyValueRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "BatchPutAssetPropertyValue"; }

    AWS_IOTSITEWISE_API Aws::String SerializePayload() const override;


    /**
     * <p>The list of asset property value entries for the batch put request. You can
     * specify up to 10 entries per request.</p>
     */
    inline const Aws::Vector<PutAssetPropertyValueEntry>& GetEntries() const{ return m_entries; }

    /**
     * <p>The list of asset property value entries for the batch put request. You can
     * specify up to 10 entries per request.</p>
     */
    inline bool EntriesHasBeenSet() const { return m_entriesHasBeenSet; }

    /**
     * <p>The list of asset property value entries for the batch put request. You can
     * specify up to 10 entries per request.</p>
     */
    inline void SetEntries(const Aws::Vector<PutAssetPropertyValueEntry>& value) { m_entriesHasBeenSet = true; m_entries = value; }

    /**
     * <p>The list of asset property value entries for the batch put request. You can
     * specify up to 10 entries per request.</p>
     */
    inline void SetEntries(Aws::Vector<PutAssetPropertyValueEntry>&& value) { m_entriesHasBeenSet = true; m_entries = std::move(value); }

    /**
     * <p>The list of asset property value entries for the batch put request. You can
     * specify up to 10 entries per request.</p>
     */
    inline BatchPutAssetPropertyValueRequest& WithEntries(const Aws::Vector<PutAssetPropertyValueEntry>& value) { SetEntries(value); return *this;}

    /**
     * <p>The list of asset property value entries for the batch put request. You can
     * specify up to 10 entries per request.</p>
     */
    inline BatchPutAssetPropertyValueRequest& WithEntries(Aws::Vector<PutAssetPropertyValueEntry>&& value) { SetEntries(std::move(value)); return *this;}

    /**
     * <p>The list of asset property value entries for the batch put request. You can
     * specify up to 10 entries per request.</p>
     */
    inline BatchPutAssetPropertyValueRequest& AddEntries(const PutAssetPropertyValueEntry& value) { m_entriesHasBeenSet = true; m_entries.push_back(value); return *this; }

    /**
     * <p>The list of asset property value entries for the batch put request. You can
     * specify up to 10 entries per request.</p>
     */
    inline BatchPutAssetPropertyValueRequest& AddEntries(PutAssetPropertyValueEntry&& value) { m_entriesHasBeenSet = true; m_entries.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<PutAssetPropertyValueEntry> m_entries;
    bool m_entriesHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws

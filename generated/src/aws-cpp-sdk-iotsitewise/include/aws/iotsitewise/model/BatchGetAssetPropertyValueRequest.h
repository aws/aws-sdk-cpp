/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/iotsitewise/IoTSiteWiseRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotsitewise/model/BatchGetAssetPropertyValueEntry.h>
#include <utility>

namespace Aws
{
namespace IoTSiteWise
{
namespace Model
{

  /**
   */
  class BatchGetAssetPropertyValueRequest : public IoTSiteWiseRequest
  {
  public:
    AWS_IOTSITEWISE_API BatchGetAssetPropertyValueRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "BatchGetAssetPropertyValue"; }

    AWS_IOTSITEWISE_API Aws::String SerializePayload() const override;


    /**
     * <p>The list of asset property value entries for the batch get request. You can
     * specify up to 16 entries per request.</p>
     */
    inline const Aws::Vector<BatchGetAssetPropertyValueEntry>& GetEntries() const{ return m_entries; }

    /**
     * <p>The list of asset property value entries for the batch get request. You can
     * specify up to 16 entries per request.</p>
     */
    inline bool EntriesHasBeenSet() const { return m_entriesHasBeenSet; }

    /**
     * <p>The list of asset property value entries for the batch get request. You can
     * specify up to 16 entries per request.</p>
     */
    inline void SetEntries(const Aws::Vector<BatchGetAssetPropertyValueEntry>& value) { m_entriesHasBeenSet = true; m_entries = value; }

    /**
     * <p>The list of asset property value entries for the batch get request. You can
     * specify up to 16 entries per request.</p>
     */
    inline void SetEntries(Aws::Vector<BatchGetAssetPropertyValueEntry>&& value) { m_entriesHasBeenSet = true; m_entries = std::move(value); }

    /**
     * <p>The list of asset property value entries for the batch get request. You can
     * specify up to 16 entries per request.</p>
     */
    inline BatchGetAssetPropertyValueRequest& WithEntries(const Aws::Vector<BatchGetAssetPropertyValueEntry>& value) { SetEntries(value); return *this;}

    /**
     * <p>The list of asset property value entries for the batch get request. You can
     * specify up to 16 entries per request.</p>
     */
    inline BatchGetAssetPropertyValueRequest& WithEntries(Aws::Vector<BatchGetAssetPropertyValueEntry>&& value) { SetEntries(std::move(value)); return *this;}

    /**
     * <p>The list of asset property value entries for the batch get request. You can
     * specify up to 16 entries per request.</p>
     */
    inline BatchGetAssetPropertyValueRequest& AddEntries(const BatchGetAssetPropertyValueEntry& value) { m_entriesHasBeenSet = true; m_entries.push_back(value); return *this; }

    /**
     * <p>The list of asset property value entries for the batch get request. You can
     * specify up to 16 entries per request.</p>
     */
    inline BatchGetAssetPropertyValueRequest& AddEntries(BatchGetAssetPropertyValueEntry&& value) { m_entriesHasBeenSet = true; m_entries.push_back(std::move(value)); return *this; }


    /**
     * <p>The token to be used for the next set of paginated results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token to be used for the next set of paginated results.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The token to be used for the next set of paginated results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The token to be used for the next set of paginated results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The token to be used for the next set of paginated results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The token to be used for the next set of paginated results.</p>
     */
    inline BatchGetAssetPropertyValueRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to be used for the next set of paginated results.</p>
     */
    inline BatchGetAssetPropertyValueRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to be used for the next set of paginated results.</p>
     */
    inline BatchGetAssetPropertyValueRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<BatchGetAssetPropertyValueEntry> m_entries;
    bool m_entriesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws

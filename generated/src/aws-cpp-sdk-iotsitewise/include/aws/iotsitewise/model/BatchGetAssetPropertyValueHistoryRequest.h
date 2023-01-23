/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/iotsitewise/IoTSiteWiseRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotsitewise/model/BatchGetAssetPropertyValueHistoryEntry.h>
#include <utility>

namespace Aws
{
namespace IoTSiteWise
{
namespace Model
{

  /**
   */
  class BatchGetAssetPropertyValueHistoryRequest : public IoTSiteWiseRequest
  {
  public:
    AWS_IOTSITEWISE_API BatchGetAssetPropertyValueHistoryRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "BatchGetAssetPropertyValueHistory"; }

    AWS_IOTSITEWISE_API Aws::String SerializePayload() const override;


    /**
     * <p>The list of asset property historical value entries for the batch get
     * request. You can specify up to 16 entries per request.</p>
     */
    inline const Aws::Vector<BatchGetAssetPropertyValueHistoryEntry>& GetEntries() const{ return m_entries; }

    /**
     * <p>The list of asset property historical value entries for the batch get
     * request. You can specify up to 16 entries per request.</p>
     */
    inline bool EntriesHasBeenSet() const { return m_entriesHasBeenSet; }

    /**
     * <p>The list of asset property historical value entries for the batch get
     * request. You can specify up to 16 entries per request.</p>
     */
    inline void SetEntries(const Aws::Vector<BatchGetAssetPropertyValueHistoryEntry>& value) { m_entriesHasBeenSet = true; m_entries = value; }

    /**
     * <p>The list of asset property historical value entries for the batch get
     * request. You can specify up to 16 entries per request.</p>
     */
    inline void SetEntries(Aws::Vector<BatchGetAssetPropertyValueHistoryEntry>&& value) { m_entriesHasBeenSet = true; m_entries = std::move(value); }

    /**
     * <p>The list of asset property historical value entries for the batch get
     * request. You can specify up to 16 entries per request.</p>
     */
    inline BatchGetAssetPropertyValueHistoryRequest& WithEntries(const Aws::Vector<BatchGetAssetPropertyValueHistoryEntry>& value) { SetEntries(value); return *this;}

    /**
     * <p>The list of asset property historical value entries for the batch get
     * request. You can specify up to 16 entries per request.</p>
     */
    inline BatchGetAssetPropertyValueHistoryRequest& WithEntries(Aws::Vector<BatchGetAssetPropertyValueHistoryEntry>&& value) { SetEntries(std::move(value)); return *this;}

    /**
     * <p>The list of asset property historical value entries for the batch get
     * request. You can specify up to 16 entries per request.</p>
     */
    inline BatchGetAssetPropertyValueHistoryRequest& AddEntries(const BatchGetAssetPropertyValueHistoryEntry& value) { m_entriesHasBeenSet = true; m_entries.push_back(value); return *this; }

    /**
     * <p>The list of asset property historical value entries for the batch get
     * request. You can specify up to 16 entries per request.</p>
     */
    inline BatchGetAssetPropertyValueHistoryRequest& AddEntries(BatchGetAssetPropertyValueHistoryEntry&& value) { m_entriesHasBeenSet = true; m_entries.push_back(std::move(value)); return *this; }


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
    inline BatchGetAssetPropertyValueHistoryRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to be used for the next set of paginated results.</p>
     */
    inline BatchGetAssetPropertyValueHistoryRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to be used for the next set of paginated results.</p>
     */
    inline BatchGetAssetPropertyValueHistoryRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The maximum number of results to return for each paginated request. A result
     * set is returned in the two cases, whichever occurs first.</p> <ul> <li> <p>The
     * size of the result set is less than 1 MB.</p> </li> <li> <p>The number of data
     * points in the result set is less than the value of <code>maxResults</code>. The
     * maximum value of <code>maxResults</code> is 4000.</p> </li> </ul>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of results to return for each paginated request. A result
     * set is returned in the two cases, whichever occurs first.</p> <ul> <li> <p>The
     * size of the result set is less than 1 MB.</p> </li> <li> <p>The number of data
     * points in the result set is less than the value of <code>maxResults</code>. The
     * maximum value of <code>maxResults</code> is 4000.</p> </li> </ul>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of results to return for each paginated request. A result
     * set is returned in the two cases, whichever occurs first.</p> <ul> <li> <p>The
     * size of the result set is less than 1 MB.</p> </li> <li> <p>The number of data
     * points in the result set is less than the value of <code>maxResults</code>. The
     * maximum value of <code>maxResults</code> is 4000.</p> </li> </ul>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of results to return for each paginated request. A result
     * set is returned in the two cases, whichever occurs first.</p> <ul> <li> <p>The
     * size of the result set is less than 1 MB.</p> </li> <li> <p>The number of data
     * points in the result set is less than the value of <code>maxResults</code>. The
     * maximum value of <code>maxResults</code> is 4000.</p> </li> </ul>
     */
    inline BatchGetAssetPropertyValueHistoryRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}

  private:

    Aws::Vector<BatchGetAssetPropertyValueHistoryEntry> m_entries;
    bool m_entriesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws

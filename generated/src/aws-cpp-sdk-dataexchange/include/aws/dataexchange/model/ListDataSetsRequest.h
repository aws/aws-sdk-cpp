/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dataexchange/DataExchange_EXPORTS.h>
#include <aws/dataexchange/DataExchangeRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace DataExchange
{
namespace Model
{

  /**
   */
  class ListDataSetsRequest : public DataExchangeRequest
  {
  public:
    AWS_DATAEXCHANGE_API ListDataSetsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListDataSets"; }

    AWS_DATAEXCHANGE_API Aws::String SerializePayload() const override;

    AWS_DATAEXCHANGE_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The maximum number of results returned by a single call.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of results returned by a single call.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of results returned by a single call.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of results returned by a single call.</p>
     */
    inline ListDataSetsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>The token value retrieved from a previous call to access the next page of
     * results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token value retrieved from a previous call to access the next page of
     * results.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The token value retrieved from a previous call to access the next page of
     * results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The token value retrieved from a previous call to access the next page of
     * results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The token value retrieved from a previous call to access the next page of
     * results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The token value retrieved from a previous call to access the next page of
     * results.</p>
     */
    inline ListDataSetsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token value retrieved from a previous call to access the next page of
     * results.</p>
     */
    inline ListDataSetsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token value retrieved from a previous call to access the next page of
     * results.</p>
     */
    inline ListDataSetsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>A property that defines the data set as OWNED by the account (for providers)
     * or ENTITLED to the account (for subscribers).</p>
     */
    inline const Aws::String& GetOrigin() const{ return m_origin; }

    /**
     * <p>A property that defines the data set as OWNED by the account (for providers)
     * or ENTITLED to the account (for subscribers).</p>
     */
    inline bool OriginHasBeenSet() const { return m_originHasBeenSet; }

    /**
     * <p>A property that defines the data set as OWNED by the account (for providers)
     * or ENTITLED to the account (for subscribers).</p>
     */
    inline void SetOrigin(const Aws::String& value) { m_originHasBeenSet = true; m_origin = value; }

    /**
     * <p>A property that defines the data set as OWNED by the account (for providers)
     * or ENTITLED to the account (for subscribers).</p>
     */
    inline void SetOrigin(Aws::String&& value) { m_originHasBeenSet = true; m_origin = std::move(value); }

    /**
     * <p>A property that defines the data set as OWNED by the account (for providers)
     * or ENTITLED to the account (for subscribers).</p>
     */
    inline void SetOrigin(const char* value) { m_originHasBeenSet = true; m_origin.assign(value); }

    /**
     * <p>A property that defines the data set as OWNED by the account (for providers)
     * or ENTITLED to the account (for subscribers).</p>
     */
    inline ListDataSetsRequest& WithOrigin(const Aws::String& value) { SetOrigin(value); return *this;}

    /**
     * <p>A property that defines the data set as OWNED by the account (for providers)
     * or ENTITLED to the account (for subscribers).</p>
     */
    inline ListDataSetsRequest& WithOrigin(Aws::String&& value) { SetOrigin(std::move(value)); return *this;}

    /**
     * <p>A property that defines the data set as OWNED by the account (for providers)
     * or ENTITLED to the account (for subscribers).</p>
     */
    inline ListDataSetsRequest& WithOrigin(const char* value) { SetOrigin(value); return *this;}

  private:

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_origin;
    bool m_originHasBeenSet = false;
  };

} // namespace Model
} // namespace DataExchange
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kendra/Kendra_EXPORTS.h>
#include <aws/kendra/KendraRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace kendra
{
namespace Model
{

  /**
   */
  class ListGroupsOlderThanOrderingIdRequest : public KendraRequest
  {
  public:
    AWS_KENDRA_API ListGroupsOlderThanOrderingIdRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListGroupsOlderThanOrderingId"; }

    AWS_KENDRA_API Aws::String SerializePayload() const override;

    AWS_KENDRA_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The identifier of the index for getting a list of groups mapped to users
     * before a given ordering or timestamp identifier.</p>
     */
    inline const Aws::String& GetIndexId() const{ return m_indexId; }

    /**
     * <p>The identifier of the index for getting a list of groups mapped to users
     * before a given ordering or timestamp identifier.</p>
     */
    inline bool IndexIdHasBeenSet() const { return m_indexIdHasBeenSet; }

    /**
     * <p>The identifier of the index for getting a list of groups mapped to users
     * before a given ordering or timestamp identifier.</p>
     */
    inline void SetIndexId(const Aws::String& value) { m_indexIdHasBeenSet = true; m_indexId = value; }

    /**
     * <p>The identifier of the index for getting a list of groups mapped to users
     * before a given ordering or timestamp identifier.</p>
     */
    inline void SetIndexId(Aws::String&& value) { m_indexIdHasBeenSet = true; m_indexId = std::move(value); }

    /**
     * <p>The identifier of the index for getting a list of groups mapped to users
     * before a given ordering or timestamp identifier.</p>
     */
    inline void SetIndexId(const char* value) { m_indexIdHasBeenSet = true; m_indexId.assign(value); }

    /**
     * <p>The identifier of the index for getting a list of groups mapped to users
     * before a given ordering or timestamp identifier.</p>
     */
    inline ListGroupsOlderThanOrderingIdRequest& WithIndexId(const Aws::String& value) { SetIndexId(value); return *this;}

    /**
     * <p>The identifier of the index for getting a list of groups mapped to users
     * before a given ordering or timestamp identifier.</p>
     */
    inline ListGroupsOlderThanOrderingIdRequest& WithIndexId(Aws::String&& value) { SetIndexId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the index for getting a list of groups mapped to users
     * before a given ordering or timestamp identifier.</p>
     */
    inline ListGroupsOlderThanOrderingIdRequest& WithIndexId(const char* value) { SetIndexId(value); return *this;}


    /**
     * <p>The identifier of the data source for getting a list of groups mapped to
     * users before a given ordering timestamp identifier.</p>
     */
    inline const Aws::String& GetDataSourceId() const{ return m_dataSourceId; }

    /**
     * <p>The identifier of the data source for getting a list of groups mapped to
     * users before a given ordering timestamp identifier.</p>
     */
    inline bool DataSourceIdHasBeenSet() const { return m_dataSourceIdHasBeenSet; }

    /**
     * <p>The identifier of the data source for getting a list of groups mapped to
     * users before a given ordering timestamp identifier.</p>
     */
    inline void SetDataSourceId(const Aws::String& value) { m_dataSourceIdHasBeenSet = true; m_dataSourceId = value; }

    /**
     * <p>The identifier of the data source for getting a list of groups mapped to
     * users before a given ordering timestamp identifier.</p>
     */
    inline void SetDataSourceId(Aws::String&& value) { m_dataSourceIdHasBeenSet = true; m_dataSourceId = std::move(value); }

    /**
     * <p>The identifier of the data source for getting a list of groups mapped to
     * users before a given ordering timestamp identifier.</p>
     */
    inline void SetDataSourceId(const char* value) { m_dataSourceIdHasBeenSet = true; m_dataSourceId.assign(value); }

    /**
     * <p>The identifier of the data source for getting a list of groups mapped to
     * users before a given ordering timestamp identifier.</p>
     */
    inline ListGroupsOlderThanOrderingIdRequest& WithDataSourceId(const Aws::String& value) { SetDataSourceId(value); return *this;}

    /**
     * <p>The identifier of the data source for getting a list of groups mapped to
     * users before a given ordering timestamp identifier.</p>
     */
    inline ListGroupsOlderThanOrderingIdRequest& WithDataSourceId(Aws::String&& value) { SetDataSourceId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the data source for getting a list of groups mapped to
     * users before a given ordering timestamp identifier.</p>
     */
    inline ListGroupsOlderThanOrderingIdRequest& WithDataSourceId(const char* value) { SetDataSourceId(value); return *this;}


    /**
     * <p>The timestamp identifier used for the latest <code>PUT</code> or
     * <code>DELETE</code> action for mapping users to their groups.</p>
     */
    inline long long GetOrderingId() const{ return m_orderingId; }

    /**
     * <p>The timestamp identifier used for the latest <code>PUT</code> or
     * <code>DELETE</code> action for mapping users to their groups.</p>
     */
    inline bool OrderingIdHasBeenSet() const { return m_orderingIdHasBeenSet; }

    /**
     * <p>The timestamp identifier used for the latest <code>PUT</code> or
     * <code>DELETE</code> action for mapping users to their groups.</p>
     */
    inline void SetOrderingId(long long value) { m_orderingIdHasBeenSet = true; m_orderingId = value; }

    /**
     * <p>The timestamp identifier used for the latest <code>PUT</code> or
     * <code>DELETE</code> action for mapping users to their groups.</p>
     */
    inline ListGroupsOlderThanOrderingIdRequest& WithOrderingId(long long value) { SetOrderingId(value); return *this;}


    /**
     * <p> If the previous response was incomplete (because there is more data to
     * retrieve), Amazon Kendra returns a pagination token in the response. You can use
     * this pagination token to retrieve the next set of groups that are mapped to
     * users before a given ordering or timestamp identifier. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p> If the previous response was incomplete (because there is more data to
     * retrieve), Amazon Kendra returns a pagination token in the response. You can use
     * this pagination token to retrieve the next set of groups that are mapped to
     * users before a given ordering or timestamp identifier. </p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p> If the previous response was incomplete (because there is more data to
     * retrieve), Amazon Kendra returns a pagination token in the response. You can use
     * this pagination token to retrieve the next set of groups that are mapped to
     * users before a given ordering or timestamp identifier. </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p> If the previous response was incomplete (because there is more data to
     * retrieve), Amazon Kendra returns a pagination token in the response. You can use
     * this pagination token to retrieve the next set of groups that are mapped to
     * users before a given ordering or timestamp identifier. </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p> If the previous response was incomplete (because there is more data to
     * retrieve), Amazon Kendra returns a pagination token in the response. You can use
     * this pagination token to retrieve the next set of groups that are mapped to
     * users before a given ordering or timestamp identifier. </p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p> If the previous response was incomplete (because there is more data to
     * retrieve), Amazon Kendra returns a pagination token in the response. You can use
     * this pagination token to retrieve the next set of groups that are mapped to
     * users before a given ordering or timestamp identifier. </p>
     */
    inline ListGroupsOlderThanOrderingIdRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p> If the previous response was incomplete (because there is more data to
     * retrieve), Amazon Kendra returns a pagination token in the response. You can use
     * this pagination token to retrieve the next set of groups that are mapped to
     * users before a given ordering or timestamp identifier. </p>
     */
    inline ListGroupsOlderThanOrderingIdRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p> If the previous response was incomplete (because there is more data to
     * retrieve), Amazon Kendra returns a pagination token in the response. You can use
     * this pagination token to retrieve the next set of groups that are mapped to
     * users before a given ordering or timestamp identifier. </p>
     */
    inline ListGroupsOlderThanOrderingIdRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p> The maximum number of returned groups that are mapped to users before a
     * given ordering or timestamp identifier. </p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p> The maximum number of returned groups that are mapped to users before a
     * given ordering or timestamp identifier. </p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p> The maximum number of returned groups that are mapped to users before a
     * given ordering or timestamp identifier. </p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p> The maximum number of returned groups that are mapped to users before a
     * given ordering or timestamp identifier. </p>
     */
    inline ListGroupsOlderThanOrderingIdRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}

  private:

    Aws::String m_indexId;
    bool m_indexIdHasBeenSet = false;

    Aws::String m_dataSourceId;
    bool m_dataSourceIdHasBeenSet = false;

    long long m_orderingId;
    bool m_orderingIdHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws

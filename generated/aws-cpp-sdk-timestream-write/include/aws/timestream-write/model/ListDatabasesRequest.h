﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/timestream-write/TimestreamWrite_EXPORTS.h>
#include <aws/timestream-write/TimestreamWriteRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace TimestreamWrite
{
namespace Model
{

  /**
   */
  class AWS_TIMESTREAMWRITE_API ListDatabasesRequest : public TimestreamWriteRequest
  {
  public:
    ListDatabasesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListDatabases"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The pagination token. To resume pagination, provide the NextToken value as
     * argument of a subsequent API invocation.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The pagination token. To resume pagination, provide the NextToken value as
     * argument of a subsequent API invocation.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The pagination token. To resume pagination, provide the NextToken value as
     * argument of a subsequent API invocation.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The pagination token. To resume pagination, provide the NextToken value as
     * argument of a subsequent API invocation.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The pagination token. To resume pagination, provide the NextToken value as
     * argument of a subsequent API invocation.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The pagination token. To resume pagination, provide the NextToken value as
     * argument of a subsequent API invocation.</p>
     */
    inline ListDatabasesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The pagination token. To resume pagination, provide the NextToken value as
     * argument of a subsequent API invocation.</p>
     */
    inline ListDatabasesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The pagination token. To resume pagination, provide the NextToken value as
     * argument of a subsequent API invocation.</p>
     */
    inline ListDatabasesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The total number of items to return in the output. If the total number of
     * items available is more than the value specified, a NextToken is provided in the
     * output. To resume pagination, provide the NextToken value as argument of a
     * subsequent API invocation.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The total number of items to return in the output. If the total number of
     * items available is more than the value specified, a NextToken is provided in the
     * output. To resume pagination, provide the NextToken value as argument of a
     * subsequent API invocation.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The total number of items to return in the output. If the total number of
     * items available is more than the value specified, a NextToken is provided in the
     * output. To resume pagination, provide the NextToken value as argument of a
     * subsequent API invocation.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The total number of items to return in the output. If the total number of
     * items available is more than the value specified, a NextToken is provided in the
     * output. To resume pagination, provide the NextToken value as argument of a
     * subsequent API invocation.</p>
     */
    inline ListDatabasesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}

  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;

    int m_maxResults;
    bool m_maxResultsHasBeenSet;
  };

} // namespace Model
} // namespace TimestreamWrite
} // namespace Aws

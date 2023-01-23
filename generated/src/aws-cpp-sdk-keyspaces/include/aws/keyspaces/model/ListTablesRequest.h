/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/keyspaces/Keyspaces_EXPORTS.h>
#include <aws/keyspaces/KeyspacesRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Keyspaces
{
namespace Model
{

  /**
   */
  class ListTablesRequest : public KeyspacesRequest
  {
  public:
    AWS_KEYSPACES_API ListTablesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListTables"; }

    AWS_KEYSPACES_API Aws::String SerializePayload() const override;

    AWS_KEYSPACES_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The pagination token. To resume pagination, provide the
     * <code>NextToken</code> value as an argument of a subsequent API invocation.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The pagination token. To resume pagination, provide the
     * <code>NextToken</code> value as an argument of a subsequent API invocation.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The pagination token. To resume pagination, provide the
     * <code>NextToken</code> value as an argument of a subsequent API invocation.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The pagination token. To resume pagination, provide the
     * <code>NextToken</code> value as an argument of a subsequent API invocation.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The pagination token. To resume pagination, provide the
     * <code>NextToken</code> value as an argument of a subsequent API invocation.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The pagination token. To resume pagination, provide the
     * <code>NextToken</code> value as an argument of a subsequent API invocation.</p>
     */
    inline ListTablesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The pagination token. To resume pagination, provide the
     * <code>NextToken</code> value as an argument of a subsequent API invocation.</p>
     */
    inline ListTablesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The pagination token. To resume pagination, provide the
     * <code>NextToken</code> value as an argument of a subsequent API invocation.</p>
     */
    inline ListTablesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The total number of tables to return in the output. If the total number of
     * tables available is more than the value specified, a <code>NextToken</code> is
     * provided in the output. To resume pagination, provide the <code>NextToken</code>
     * value as an argument of a subsequent API invocation.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The total number of tables to return in the output. If the total number of
     * tables available is more than the value specified, a <code>NextToken</code> is
     * provided in the output. To resume pagination, provide the <code>NextToken</code>
     * value as an argument of a subsequent API invocation.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The total number of tables to return in the output. If the total number of
     * tables available is more than the value specified, a <code>NextToken</code> is
     * provided in the output. To resume pagination, provide the <code>NextToken</code>
     * value as an argument of a subsequent API invocation.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The total number of tables to return in the output. If the total number of
     * tables available is more than the value specified, a <code>NextToken</code> is
     * provided in the output. To resume pagination, provide the <code>NextToken</code>
     * value as an argument of a subsequent API invocation.</p>
     */
    inline ListTablesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>The name of the keyspace.</p>
     */
    inline const Aws::String& GetKeyspaceName() const{ return m_keyspaceName; }

    /**
     * <p>The name of the keyspace.</p>
     */
    inline bool KeyspaceNameHasBeenSet() const { return m_keyspaceNameHasBeenSet; }

    /**
     * <p>The name of the keyspace.</p>
     */
    inline void SetKeyspaceName(const Aws::String& value) { m_keyspaceNameHasBeenSet = true; m_keyspaceName = value; }

    /**
     * <p>The name of the keyspace.</p>
     */
    inline void SetKeyspaceName(Aws::String&& value) { m_keyspaceNameHasBeenSet = true; m_keyspaceName = std::move(value); }

    /**
     * <p>The name of the keyspace.</p>
     */
    inline void SetKeyspaceName(const char* value) { m_keyspaceNameHasBeenSet = true; m_keyspaceName.assign(value); }

    /**
     * <p>The name of the keyspace.</p>
     */
    inline ListTablesRequest& WithKeyspaceName(const Aws::String& value) { SetKeyspaceName(value); return *this;}

    /**
     * <p>The name of the keyspace.</p>
     */
    inline ListTablesRequest& WithKeyspaceName(Aws::String&& value) { SetKeyspaceName(std::move(value)); return *this;}

    /**
     * <p>The name of the keyspace.</p>
     */
    inline ListTablesRequest& WithKeyspaceName(const char* value) { SetKeyspaceName(value); return *this;}

  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_keyspaceName;
    bool m_keyspaceNameHasBeenSet = false;
  };

} // namespace Model
} // namespace Keyspaces
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/keyspaces/Keyspaces_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/keyspaces/model/TableSummary.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Keyspaces
{
namespace Model
{
  class ListTablesResult
  {
  public:
    AWS_KEYSPACES_API ListTablesResult();
    AWS_KEYSPACES_API ListTablesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_KEYSPACES_API ListTablesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A token to specify where to start paginating. This is the
     * <code>NextToken</code> from a previously truncated response.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A token to specify where to start paginating. This is the
     * <code>NextToken</code> from a previously truncated response.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>A token to specify where to start paginating. This is the
     * <code>NextToken</code> from a previously truncated response.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>A token to specify where to start paginating. This is the
     * <code>NextToken</code> from a previously truncated response.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>A token to specify where to start paginating. This is the
     * <code>NextToken</code> from a previously truncated response.</p>
     */
    inline ListTablesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A token to specify where to start paginating. This is the
     * <code>NextToken</code> from a previously truncated response.</p>
     */
    inline ListTablesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A token to specify where to start paginating. This is the
     * <code>NextToken</code> from a previously truncated response.</p>
     */
    inline ListTablesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>A list of tables.</p>
     */
    inline const Aws::Vector<TableSummary>& GetTables() const{ return m_tables; }

    /**
     * <p>A list of tables.</p>
     */
    inline void SetTables(const Aws::Vector<TableSummary>& value) { m_tables = value; }

    /**
     * <p>A list of tables.</p>
     */
    inline void SetTables(Aws::Vector<TableSummary>&& value) { m_tables = std::move(value); }

    /**
     * <p>A list of tables.</p>
     */
    inline ListTablesResult& WithTables(const Aws::Vector<TableSummary>& value) { SetTables(value); return *this;}

    /**
     * <p>A list of tables.</p>
     */
    inline ListTablesResult& WithTables(Aws::Vector<TableSummary>&& value) { SetTables(std::move(value)); return *this;}

    /**
     * <p>A list of tables.</p>
     */
    inline ListTablesResult& AddTables(const TableSummary& value) { m_tables.push_back(value); return *this; }

    /**
     * <p>A list of tables.</p>
     */
    inline ListTablesResult& AddTables(TableSummary&& value) { m_tables.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_nextToken;

    Aws::Vector<TableSummary> m_tables;
  };

} // namespace Model
} // namespace Keyspaces
} // namespace Aws

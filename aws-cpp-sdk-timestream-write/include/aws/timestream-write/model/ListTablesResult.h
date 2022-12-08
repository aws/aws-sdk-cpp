/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/timestream-write/TimestreamWrite_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/timestream-write/model/Table.h>
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
namespace TimestreamWrite
{
namespace Model
{
  class ListTablesResult
  {
  public:
    AWS_TIMESTREAMWRITE_API ListTablesResult();
    AWS_TIMESTREAMWRITE_API ListTablesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_TIMESTREAMWRITE_API ListTablesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of tables.</p>
     */
    inline const Aws::Vector<Table>& GetTables() const{ return m_tables; }

    /**
     * <p>A list of tables.</p>
     */
    inline void SetTables(const Aws::Vector<Table>& value) { m_tables = value; }

    /**
     * <p>A list of tables.</p>
     */
    inline void SetTables(Aws::Vector<Table>&& value) { m_tables = std::move(value); }

    /**
     * <p>A list of tables.</p>
     */
    inline ListTablesResult& WithTables(const Aws::Vector<Table>& value) { SetTables(value); return *this;}

    /**
     * <p>A list of tables.</p>
     */
    inline ListTablesResult& WithTables(Aws::Vector<Table>&& value) { SetTables(std::move(value)); return *this;}

    /**
     * <p>A list of tables.</p>
     */
    inline ListTablesResult& AddTables(const Table& value) { m_tables.push_back(value); return *this; }

    /**
     * <p>A list of tables.</p>
     */
    inline ListTablesResult& AddTables(Table&& value) { m_tables.push_back(std::move(value)); return *this; }


    /**
     * <p>A token to specify where to start paginating. This is the NextToken from a
     * previously truncated response.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A token to specify where to start paginating. This is the NextToken from a
     * previously truncated response.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>A token to specify where to start paginating. This is the NextToken from a
     * previously truncated response.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>A token to specify where to start paginating. This is the NextToken from a
     * previously truncated response.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>A token to specify where to start paginating. This is the NextToken from a
     * previously truncated response.</p>
     */
    inline ListTablesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A token to specify where to start paginating. This is the NextToken from a
     * previously truncated response.</p>
     */
    inline ListTablesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A token to specify where to start paginating. This is the NextToken from a
     * previously truncated response.</p>
     */
    inline ListTablesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<Table> m_tables;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace TimestreamWrite
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bcm-data-exports/BCMDataExports_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/bcm-data-exports/model/Table.h>
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
namespace BCMDataExports
{
namespace Model
{
  class ListTablesResult
  {
  public:
    AWS_BCMDATAEXPORTS_API ListTablesResult();
    AWS_BCMDATAEXPORTS_API ListTablesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BCMDATAEXPORTS_API ListTablesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The token to retrieve the next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token to retrieve the next set of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token to retrieve the next set of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token to retrieve the next set of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token to retrieve the next set of results.</p>
     */
    inline ListTablesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to retrieve the next set of results.</p>
     */
    inline ListTablesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to retrieve the next set of results.</p>
     */
    inline ListTablesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The list of tables.</p>
     */
    inline const Aws::Vector<Table>& GetTables() const{ return m_tables; }

    /**
     * <p>The list of tables.</p>
     */
    inline void SetTables(const Aws::Vector<Table>& value) { m_tables = value; }

    /**
     * <p>The list of tables.</p>
     */
    inline void SetTables(Aws::Vector<Table>&& value) { m_tables = std::move(value); }

    /**
     * <p>The list of tables.</p>
     */
    inline ListTablesResult& WithTables(const Aws::Vector<Table>& value) { SetTables(value); return *this;}

    /**
     * <p>The list of tables.</p>
     */
    inline ListTablesResult& WithTables(Aws::Vector<Table>&& value) { SetTables(std::move(value)); return *this;}

    /**
     * <p>The list of tables.</p>
     */
    inline ListTablesResult& AddTables(const Table& value) { m_tables.push_back(value); return *this; }

    /**
     * <p>The list of tables.</p>
     */
    inline ListTablesResult& AddTables(Table&& value) { m_tables.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListTablesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListTablesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListTablesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_nextToken;

    Aws::Vector<Table> m_tables;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace BCMDataExports
} // namespace Aws

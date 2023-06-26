/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/glue/model/Table.h>
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
namespace Glue
{
namespace Model
{
  class SearchTablesResult
  {
  public:
    AWS_GLUE_API SearchTablesResult();
    AWS_GLUE_API SearchTablesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLUE_API SearchTablesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A continuation token, present if the current list segment is not the
     * last.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A continuation token, present if the current list segment is not the
     * last.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>A continuation token, present if the current list segment is not the
     * last.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>A continuation token, present if the current list segment is not the
     * last.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>A continuation token, present if the current list segment is not the
     * last.</p>
     */
    inline SearchTablesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A continuation token, present if the current list segment is not the
     * last.</p>
     */
    inline SearchTablesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A continuation token, present if the current list segment is not the
     * last.</p>
     */
    inline SearchTablesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>A list of the requested <code>Table</code> objects. The
     * <code>SearchTables</code> response returns only the tables that you have access
     * to.</p>
     */
    inline const Aws::Vector<Table>& GetTableList() const{ return m_tableList; }

    /**
     * <p>A list of the requested <code>Table</code> objects. The
     * <code>SearchTables</code> response returns only the tables that you have access
     * to.</p>
     */
    inline void SetTableList(const Aws::Vector<Table>& value) { m_tableList = value; }

    /**
     * <p>A list of the requested <code>Table</code> objects. The
     * <code>SearchTables</code> response returns only the tables that you have access
     * to.</p>
     */
    inline void SetTableList(Aws::Vector<Table>&& value) { m_tableList = std::move(value); }

    /**
     * <p>A list of the requested <code>Table</code> objects. The
     * <code>SearchTables</code> response returns only the tables that you have access
     * to.</p>
     */
    inline SearchTablesResult& WithTableList(const Aws::Vector<Table>& value) { SetTableList(value); return *this;}

    /**
     * <p>A list of the requested <code>Table</code> objects. The
     * <code>SearchTables</code> response returns only the tables that you have access
     * to.</p>
     */
    inline SearchTablesResult& WithTableList(Aws::Vector<Table>&& value) { SetTableList(std::move(value)); return *this;}

    /**
     * <p>A list of the requested <code>Table</code> objects. The
     * <code>SearchTables</code> response returns only the tables that you have access
     * to.</p>
     */
    inline SearchTablesResult& AddTableList(const Table& value) { m_tableList.push_back(value); return *this; }

    /**
     * <p>A list of the requested <code>Table</code> objects. The
     * <code>SearchTables</code> response returns only the tables that you have access
     * to.</p>
     */
    inline SearchTablesResult& AddTableList(Table&& value) { m_tableList.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline SearchTablesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline SearchTablesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline SearchTablesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_nextToken;

    Aws::Vector<Table> m_tableList;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws

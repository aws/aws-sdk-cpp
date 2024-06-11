﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class GetTablesResult
  {
  public:
    AWS_GLUE_API GetTablesResult();
    AWS_GLUE_API GetTablesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLUE_API GetTablesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of the requested <code>Table</code> objects.</p>
     */
    inline const Aws::Vector<Table>& GetTableList() const{ return m_tableList; }
    inline void SetTableList(const Aws::Vector<Table>& value) { m_tableList = value; }
    inline void SetTableList(Aws::Vector<Table>&& value) { m_tableList = std::move(value); }
    inline GetTablesResult& WithTableList(const Aws::Vector<Table>& value) { SetTableList(value); return *this;}
    inline GetTablesResult& WithTableList(Aws::Vector<Table>&& value) { SetTableList(std::move(value)); return *this;}
    inline GetTablesResult& AddTableList(const Table& value) { m_tableList.push_back(value); return *this; }
    inline GetTablesResult& AddTableList(Table&& value) { m_tableList.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A continuation token, present if the current list segment is not the
     * last.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline GetTablesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline GetTablesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline GetTablesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetTablesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetTablesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetTablesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<Table> m_tableList;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws

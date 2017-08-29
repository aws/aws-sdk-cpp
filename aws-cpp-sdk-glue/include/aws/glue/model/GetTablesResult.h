/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_GLUE_API GetTablesResult
  {
  public:
    GetTablesResult();
    GetTablesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetTablesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of the requested <code>Table</code> objects.</p>
     */
    inline const Aws::Vector<Table>& GetTableList() const{ return m_tableList; }

    /**
     * <p>A list of the requested <code>Table</code> objects.</p>
     */
    inline void SetTableList(const Aws::Vector<Table>& value) { m_tableList = value; }

    /**
     * <p>A list of the requested <code>Table</code> objects.</p>
     */
    inline void SetTableList(Aws::Vector<Table>&& value) { m_tableList = std::move(value); }

    /**
     * <p>A list of the requested <code>Table</code> objects.</p>
     */
    inline GetTablesResult& WithTableList(const Aws::Vector<Table>& value) { SetTableList(value); return *this;}

    /**
     * <p>A list of the requested <code>Table</code> objects.</p>
     */
    inline GetTablesResult& WithTableList(Aws::Vector<Table>&& value) { SetTableList(std::move(value)); return *this;}

    /**
     * <p>A list of the requested <code>Table</code> objects.</p>
     */
    inline GetTablesResult& AddTableList(const Table& value) { m_tableList.push_back(value); return *this; }

    /**
     * <p>A list of the requested <code>Table</code> objects.</p>
     */
    inline GetTablesResult& AddTableList(Table&& value) { m_tableList.push_back(std::move(value)); return *this; }


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
    inline GetTablesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A continuation token, present if the current list segment is not the
     * last.</p>
     */
    inline GetTablesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A continuation token, present if the current list segment is not the
     * last.</p>
     */
    inline GetTablesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<Table> m_tableList;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws

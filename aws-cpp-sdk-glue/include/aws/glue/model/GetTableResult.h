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
  class AWS_GLUE_API GetTableResult
  {
  public:
    GetTableResult();
    GetTableResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetTableResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The <code>Table</code> object that defines the specified table.</p>
     */
    inline const Table& GetTable() const{ return m_table; }

    /**
     * <p>The <code>Table</code> object that defines the specified table.</p>
     */
    inline void SetTable(const Table& value) { m_table = value; }

    /**
     * <p>The <code>Table</code> object that defines the specified table.</p>
     */
    inline void SetTable(Table&& value) { m_table = std::move(value); }

    /**
     * <p>The <code>Table</code> object that defines the specified table.</p>
     */
    inline GetTableResult& WithTable(const Table& value) { SetTable(value); return *this;}

    /**
     * <p>The <code>Table</code> object that defines the specified table.</p>
     */
    inline GetTableResult& WithTable(Table&& value) { SetTable(std::move(value)); return *this;}

  private:

    Table m_table;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws

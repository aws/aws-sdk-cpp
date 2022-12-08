/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class GetTableResult
  {
  public:
    AWS_GLUE_API GetTableResult();
    AWS_GLUE_API GetTableResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLUE_API GetTableResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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

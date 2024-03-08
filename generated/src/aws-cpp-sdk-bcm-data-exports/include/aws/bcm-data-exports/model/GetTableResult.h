/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bcm-data-exports/BCMDataExports_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/bcm-data-exports/model/Column.h>
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
  class GetTableResult
  {
  public:
    AWS_BCMDATAEXPORTS_API GetTableResult();
    AWS_BCMDATAEXPORTS_API GetTableResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BCMDATAEXPORTS_API GetTableResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The table description.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The table description.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_description = value; }

    /**
     * <p>The table description.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }

    /**
     * <p>The table description.</p>
     */
    inline void SetDescription(const char* value) { m_description.assign(value); }

    /**
     * <p>The table description.</p>
     */
    inline GetTableResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The table description.</p>
     */
    inline GetTableResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The table description.</p>
     */
    inline GetTableResult& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The schema of the table.</p>
     */
    inline const Aws::Vector<Column>& GetSchema() const{ return m_schema; }

    /**
     * <p>The schema of the table.</p>
     */
    inline void SetSchema(const Aws::Vector<Column>& value) { m_schema = value; }

    /**
     * <p>The schema of the table.</p>
     */
    inline void SetSchema(Aws::Vector<Column>&& value) { m_schema = std::move(value); }

    /**
     * <p>The schema of the table.</p>
     */
    inline GetTableResult& WithSchema(const Aws::Vector<Column>& value) { SetSchema(value); return *this;}

    /**
     * <p>The schema of the table.</p>
     */
    inline GetTableResult& WithSchema(Aws::Vector<Column>&& value) { SetSchema(std::move(value)); return *this;}

    /**
     * <p>The schema of the table.</p>
     */
    inline GetTableResult& AddSchema(const Column& value) { m_schema.push_back(value); return *this; }

    /**
     * <p>The schema of the table.</p>
     */
    inline GetTableResult& AddSchema(Column&& value) { m_schema.push_back(std::move(value)); return *this; }


    /**
     * <p>The name of the table.</p>
     */
    inline const Aws::String& GetTableName() const{ return m_tableName; }

    /**
     * <p>The name of the table.</p>
     */
    inline void SetTableName(const Aws::String& value) { m_tableName = value; }

    /**
     * <p>The name of the table.</p>
     */
    inline void SetTableName(Aws::String&& value) { m_tableName = std::move(value); }

    /**
     * <p>The name of the table.</p>
     */
    inline void SetTableName(const char* value) { m_tableName.assign(value); }

    /**
     * <p>The name of the table.</p>
     */
    inline GetTableResult& WithTableName(const Aws::String& value) { SetTableName(value); return *this;}

    /**
     * <p>The name of the table.</p>
     */
    inline GetTableResult& WithTableName(Aws::String&& value) { SetTableName(std::move(value)); return *this;}

    /**
     * <p>The name of the table.</p>
     */
    inline GetTableResult& WithTableName(const char* value) { SetTableName(value); return *this;}


    /**
     * <p>TableProperties are additional configurations you can provide to change the
     * data and schema of a table. Each table can have different TableProperties.
     * Tables are not required to have any TableProperties. Each table property has a
     * default value that it assumes if not specified.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTableProperties() const{ return m_tableProperties; }

    /**
     * <p>TableProperties are additional configurations you can provide to change the
     * data and schema of a table. Each table can have different TableProperties.
     * Tables are not required to have any TableProperties. Each table property has a
     * default value that it assumes if not specified.</p>
     */
    inline void SetTableProperties(const Aws::Map<Aws::String, Aws::String>& value) { m_tableProperties = value; }

    /**
     * <p>TableProperties are additional configurations you can provide to change the
     * data and schema of a table. Each table can have different TableProperties.
     * Tables are not required to have any TableProperties. Each table property has a
     * default value that it assumes if not specified.</p>
     */
    inline void SetTableProperties(Aws::Map<Aws::String, Aws::String>&& value) { m_tableProperties = std::move(value); }

    /**
     * <p>TableProperties are additional configurations you can provide to change the
     * data and schema of a table. Each table can have different TableProperties.
     * Tables are not required to have any TableProperties. Each table property has a
     * default value that it assumes if not specified.</p>
     */
    inline GetTableResult& WithTableProperties(const Aws::Map<Aws::String, Aws::String>& value) { SetTableProperties(value); return *this;}

    /**
     * <p>TableProperties are additional configurations you can provide to change the
     * data and schema of a table. Each table can have different TableProperties.
     * Tables are not required to have any TableProperties. Each table property has a
     * default value that it assumes if not specified.</p>
     */
    inline GetTableResult& WithTableProperties(Aws::Map<Aws::String, Aws::String>&& value) { SetTableProperties(std::move(value)); return *this;}

    /**
     * <p>TableProperties are additional configurations you can provide to change the
     * data and schema of a table. Each table can have different TableProperties.
     * Tables are not required to have any TableProperties. Each table property has a
     * default value that it assumes if not specified.</p>
     */
    inline GetTableResult& AddTableProperties(const Aws::String& key, const Aws::String& value) { m_tableProperties.emplace(key, value); return *this; }

    /**
     * <p>TableProperties are additional configurations you can provide to change the
     * data and schema of a table. Each table can have different TableProperties.
     * Tables are not required to have any TableProperties. Each table property has a
     * default value that it assumes if not specified.</p>
     */
    inline GetTableResult& AddTableProperties(Aws::String&& key, const Aws::String& value) { m_tableProperties.emplace(std::move(key), value); return *this; }

    /**
     * <p>TableProperties are additional configurations you can provide to change the
     * data and schema of a table. Each table can have different TableProperties.
     * Tables are not required to have any TableProperties. Each table property has a
     * default value that it assumes if not specified.</p>
     */
    inline GetTableResult& AddTableProperties(const Aws::String& key, Aws::String&& value) { m_tableProperties.emplace(key, std::move(value)); return *this; }

    /**
     * <p>TableProperties are additional configurations you can provide to change the
     * data and schema of a table. Each table can have different TableProperties.
     * Tables are not required to have any TableProperties. Each table property has a
     * default value that it assumes if not specified.</p>
     */
    inline GetTableResult& AddTableProperties(Aws::String&& key, Aws::String&& value) { m_tableProperties.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>TableProperties are additional configurations you can provide to change the
     * data and schema of a table. Each table can have different TableProperties.
     * Tables are not required to have any TableProperties. Each table property has a
     * default value that it assumes if not specified.</p>
     */
    inline GetTableResult& AddTableProperties(const char* key, Aws::String&& value) { m_tableProperties.emplace(key, std::move(value)); return *this; }

    /**
     * <p>TableProperties are additional configurations you can provide to change the
     * data and schema of a table. Each table can have different TableProperties.
     * Tables are not required to have any TableProperties. Each table property has a
     * default value that it assumes if not specified.</p>
     */
    inline GetTableResult& AddTableProperties(Aws::String&& key, const char* value) { m_tableProperties.emplace(std::move(key), value); return *this; }

    /**
     * <p>TableProperties are additional configurations you can provide to change the
     * data and schema of a table. Each table can have different TableProperties.
     * Tables are not required to have any TableProperties. Each table property has a
     * default value that it assumes if not specified.</p>
     */
    inline GetTableResult& AddTableProperties(const char* key, const char* value) { m_tableProperties.emplace(key, value); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetTableResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetTableResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetTableResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_description;

    Aws::Vector<Column> m_schema;

    Aws::String m_tableName;

    Aws::Map<Aws::String, Aws::String> m_tableProperties;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace BCMDataExports
} // namespace Aws

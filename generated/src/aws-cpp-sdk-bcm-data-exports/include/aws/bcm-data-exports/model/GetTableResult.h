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
    AWS_BCMDATAEXPORTS_API GetTableResult() = default;
    AWS_BCMDATAEXPORTS_API GetTableResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BCMDATAEXPORTS_API GetTableResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The table description.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    GetTableResult& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The schema of the table.</p>
     */
    inline const Aws::Vector<Column>& GetSchema() const { return m_schema; }
    template<typename SchemaT = Aws::Vector<Column>>
    void SetSchema(SchemaT&& value) { m_schemaHasBeenSet = true; m_schema = std::forward<SchemaT>(value); }
    template<typename SchemaT = Aws::Vector<Column>>
    GetTableResult& WithSchema(SchemaT&& value) { SetSchema(std::forward<SchemaT>(value)); return *this;}
    template<typename SchemaT = Column>
    GetTableResult& AddSchema(SchemaT&& value) { m_schemaHasBeenSet = true; m_schema.emplace_back(std::forward<SchemaT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The name of the table.</p>
     */
    inline const Aws::String& GetTableName() const { return m_tableName; }
    template<typename TableNameT = Aws::String>
    void SetTableName(TableNameT&& value) { m_tableNameHasBeenSet = true; m_tableName = std::forward<TableNameT>(value); }
    template<typename TableNameT = Aws::String>
    GetTableResult& WithTableName(TableNameT&& value) { SetTableName(std::forward<TableNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>TableProperties are additional configurations you can provide to change the
     * data and schema of a table. Each table can have different TableProperties.
     * Tables are not required to have any TableProperties. Each table property has a
     * default value that it assumes if not specified.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTableProperties() const { return m_tableProperties; }
    template<typename TablePropertiesT = Aws::Map<Aws::String, Aws::String>>
    void SetTableProperties(TablePropertiesT&& value) { m_tablePropertiesHasBeenSet = true; m_tableProperties = std::forward<TablePropertiesT>(value); }
    template<typename TablePropertiesT = Aws::Map<Aws::String, Aws::String>>
    GetTableResult& WithTableProperties(TablePropertiesT&& value) { SetTableProperties(std::forward<TablePropertiesT>(value)); return *this;}
    template<typename TablePropertiesKeyT = Aws::String, typename TablePropertiesValueT = Aws::String>
    GetTableResult& AddTableProperties(TablePropertiesKeyT&& key, TablePropertiesValueT&& value) {
      m_tablePropertiesHasBeenSet = true; m_tableProperties.emplace(std::forward<TablePropertiesKeyT>(key), std::forward<TablePropertiesValueT>(value)); return *this;
    }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetTableResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Vector<Column> m_schema;
    bool m_schemaHasBeenSet = false;

    Aws::String m_tableName;
    bool m_tableNameHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tableProperties;
    bool m_tablePropertiesHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace BCMDataExports
} // namespace Aws

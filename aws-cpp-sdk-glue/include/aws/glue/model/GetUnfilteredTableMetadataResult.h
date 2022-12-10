/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/model/Table.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glue/model/ColumnRowFilter.h>
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
  class GetUnfilteredTableMetadataResult
  {
  public:
    AWS_GLUE_API GetUnfilteredTableMetadataResult();
    AWS_GLUE_API GetUnfilteredTableMetadataResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLUE_API GetUnfilteredTableMetadataResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const Table& GetTable() const{ return m_table; }

    
    inline void SetTable(const Table& value) { m_table = value; }

    
    inline void SetTable(Table&& value) { m_table = std::move(value); }

    
    inline GetUnfilteredTableMetadataResult& WithTable(const Table& value) { SetTable(value); return *this;}

    
    inline GetUnfilteredTableMetadataResult& WithTable(Table&& value) { SetTable(std::move(value)); return *this;}


    
    inline const Aws::Vector<Aws::String>& GetAuthorizedColumns() const{ return m_authorizedColumns; }

    
    inline void SetAuthorizedColumns(const Aws::Vector<Aws::String>& value) { m_authorizedColumns = value; }

    
    inline void SetAuthorizedColumns(Aws::Vector<Aws::String>&& value) { m_authorizedColumns = std::move(value); }

    
    inline GetUnfilteredTableMetadataResult& WithAuthorizedColumns(const Aws::Vector<Aws::String>& value) { SetAuthorizedColumns(value); return *this;}

    
    inline GetUnfilteredTableMetadataResult& WithAuthorizedColumns(Aws::Vector<Aws::String>&& value) { SetAuthorizedColumns(std::move(value)); return *this;}

    
    inline GetUnfilteredTableMetadataResult& AddAuthorizedColumns(const Aws::String& value) { m_authorizedColumns.push_back(value); return *this; }

    
    inline GetUnfilteredTableMetadataResult& AddAuthorizedColumns(Aws::String&& value) { m_authorizedColumns.push_back(std::move(value)); return *this; }

    
    inline GetUnfilteredTableMetadataResult& AddAuthorizedColumns(const char* value) { m_authorizedColumns.push_back(value); return *this; }


    
    inline bool GetIsRegisteredWithLakeFormation() const{ return m_isRegisteredWithLakeFormation; }

    
    inline void SetIsRegisteredWithLakeFormation(bool value) { m_isRegisteredWithLakeFormation = value; }

    
    inline GetUnfilteredTableMetadataResult& WithIsRegisteredWithLakeFormation(bool value) { SetIsRegisteredWithLakeFormation(value); return *this;}


    
    inline const Aws::Vector<ColumnRowFilter>& GetCellFilters() const{ return m_cellFilters; }

    
    inline void SetCellFilters(const Aws::Vector<ColumnRowFilter>& value) { m_cellFilters = value; }

    
    inline void SetCellFilters(Aws::Vector<ColumnRowFilter>&& value) { m_cellFilters = std::move(value); }

    
    inline GetUnfilteredTableMetadataResult& WithCellFilters(const Aws::Vector<ColumnRowFilter>& value) { SetCellFilters(value); return *this;}

    
    inline GetUnfilteredTableMetadataResult& WithCellFilters(Aws::Vector<ColumnRowFilter>&& value) { SetCellFilters(std::move(value)); return *this;}

    
    inline GetUnfilteredTableMetadataResult& AddCellFilters(const ColumnRowFilter& value) { m_cellFilters.push_back(value); return *this; }

    
    inline GetUnfilteredTableMetadataResult& AddCellFilters(ColumnRowFilter&& value) { m_cellFilters.push_back(std::move(value)); return *this; }

  private:

    Table m_table;

    Aws::Vector<Aws::String> m_authorizedColumns;

    bool m_isRegisteredWithLakeFormation;

    Aws::Vector<ColumnRowFilter> m_cellFilters;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws

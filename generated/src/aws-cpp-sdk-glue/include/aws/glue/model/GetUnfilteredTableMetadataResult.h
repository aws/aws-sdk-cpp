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


    /**
     * <p>A Table object containing the table metadata.</p>
     */
    inline const Table& GetTable() const{ return m_table; }

    /**
     * <p>A Table object containing the table metadata.</p>
     */
    inline void SetTable(const Table& value) { m_table = value; }

    /**
     * <p>A Table object containing the table metadata.</p>
     */
    inline void SetTable(Table&& value) { m_table = std::move(value); }

    /**
     * <p>A Table object containing the table metadata.</p>
     */
    inline GetUnfilteredTableMetadataResult& WithTable(const Table& value) { SetTable(value); return *this;}

    /**
     * <p>A Table object containing the table metadata.</p>
     */
    inline GetUnfilteredTableMetadataResult& WithTable(Table&& value) { SetTable(std::move(value)); return *this;}


    /**
     * <p>A list of column names that the user has been granted access to.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAuthorizedColumns() const{ return m_authorizedColumns; }

    /**
     * <p>A list of column names that the user has been granted access to.</p>
     */
    inline void SetAuthorizedColumns(const Aws::Vector<Aws::String>& value) { m_authorizedColumns = value; }

    /**
     * <p>A list of column names that the user has been granted access to.</p>
     */
    inline void SetAuthorizedColumns(Aws::Vector<Aws::String>&& value) { m_authorizedColumns = std::move(value); }

    /**
     * <p>A list of column names that the user has been granted access to.</p>
     */
    inline GetUnfilteredTableMetadataResult& WithAuthorizedColumns(const Aws::Vector<Aws::String>& value) { SetAuthorizedColumns(value); return *this;}

    /**
     * <p>A list of column names that the user has been granted access to.</p>
     */
    inline GetUnfilteredTableMetadataResult& WithAuthorizedColumns(Aws::Vector<Aws::String>&& value) { SetAuthorizedColumns(std::move(value)); return *this;}

    /**
     * <p>A list of column names that the user has been granted access to.</p>
     */
    inline GetUnfilteredTableMetadataResult& AddAuthorizedColumns(const Aws::String& value) { m_authorizedColumns.push_back(value); return *this; }

    /**
     * <p>A list of column names that the user has been granted access to.</p>
     */
    inline GetUnfilteredTableMetadataResult& AddAuthorizedColumns(Aws::String&& value) { m_authorizedColumns.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of column names that the user has been granted access to.</p>
     */
    inline GetUnfilteredTableMetadataResult& AddAuthorizedColumns(const char* value) { m_authorizedColumns.push_back(value); return *this; }


    /**
     * <p>A Boolean value that indicates whether the partition location is registered
     * with Lake Formation.</p>
     */
    inline bool GetIsRegisteredWithLakeFormation() const{ return m_isRegisteredWithLakeFormation; }

    /**
     * <p>A Boolean value that indicates whether the partition location is registered
     * with Lake Formation.</p>
     */
    inline void SetIsRegisteredWithLakeFormation(bool value) { m_isRegisteredWithLakeFormation = value; }

    /**
     * <p>A Boolean value that indicates whether the partition location is registered
     * with Lake Formation.</p>
     */
    inline GetUnfilteredTableMetadataResult& WithIsRegisteredWithLakeFormation(bool value) { SetIsRegisteredWithLakeFormation(value); return *this;}


    /**
     * <p>A list of column row filters.</p>
     */
    inline const Aws::Vector<ColumnRowFilter>& GetCellFilters() const{ return m_cellFilters; }

    /**
     * <p>A list of column row filters.</p>
     */
    inline void SetCellFilters(const Aws::Vector<ColumnRowFilter>& value) { m_cellFilters = value; }

    /**
     * <p>A list of column row filters.</p>
     */
    inline void SetCellFilters(Aws::Vector<ColumnRowFilter>&& value) { m_cellFilters = std::move(value); }

    /**
     * <p>A list of column row filters.</p>
     */
    inline GetUnfilteredTableMetadataResult& WithCellFilters(const Aws::Vector<ColumnRowFilter>& value) { SetCellFilters(value); return *this;}

    /**
     * <p>A list of column row filters.</p>
     */
    inline GetUnfilteredTableMetadataResult& WithCellFilters(Aws::Vector<ColumnRowFilter>&& value) { SetCellFilters(std::move(value)); return *this;}

    /**
     * <p>A list of column row filters.</p>
     */
    inline GetUnfilteredTableMetadataResult& AddCellFilters(const ColumnRowFilter& value) { m_cellFilters.push_back(value); return *this; }

    /**
     * <p>A list of column row filters.</p>
     */
    inline GetUnfilteredTableMetadataResult& AddCellFilters(ColumnRowFilter&& value) { m_cellFilters.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetUnfilteredTableMetadataResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetUnfilteredTableMetadataResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetUnfilteredTableMetadataResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Table m_table;

    Aws::Vector<Aws::String> m_authorizedColumns;

    bool m_isRegisteredWithLakeFormation;

    Aws::Vector<ColumnRowFilter> m_cellFilters;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws

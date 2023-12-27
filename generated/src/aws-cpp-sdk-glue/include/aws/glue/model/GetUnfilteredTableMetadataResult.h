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
#include <aws/glue/model/Permission.h>
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


    /**
     * <p>A cryptographically generated query identifier generated by Glue or Lake
     * Formation.</p>
     */
    inline const Aws::String& GetQueryAuthorizationId() const{ return m_queryAuthorizationId; }

    /**
     * <p>A cryptographically generated query identifier generated by Glue or Lake
     * Formation.</p>
     */
    inline void SetQueryAuthorizationId(const Aws::String& value) { m_queryAuthorizationId = value; }

    /**
     * <p>A cryptographically generated query identifier generated by Glue or Lake
     * Formation.</p>
     */
    inline void SetQueryAuthorizationId(Aws::String&& value) { m_queryAuthorizationId = std::move(value); }

    /**
     * <p>A cryptographically generated query identifier generated by Glue or Lake
     * Formation.</p>
     */
    inline void SetQueryAuthorizationId(const char* value) { m_queryAuthorizationId.assign(value); }

    /**
     * <p>A cryptographically generated query identifier generated by Glue or Lake
     * Formation.</p>
     */
    inline GetUnfilteredTableMetadataResult& WithQueryAuthorizationId(const Aws::String& value) { SetQueryAuthorizationId(value); return *this;}

    /**
     * <p>A cryptographically generated query identifier generated by Glue or Lake
     * Formation.</p>
     */
    inline GetUnfilteredTableMetadataResult& WithQueryAuthorizationId(Aws::String&& value) { SetQueryAuthorizationId(std::move(value)); return *this;}

    /**
     * <p>A cryptographically generated query identifier generated by Glue or Lake
     * Formation.</p>
     */
    inline GetUnfilteredTableMetadataResult& WithQueryAuthorizationId(const char* value) { SetQueryAuthorizationId(value); return *this;}


    /**
     * <p>The resource ARN of the parent resource extracted from the request.</p>
     */
    inline const Aws::String& GetResourceArn() const{ return m_resourceArn; }

    /**
     * <p>The resource ARN of the parent resource extracted from the request.</p>
     */
    inline void SetResourceArn(const Aws::String& value) { m_resourceArn = value; }

    /**
     * <p>The resource ARN of the parent resource extracted from the request.</p>
     */
    inline void SetResourceArn(Aws::String&& value) { m_resourceArn = std::move(value); }

    /**
     * <p>The resource ARN of the parent resource extracted from the request.</p>
     */
    inline void SetResourceArn(const char* value) { m_resourceArn.assign(value); }

    /**
     * <p>The resource ARN of the parent resource extracted from the request.</p>
     */
    inline GetUnfilteredTableMetadataResult& WithResourceArn(const Aws::String& value) { SetResourceArn(value); return *this;}

    /**
     * <p>The resource ARN of the parent resource extracted from the request.</p>
     */
    inline GetUnfilteredTableMetadataResult& WithResourceArn(Aws::String&& value) { SetResourceArn(std::move(value)); return *this;}

    /**
     * <p>The resource ARN of the parent resource extracted from the request.</p>
     */
    inline GetUnfilteredTableMetadataResult& WithResourceArn(const char* value) { SetResourceArn(value); return *this;}


    /**
     * <p>The Lake Formation data permissions of the caller on the table. Used to
     * authorize the call when no view context is found.</p>
     */
    inline const Aws::Vector<Permission>& GetPermissions() const{ return m_permissions; }

    /**
     * <p>The Lake Formation data permissions of the caller on the table. Used to
     * authorize the call when no view context is found.</p>
     */
    inline void SetPermissions(const Aws::Vector<Permission>& value) { m_permissions = value; }

    /**
     * <p>The Lake Formation data permissions of the caller on the table. Used to
     * authorize the call when no view context is found.</p>
     */
    inline void SetPermissions(Aws::Vector<Permission>&& value) { m_permissions = std::move(value); }

    /**
     * <p>The Lake Formation data permissions of the caller on the table. Used to
     * authorize the call when no view context is found.</p>
     */
    inline GetUnfilteredTableMetadataResult& WithPermissions(const Aws::Vector<Permission>& value) { SetPermissions(value); return *this;}

    /**
     * <p>The Lake Formation data permissions of the caller on the table. Used to
     * authorize the call when no view context is found.</p>
     */
    inline GetUnfilteredTableMetadataResult& WithPermissions(Aws::Vector<Permission>&& value) { SetPermissions(std::move(value)); return *this;}

    /**
     * <p>The Lake Formation data permissions of the caller on the table. Used to
     * authorize the call when no view context is found.</p>
     */
    inline GetUnfilteredTableMetadataResult& AddPermissions(const Permission& value) { m_permissions.push_back(value); return *this; }

    /**
     * <p>The Lake Formation data permissions of the caller on the table. Used to
     * authorize the call when no view context is found.</p>
     */
    inline GetUnfilteredTableMetadataResult& AddPermissions(Permission&& value) { m_permissions.push_back(std::move(value)); return *this; }


    
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

    Aws::String m_queryAuthorizationId;

    Aws::String m_resourceArn;

    Aws::Vector<Permission> m_permissions;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws

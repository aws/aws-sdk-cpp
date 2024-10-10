/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dms/DatabaseMigrationService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/dms/model/DataMigration.h>
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
namespace DatabaseMigrationService
{
namespace Model
{
  class DescribeDataMigrationsResult
  {
  public:
    AWS_DATABASEMIGRATIONSERVICE_API DescribeDataMigrationsResult();
    AWS_DATABASEMIGRATIONSERVICE_API DescribeDataMigrationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DATABASEMIGRATIONSERVICE_API DescribeDataMigrationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Returns information about the data migrations used in the project.</p>
     */
    inline const Aws::Vector<DataMigration>& GetDataMigrations() const{ return m_dataMigrations; }
    inline void SetDataMigrations(const Aws::Vector<DataMigration>& value) { m_dataMigrations = value; }
    inline void SetDataMigrations(Aws::Vector<DataMigration>&& value) { m_dataMigrations = std::move(value); }
    inline DescribeDataMigrationsResult& WithDataMigrations(const Aws::Vector<DataMigration>& value) { SetDataMigrations(value); return *this;}
    inline DescribeDataMigrationsResult& WithDataMigrations(Aws::Vector<DataMigration>&& value) { SetDataMigrations(std::move(value)); return *this;}
    inline DescribeDataMigrationsResult& AddDataMigrations(const DataMigration& value) { m_dataMigrations.push_back(value); return *this; }
    inline DescribeDataMigrationsResult& AddDataMigrations(DataMigration&& value) { m_dataMigrations.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An optional pagination token provided by a previous request. If this
     * parameter is specified, the response includes only records beyond the marker, up
     * to the value specified by <code>MaxRecords</code>. </p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }
    inline void SetMarker(const Aws::String& value) { m_marker = value; }
    inline void SetMarker(Aws::String&& value) { m_marker = std::move(value); }
    inline void SetMarker(const char* value) { m_marker.assign(value); }
    inline DescribeDataMigrationsResult& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}
    inline DescribeDataMigrationsResult& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}
    inline DescribeDataMigrationsResult& WithMarker(const char* value) { SetMarker(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeDataMigrationsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeDataMigrationsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeDataMigrationsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<DataMigration> m_dataMigrations;

    Aws::String m_marker;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws

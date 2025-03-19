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
    AWS_DATABASEMIGRATIONSERVICE_API DescribeDataMigrationsResult() = default;
    AWS_DATABASEMIGRATIONSERVICE_API DescribeDataMigrationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DATABASEMIGRATIONSERVICE_API DescribeDataMigrationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Returns information about the data migrations used in the project.</p>
     */
    inline const Aws::Vector<DataMigration>& GetDataMigrations() const { return m_dataMigrations; }
    template<typename DataMigrationsT = Aws::Vector<DataMigration>>
    void SetDataMigrations(DataMigrationsT&& value) { m_dataMigrationsHasBeenSet = true; m_dataMigrations = std::forward<DataMigrationsT>(value); }
    template<typename DataMigrationsT = Aws::Vector<DataMigration>>
    DescribeDataMigrationsResult& WithDataMigrations(DataMigrationsT&& value) { SetDataMigrations(std::forward<DataMigrationsT>(value)); return *this;}
    template<typename DataMigrationsT = DataMigration>
    DescribeDataMigrationsResult& AddDataMigrations(DataMigrationsT&& value) { m_dataMigrationsHasBeenSet = true; m_dataMigrations.emplace_back(std::forward<DataMigrationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An optional pagination token provided by a previous request. If this
     * parameter is specified, the response includes only records beyond the marker, up
     * to the value specified by <code>MaxRecords</code>. </p>
     */
    inline const Aws::String& GetMarker() const { return m_marker; }
    template<typename MarkerT = Aws::String>
    void SetMarker(MarkerT&& value) { m_markerHasBeenSet = true; m_marker = std::forward<MarkerT>(value); }
    template<typename MarkerT = Aws::String>
    DescribeDataMigrationsResult& WithMarker(MarkerT&& value) { SetMarker(std::forward<MarkerT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeDataMigrationsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<DataMigration> m_dataMigrations;
    bool m_dataMigrationsHasBeenSet = false;

    Aws::String m_marker;
    bool m_markerHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws

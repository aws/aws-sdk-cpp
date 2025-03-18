/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dms/DatabaseMigrationService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/dms/model/MigrationProject.h>
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
  class DescribeMigrationProjectsResult
  {
  public:
    AWS_DATABASEMIGRATIONSERVICE_API DescribeMigrationProjectsResult() = default;
    AWS_DATABASEMIGRATIONSERVICE_API DescribeMigrationProjectsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DATABASEMIGRATIONSERVICE_API DescribeMigrationProjectsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Specifies the unique pagination token that makes it possible to display the
     * next page of results. If this parameter is specified, the response includes only
     * records beyond the marker, up to the value specified by
     * <code>MaxRecords</code>.</p> <p>If <code>Marker</code> is returned by a previous
     * response, there are more results available. The value of <code>Marker</code> is
     * a unique pagination token for each page. To retrieve the next page, make the
     * call again using the returned token and keeping all other arguments
     * unchanged.</p>
     */
    inline const Aws::String& GetMarker() const { return m_marker; }
    template<typename MarkerT = Aws::String>
    void SetMarker(MarkerT&& value) { m_markerHasBeenSet = true; m_marker = std::forward<MarkerT>(value); }
    template<typename MarkerT = Aws::String>
    DescribeMigrationProjectsResult& WithMarker(MarkerT&& value) { SetMarker(std::forward<MarkerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of migration projects.</p>
     */
    inline const Aws::Vector<MigrationProject>& GetMigrationProjects() const { return m_migrationProjects; }
    template<typename MigrationProjectsT = Aws::Vector<MigrationProject>>
    void SetMigrationProjects(MigrationProjectsT&& value) { m_migrationProjectsHasBeenSet = true; m_migrationProjects = std::forward<MigrationProjectsT>(value); }
    template<typename MigrationProjectsT = Aws::Vector<MigrationProject>>
    DescribeMigrationProjectsResult& WithMigrationProjects(MigrationProjectsT&& value) { SetMigrationProjects(std::forward<MigrationProjectsT>(value)); return *this;}
    template<typename MigrationProjectsT = MigrationProject>
    DescribeMigrationProjectsResult& AddMigrationProjects(MigrationProjectsT&& value) { m_migrationProjectsHasBeenSet = true; m_migrationProjects.emplace_back(std::forward<MigrationProjectsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeMigrationProjectsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_marker;
    bool m_markerHasBeenSet = false;

    Aws::Vector<MigrationProject> m_migrationProjects;
    bool m_migrationProjectsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws

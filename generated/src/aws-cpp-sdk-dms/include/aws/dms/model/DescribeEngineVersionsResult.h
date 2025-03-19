/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dms/DatabaseMigrationService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/dms/model/EngineVersion.h>
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
  class DescribeEngineVersionsResult
  {
  public:
    AWS_DATABASEMIGRATIONSERVICE_API DescribeEngineVersionsResult() = default;
    AWS_DATABASEMIGRATIONSERVICE_API DescribeEngineVersionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DATABASEMIGRATIONSERVICE_API DescribeEngineVersionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Returned <code>EngineVersion</code> objects that describe the replication
     * instance engine versions used in the project.</p>
     */
    inline const Aws::Vector<EngineVersion>& GetEngineVersions() const { return m_engineVersions; }
    template<typename EngineVersionsT = Aws::Vector<EngineVersion>>
    void SetEngineVersions(EngineVersionsT&& value) { m_engineVersionsHasBeenSet = true; m_engineVersions = std::forward<EngineVersionsT>(value); }
    template<typename EngineVersionsT = Aws::Vector<EngineVersion>>
    DescribeEngineVersionsResult& WithEngineVersions(EngineVersionsT&& value) { SetEngineVersions(std::forward<EngineVersionsT>(value)); return *this;}
    template<typename EngineVersionsT = EngineVersion>
    DescribeEngineVersionsResult& AddEngineVersions(EngineVersionsT&& value) { m_engineVersionsHasBeenSet = true; m_engineVersions.emplace_back(std::forward<EngineVersionsT>(value)); return *this; }
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
    DescribeEngineVersionsResult& WithMarker(MarkerT&& value) { SetMarker(std::forward<MarkerT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeEngineVersionsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<EngineVersion> m_engineVersions;
    bool m_engineVersionsHasBeenSet = false;

    Aws::String m_marker;
    bool m_markerHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws

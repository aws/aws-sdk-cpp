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
    AWS_DATABASEMIGRATIONSERVICE_API DescribeEngineVersionsResult();
    AWS_DATABASEMIGRATIONSERVICE_API DescribeEngineVersionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DATABASEMIGRATIONSERVICE_API DescribeEngineVersionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Returned <code>EngineVersion</code> objects that describe the replication
     * instance engine versions used in the project.</p>
     */
    inline const Aws::Vector<EngineVersion>& GetEngineVersions() const{ return m_engineVersions; }

    /**
     * <p>Returned <code>EngineVersion</code> objects that describe the replication
     * instance engine versions used in the project.</p>
     */
    inline void SetEngineVersions(const Aws::Vector<EngineVersion>& value) { m_engineVersions = value; }

    /**
     * <p>Returned <code>EngineVersion</code> objects that describe the replication
     * instance engine versions used in the project.</p>
     */
    inline void SetEngineVersions(Aws::Vector<EngineVersion>&& value) { m_engineVersions = std::move(value); }

    /**
     * <p>Returned <code>EngineVersion</code> objects that describe the replication
     * instance engine versions used in the project.</p>
     */
    inline DescribeEngineVersionsResult& WithEngineVersions(const Aws::Vector<EngineVersion>& value) { SetEngineVersions(value); return *this;}

    /**
     * <p>Returned <code>EngineVersion</code> objects that describe the replication
     * instance engine versions used in the project.</p>
     */
    inline DescribeEngineVersionsResult& WithEngineVersions(Aws::Vector<EngineVersion>&& value) { SetEngineVersions(std::move(value)); return *this;}

    /**
     * <p>Returned <code>EngineVersion</code> objects that describe the replication
     * instance engine versions used in the project.</p>
     */
    inline DescribeEngineVersionsResult& AddEngineVersions(const EngineVersion& value) { m_engineVersions.push_back(value); return *this; }

    /**
     * <p>Returned <code>EngineVersion</code> objects that describe the replication
     * instance engine versions used in the project.</p>
     */
    inline DescribeEngineVersionsResult& AddEngineVersions(EngineVersion&& value) { m_engineVersions.push_back(std::move(value)); return *this; }


    /**
     * <p>An optional pagination token provided by a previous request. If this
     * parameter is specified, the response includes only records beyond the marker, up
     * to the value specified by <code>MaxRecords</code>. </p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }

    /**
     * <p>An optional pagination token provided by a previous request. If this
     * parameter is specified, the response includes only records beyond the marker, up
     * to the value specified by <code>MaxRecords</code>. </p>
     */
    inline void SetMarker(const Aws::String& value) { m_marker = value; }

    /**
     * <p>An optional pagination token provided by a previous request. If this
     * parameter is specified, the response includes only records beyond the marker, up
     * to the value specified by <code>MaxRecords</code>. </p>
     */
    inline void SetMarker(Aws::String&& value) { m_marker = std::move(value); }

    /**
     * <p>An optional pagination token provided by a previous request. If this
     * parameter is specified, the response includes only records beyond the marker, up
     * to the value specified by <code>MaxRecords</code>. </p>
     */
    inline void SetMarker(const char* value) { m_marker.assign(value); }

    /**
     * <p>An optional pagination token provided by a previous request. If this
     * parameter is specified, the response includes only records beyond the marker, up
     * to the value specified by <code>MaxRecords</code>. </p>
     */
    inline DescribeEngineVersionsResult& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}

    /**
     * <p>An optional pagination token provided by a previous request. If this
     * parameter is specified, the response includes only records beyond the marker, up
     * to the value specified by <code>MaxRecords</code>. </p>
     */
    inline DescribeEngineVersionsResult& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}

    /**
     * <p>An optional pagination token provided by a previous request. If this
     * parameter is specified, the response includes only records beyond the marker, up
     * to the value specified by <code>MaxRecords</code>. </p>
     */
    inline DescribeEngineVersionsResult& WithMarker(const char* value) { SetMarker(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DescribeEngineVersionsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DescribeEngineVersionsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DescribeEngineVersionsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<EngineVersion> m_engineVersions;

    Aws::String m_marker;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws

﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dms/DatabaseMigrationService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/dms/model/ReplicationTaskAssessmentRun.h>
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
  /**
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/DescribeReplicationTaskAssessmentRunsResponse">AWS
   * API Reference</a></p>
   */
  class DescribeReplicationTaskAssessmentRunsResult
  {
  public:
    AWS_DATABASEMIGRATIONSERVICE_API DescribeReplicationTaskAssessmentRunsResult();
    AWS_DATABASEMIGRATIONSERVICE_API DescribeReplicationTaskAssessmentRunsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DATABASEMIGRATIONSERVICE_API DescribeReplicationTaskAssessmentRunsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A pagination token returned for you to pass to a subsequent request. If you
     * pass this token as the <code>Marker</code> value in a subsequent request, the
     * response includes only records beyond the marker, up to the value specified in
     * the request by <code>MaxRecords</code>.</p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }
    inline void SetMarker(const Aws::String& value) { m_marker = value; }
    inline void SetMarker(Aws::String&& value) { m_marker = std::move(value); }
    inline void SetMarker(const char* value) { m_marker.assign(value); }
    inline DescribeReplicationTaskAssessmentRunsResult& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}
    inline DescribeReplicationTaskAssessmentRunsResult& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}
    inline DescribeReplicationTaskAssessmentRunsResult& WithMarker(const char* value) { SetMarker(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>One or more premigration assessment runs as specified by
     * <code>Filters</code>.</p>
     */
    inline const Aws::Vector<ReplicationTaskAssessmentRun>& GetReplicationTaskAssessmentRuns() const{ return m_replicationTaskAssessmentRuns; }
    inline void SetReplicationTaskAssessmentRuns(const Aws::Vector<ReplicationTaskAssessmentRun>& value) { m_replicationTaskAssessmentRuns = value; }
    inline void SetReplicationTaskAssessmentRuns(Aws::Vector<ReplicationTaskAssessmentRun>&& value) { m_replicationTaskAssessmentRuns = std::move(value); }
    inline DescribeReplicationTaskAssessmentRunsResult& WithReplicationTaskAssessmentRuns(const Aws::Vector<ReplicationTaskAssessmentRun>& value) { SetReplicationTaskAssessmentRuns(value); return *this;}
    inline DescribeReplicationTaskAssessmentRunsResult& WithReplicationTaskAssessmentRuns(Aws::Vector<ReplicationTaskAssessmentRun>&& value) { SetReplicationTaskAssessmentRuns(std::move(value)); return *this;}
    inline DescribeReplicationTaskAssessmentRunsResult& AddReplicationTaskAssessmentRuns(const ReplicationTaskAssessmentRun& value) { m_replicationTaskAssessmentRuns.push_back(value); return *this; }
    inline DescribeReplicationTaskAssessmentRunsResult& AddReplicationTaskAssessmentRuns(ReplicationTaskAssessmentRun&& value) { m_replicationTaskAssessmentRuns.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeReplicationTaskAssessmentRunsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeReplicationTaskAssessmentRunsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeReplicationTaskAssessmentRunsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_marker;

    Aws::Vector<ReplicationTaskAssessmentRun> m_replicationTaskAssessmentRuns;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws

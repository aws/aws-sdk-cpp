/**
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
    AWS_DATABASEMIGRATIONSERVICE_API DescribeReplicationTaskAssessmentRunsResult() = default;
    AWS_DATABASEMIGRATIONSERVICE_API DescribeReplicationTaskAssessmentRunsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DATABASEMIGRATIONSERVICE_API DescribeReplicationTaskAssessmentRunsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A pagination token returned for you to pass to a subsequent request. If you
     * pass this token as the <code>Marker</code> value in a subsequent request, the
     * response includes only records beyond the marker, up to the value specified in
     * the request by <code>MaxRecords</code>.</p>
     */
    inline const Aws::String& GetMarker() const { return m_marker; }
    template<typename MarkerT = Aws::String>
    void SetMarker(MarkerT&& value) { m_markerHasBeenSet = true; m_marker = std::forward<MarkerT>(value); }
    template<typename MarkerT = Aws::String>
    DescribeReplicationTaskAssessmentRunsResult& WithMarker(MarkerT&& value) { SetMarker(std::forward<MarkerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>One or more premigration assessment runs as specified by
     * <code>Filters</code>.</p>
     */
    inline const Aws::Vector<ReplicationTaskAssessmentRun>& GetReplicationTaskAssessmentRuns() const { return m_replicationTaskAssessmentRuns; }
    template<typename ReplicationTaskAssessmentRunsT = Aws::Vector<ReplicationTaskAssessmentRun>>
    void SetReplicationTaskAssessmentRuns(ReplicationTaskAssessmentRunsT&& value) { m_replicationTaskAssessmentRunsHasBeenSet = true; m_replicationTaskAssessmentRuns = std::forward<ReplicationTaskAssessmentRunsT>(value); }
    template<typename ReplicationTaskAssessmentRunsT = Aws::Vector<ReplicationTaskAssessmentRun>>
    DescribeReplicationTaskAssessmentRunsResult& WithReplicationTaskAssessmentRuns(ReplicationTaskAssessmentRunsT&& value) { SetReplicationTaskAssessmentRuns(std::forward<ReplicationTaskAssessmentRunsT>(value)); return *this;}
    template<typename ReplicationTaskAssessmentRunsT = ReplicationTaskAssessmentRun>
    DescribeReplicationTaskAssessmentRunsResult& AddReplicationTaskAssessmentRuns(ReplicationTaskAssessmentRunsT&& value) { m_replicationTaskAssessmentRunsHasBeenSet = true; m_replicationTaskAssessmentRuns.emplace_back(std::forward<ReplicationTaskAssessmentRunsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeReplicationTaskAssessmentRunsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_marker;
    bool m_markerHasBeenSet = false;

    Aws::Vector<ReplicationTaskAssessmentRun> m_replicationTaskAssessmentRuns;
    bool m_replicationTaskAssessmentRunsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dms/DatabaseMigrationService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/dms/model/ReplicationTaskIndividualAssessment.h>
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
   * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/DescribeReplicationTaskIndividualAssessmentsResponse">AWS
   * API Reference</a></p>
   */
  class DescribeReplicationTaskIndividualAssessmentsResult
  {
  public:
    AWS_DATABASEMIGRATIONSERVICE_API DescribeReplicationTaskIndividualAssessmentsResult() = default;
    AWS_DATABASEMIGRATIONSERVICE_API DescribeReplicationTaskIndividualAssessmentsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DATABASEMIGRATIONSERVICE_API DescribeReplicationTaskIndividualAssessmentsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    DescribeReplicationTaskIndividualAssessmentsResult& WithMarker(MarkerT&& value) { SetMarker(std::forward<MarkerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>One or more individual assessments as specified by <code>Filters</code>.</p>
     */
    inline const Aws::Vector<ReplicationTaskIndividualAssessment>& GetReplicationTaskIndividualAssessments() const { return m_replicationTaskIndividualAssessments; }
    template<typename ReplicationTaskIndividualAssessmentsT = Aws::Vector<ReplicationTaskIndividualAssessment>>
    void SetReplicationTaskIndividualAssessments(ReplicationTaskIndividualAssessmentsT&& value) { m_replicationTaskIndividualAssessmentsHasBeenSet = true; m_replicationTaskIndividualAssessments = std::forward<ReplicationTaskIndividualAssessmentsT>(value); }
    template<typename ReplicationTaskIndividualAssessmentsT = Aws::Vector<ReplicationTaskIndividualAssessment>>
    DescribeReplicationTaskIndividualAssessmentsResult& WithReplicationTaskIndividualAssessments(ReplicationTaskIndividualAssessmentsT&& value) { SetReplicationTaskIndividualAssessments(std::forward<ReplicationTaskIndividualAssessmentsT>(value)); return *this;}
    template<typename ReplicationTaskIndividualAssessmentsT = ReplicationTaskIndividualAssessment>
    DescribeReplicationTaskIndividualAssessmentsResult& AddReplicationTaskIndividualAssessments(ReplicationTaskIndividualAssessmentsT&& value) { m_replicationTaskIndividualAssessmentsHasBeenSet = true; m_replicationTaskIndividualAssessments.emplace_back(std::forward<ReplicationTaskIndividualAssessmentsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeReplicationTaskIndividualAssessmentsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_marker;
    bool m_markerHasBeenSet = false;

    Aws::Vector<ReplicationTaskIndividualAssessment> m_replicationTaskIndividualAssessments;
    bool m_replicationTaskIndividualAssessmentsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws

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
    AWS_DATABASEMIGRATIONSERVICE_API DescribeReplicationTaskIndividualAssessmentsResult();
    AWS_DATABASEMIGRATIONSERVICE_API DescribeReplicationTaskIndividualAssessmentsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DATABASEMIGRATIONSERVICE_API DescribeReplicationTaskIndividualAssessmentsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A pagination token returned for you to pass to a subsequent request. If you
     * pass this token as the <code>Marker</code> value in a subsequent request, the
     * response includes only records beyond the marker, up to the value specified in
     * the request by <code>MaxRecords</code>.</p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }

    /**
     * <p>A pagination token returned for you to pass to a subsequent request. If you
     * pass this token as the <code>Marker</code> value in a subsequent request, the
     * response includes only records beyond the marker, up to the value specified in
     * the request by <code>MaxRecords</code>.</p>
     */
    inline void SetMarker(const Aws::String& value) { m_marker = value; }

    /**
     * <p>A pagination token returned for you to pass to a subsequent request. If you
     * pass this token as the <code>Marker</code> value in a subsequent request, the
     * response includes only records beyond the marker, up to the value specified in
     * the request by <code>MaxRecords</code>.</p>
     */
    inline void SetMarker(Aws::String&& value) { m_marker = std::move(value); }

    /**
     * <p>A pagination token returned for you to pass to a subsequent request. If you
     * pass this token as the <code>Marker</code> value in a subsequent request, the
     * response includes only records beyond the marker, up to the value specified in
     * the request by <code>MaxRecords</code>.</p>
     */
    inline void SetMarker(const char* value) { m_marker.assign(value); }

    /**
     * <p>A pagination token returned for you to pass to a subsequent request. If you
     * pass this token as the <code>Marker</code> value in a subsequent request, the
     * response includes only records beyond the marker, up to the value specified in
     * the request by <code>MaxRecords</code>.</p>
     */
    inline DescribeReplicationTaskIndividualAssessmentsResult& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}

    /**
     * <p>A pagination token returned for you to pass to a subsequent request. If you
     * pass this token as the <code>Marker</code> value in a subsequent request, the
     * response includes only records beyond the marker, up to the value specified in
     * the request by <code>MaxRecords</code>.</p>
     */
    inline DescribeReplicationTaskIndividualAssessmentsResult& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}

    /**
     * <p>A pagination token returned for you to pass to a subsequent request. If you
     * pass this token as the <code>Marker</code> value in a subsequent request, the
     * response includes only records beyond the marker, up to the value specified in
     * the request by <code>MaxRecords</code>.</p>
     */
    inline DescribeReplicationTaskIndividualAssessmentsResult& WithMarker(const char* value) { SetMarker(value); return *this;}


    /**
     * <p>One or more individual assessments as specified by <code>Filters</code>.</p>
     */
    inline const Aws::Vector<ReplicationTaskIndividualAssessment>& GetReplicationTaskIndividualAssessments() const{ return m_replicationTaskIndividualAssessments; }

    /**
     * <p>One or more individual assessments as specified by <code>Filters</code>.</p>
     */
    inline void SetReplicationTaskIndividualAssessments(const Aws::Vector<ReplicationTaskIndividualAssessment>& value) { m_replicationTaskIndividualAssessments = value; }

    /**
     * <p>One or more individual assessments as specified by <code>Filters</code>.</p>
     */
    inline void SetReplicationTaskIndividualAssessments(Aws::Vector<ReplicationTaskIndividualAssessment>&& value) { m_replicationTaskIndividualAssessments = std::move(value); }

    /**
     * <p>One or more individual assessments as specified by <code>Filters</code>.</p>
     */
    inline DescribeReplicationTaskIndividualAssessmentsResult& WithReplicationTaskIndividualAssessments(const Aws::Vector<ReplicationTaskIndividualAssessment>& value) { SetReplicationTaskIndividualAssessments(value); return *this;}

    /**
     * <p>One or more individual assessments as specified by <code>Filters</code>.</p>
     */
    inline DescribeReplicationTaskIndividualAssessmentsResult& WithReplicationTaskIndividualAssessments(Aws::Vector<ReplicationTaskIndividualAssessment>&& value) { SetReplicationTaskIndividualAssessments(std::move(value)); return *this;}

    /**
     * <p>One or more individual assessments as specified by <code>Filters</code>.</p>
     */
    inline DescribeReplicationTaskIndividualAssessmentsResult& AddReplicationTaskIndividualAssessments(const ReplicationTaskIndividualAssessment& value) { m_replicationTaskIndividualAssessments.push_back(value); return *this; }

    /**
     * <p>One or more individual assessments as specified by <code>Filters</code>.</p>
     */
    inline DescribeReplicationTaskIndividualAssessmentsResult& AddReplicationTaskIndividualAssessments(ReplicationTaskIndividualAssessment&& value) { m_replicationTaskIndividualAssessments.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_marker;

    Aws::Vector<ReplicationTaskIndividualAssessment> m_replicationTaskIndividualAssessments;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws

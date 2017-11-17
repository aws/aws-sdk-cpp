/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/dms/DatabaseMigrationService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/dms/model/ReplicationTaskAssessmentResult.h>
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
   * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/DescribeReplicationTaskAssessmentResultsResponse">AWS
   * API Reference</a></p>
   */
  class AWS_DATABASEMIGRATIONSERVICE_API DescribeReplicationTaskAssessmentResultsResult
  {
  public:
    DescribeReplicationTaskAssessmentResultsResult();
    DescribeReplicationTaskAssessmentResultsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeReplicationTaskAssessmentResultsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> An optional pagination token provided by a previous request. If this
     * parameter is specified, the response includes only records beyond the marker, up
     * to the value specified by <code>MaxRecords</code>. </p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }

    /**
     * <p> An optional pagination token provided by a previous request. If this
     * parameter is specified, the response includes only records beyond the marker, up
     * to the value specified by <code>MaxRecords</code>. </p>
     */
    inline void SetMarker(const Aws::String& value) { m_marker = value; }

    /**
     * <p> An optional pagination token provided by a previous request. If this
     * parameter is specified, the response includes only records beyond the marker, up
     * to the value specified by <code>MaxRecords</code>. </p>
     */
    inline void SetMarker(Aws::String&& value) { m_marker = std::move(value); }

    /**
     * <p> An optional pagination token provided by a previous request. If this
     * parameter is specified, the response includes only records beyond the marker, up
     * to the value specified by <code>MaxRecords</code>. </p>
     */
    inline void SetMarker(const char* value) { m_marker.assign(value); }

    /**
     * <p> An optional pagination token provided by a previous request. If this
     * parameter is specified, the response includes only records beyond the marker, up
     * to the value specified by <code>MaxRecords</code>. </p>
     */
    inline DescribeReplicationTaskAssessmentResultsResult& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}

    /**
     * <p> An optional pagination token provided by a previous request. If this
     * parameter is specified, the response includes only records beyond the marker, up
     * to the value specified by <code>MaxRecords</code>. </p>
     */
    inline DescribeReplicationTaskAssessmentResultsResult& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}

    /**
     * <p> An optional pagination token provided by a previous request. If this
     * parameter is specified, the response includes only records beyond the marker, up
     * to the value specified by <code>MaxRecords</code>. </p>
     */
    inline DescribeReplicationTaskAssessmentResultsResult& WithMarker(const char* value) { SetMarker(value); return *this;}


    /**
     * <p>- The Amazon S3 bucket where the task assessment report is located. </p>
     */
    inline const Aws::String& GetBucketName() const{ return m_bucketName; }

    /**
     * <p>- The Amazon S3 bucket where the task assessment report is located. </p>
     */
    inline void SetBucketName(const Aws::String& value) { m_bucketName = value; }

    /**
     * <p>- The Amazon S3 bucket where the task assessment report is located. </p>
     */
    inline void SetBucketName(Aws::String&& value) { m_bucketName = std::move(value); }

    /**
     * <p>- The Amazon S3 bucket where the task assessment report is located. </p>
     */
    inline void SetBucketName(const char* value) { m_bucketName.assign(value); }

    /**
     * <p>- The Amazon S3 bucket where the task assessment report is located. </p>
     */
    inline DescribeReplicationTaskAssessmentResultsResult& WithBucketName(const Aws::String& value) { SetBucketName(value); return *this;}

    /**
     * <p>- The Amazon S3 bucket where the task assessment report is located. </p>
     */
    inline DescribeReplicationTaskAssessmentResultsResult& WithBucketName(Aws::String&& value) { SetBucketName(std::move(value)); return *this;}

    /**
     * <p>- The Amazon S3 bucket where the task assessment report is located. </p>
     */
    inline DescribeReplicationTaskAssessmentResultsResult& WithBucketName(const char* value) { SetBucketName(value); return *this;}


    /**
     * <p> The task assessment report. </p>
     */
    inline const Aws::Vector<ReplicationTaskAssessmentResult>& GetReplicationTaskAssessmentResults() const{ return m_replicationTaskAssessmentResults; }

    /**
     * <p> The task assessment report. </p>
     */
    inline void SetReplicationTaskAssessmentResults(const Aws::Vector<ReplicationTaskAssessmentResult>& value) { m_replicationTaskAssessmentResults = value; }

    /**
     * <p> The task assessment report. </p>
     */
    inline void SetReplicationTaskAssessmentResults(Aws::Vector<ReplicationTaskAssessmentResult>&& value) { m_replicationTaskAssessmentResults = std::move(value); }

    /**
     * <p> The task assessment report. </p>
     */
    inline DescribeReplicationTaskAssessmentResultsResult& WithReplicationTaskAssessmentResults(const Aws::Vector<ReplicationTaskAssessmentResult>& value) { SetReplicationTaskAssessmentResults(value); return *this;}

    /**
     * <p> The task assessment report. </p>
     */
    inline DescribeReplicationTaskAssessmentResultsResult& WithReplicationTaskAssessmentResults(Aws::Vector<ReplicationTaskAssessmentResult>&& value) { SetReplicationTaskAssessmentResults(std::move(value)); return *this;}

    /**
     * <p> The task assessment report. </p>
     */
    inline DescribeReplicationTaskAssessmentResultsResult& AddReplicationTaskAssessmentResults(const ReplicationTaskAssessmentResult& value) { m_replicationTaskAssessmentResults.push_back(value); return *this; }

    /**
     * <p> The task assessment report. </p>
     */
    inline DescribeReplicationTaskAssessmentResultsResult& AddReplicationTaskAssessmentResults(ReplicationTaskAssessmentResult&& value) { m_replicationTaskAssessmentResults.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_marker;

    Aws::String m_bucketName;

    Aws::Vector<ReplicationTaskAssessmentResult> m_replicationTaskAssessmentResults;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws

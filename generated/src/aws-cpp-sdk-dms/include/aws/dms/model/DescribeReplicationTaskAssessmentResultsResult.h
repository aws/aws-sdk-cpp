/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class DescribeReplicationTaskAssessmentResultsResult
  {
  public:
    AWS_DATABASEMIGRATIONSERVICE_API DescribeReplicationTaskAssessmentResultsResult() = default;
    AWS_DATABASEMIGRATIONSERVICE_API DescribeReplicationTaskAssessmentResultsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DATABASEMIGRATIONSERVICE_API DescribeReplicationTaskAssessmentResultsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> An optional pagination token provided by a previous request. If this
     * parameter is specified, the response includes only records beyond the marker, up
     * to the value specified by <code>MaxRecords</code>. </p>
     */
    inline const Aws::String& GetMarker() const { return m_marker; }
    template<typename MarkerT = Aws::String>
    void SetMarker(MarkerT&& value) { m_markerHasBeenSet = true; m_marker = std::forward<MarkerT>(value); }
    template<typename MarkerT = Aws::String>
    DescribeReplicationTaskAssessmentResultsResult& WithMarker(MarkerT&& value) { SetMarker(std::forward<MarkerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>- The Amazon S3 bucket where the task assessment report is located. </p>
     */
    inline const Aws::String& GetBucketName() const { return m_bucketName; }
    template<typename BucketNameT = Aws::String>
    void SetBucketName(BucketNameT&& value) { m_bucketNameHasBeenSet = true; m_bucketName = std::forward<BucketNameT>(value); }
    template<typename BucketNameT = Aws::String>
    DescribeReplicationTaskAssessmentResultsResult& WithBucketName(BucketNameT&& value) { SetBucketName(std::forward<BucketNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The task assessment report. </p>
     */
    inline const Aws::Vector<ReplicationTaskAssessmentResult>& GetReplicationTaskAssessmentResults() const { return m_replicationTaskAssessmentResults; }
    template<typename ReplicationTaskAssessmentResultsT = Aws::Vector<ReplicationTaskAssessmentResult>>
    void SetReplicationTaskAssessmentResults(ReplicationTaskAssessmentResultsT&& value) { m_replicationTaskAssessmentResultsHasBeenSet = true; m_replicationTaskAssessmentResults = std::forward<ReplicationTaskAssessmentResultsT>(value); }
    template<typename ReplicationTaskAssessmentResultsT = Aws::Vector<ReplicationTaskAssessmentResult>>
    DescribeReplicationTaskAssessmentResultsResult& WithReplicationTaskAssessmentResults(ReplicationTaskAssessmentResultsT&& value) { SetReplicationTaskAssessmentResults(std::forward<ReplicationTaskAssessmentResultsT>(value)); return *this;}
    template<typename ReplicationTaskAssessmentResultsT = ReplicationTaskAssessmentResult>
    DescribeReplicationTaskAssessmentResultsResult& AddReplicationTaskAssessmentResults(ReplicationTaskAssessmentResultsT&& value) { m_replicationTaskAssessmentResultsHasBeenSet = true; m_replicationTaskAssessmentResults.emplace_back(std::forward<ReplicationTaskAssessmentResultsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeReplicationTaskAssessmentResultsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_marker;
    bool m_markerHasBeenSet = false;

    Aws::String m_bucketName;
    bool m_bucketNameHasBeenSet = false;

    Aws::Vector<ReplicationTaskAssessmentResult> m_replicationTaskAssessmentResults;
    bool m_replicationTaskAssessmentResultsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws

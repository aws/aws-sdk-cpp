/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dms/DatabaseMigrationService_EXPORTS.h>
#include <aws/dms/model/ReplicationTaskAssessmentRun.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/CancelReplicationTaskAssessmentRunResponse">AWS
   * API Reference</a></p>
   */
  class CancelReplicationTaskAssessmentRunResult
  {
  public:
    AWS_DATABASEMIGRATIONSERVICE_API CancelReplicationTaskAssessmentRunResult() = default;
    AWS_DATABASEMIGRATIONSERVICE_API CancelReplicationTaskAssessmentRunResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DATABASEMIGRATIONSERVICE_API CancelReplicationTaskAssessmentRunResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The <code>ReplicationTaskAssessmentRun</code> object for the canceled
     * assessment run.</p>
     */
    inline const ReplicationTaskAssessmentRun& GetReplicationTaskAssessmentRun() const { return m_replicationTaskAssessmentRun; }
    template<typename ReplicationTaskAssessmentRunT = ReplicationTaskAssessmentRun>
    void SetReplicationTaskAssessmentRun(ReplicationTaskAssessmentRunT&& value) { m_replicationTaskAssessmentRunHasBeenSet = true; m_replicationTaskAssessmentRun = std::forward<ReplicationTaskAssessmentRunT>(value); }
    template<typename ReplicationTaskAssessmentRunT = ReplicationTaskAssessmentRun>
    CancelReplicationTaskAssessmentRunResult& WithReplicationTaskAssessmentRun(ReplicationTaskAssessmentRunT&& value) { SetReplicationTaskAssessmentRun(std::forward<ReplicationTaskAssessmentRunT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CancelReplicationTaskAssessmentRunResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    ReplicationTaskAssessmentRun m_replicationTaskAssessmentRun;
    bool m_replicationTaskAssessmentRunHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws

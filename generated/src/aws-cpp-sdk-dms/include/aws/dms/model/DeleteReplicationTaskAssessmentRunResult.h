﻿/**
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
   * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/DeleteReplicationTaskAssessmentRunResponse">AWS
   * API Reference</a></p>
   */
  class DeleteReplicationTaskAssessmentRunResult
  {
  public:
    AWS_DATABASEMIGRATIONSERVICE_API DeleteReplicationTaskAssessmentRunResult();
    AWS_DATABASEMIGRATIONSERVICE_API DeleteReplicationTaskAssessmentRunResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DATABASEMIGRATIONSERVICE_API DeleteReplicationTaskAssessmentRunResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The <code>ReplicationTaskAssessmentRun</code> object for the deleted
     * assessment run.</p>
     */
    inline const ReplicationTaskAssessmentRun& GetReplicationTaskAssessmentRun() const{ return m_replicationTaskAssessmentRun; }
    inline void SetReplicationTaskAssessmentRun(const ReplicationTaskAssessmentRun& value) { m_replicationTaskAssessmentRun = value; }
    inline void SetReplicationTaskAssessmentRun(ReplicationTaskAssessmentRun&& value) { m_replicationTaskAssessmentRun = std::move(value); }
    inline DeleteReplicationTaskAssessmentRunResult& WithReplicationTaskAssessmentRun(const ReplicationTaskAssessmentRun& value) { SetReplicationTaskAssessmentRun(value); return *this;}
    inline DeleteReplicationTaskAssessmentRunResult& WithReplicationTaskAssessmentRun(ReplicationTaskAssessmentRun&& value) { SetReplicationTaskAssessmentRun(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DeleteReplicationTaskAssessmentRunResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DeleteReplicationTaskAssessmentRunResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DeleteReplicationTaskAssessmentRunResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    ReplicationTaskAssessmentRun m_replicationTaskAssessmentRun;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws

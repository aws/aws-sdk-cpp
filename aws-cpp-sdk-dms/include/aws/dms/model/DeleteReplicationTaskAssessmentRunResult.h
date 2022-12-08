/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dms/DatabaseMigrationService_EXPORTS.h>
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
   * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/DeleteReplicationTaskAssessmentRunResponse">AWS
   * API Reference</a></p>
   */
  class DeleteReplicationTaskAssessmentRunResult
  {
  public:
    AWS_DATABASEMIGRATIONSERVICE_API DeleteReplicationTaskAssessmentRunResult();
    AWS_DATABASEMIGRATIONSERVICE_API DeleteReplicationTaskAssessmentRunResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DATABASEMIGRATIONSERVICE_API DeleteReplicationTaskAssessmentRunResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The <code>ReplicationTaskAssessmentRun</code> object for the deleted
     * assessment run.</p>
     */
    inline const ReplicationTaskAssessmentRun& GetReplicationTaskAssessmentRun() const{ return m_replicationTaskAssessmentRun; }

    /**
     * <p>The <code>ReplicationTaskAssessmentRun</code> object for the deleted
     * assessment run.</p>
     */
    inline void SetReplicationTaskAssessmentRun(const ReplicationTaskAssessmentRun& value) { m_replicationTaskAssessmentRun = value; }

    /**
     * <p>The <code>ReplicationTaskAssessmentRun</code> object for the deleted
     * assessment run.</p>
     */
    inline void SetReplicationTaskAssessmentRun(ReplicationTaskAssessmentRun&& value) { m_replicationTaskAssessmentRun = std::move(value); }

    /**
     * <p>The <code>ReplicationTaskAssessmentRun</code> object for the deleted
     * assessment run.</p>
     */
    inline DeleteReplicationTaskAssessmentRunResult& WithReplicationTaskAssessmentRun(const ReplicationTaskAssessmentRun& value) { SetReplicationTaskAssessmentRun(value); return *this;}

    /**
     * <p>The <code>ReplicationTaskAssessmentRun</code> object for the deleted
     * assessment run.</p>
     */
    inline DeleteReplicationTaskAssessmentRunResult& WithReplicationTaskAssessmentRun(ReplicationTaskAssessmentRun&& value) { SetReplicationTaskAssessmentRun(std::move(value)); return *this;}

  private:

    ReplicationTaskAssessmentRun m_replicationTaskAssessmentRun;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws

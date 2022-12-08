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
   * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/CancelReplicationTaskAssessmentRunResponse">AWS
   * API Reference</a></p>
   */
  class CancelReplicationTaskAssessmentRunResult
  {
  public:
    AWS_DATABASEMIGRATIONSERVICE_API CancelReplicationTaskAssessmentRunResult();
    AWS_DATABASEMIGRATIONSERVICE_API CancelReplicationTaskAssessmentRunResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DATABASEMIGRATIONSERVICE_API CancelReplicationTaskAssessmentRunResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The <code>ReplicationTaskAssessmentRun</code> object for the canceled
     * assessment run.</p>
     */
    inline const ReplicationTaskAssessmentRun& GetReplicationTaskAssessmentRun() const{ return m_replicationTaskAssessmentRun; }

    /**
     * <p>The <code>ReplicationTaskAssessmentRun</code> object for the canceled
     * assessment run.</p>
     */
    inline void SetReplicationTaskAssessmentRun(const ReplicationTaskAssessmentRun& value) { m_replicationTaskAssessmentRun = value; }

    /**
     * <p>The <code>ReplicationTaskAssessmentRun</code> object for the canceled
     * assessment run.</p>
     */
    inline void SetReplicationTaskAssessmentRun(ReplicationTaskAssessmentRun&& value) { m_replicationTaskAssessmentRun = std::move(value); }

    /**
     * <p>The <code>ReplicationTaskAssessmentRun</code> object for the canceled
     * assessment run.</p>
     */
    inline CancelReplicationTaskAssessmentRunResult& WithReplicationTaskAssessmentRun(const ReplicationTaskAssessmentRun& value) { SetReplicationTaskAssessmentRun(value); return *this;}

    /**
     * <p>The <code>ReplicationTaskAssessmentRun</code> object for the canceled
     * assessment run.</p>
     */
    inline CancelReplicationTaskAssessmentRunResult& WithReplicationTaskAssessmentRun(ReplicationTaskAssessmentRun&& value) { SetReplicationTaskAssessmentRun(std::move(value)); return *this;}

  private:

    ReplicationTaskAssessmentRun m_replicationTaskAssessmentRun;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws

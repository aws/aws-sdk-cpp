/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dms/DatabaseMigrationService_EXPORTS.h>
#include <aws/dms/model/ReplicationInstance.h>
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
   * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/DeleteReplicationInstanceResponse">AWS
   * API Reference</a></p>
   */
  class DeleteReplicationInstanceResult
  {
  public:
    AWS_DATABASEMIGRATIONSERVICE_API DeleteReplicationInstanceResult();
    AWS_DATABASEMIGRATIONSERVICE_API DeleteReplicationInstanceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DATABASEMIGRATIONSERVICE_API DeleteReplicationInstanceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The replication instance that was deleted.</p>
     */
    inline const ReplicationInstance& GetReplicationInstance() const{ return m_replicationInstance; }

    /**
     * <p>The replication instance that was deleted.</p>
     */
    inline void SetReplicationInstance(const ReplicationInstance& value) { m_replicationInstance = value; }

    /**
     * <p>The replication instance that was deleted.</p>
     */
    inline void SetReplicationInstance(ReplicationInstance&& value) { m_replicationInstance = std::move(value); }

    /**
     * <p>The replication instance that was deleted.</p>
     */
    inline DeleteReplicationInstanceResult& WithReplicationInstance(const ReplicationInstance& value) { SetReplicationInstance(value); return *this;}

    /**
     * <p>The replication instance that was deleted.</p>
     */
    inline DeleteReplicationInstanceResult& WithReplicationInstance(ReplicationInstance&& value) { SetReplicationInstance(std::move(value)); return *this;}

  private:

    ReplicationInstance m_replicationInstance;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws

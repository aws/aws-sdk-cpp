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
  class RebootReplicationInstanceResult
  {
  public:
    AWS_DATABASEMIGRATIONSERVICE_API RebootReplicationInstanceResult();
    AWS_DATABASEMIGRATIONSERVICE_API RebootReplicationInstanceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DATABASEMIGRATIONSERVICE_API RebootReplicationInstanceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The replication instance that is being rebooted. </p>
     */
    inline const ReplicationInstance& GetReplicationInstance() const{ return m_replicationInstance; }

    /**
     * <p>The replication instance that is being rebooted. </p>
     */
    inline void SetReplicationInstance(const ReplicationInstance& value) { m_replicationInstance = value; }

    /**
     * <p>The replication instance that is being rebooted. </p>
     */
    inline void SetReplicationInstance(ReplicationInstance&& value) { m_replicationInstance = std::move(value); }

    /**
     * <p>The replication instance that is being rebooted. </p>
     */
    inline RebootReplicationInstanceResult& WithReplicationInstance(const ReplicationInstance& value) { SetReplicationInstance(value); return *this;}

    /**
     * <p>The replication instance that is being rebooted. </p>
     */
    inline RebootReplicationInstanceResult& WithReplicationInstance(ReplicationInstance&& value) { SetReplicationInstance(std::move(value)); return *this;}

  private:

    ReplicationInstance m_replicationInstance;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws

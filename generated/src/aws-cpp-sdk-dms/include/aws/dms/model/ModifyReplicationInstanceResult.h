/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dms/DatabaseMigrationService_EXPORTS.h>
#include <aws/dms/model/ReplicationInstance.h>
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
   * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/ModifyReplicationInstanceResponse">AWS
   * API Reference</a></p>
   */
  class ModifyReplicationInstanceResult
  {
  public:
    AWS_DATABASEMIGRATIONSERVICE_API ModifyReplicationInstanceResult();
    AWS_DATABASEMIGRATIONSERVICE_API ModifyReplicationInstanceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DATABASEMIGRATIONSERVICE_API ModifyReplicationInstanceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The modified replication instance.</p>
     */
    inline const ReplicationInstance& GetReplicationInstance() const{ return m_replicationInstance; }

    /**
     * <p>The modified replication instance.</p>
     */
    inline void SetReplicationInstance(const ReplicationInstance& value) { m_replicationInstance = value; }

    /**
     * <p>The modified replication instance.</p>
     */
    inline void SetReplicationInstance(ReplicationInstance&& value) { m_replicationInstance = std::move(value); }

    /**
     * <p>The modified replication instance.</p>
     */
    inline ModifyReplicationInstanceResult& WithReplicationInstance(const ReplicationInstance& value) { SetReplicationInstance(value); return *this;}

    /**
     * <p>The modified replication instance.</p>
     */
    inline ModifyReplicationInstanceResult& WithReplicationInstance(ReplicationInstance&& value) { SetReplicationInstance(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ModifyReplicationInstanceResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ModifyReplicationInstanceResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ModifyReplicationInstanceResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    ReplicationInstance m_replicationInstance;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws

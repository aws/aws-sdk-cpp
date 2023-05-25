/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dms/DatabaseMigrationService_EXPORTS.h>
#include <aws/dms/model/ReplicationSubnetGroup.h>
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
   * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/ModifyReplicationSubnetGroupResponse">AWS
   * API Reference</a></p>
   */
  class ModifyReplicationSubnetGroupResult
  {
  public:
    AWS_DATABASEMIGRATIONSERVICE_API ModifyReplicationSubnetGroupResult();
    AWS_DATABASEMIGRATIONSERVICE_API ModifyReplicationSubnetGroupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DATABASEMIGRATIONSERVICE_API ModifyReplicationSubnetGroupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The modified replication subnet group.</p>
     */
    inline const ReplicationSubnetGroup& GetReplicationSubnetGroup() const{ return m_replicationSubnetGroup; }

    /**
     * <p>The modified replication subnet group.</p>
     */
    inline void SetReplicationSubnetGroup(const ReplicationSubnetGroup& value) { m_replicationSubnetGroup = value; }

    /**
     * <p>The modified replication subnet group.</p>
     */
    inline void SetReplicationSubnetGroup(ReplicationSubnetGroup&& value) { m_replicationSubnetGroup = std::move(value); }

    /**
     * <p>The modified replication subnet group.</p>
     */
    inline ModifyReplicationSubnetGroupResult& WithReplicationSubnetGroup(const ReplicationSubnetGroup& value) { SetReplicationSubnetGroup(value); return *this;}

    /**
     * <p>The modified replication subnet group.</p>
     */
    inline ModifyReplicationSubnetGroupResult& WithReplicationSubnetGroup(ReplicationSubnetGroup&& value) { SetReplicationSubnetGroup(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ModifyReplicationSubnetGroupResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ModifyReplicationSubnetGroupResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ModifyReplicationSubnetGroupResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    ReplicationSubnetGroup m_replicationSubnetGroup;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws

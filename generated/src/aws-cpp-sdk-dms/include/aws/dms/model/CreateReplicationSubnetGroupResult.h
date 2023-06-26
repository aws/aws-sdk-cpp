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
   * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/CreateReplicationSubnetGroupResponse">AWS
   * API Reference</a></p>
   */
  class CreateReplicationSubnetGroupResult
  {
  public:
    AWS_DATABASEMIGRATIONSERVICE_API CreateReplicationSubnetGroupResult();
    AWS_DATABASEMIGRATIONSERVICE_API CreateReplicationSubnetGroupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DATABASEMIGRATIONSERVICE_API CreateReplicationSubnetGroupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The replication subnet group that was created.</p>
     */
    inline const ReplicationSubnetGroup& GetReplicationSubnetGroup() const{ return m_replicationSubnetGroup; }

    /**
     * <p>The replication subnet group that was created.</p>
     */
    inline void SetReplicationSubnetGroup(const ReplicationSubnetGroup& value) { m_replicationSubnetGroup = value; }

    /**
     * <p>The replication subnet group that was created.</p>
     */
    inline void SetReplicationSubnetGroup(ReplicationSubnetGroup&& value) { m_replicationSubnetGroup = std::move(value); }

    /**
     * <p>The replication subnet group that was created.</p>
     */
    inline CreateReplicationSubnetGroupResult& WithReplicationSubnetGroup(const ReplicationSubnetGroup& value) { SetReplicationSubnetGroup(value); return *this;}

    /**
     * <p>The replication subnet group that was created.</p>
     */
    inline CreateReplicationSubnetGroupResult& WithReplicationSubnetGroup(ReplicationSubnetGroup&& value) { SetReplicationSubnetGroup(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline CreateReplicationSubnetGroupResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline CreateReplicationSubnetGroupResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline CreateReplicationSubnetGroupResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    ReplicationSubnetGroup m_replicationSubnetGroup;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws

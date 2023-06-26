/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dms/DatabaseMigrationService_EXPORTS.h>
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
  class ReloadTablesResult
  {
  public:
    AWS_DATABASEMIGRATIONSERVICE_API ReloadTablesResult();
    AWS_DATABASEMIGRATIONSERVICE_API ReloadTablesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DATABASEMIGRATIONSERVICE_API ReloadTablesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon Resource Name (ARN) of the replication task. </p>
     */
    inline const Aws::String& GetReplicationTaskArn() const{ return m_replicationTaskArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the replication task. </p>
     */
    inline void SetReplicationTaskArn(const Aws::String& value) { m_replicationTaskArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the replication task. </p>
     */
    inline void SetReplicationTaskArn(Aws::String&& value) { m_replicationTaskArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the replication task. </p>
     */
    inline void SetReplicationTaskArn(const char* value) { m_replicationTaskArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the replication task. </p>
     */
    inline ReloadTablesResult& WithReplicationTaskArn(const Aws::String& value) { SetReplicationTaskArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the replication task. </p>
     */
    inline ReloadTablesResult& WithReplicationTaskArn(Aws::String&& value) { SetReplicationTaskArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the replication task. </p>
     */
    inline ReloadTablesResult& WithReplicationTaskArn(const char* value) { SetReplicationTaskArn(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ReloadTablesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ReloadTablesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ReloadTablesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_replicationTaskArn;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws

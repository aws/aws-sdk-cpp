/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dms/DatabaseMigrationService_EXPORTS.h>
#include <aws/dms/model/Replication.h>
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
   * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/StartReplicationResponse">AWS
   * API Reference</a></p>
   */
  class StartReplicationResult
  {
  public:
    AWS_DATABASEMIGRATIONSERVICE_API StartReplicationResult();
    AWS_DATABASEMIGRATIONSERVICE_API StartReplicationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DATABASEMIGRATIONSERVICE_API StartReplicationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The replication that DMS started.</p>
     */
    inline const Replication& GetReplication() const{ return m_replication; }

    /**
     * <p>The replication that DMS started.</p>
     */
    inline void SetReplication(const Replication& value) { m_replication = value; }

    /**
     * <p>The replication that DMS started.</p>
     */
    inline void SetReplication(Replication&& value) { m_replication = std::move(value); }

    /**
     * <p>The replication that DMS started.</p>
     */
    inline StartReplicationResult& WithReplication(const Replication& value) { SetReplication(value); return *this;}

    /**
     * <p>The replication that DMS started.</p>
     */
    inline StartReplicationResult& WithReplication(Replication&& value) { SetReplication(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline StartReplicationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline StartReplicationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline StartReplicationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Replication m_replication;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws

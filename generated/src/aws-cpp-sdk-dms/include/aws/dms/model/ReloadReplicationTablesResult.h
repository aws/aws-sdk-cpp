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
  /**
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/ReloadReplicationTablesResponse">AWS
   * API Reference</a></p>
   */
  class ReloadReplicationTablesResult
  {
  public:
    AWS_DATABASEMIGRATIONSERVICE_API ReloadReplicationTablesResult();
    AWS_DATABASEMIGRATIONSERVICE_API ReloadReplicationTablesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DATABASEMIGRATIONSERVICE_API ReloadReplicationTablesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon Resource Name of the replication config for which to reload
     * tables.</p>
     */
    inline const Aws::String& GetReplicationConfigArn() const{ return m_replicationConfigArn; }

    /**
     * <p>The Amazon Resource Name of the replication config for which to reload
     * tables.</p>
     */
    inline void SetReplicationConfigArn(const Aws::String& value) { m_replicationConfigArn = value; }

    /**
     * <p>The Amazon Resource Name of the replication config for which to reload
     * tables.</p>
     */
    inline void SetReplicationConfigArn(Aws::String&& value) { m_replicationConfigArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name of the replication config for which to reload
     * tables.</p>
     */
    inline void SetReplicationConfigArn(const char* value) { m_replicationConfigArn.assign(value); }

    /**
     * <p>The Amazon Resource Name of the replication config for which to reload
     * tables.</p>
     */
    inline ReloadReplicationTablesResult& WithReplicationConfigArn(const Aws::String& value) { SetReplicationConfigArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name of the replication config for which to reload
     * tables.</p>
     */
    inline ReloadReplicationTablesResult& WithReplicationConfigArn(Aws::String&& value) { SetReplicationConfigArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name of the replication config for which to reload
     * tables.</p>
     */
    inline ReloadReplicationTablesResult& WithReplicationConfigArn(const char* value) { SetReplicationConfigArn(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ReloadReplicationTablesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ReloadReplicationTablesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ReloadReplicationTablesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_replicationConfigArn;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws

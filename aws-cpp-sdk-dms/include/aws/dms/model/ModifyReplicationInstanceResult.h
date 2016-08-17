/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#pragma once
#include <aws/dms/DatabaseMigrationService_EXPORTS.h>
#include <aws/dms/model/ReplicationInstance.h>

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
   * <p/>
   */
  class AWS_DATABASEMIGRATIONSERVICE_API ModifyReplicationInstanceResult
  {
  public:
    ModifyReplicationInstanceResult();
    ModifyReplicationInstanceResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ModifyReplicationInstanceResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

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
    inline void SetReplicationInstance(ReplicationInstance&& value) { m_replicationInstance = value; }

    /**
     * <p>The modified replication instance.</p>
     */
    inline ModifyReplicationInstanceResult& WithReplicationInstance(const ReplicationInstance& value) { SetReplicationInstance(value); return *this;}

    /**
     * <p>The modified replication instance.</p>
     */
    inline ModifyReplicationInstanceResult& WithReplicationInstance(ReplicationInstance&& value) { SetReplicationInstance(value); return *this;}

  private:
    ReplicationInstance m_replicationInstance;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws

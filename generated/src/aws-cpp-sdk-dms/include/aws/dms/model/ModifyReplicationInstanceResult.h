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
    AWS_DATABASEMIGRATIONSERVICE_API ModifyReplicationInstanceResult() = default;
    AWS_DATABASEMIGRATIONSERVICE_API ModifyReplicationInstanceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DATABASEMIGRATIONSERVICE_API ModifyReplicationInstanceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The modified replication instance.</p>
     */
    inline const ReplicationInstance& GetReplicationInstance() const { return m_replicationInstance; }
    template<typename ReplicationInstanceT = ReplicationInstance>
    void SetReplicationInstance(ReplicationInstanceT&& value) { m_replicationInstanceHasBeenSet = true; m_replicationInstance = std::forward<ReplicationInstanceT>(value); }
    template<typename ReplicationInstanceT = ReplicationInstance>
    ModifyReplicationInstanceResult& WithReplicationInstance(ReplicationInstanceT&& value) { SetReplicationInstance(std::forward<ReplicationInstanceT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ModifyReplicationInstanceResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    ReplicationInstance m_replicationInstance;
    bool m_replicationInstanceHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws

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
   * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/CreateReplicationInstanceResponse">AWS
   * API Reference</a></p>
   */
  class CreateReplicationInstanceResult
  {
  public:
    AWS_DATABASEMIGRATIONSERVICE_API CreateReplicationInstanceResult() = default;
    AWS_DATABASEMIGRATIONSERVICE_API CreateReplicationInstanceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DATABASEMIGRATIONSERVICE_API CreateReplicationInstanceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The replication instance that was created.</p>
     */
    inline const ReplicationInstance& GetReplicationInstance() const { return m_replicationInstance; }
    template<typename ReplicationInstanceT = ReplicationInstance>
    void SetReplicationInstance(ReplicationInstanceT&& value) { m_replicationInstanceHasBeenSet = true; m_replicationInstance = std::forward<ReplicationInstanceT>(value); }
    template<typename ReplicationInstanceT = ReplicationInstance>
    CreateReplicationInstanceResult& WithReplicationInstance(ReplicationInstanceT&& value) { SetReplicationInstance(std::forward<ReplicationInstanceT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateReplicationInstanceResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
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

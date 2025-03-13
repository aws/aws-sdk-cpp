/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dms/DatabaseMigrationService_EXPORTS.h>
#include <aws/dms/model/ReplicationConfig.h>
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
   * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/CreateReplicationConfigResponse">AWS
   * API Reference</a></p>
   */
  class CreateReplicationConfigResult
  {
  public:
    AWS_DATABASEMIGRATIONSERVICE_API CreateReplicationConfigResult() = default;
    AWS_DATABASEMIGRATIONSERVICE_API CreateReplicationConfigResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DATABASEMIGRATIONSERVICE_API CreateReplicationConfigResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Configuration parameters returned from the DMS Serverless replication after
     * it is created.</p>
     */
    inline const ReplicationConfig& GetReplicationConfig() const { return m_replicationConfig; }
    template<typename ReplicationConfigT = ReplicationConfig>
    void SetReplicationConfig(ReplicationConfigT&& value) { m_replicationConfigHasBeenSet = true; m_replicationConfig = std::forward<ReplicationConfigT>(value); }
    template<typename ReplicationConfigT = ReplicationConfig>
    CreateReplicationConfigResult& WithReplicationConfig(ReplicationConfigT&& value) { SetReplicationConfig(std::forward<ReplicationConfigT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateReplicationConfigResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    ReplicationConfig m_replicationConfig;
    bool m_replicationConfigHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws

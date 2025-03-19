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
    AWS_DATABASEMIGRATIONSERVICE_API ReloadReplicationTablesResult() = default;
    AWS_DATABASEMIGRATIONSERVICE_API ReloadReplicationTablesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DATABASEMIGRATIONSERVICE_API ReloadReplicationTablesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name of the replication config for which to reload
     * tables.</p>
     */
    inline const Aws::String& GetReplicationConfigArn() const { return m_replicationConfigArn; }
    template<typename ReplicationConfigArnT = Aws::String>
    void SetReplicationConfigArn(ReplicationConfigArnT&& value) { m_replicationConfigArnHasBeenSet = true; m_replicationConfigArn = std::forward<ReplicationConfigArnT>(value); }
    template<typename ReplicationConfigArnT = Aws::String>
    ReloadReplicationTablesResult& WithReplicationConfigArn(ReplicationConfigArnT&& value) { SetReplicationConfigArn(std::forward<ReplicationConfigArnT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ReloadReplicationTablesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_replicationConfigArn;
    bool m_replicationConfigArnHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws

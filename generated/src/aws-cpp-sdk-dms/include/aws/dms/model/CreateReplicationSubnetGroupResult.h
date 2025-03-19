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
    AWS_DATABASEMIGRATIONSERVICE_API CreateReplicationSubnetGroupResult() = default;
    AWS_DATABASEMIGRATIONSERVICE_API CreateReplicationSubnetGroupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DATABASEMIGRATIONSERVICE_API CreateReplicationSubnetGroupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The replication subnet group that was created.</p>
     */
    inline const ReplicationSubnetGroup& GetReplicationSubnetGroup() const { return m_replicationSubnetGroup; }
    template<typename ReplicationSubnetGroupT = ReplicationSubnetGroup>
    void SetReplicationSubnetGroup(ReplicationSubnetGroupT&& value) { m_replicationSubnetGroupHasBeenSet = true; m_replicationSubnetGroup = std::forward<ReplicationSubnetGroupT>(value); }
    template<typename ReplicationSubnetGroupT = ReplicationSubnetGroup>
    CreateReplicationSubnetGroupResult& WithReplicationSubnetGroup(ReplicationSubnetGroupT&& value) { SetReplicationSubnetGroup(std::forward<ReplicationSubnetGroupT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateReplicationSubnetGroupResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    ReplicationSubnetGroup m_replicationSubnetGroup;
    bool m_replicationSubnetGroupHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws

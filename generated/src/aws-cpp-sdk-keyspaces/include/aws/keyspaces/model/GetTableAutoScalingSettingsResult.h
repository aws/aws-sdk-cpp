/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/keyspaces/Keyspaces_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/keyspaces/model/AutoScalingSpecification.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/keyspaces/model/ReplicaAutoScalingSpecification.h>
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
namespace Keyspaces
{
namespace Model
{
  class GetTableAutoScalingSettingsResult
  {
  public:
    AWS_KEYSPACES_API GetTableAutoScalingSettingsResult() = default;
    AWS_KEYSPACES_API GetTableAutoScalingSettingsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_KEYSPACES_API GetTableAutoScalingSettingsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The name of the keyspace.</p>
     */
    inline const Aws::String& GetKeyspaceName() const { return m_keyspaceName; }
    template<typename KeyspaceNameT = Aws::String>
    void SetKeyspaceName(KeyspaceNameT&& value) { m_keyspaceNameHasBeenSet = true; m_keyspaceName = std::forward<KeyspaceNameT>(value); }
    template<typename KeyspaceNameT = Aws::String>
    GetTableAutoScalingSettingsResult& WithKeyspaceName(KeyspaceNameT&& value) { SetKeyspaceName(std::forward<KeyspaceNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the table.</p>
     */
    inline const Aws::String& GetTableName() const { return m_tableName; }
    template<typename TableNameT = Aws::String>
    void SetTableName(TableNameT&& value) { m_tableNameHasBeenSet = true; m_tableName = std::forward<TableNameT>(value); }
    template<typename TableNameT = Aws::String>
    GetTableAutoScalingSettingsResult& WithTableName(TableNameT&& value) { SetTableName(std::forward<TableNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the table.</p>
     */
    inline const Aws::String& GetResourceArn() const { return m_resourceArn; }
    template<typename ResourceArnT = Aws::String>
    void SetResourceArn(ResourceArnT&& value) { m_resourceArnHasBeenSet = true; m_resourceArn = std::forward<ResourceArnT>(value); }
    template<typename ResourceArnT = Aws::String>
    GetTableAutoScalingSettingsResult& WithResourceArn(ResourceArnT&& value) { SetResourceArn(std::forward<ResourceArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The auto scaling settings of the table.</p>
     */
    inline const AutoScalingSpecification& GetAutoScalingSpecification() const { return m_autoScalingSpecification; }
    template<typename AutoScalingSpecificationT = AutoScalingSpecification>
    void SetAutoScalingSpecification(AutoScalingSpecificationT&& value) { m_autoScalingSpecificationHasBeenSet = true; m_autoScalingSpecification = std::forward<AutoScalingSpecificationT>(value); }
    template<typename AutoScalingSpecificationT = AutoScalingSpecification>
    GetTableAutoScalingSettingsResult& WithAutoScalingSpecification(AutoScalingSpecificationT&& value) { SetAutoScalingSpecification(std::forward<AutoScalingSpecificationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services Region specific settings of a multi-Region table.
     * Returns the settings for all Regions the table is replicated in.</p>
     */
    inline const Aws::Vector<ReplicaAutoScalingSpecification>& GetReplicaSpecifications() const { return m_replicaSpecifications; }
    template<typename ReplicaSpecificationsT = Aws::Vector<ReplicaAutoScalingSpecification>>
    void SetReplicaSpecifications(ReplicaSpecificationsT&& value) { m_replicaSpecificationsHasBeenSet = true; m_replicaSpecifications = std::forward<ReplicaSpecificationsT>(value); }
    template<typename ReplicaSpecificationsT = Aws::Vector<ReplicaAutoScalingSpecification>>
    GetTableAutoScalingSettingsResult& WithReplicaSpecifications(ReplicaSpecificationsT&& value) { SetReplicaSpecifications(std::forward<ReplicaSpecificationsT>(value)); return *this;}
    template<typename ReplicaSpecificationsT = ReplicaAutoScalingSpecification>
    GetTableAutoScalingSettingsResult& AddReplicaSpecifications(ReplicaSpecificationsT&& value) { m_replicaSpecificationsHasBeenSet = true; m_replicaSpecifications.emplace_back(std::forward<ReplicaSpecificationsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetTableAutoScalingSettingsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_keyspaceName;
    bool m_keyspaceNameHasBeenSet = false;

    Aws::String m_tableName;
    bool m_tableNameHasBeenSet = false;

    Aws::String m_resourceArn;
    bool m_resourceArnHasBeenSet = false;

    AutoScalingSpecification m_autoScalingSpecification;
    bool m_autoScalingSpecificationHasBeenSet = false;

    Aws::Vector<ReplicaAutoScalingSpecification> m_replicaSpecifications;
    bool m_replicaSpecificationsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Keyspaces
} // namespace Aws

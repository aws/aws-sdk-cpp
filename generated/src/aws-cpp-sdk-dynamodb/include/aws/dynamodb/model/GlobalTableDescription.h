/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dynamodb/DynamoDB_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/dynamodb/model/GlobalTableStatus.h>
#include <aws/dynamodb/model/ReplicaDescription.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace DynamoDB
{
namespace Model
{

  /**
   * <p>Contains details about the global table.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/GlobalTableDescription">AWS
   * API Reference</a></p>
   */
  class GlobalTableDescription
  {
  public:
    AWS_DYNAMODB_API GlobalTableDescription() = default;
    AWS_DYNAMODB_API GlobalTableDescription(Aws::Utils::Json::JsonView jsonValue);
    AWS_DYNAMODB_API GlobalTableDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DYNAMODB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Regions where the global table has replicas.</p>
     */
    inline const Aws::Vector<ReplicaDescription>& GetReplicationGroup() const { return m_replicationGroup; }
    inline bool ReplicationGroupHasBeenSet() const { return m_replicationGroupHasBeenSet; }
    template<typename ReplicationGroupT = Aws::Vector<ReplicaDescription>>
    void SetReplicationGroup(ReplicationGroupT&& value) { m_replicationGroupHasBeenSet = true; m_replicationGroup = std::forward<ReplicationGroupT>(value); }
    template<typename ReplicationGroupT = Aws::Vector<ReplicaDescription>>
    GlobalTableDescription& WithReplicationGroup(ReplicationGroupT&& value) { SetReplicationGroup(std::forward<ReplicationGroupT>(value)); return *this;}
    template<typename ReplicationGroupT = ReplicaDescription>
    GlobalTableDescription& AddReplicationGroup(ReplicationGroupT&& value) { m_replicationGroupHasBeenSet = true; m_replicationGroup.emplace_back(std::forward<ReplicationGroupT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the global table.</p>
     */
    inline const Aws::String& GetGlobalTableArn() const { return m_globalTableArn; }
    inline bool GlobalTableArnHasBeenSet() const { return m_globalTableArnHasBeenSet; }
    template<typename GlobalTableArnT = Aws::String>
    void SetGlobalTableArn(GlobalTableArnT&& value) { m_globalTableArnHasBeenSet = true; m_globalTableArn = std::forward<GlobalTableArnT>(value); }
    template<typename GlobalTableArnT = Aws::String>
    GlobalTableDescription& WithGlobalTableArn(GlobalTableArnT&& value) { SetGlobalTableArn(std::forward<GlobalTableArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The creation time of the global table.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDateTime() const { return m_creationDateTime; }
    inline bool CreationDateTimeHasBeenSet() const { return m_creationDateTimeHasBeenSet; }
    template<typename CreationDateTimeT = Aws::Utils::DateTime>
    void SetCreationDateTime(CreationDateTimeT&& value) { m_creationDateTimeHasBeenSet = true; m_creationDateTime = std::forward<CreationDateTimeT>(value); }
    template<typename CreationDateTimeT = Aws::Utils::DateTime>
    GlobalTableDescription& WithCreationDateTime(CreationDateTimeT&& value) { SetCreationDateTime(std::forward<CreationDateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current state of the global table:</p> <ul> <li> <p>
     * <code>CREATING</code> - The global table is being created.</p> </li> <li> <p>
     * <code>UPDATING</code> - The global table is being updated.</p> </li> <li> <p>
     * <code>DELETING</code> - The global table is being deleted.</p> </li> <li> <p>
     * <code>ACTIVE</code> - The global table is ready for use.</p> </li> </ul>
     */
    inline GlobalTableStatus GetGlobalTableStatus() const { return m_globalTableStatus; }
    inline bool GlobalTableStatusHasBeenSet() const { return m_globalTableStatusHasBeenSet; }
    inline void SetGlobalTableStatus(GlobalTableStatus value) { m_globalTableStatusHasBeenSet = true; m_globalTableStatus = value; }
    inline GlobalTableDescription& WithGlobalTableStatus(GlobalTableStatus value) { SetGlobalTableStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The global table name.</p>
     */
    inline const Aws::String& GetGlobalTableName() const { return m_globalTableName; }
    inline bool GlobalTableNameHasBeenSet() const { return m_globalTableNameHasBeenSet; }
    template<typename GlobalTableNameT = Aws::String>
    void SetGlobalTableName(GlobalTableNameT&& value) { m_globalTableNameHasBeenSet = true; m_globalTableName = std::forward<GlobalTableNameT>(value); }
    template<typename GlobalTableNameT = Aws::String>
    GlobalTableDescription& WithGlobalTableName(GlobalTableNameT&& value) { SetGlobalTableName(std::forward<GlobalTableNameT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ReplicaDescription> m_replicationGroup;
    bool m_replicationGroupHasBeenSet = false;

    Aws::String m_globalTableArn;
    bool m_globalTableArnHasBeenSet = false;

    Aws::Utils::DateTime m_creationDateTime{};
    bool m_creationDateTimeHasBeenSet = false;

    GlobalTableStatus m_globalTableStatus{GlobalTableStatus::NOT_SET};
    bool m_globalTableStatusHasBeenSet = false;

    Aws::String m_globalTableName;
    bool m_globalTableNameHasBeenSet = false;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws

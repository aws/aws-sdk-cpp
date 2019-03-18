/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
  class AWS_DYNAMODB_API GlobalTableDescription
  {
  public:
    GlobalTableDescription();
    GlobalTableDescription(Aws::Utils::Json::JsonView jsonValue);
    GlobalTableDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The regions where the global table has replicas.</p>
     */
    inline const Aws::Vector<ReplicaDescription>& GetReplicationGroup() const{ return m_replicationGroup; }

    /**
     * <p>The regions where the global table has replicas.</p>
     */
    inline bool ReplicationGroupHasBeenSet() const { return m_replicationGroupHasBeenSet; }

    /**
     * <p>The regions where the global table has replicas.</p>
     */
    inline void SetReplicationGroup(const Aws::Vector<ReplicaDescription>& value) { m_replicationGroupHasBeenSet = true; m_replicationGroup = value; }

    /**
     * <p>The regions where the global table has replicas.</p>
     */
    inline void SetReplicationGroup(Aws::Vector<ReplicaDescription>&& value) { m_replicationGroupHasBeenSet = true; m_replicationGroup = std::move(value); }

    /**
     * <p>The regions where the global table has replicas.</p>
     */
    inline GlobalTableDescription& WithReplicationGroup(const Aws::Vector<ReplicaDescription>& value) { SetReplicationGroup(value); return *this;}

    /**
     * <p>The regions where the global table has replicas.</p>
     */
    inline GlobalTableDescription& WithReplicationGroup(Aws::Vector<ReplicaDescription>&& value) { SetReplicationGroup(std::move(value)); return *this;}

    /**
     * <p>The regions where the global table has replicas.</p>
     */
    inline GlobalTableDescription& AddReplicationGroup(const ReplicaDescription& value) { m_replicationGroupHasBeenSet = true; m_replicationGroup.push_back(value); return *this; }

    /**
     * <p>The regions where the global table has replicas.</p>
     */
    inline GlobalTableDescription& AddReplicationGroup(ReplicaDescription&& value) { m_replicationGroupHasBeenSet = true; m_replicationGroup.push_back(std::move(value)); return *this; }


    /**
     * <p>The unique identifier of the global table.</p>
     */
    inline const Aws::String& GetGlobalTableArn() const{ return m_globalTableArn; }

    /**
     * <p>The unique identifier of the global table.</p>
     */
    inline bool GlobalTableArnHasBeenSet() const { return m_globalTableArnHasBeenSet; }

    /**
     * <p>The unique identifier of the global table.</p>
     */
    inline void SetGlobalTableArn(const Aws::String& value) { m_globalTableArnHasBeenSet = true; m_globalTableArn = value; }

    /**
     * <p>The unique identifier of the global table.</p>
     */
    inline void SetGlobalTableArn(Aws::String&& value) { m_globalTableArnHasBeenSet = true; m_globalTableArn = std::move(value); }

    /**
     * <p>The unique identifier of the global table.</p>
     */
    inline void SetGlobalTableArn(const char* value) { m_globalTableArnHasBeenSet = true; m_globalTableArn.assign(value); }

    /**
     * <p>The unique identifier of the global table.</p>
     */
    inline GlobalTableDescription& WithGlobalTableArn(const Aws::String& value) { SetGlobalTableArn(value); return *this;}

    /**
     * <p>The unique identifier of the global table.</p>
     */
    inline GlobalTableDescription& WithGlobalTableArn(Aws::String&& value) { SetGlobalTableArn(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the global table.</p>
     */
    inline GlobalTableDescription& WithGlobalTableArn(const char* value) { SetGlobalTableArn(value); return *this;}


    /**
     * <p>The creation time of the global table.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDateTime() const{ return m_creationDateTime; }

    /**
     * <p>The creation time of the global table.</p>
     */
    inline bool CreationDateTimeHasBeenSet() const { return m_creationDateTimeHasBeenSet; }

    /**
     * <p>The creation time of the global table.</p>
     */
    inline void SetCreationDateTime(const Aws::Utils::DateTime& value) { m_creationDateTimeHasBeenSet = true; m_creationDateTime = value; }

    /**
     * <p>The creation time of the global table.</p>
     */
    inline void SetCreationDateTime(Aws::Utils::DateTime&& value) { m_creationDateTimeHasBeenSet = true; m_creationDateTime = std::move(value); }

    /**
     * <p>The creation time of the global table.</p>
     */
    inline GlobalTableDescription& WithCreationDateTime(const Aws::Utils::DateTime& value) { SetCreationDateTime(value); return *this;}

    /**
     * <p>The creation time of the global table.</p>
     */
    inline GlobalTableDescription& WithCreationDateTime(Aws::Utils::DateTime&& value) { SetCreationDateTime(std::move(value)); return *this;}


    /**
     * <p>The current state of the global table:</p> <ul> <li> <p>
     * <code>CREATING</code> - The global table is being created.</p> </li> <li> <p>
     * <code>UPDATING</code> - The global table is being updated.</p> </li> <li> <p>
     * <code>DELETING</code> - The global table is being deleted.</p> </li> <li> <p>
     * <code>ACTIVE</code> - The global table is ready for use.</p> </li> </ul>
     */
    inline const GlobalTableStatus& GetGlobalTableStatus() const{ return m_globalTableStatus; }

    /**
     * <p>The current state of the global table:</p> <ul> <li> <p>
     * <code>CREATING</code> - The global table is being created.</p> </li> <li> <p>
     * <code>UPDATING</code> - The global table is being updated.</p> </li> <li> <p>
     * <code>DELETING</code> - The global table is being deleted.</p> </li> <li> <p>
     * <code>ACTIVE</code> - The global table is ready for use.</p> </li> </ul>
     */
    inline bool GlobalTableStatusHasBeenSet() const { return m_globalTableStatusHasBeenSet; }

    /**
     * <p>The current state of the global table:</p> <ul> <li> <p>
     * <code>CREATING</code> - The global table is being created.</p> </li> <li> <p>
     * <code>UPDATING</code> - The global table is being updated.</p> </li> <li> <p>
     * <code>DELETING</code> - The global table is being deleted.</p> </li> <li> <p>
     * <code>ACTIVE</code> - The global table is ready for use.</p> </li> </ul>
     */
    inline void SetGlobalTableStatus(const GlobalTableStatus& value) { m_globalTableStatusHasBeenSet = true; m_globalTableStatus = value; }

    /**
     * <p>The current state of the global table:</p> <ul> <li> <p>
     * <code>CREATING</code> - The global table is being created.</p> </li> <li> <p>
     * <code>UPDATING</code> - The global table is being updated.</p> </li> <li> <p>
     * <code>DELETING</code> - The global table is being deleted.</p> </li> <li> <p>
     * <code>ACTIVE</code> - The global table is ready for use.</p> </li> </ul>
     */
    inline void SetGlobalTableStatus(GlobalTableStatus&& value) { m_globalTableStatusHasBeenSet = true; m_globalTableStatus = std::move(value); }

    /**
     * <p>The current state of the global table:</p> <ul> <li> <p>
     * <code>CREATING</code> - The global table is being created.</p> </li> <li> <p>
     * <code>UPDATING</code> - The global table is being updated.</p> </li> <li> <p>
     * <code>DELETING</code> - The global table is being deleted.</p> </li> <li> <p>
     * <code>ACTIVE</code> - The global table is ready for use.</p> </li> </ul>
     */
    inline GlobalTableDescription& WithGlobalTableStatus(const GlobalTableStatus& value) { SetGlobalTableStatus(value); return *this;}

    /**
     * <p>The current state of the global table:</p> <ul> <li> <p>
     * <code>CREATING</code> - The global table is being created.</p> </li> <li> <p>
     * <code>UPDATING</code> - The global table is being updated.</p> </li> <li> <p>
     * <code>DELETING</code> - The global table is being deleted.</p> </li> <li> <p>
     * <code>ACTIVE</code> - The global table is ready for use.</p> </li> </ul>
     */
    inline GlobalTableDescription& WithGlobalTableStatus(GlobalTableStatus&& value) { SetGlobalTableStatus(std::move(value)); return *this;}


    /**
     * <p>The global table name.</p>
     */
    inline const Aws::String& GetGlobalTableName() const{ return m_globalTableName; }

    /**
     * <p>The global table name.</p>
     */
    inline bool GlobalTableNameHasBeenSet() const { return m_globalTableNameHasBeenSet; }

    /**
     * <p>The global table name.</p>
     */
    inline void SetGlobalTableName(const Aws::String& value) { m_globalTableNameHasBeenSet = true; m_globalTableName = value; }

    /**
     * <p>The global table name.</p>
     */
    inline void SetGlobalTableName(Aws::String&& value) { m_globalTableNameHasBeenSet = true; m_globalTableName = std::move(value); }

    /**
     * <p>The global table name.</p>
     */
    inline void SetGlobalTableName(const char* value) { m_globalTableNameHasBeenSet = true; m_globalTableName.assign(value); }

    /**
     * <p>The global table name.</p>
     */
    inline GlobalTableDescription& WithGlobalTableName(const Aws::String& value) { SetGlobalTableName(value); return *this;}

    /**
     * <p>The global table name.</p>
     */
    inline GlobalTableDescription& WithGlobalTableName(Aws::String&& value) { SetGlobalTableName(std::move(value)); return *this;}

    /**
     * <p>The global table name.</p>
     */
    inline GlobalTableDescription& WithGlobalTableName(const char* value) { SetGlobalTableName(value); return *this;}

  private:

    Aws::Vector<ReplicaDescription> m_replicationGroup;
    bool m_replicationGroupHasBeenSet;

    Aws::String m_globalTableArn;
    bool m_globalTableArnHasBeenSet;

    Aws::Utils::DateTime m_creationDateTime;
    bool m_creationDateTimeHasBeenSet;

    GlobalTableStatus m_globalTableStatus;
    bool m_globalTableStatusHasBeenSet;

    Aws::String m_globalTableName;
    bool m_globalTableNameHasBeenSet;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws

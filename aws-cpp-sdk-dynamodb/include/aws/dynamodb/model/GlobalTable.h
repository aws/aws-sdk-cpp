/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dynamodb/DynamoDB_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/dynamodb/model/Replica.h>
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
   * <p>Represents the properties of a global table.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/GlobalTable">AWS
   * API Reference</a></p>
   */
  class GlobalTable
  {
  public:
    AWS_DYNAMODB_API GlobalTable();
    AWS_DYNAMODB_API GlobalTable(Aws::Utils::Json::JsonView jsonValue);
    AWS_DYNAMODB_API GlobalTable& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DYNAMODB_API Aws::Utils::Json::JsonValue Jsonize() const;


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
    inline GlobalTable& WithGlobalTableName(const Aws::String& value) { SetGlobalTableName(value); return *this;}

    /**
     * <p>The global table name.</p>
     */
    inline GlobalTable& WithGlobalTableName(Aws::String&& value) { SetGlobalTableName(std::move(value)); return *this;}

    /**
     * <p>The global table name.</p>
     */
    inline GlobalTable& WithGlobalTableName(const char* value) { SetGlobalTableName(value); return *this;}


    /**
     * <p>The Regions where the global table has replicas.</p>
     */
    inline const Aws::Vector<Replica>& GetReplicationGroup() const{ return m_replicationGroup; }

    /**
     * <p>The Regions where the global table has replicas.</p>
     */
    inline bool ReplicationGroupHasBeenSet() const { return m_replicationGroupHasBeenSet; }

    /**
     * <p>The Regions where the global table has replicas.</p>
     */
    inline void SetReplicationGroup(const Aws::Vector<Replica>& value) { m_replicationGroupHasBeenSet = true; m_replicationGroup = value; }

    /**
     * <p>The Regions where the global table has replicas.</p>
     */
    inline void SetReplicationGroup(Aws::Vector<Replica>&& value) { m_replicationGroupHasBeenSet = true; m_replicationGroup = std::move(value); }

    /**
     * <p>The Regions where the global table has replicas.</p>
     */
    inline GlobalTable& WithReplicationGroup(const Aws::Vector<Replica>& value) { SetReplicationGroup(value); return *this;}

    /**
     * <p>The Regions where the global table has replicas.</p>
     */
    inline GlobalTable& WithReplicationGroup(Aws::Vector<Replica>&& value) { SetReplicationGroup(std::move(value)); return *this;}

    /**
     * <p>The Regions where the global table has replicas.</p>
     */
    inline GlobalTable& AddReplicationGroup(const Replica& value) { m_replicationGroupHasBeenSet = true; m_replicationGroup.push_back(value); return *this; }

    /**
     * <p>The Regions where the global table has replicas.</p>
     */
    inline GlobalTable& AddReplicationGroup(Replica&& value) { m_replicationGroupHasBeenSet = true; m_replicationGroup.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_globalTableName;
    bool m_globalTableNameHasBeenSet = false;

    Aws::Vector<Replica> m_replicationGroup;
    bool m_replicationGroupHasBeenSet = false;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws

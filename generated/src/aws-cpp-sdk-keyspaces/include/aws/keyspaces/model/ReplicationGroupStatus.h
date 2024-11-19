/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/keyspaces/Keyspaces_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/keyspaces/model/KeyspaceStatus.h>
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
namespace Keyspaces
{
namespace Model
{

  /**
   * <p> This shows the summary status of the keyspace after a new Amazon Web
   * Services Region was added. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/keyspaces-2022-02-10/ReplicationGroupStatus">AWS
   * API Reference</a></p>
   */
  class ReplicationGroupStatus
  {
  public:
    AWS_KEYSPACES_API ReplicationGroupStatus();
    AWS_KEYSPACES_API ReplicationGroupStatus(Aws::Utils::Json::JsonView jsonValue);
    AWS_KEYSPACES_API ReplicationGroupStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KEYSPACES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The name of the Region that was added to the keyspace. </p>
     */
    inline const Aws::String& GetRegion() const{ return m_region; }
    inline bool RegionHasBeenSet() const { return m_regionHasBeenSet; }
    inline void SetRegion(const Aws::String& value) { m_regionHasBeenSet = true; m_region = value; }
    inline void SetRegion(Aws::String&& value) { m_regionHasBeenSet = true; m_region = std::move(value); }
    inline void SetRegion(const char* value) { m_regionHasBeenSet = true; m_region.assign(value); }
    inline ReplicationGroupStatus& WithRegion(const Aws::String& value) { SetRegion(value); return *this;}
    inline ReplicationGroupStatus& WithRegion(Aws::String&& value) { SetRegion(std::move(value)); return *this;}
    inline ReplicationGroupStatus& WithRegion(const char* value) { SetRegion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The status of the keyspace. </p>
     */
    inline const KeyspaceStatus& GetKeyspaceStatus() const{ return m_keyspaceStatus; }
    inline bool KeyspaceStatusHasBeenSet() const { return m_keyspaceStatusHasBeenSet; }
    inline void SetKeyspaceStatus(const KeyspaceStatus& value) { m_keyspaceStatusHasBeenSet = true; m_keyspaceStatus = value; }
    inline void SetKeyspaceStatus(KeyspaceStatus&& value) { m_keyspaceStatusHasBeenSet = true; m_keyspaceStatus = std::move(value); }
    inline ReplicationGroupStatus& WithKeyspaceStatus(const KeyspaceStatus& value) { SetKeyspaceStatus(value); return *this;}
    inline ReplicationGroupStatus& WithKeyspaceStatus(KeyspaceStatus&& value) { SetKeyspaceStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> This shows the replication progress of tables in the keyspace. The value is
     * expressed as a percentage of the newly replicated tables with status
     * <code>Active</code> compared to the total number of tables in the keyspace. </p>
     */
    inline const Aws::String& GetTablesReplicationProgress() const{ return m_tablesReplicationProgress; }
    inline bool TablesReplicationProgressHasBeenSet() const { return m_tablesReplicationProgressHasBeenSet; }
    inline void SetTablesReplicationProgress(const Aws::String& value) { m_tablesReplicationProgressHasBeenSet = true; m_tablesReplicationProgress = value; }
    inline void SetTablesReplicationProgress(Aws::String&& value) { m_tablesReplicationProgressHasBeenSet = true; m_tablesReplicationProgress = std::move(value); }
    inline void SetTablesReplicationProgress(const char* value) { m_tablesReplicationProgressHasBeenSet = true; m_tablesReplicationProgress.assign(value); }
    inline ReplicationGroupStatus& WithTablesReplicationProgress(const Aws::String& value) { SetTablesReplicationProgress(value); return *this;}
    inline ReplicationGroupStatus& WithTablesReplicationProgress(Aws::String&& value) { SetTablesReplicationProgress(std::move(value)); return *this;}
    inline ReplicationGroupStatus& WithTablesReplicationProgress(const char* value) { SetTablesReplicationProgress(value); return *this;}
    ///@}
  private:

    Aws::String m_region;
    bool m_regionHasBeenSet = false;

    KeyspaceStatus m_keyspaceStatus;
    bool m_keyspaceStatusHasBeenSet = false;

    Aws::String m_tablesReplicationProgress;
    bool m_tablesReplicationProgressHasBeenSet = false;
  };

} // namespace Model
} // namespace Keyspaces
} // namespace Aws

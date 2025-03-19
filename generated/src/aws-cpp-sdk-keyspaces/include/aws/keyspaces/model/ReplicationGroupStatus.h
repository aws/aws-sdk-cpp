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
    AWS_KEYSPACES_API ReplicationGroupStatus() = default;
    AWS_KEYSPACES_API ReplicationGroupStatus(Aws::Utils::Json::JsonView jsonValue);
    AWS_KEYSPACES_API ReplicationGroupStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KEYSPACES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The name of the Region that was added to the keyspace. </p>
     */
    inline const Aws::String& GetRegion() const { return m_region; }
    inline bool RegionHasBeenSet() const { return m_regionHasBeenSet; }
    template<typename RegionT = Aws::String>
    void SetRegion(RegionT&& value) { m_regionHasBeenSet = true; m_region = std::forward<RegionT>(value); }
    template<typename RegionT = Aws::String>
    ReplicationGroupStatus& WithRegion(RegionT&& value) { SetRegion(std::forward<RegionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The status of the keyspace. </p>
     */
    inline KeyspaceStatus GetKeyspaceStatus() const { return m_keyspaceStatus; }
    inline bool KeyspaceStatusHasBeenSet() const { return m_keyspaceStatusHasBeenSet; }
    inline void SetKeyspaceStatus(KeyspaceStatus value) { m_keyspaceStatusHasBeenSet = true; m_keyspaceStatus = value; }
    inline ReplicationGroupStatus& WithKeyspaceStatus(KeyspaceStatus value) { SetKeyspaceStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> This shows the replication progress of tables in the keyspace. The value is
     * expressed as a percentage of the newly replicated tables with status
     * <code>Active</code> compared to the total number of tables in the keyspace. </p>
     */
    inline const Aws::String& GetTablesReplicationProgress() const { return m_tablesReplicationProgress; }
    inline bool TablesReplicationProgressHasBeenSet() const { return m_tablesReplicationProgressHasBeenSet; }
    template<typename TablesReplicationProgressT = Aws::String>
    void SetTablesReplicationProgress(TablesReplicationProgressT&& value) { m_tablesReplicationProgressHasBeenSet = true; m_tablesReplicationProgress = std::forward<TablesReplicationProgressT>(value); }
    template<typename TablesReplicationProgressT = Aws::String>
    ReplicationGroupStatus& WithTablesReplicationProgress(TablesReplicationProgressT&& value) { SetTablesReplicationProgress(std::forward<TablesReplicationProgressT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_region;
    bool m_regionHasBeenSet = false;

    KeyspaceStatus m_keyspaceStatus{KeyspaceStatus::NOT_SET};
    bool m_keyspaceStatusHasBeenSet = false;

    Aws::String m_tablesReplicationProgress;
    bool m_tablesReplicationProgressHasBeenSet = false;
  };

} // namespace Model
} // namespace Keyspaces
} // namespace Aws

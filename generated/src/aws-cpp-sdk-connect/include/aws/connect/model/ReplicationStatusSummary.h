/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/connect/model/InstanceReplicationStatus.h>
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
namespace Connect
{
namespace Model
{

  /**
   * <p>Status information about the replication process, where you use the <a
   * href="https://docs.aws.amazon.com/connect/latest/APIReference/API_ReplicateInstance.html">ReplicateInstance</a>
   * API to create a replica of your Amazon Connect instance in another Amazon Web
   * Services Region. For more information, see <a
   * href="https://docs.aws.amazon.com/connect/latest/adminguide/setup-connect-global-resiliency.html">Set
   * up Amazon Connect Global Resiliency</a> in the <i>Amazon Connect Administrator
   * Guide</i>. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/ReplicationStatusSummary">AWS
   * API Reference</a></p>
   */
  class ReplicationStatusSummary
  {
  public:
    AWS_CONNECT_API ReplicationStatusSummary() = default;
    AWS_CONNECT_API ReplicationStatusSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API ReplicationStatusSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Web Services Region. This can be either the source or the replica
     * Region, depending where it appears in the summary list.</p>
     */
    inline const Aws::String& GetRegion() const { return m_region; }
    inline bool RegionHasBeenSet() const { return m_regionHasBeenSet; }
    template<typename RegionT = Aws::String>
    void SetRegion(RegionT&& value) { m_regionHasBeenSet = true; m_region = std::forward<RegionT>(value); }
    template<typename RegionT = Aws::String>
    ReplicationStatusSummary& WithRegion(RegionT&& value) { SetRegion(std::forward<RegionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of the replication.</p>
     */
    inline InstanceReplicationStatus GetReplicationStatus() const { return m_replicationStatus; }
    inline bool ReplicationStatusHasBeenSet() const { return m_replicationStatusHasBeenSet; }
    inline void SetReplicationStatus(InstanceReplicationStatus value) { m_replicationStatusHasBeenSet = true; m_replicationStatus = value; }
    inline ReplicationStatusSummary& WithReplicationStatus(InstanceReplicationStatus value) { SetReplicationStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the replication status. Use this information to resolve any
     * issues that are preventing the successful replication of your Amazon Connect
     * instance to another Region.</p>
     */
    inline const Aws::String& GetReplicationStatusReason() const { return m_replicationStatusReason; }
    inline bool ReplicationStatusReasonHasBeenSet() const { return m_replicationStatusReasonHasBeenSet; }
    template<typename ReplicationStatusReasonT = Aws::String>
    void SetReplicationStatusReason(ReplicationStatusReasonT&& value) { m_replicationStatusReasonHasBeenSet = true; m_replicationStatusReason = std::forward<ReplicationStatusReasonT>(value); }
    template<typename ReplicationStatusReasonT = Aws::String>
    ReplicationStatusSummary& WithReplicationStatusReason(ReplicationStatusReasonT&& value) { SetReplicationStatusReason(std::forward<ReplicationStatusReasonT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_region;
    bool m_regionHasBeenSet = false;

    InstanceReplicationStatus m_replicationStatus{InstanceReplicationStatus::NOT_SET};
    bool m_replicationStatusHasBeenSet = false;

    Aws::String m_replicationStatusReason;
    bool m_replicationStatusReasonHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws

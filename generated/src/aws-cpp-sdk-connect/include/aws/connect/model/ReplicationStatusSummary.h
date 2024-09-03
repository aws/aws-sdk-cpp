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
    AWS_CONNECT_API ReplicationStatusSummary();
    AWS_CONNECT_API ReplicationStatusSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API ReplicationStatusSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Web Services Region. This can be either the source or the replica
     * Region, depending where it appears in the summary list.</p>
     */
    inline const Aws::String& GetRegion() const{ return m_region; }
    inline bool RegionHasBeenSet() const { return m_regionHasBeenSet; }
    inline void SetRegion(const Aws::String& value) { m_regionHasBeenSet = true; m_region = value; }
    inline void SetRegion(Aws::String&& value) { m_regionHasBeenSet = true; m_region = std::move(value); }
    inline void SetRegion(const char* value) { m_regionHasBeenSet = true; m_region.assign(value); }
    inline ReplicationStatusSummary& WithRegion(const Aws::String& value) { SetRegion(value); return *this;}
    inline ReplicationStatusSummary& WithRegion(Aws::String&& value) { SetRegion(std::move(value)); return *this;}
    inline ReplicationStatusSummary& WithRegion(const char* value) { SetRegion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of the replication.</p>
     */
    inline const InstanceReplicationStatus& GetReplicationStatus() const{ return m_replicationStatus; }
    inline bool ReplicationStatusHasBeenSet() const { return m_replicationStatusHasBeenSet; }
    inline void SetReplicationStatus(const InstanceReplicationStatus& value) { m_replicationStatusHasBeenSet = true; m_replicationStatus = value; }
    inline void SetReplicationStatus(InstanceReplicationStatus&& value) { m_replicationStatusHasBeenSet = true; m_replicationStatus = std::move(value); }
    inline ReplicationStatusSummary& WithReplicationStatus(const InstanceReplicationStatus& value) { SetReplicationStatus(value); return *this;}
    inline ReplicationStatusSummary& WithReplicationStatus(InstanceReplicationStatus&& value) { SetReplicationStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the replication status. Use this information to resolve any
     * issues that are preventing the successful replication of your Amazon Connect
     * instance to another Region.</p>
     */
    inline const Aws::String& GetReplicationStatusReason() const{ return m_replicationStatusReason; }
    inline bool ReplicationStatusReasonHasBeenSet() const { return m_replicationStatusReasonHasBeenSet; }
    inline void SetReplicationStatusReason(const Aws::String& value) { m_replicationStatusReasonHasBeenSet = true; m_replicationStatusReason = value; }
    inline void SetReplicationStatusReason(Aws::String&& value) { m_replicationStatusReasonHasBeenSet = true; m_replicationStatusReason = std::move(value); }
    inline void SetReplicationStatusReason(const char* value) { m_replicationStatusReasonHasBeenSet = true; m_replicationStatusReason.assign(value); }
    inline ReplicationStatusSummary& WithReplicationStatusReason(const Aws::String& value) { SetReplicationStatusReason(value); return *this;}
    inline ReplicationStatusSummary& WithReplicationStatusReason(Aws::String&& value) { SetReplicationStatusReason(std::move(value)); return *this;}
    inline ReplicationStatusSummary& WithReplicationStatusReason(const char* value) { SetReplicationStatusReason(value); return *this;}
    ///@}
  private:

    Aws::String m_region;
    bool m_regionHasBeenSet = false;

    InstanceReplicationStatus m_replicationStatus;
    bool m_replicationStatusHasBeenSet = false;

    Aws::String m_replicationStatusReason;
    bool m_replicationStatusReasonHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws

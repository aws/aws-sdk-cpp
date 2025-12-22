/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/gameliftstreams/GameLiftStreams_EXPORTS.h>
#include <aws/gameliftstreams/model/StreamGroupLocationStatus.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace GameLiftStreams {
namespace Model {

/**
 * <p>Represents a location and its corresponding stream capacity and
 * status.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/gameliftstreams-2018-05-10/LocationState">AWS
 * API Reference</a></p>
 */
class LocationState {
 public:
  AWS_GAMELIFTSTREAMS_API LocationState() = default;
  AWS_GAMELIFTSTREAMS_API LocationState(Aws::Utils::Json::JsonView jsonValue);
  AWS_GAMELIFTSTREAMS_API LocationState& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_GAMELIFTSTREAMS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p> A location's name. For example, <code>us-east-1</code>. For a complete list
   * of locations that Amazon GameLift Streams supports, refer to <a
   * href="https://docs.aws.amazon.com/gameliftstreams/latest/developerguide/regions-quotas.html">Regions,
   * quotas, and limitations</a> in the <i>Amazon GameLift Streams Developer
   * Guide</i>. </p>
   */
  inline const Aws::String& GetLocationName() const { return m_locationName; }
  inline bool LocationNameHasBeenSet() const { return m_locationNameHasBeenSet; }
  template <typename LocationNameT = Aws::String>
  void SetLocationName(LocationNameT&& value) {
    m_locationNameHasBeenSet = true;
    m_locationName = std::forward<LocationNameT>(value);
  }
  template <typename LocationNameT = Aws::String>
  LocationState& WithLocationName(LocationNameT&& value) {
    SetLocationName(std::forward<LocationNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>This value is set of locations, including their name, current status, and
   * capacities. </p> <p>A location can be in one of the following states:</p> <ul>
   * <li> <p> <code>ACTIVATING</code>: Amazon GameLift Streams is preparing the
   * location. You cannot stream from, scale the capacity of, or remove this location
   * yet.</p> </li> <li> <p> <code>ACTIVE</code>: The location is provisioned with
   * initial capacity. You can now stream from, scale the capacity of, or remove this
   * location.</p> </li> <li> <p> <code>ERROR</code>: Amazon GameLift Streams failed
   * to set up this location. The <code>StatusReason</code> field describes the
   * error. You can remove this location and try to add it again.</p> </li> <li> <p>
   * <code>REMOVING</code>: Amazon GameLift Streams is working to remove this
   * location. This will release all provisioned capacity for this location in this
   * stream group.</p> </li> </ul>
   */
  inline StreamGroupLocationStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(StreamGroupLocationStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline LocationState& WithStatus(StreamGroupLocationStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>This setting, if non-zero, indicates minimum streaming capacity which is
   * allocated to you and is never released back to the service. You pay for this
   * base level of capacity at all times, whether used or idle.</p>
   */
  inline int GetAlwaysOnCapacity() const { return m_alwaysOnCapacity; }
  inline bool AlwaysOnCapacityHasBeenSet() const { return m_alwaysOnCapacityHasBeenSet; }
  inline void SetAlwaysOnCapacity(int value) {
    m_alwaysOnCapacityHasBeenSet = true;
    m_alwaysOnCapacity = value;
  }
  inline LocationState& WithAlwaysOnCapacity(int value) {
    SetAlwaysOnCapacity(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The streaming capacity that Amazon GameLift Streams can allocate in response
   * to stream requests, and then de-allocate when the session has terminated. This
   * offers a cost control measure at the expense of a greater startup time
   * (typically under 5 minutes). Default is 0 when creating a stream group or adding
   * a location.</p>
   */
  inline int GetOnDemandCapacity() const { return m_onDemandCapacity; }
  inline bool OnDemandCapacityHasBeenSet() const { return m_onDemandCapacityHasBeenSet; }
  inline void SetOnDemandCapacity(int value) {
    m_onDemandCapacityHasBeenSet = true;
    m_onDemandCapacity = value;
  }
  inline LocationState& WithOnDemandCapacity(int value) {
    SetOnDemandCapacity(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>This indicates idle capacity which the service pre-allocates and holds for
   * you in anticipation of future activity. This helps to insulate your users from
   * capacity-allocation delays. You pay for capacity which is held in this
   * intentional idle state.</p>
   */
  inline int GetTargetIdleCapacity() const { return m_targetIdleCapacity; }
  inline bool TargetIdleCapacityHasBeenSet() const { return m_targetIdleCapacityHasBeenSet; }
  inline void SetTargetIdleCapacity(int value) {
    m_targetIdleCapacityHasBeenSet = true;
    m_targetIdleCapacity = value;
  }
  inline LocationState& WithTargetIdleCapacity(int value) {
    SetTargetIdleCapacity(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>This indicates the maximum capacity that the service can allocate for you.
   * Newly created streams may take a few minutes to start. Capacity is released back
   * to the service when idle. You pay for capacity that is allocated to you until it
   * is released.</p>
   */
  inline int GetMaximumCapacity() const { return m_maximumCapacity; }
  inline bool MaximumCapacityHasBeenSet() const { return m_maximumCapacityHasBeenSet; }
  inline void SetMaximumCapacity(int value) {
    m_maximumCapacityHasBeenSet = true;
    m_maximumCapacity = value;
  }
  inline LocationState& WithMaximumCapacity(int value) {
    SetMaximumCapacity(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>This value is the always-on capacity that you most recently requested for a
   * stream group. You request capacity separately for each location in a stream
   * group. In response to an increase in requested capacity, Amazon GameLift Streams
   * attempts to provision compute resources to make the stream group's allocated
   * capacity meet requested capacity. When always-on capacity is decreased, it can
   * take a few minutes to deprovision allocated capacity to match the requested
   * capacity.</p>
   */
  inline int GetRequestedCapacity() const { return m_requestedCapacity; }
  inline bool RequestedCapacityHasBeenSet() const { return m_requestedCapacityHasBeenSet; }
  inline void SetRequestedCapacity(int value) {
    m_requestedCapacityHasBeenSet = true;
    m_requestedCapacity = value;
  }
  inline LocationState& WithRequestedCapacity(int value) {
    SetRequestedCapacity(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>This value is the stream capacity that Amazon GameLift Streams has
   * provisioned in a stream group that can respond immediately to stream requests.
   * It includes resources that are currently streaming and resources that are idle
   * and ready to respond to stream requests. When target-idle capacity is
   * configured, the idle resources include the capacity buffer maintained beyond
   * ongoing sessions. You pay for this capacity whether it's in use or not. After
   * making changes to capacity, it can take a few minutes for the allocated capacity
   * count to reflect the change while compute resources are allocated or
   * deallocated. Similarly, when allocated on-demand capacity is no longer needed,
   * it can take a few minutes for Amazon GameLift Streams to spin down the allocated
   * capacity.</p>
   */
  inline int GetAllocatedCapacity() const { return m_allocatedCapacity; }
  inline bool AllocatedCapacityHasBeenSet() const { return m_allocatedCapacityHasBeenSet; }
  inline void SetAllocatedCapacity(int value) {
    m_allocatedCapacityHasBeenSet = true;
    m_allocatedCapacity = value;
  }
  inline LocationState& WithAllocatedCapacity(int value) {
    SetAllocatedCapacity(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>This value is the amount of allocated capacity that is not currently
   * streaming. It represents the stream group's ability to respond immediately to
   * new stream requests with near-instant startup time.</p>
   */
  inline int GetIdleCapacity() const { return m_idleCapacity; }
  inline bool IdleCapacityHasBeenSet() const { return m_idleCapacityHasBeenSet; }
  inline void SetIdleCapacity(int value) {
    m_idleCapacityHasBeenSet = true;
    m_idleCapacity = value;
  }
  inline LocationState& WithIdleCapacity(int value) {
    SetIdleCapacity(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_locationName;

  StreamGroupLocationStatus m_status{StreamGroupLocationStatus::NOT_SET};

  int m_alwaysOnCapacity{0};

  int m_onDemandCapacity{0};

  int m_targetIdleCapacity{0};

  int m_maximumCapacity{0};

  int m_requestedCapacity{0};

  int m_allocatedCapacity{0};

  int m_idleCapacity{0};
  bool m_locationNameHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_alwaysOnCapacityHasBeenSet = false;
  bool m_onDemandCapacityHasBeenSet = false;
  bool m_targetIdleCapacityHasBeenSet = false;
  bool m_maximumCapacityHasBeenSet = false;
  bool m_requestedCapacityHasBeenSet = false;
  bool m_allocatedCapacityHasBeenSet = false;
  bool m_idleCapacityHasBeenSet = false;
};

}  // namespace Model
}  // namespace GameLiftStreams
}  // namespace Aws

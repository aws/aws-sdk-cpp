/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gameliftstreams/GameLiftStreams_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/gameliftstreams/model/StreamGroupLocationStatus.h>
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
namespace GameLiftStreams
{
namespace Model
{

  /**
   * <p>Represents a location and its corresponding stream capacity and
   * status.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/gameliftstreams-2018-05-10/LocationState">AWS
   * API Reference</a></p>
   */
  class LocationState
  {
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
    template<typename LocationNameT = Aws::String>
    void SetLocationName(LocationNameT&& value) { m_locationNameHasBeenSet = true; m_locationName = std::forward<LocationNameT>(value); }
    template<typename LocationNameT = Aws::String>
    LocationState& WithLocationName(LocationNameT&& value) { SetLocationName(std::forward<LocationNameT>(value)); return *this;}
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
    inline void SetStatus(StreamGroupLocationStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline LocationState& WithStatus(StreamGroupLocationStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The streaming capacity that is allocated and ready to handle stream requests
     * without delay. You pay for this capacity whether it's in use or not. Best for
     * quickest time from streaming request to streaming session. Default is 1 when
     * creating a stream group or adding a location.</p>
     */
    inline int GetAlwaysOnCapacity() const { return m_alwaysOnCapacity; }
    inline bool AlwaysOnCapacityHasBeenSet() const { return m_alwaysOnCapacityHasBeenSet; }
    inline void SetAlwaysOnCapacity(int value) { m_alwaysOnCapacityHasBeenSet = true; m_alwaysOnCapacity = value; }
    inline LocationState& WithAlwaysOnCapacity(int value) { SetAlwaysOnCapacity(value); return *this;}
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
    inline void SetOnDemandCapacity(int value) { m_onDemandCapacityHasBeenSet = true; m_onDemandCapacity = value; }
    inline LocationState& WithOnDemandCapacity(int value) { SetOnDemandCapacity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>This value is the total number of compute resources that you request for a
     * stream group. This includes resources that Amazon GameLift Streams has either
     * already provisioned or is working to provision. You request capacity for each
     * location in a stream group.</p>
     */
    inline int GetRequestedCapacity() const { return m_requestedCapacity; }
    inline bool RequestedCapacityHasBeenSet() const { return m_requestedCapacityHasBeenSet; }
    inline void SetRequestedCapacity(int value) { m_requestedCapacityHasBeenSet = true; m_requestedCapacity = value; }
    inline LocationState& WithRequestedCapacity(int value) { SetRequestedCapacity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>This value is the number of compute resources that a stream group has
     * provisioned and is ready to stream. It includes resources that are currently
     * streaming and resources that are idle and ready to respond to stream
     * requests.</p>
     */
    inline int GetAllocatedCapacity() const { return m_allocatedCapacity; }
    inline bool AllocatedCapacityHasBeenSet() const { return m_allocatedCapacityHasBeenSet; }
    inline void SetAllocatedCapacity(int value) { m_allocatedCapacityHasBeenSet = true; m_allocatedCapacity = value; }
    inline LocationState& WithAllocatedCapacity(int value) { SetAllocatedCapacity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>This value is the amount of allocated capacity that is not currently
     * streaming. It represents the stream group's availability to respond to new
     * stream requests, but not including on-demand capacity.</p>
     */
    inline int GetIdleCapacity() const { return m_idleCapacity; }
    inline bool IdleCapacityHasBeenSet() const { return m_idleCapacityHasBeenSet; }
    inline void SetIdleCapacity(int value) { m_idleCapacityHasBeenSet = true; m_idleCapacity = value; }
    inline LocationState& WithIdleCapacity(int value) { SetIdleCapacity(value); return *this;}
    ///@}
  private:

    Aws::String m_locationName;
    bool m_locationNameHasBeenSet = false;

    StreamGroupLocationStatus m_status{StreamGroupLocationStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    int m_alwaysOnCapacity{0};
    bool m_alwaysOnCapacityHasBeenSet = false;

    int m_onDemandCapacity{0};
    bool m_onDemandCapacityHasBeenSet = false;

    int m_requestedCapacity{0};
    bool m_requestedCapacityHasBeenSet = false;

    int m_allocatedCapacity{0};
    bool m_allocatedCapacityHasBeenSet = false;

    int m_idleCapacity{0};
    bool m_idleCapacityHasBeenSet = false;
  };

} // namespace Model
} // namespace GameLiftStreams
} // namespace Aws

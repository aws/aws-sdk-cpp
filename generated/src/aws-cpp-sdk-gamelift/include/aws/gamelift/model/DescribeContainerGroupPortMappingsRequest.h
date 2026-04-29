/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/gamelift/GameLiftRequest.h>
#include <aws/gamelift/GameLift_EXPORTS.h>
#include <aws/gamelift/model/ContainerGroupType.h>

#include <utility>

namespace Aws {
namespace GameLift {
namespace Model {

/**
 */
class DescribeContainerGroupPortMappingsRequest : public GameLiftRequest {
 public:
  AWS_GAMELIFT_API DescribeContainerGroupPortMappingsRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "DescribeContainerGroupPortMappings"; }

  AWS_GAMELIFT_API Aws::String SerializePayload() const override;

  AWS_GAMELIFT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>A unique identifier for the container fleet. You can use either the fleet ID
   * or ARN value.</p>
   */
  inline const Aws::String& GetFleetId() const { return m_fleetId; }
  inline bool FleetIdHasBeenSet() const { return m_fleetIdHasBeenSet; }
  template <typename FleetIdT = Aws::String>
  void SetFleetId(FleetIdT&& value) {
    m_fleetIdHasBeenSet = true;
    m_fleetId = std::forward<FleetIdT>(value);
  }
  template <typename FleetIdT = Aws::String>
  DescribeContainerGroupPortMappingsRequest& WithFleetId(FleetIdT&& value) {
    SetFleetId(std::forward<FleetIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of container group to retrieve port mappings for.</p> <ul> <li> <p>
   * <code>GAME_SERVER</code> -- Get port mappings for a game server container
   * group.</p> </li> <li> <p> <code>PER_INSTANCE</code> -- Get port mappings for a
   * per-instance container group.</p> </li> </ul>
   */
  inline ContainerGroupType GetContainerGroupType() const { return m_containerGroupType; }
  inline bool ContainerGroupTypeHasBeenSet() const { return m_containerGroupTypeHasBeenSet; }
  inline void SetContainerGroupType(ContainerGroupType value) {
    m_containerGroupTypeHasBeenSet = true;
    m_containerGroupType = value;
  }
  inline DescribeContainerGroupPortMappingsRequest& WithContainerGroupType(ContainerGroupType value) {
    SetContainerGroupType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A unique identifier for the compute resource for which to retrieve port
   * mappings. For a container fleet, a compute represents a game server container
   * group running on a fleet instance. You can use either the compute name or ARN
   * value.</p> <p>When <code>ContainerGroupType</code> is <code>GAME_SERVER</code>,
   * this parameter is required.</p> <p>When <code>ContainerGroupType</code> is
   * <code>PER_INSTANCE</code>, do not provide this parameter. If you provide a
   * compute name with <code>PER_INSTANCE</code>, the request fails with an
   * <code>InvalidRequestException</code>.</p>
   */
  inline const Aws::String& GetComputeName() const { return m_computeName; }
  inline bool ComputeNameHasBeenSet() const { return m_computeNameHasBeenSet; }
  template <typename ComputeNameT = Aws::String>
  void SetComputeName(ComputeNameT&& value) {
    m_computeNameHasBeenSet = true;
    m_computeName = std::forward<ComputeNameT>(value);
  }
  template <typename ComputeNameT = Aws::String>
  DescribeContainerGroupPortMappingsRequest& WithComputeName(ComputeNameT&& value) {
    SetComputeName(std::forward<ComputeNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A unique identifier for the fleet instance to retrieve port mappings for.</p>
   * <p>When <code>ContainerGroupType</code> is <code>PER_INSTANCE</code>, this
   * parameter is required.</p> <p>When <code>ContainerGroupType</code> is
   * <code>GAME_SERVER</code>, this parameter is optional. If you provide an instance
   * ID, it must match the instance that's running the specified compute. If the
   * instance ID doesn't match, the request fails with an
   * <code>InvalidRequestException</code>.</p>
   */
  inline const Aws::String& GetInstanceId() const { return m_instanceId; }
  inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }
  template <typename InstanceIdT = Aws::String>
  void SetInstanceId(InstanceIdT&& value) {
    m_instanceIdHasBeenSet = true;
    m_instanceId = std::forward<InstanceIdT>(value);
  }
  template <typename InstanceIdT = Aws::String>
  DescribeContainerGroupPortMappingsRequest& WithInstanceId(InstanceIdT&& value) {
    SetInstanceId(std::forward<InstanceIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A container name to filter the results. When provided, the operation returns
   * port mappings for the specified container only. If no container with the
   * specified name exists in the container group, the request fails with a
   * <code>NotFoundException</code>.</p> <p>If not provided, the operation returns
   * port mappings for all containers in the container group.</p>
   */
  inline const Aws::String& GetContainerName() const { return m_containerName; }
  inline bool ContainerNameHasBeenSet() const { return m_containerNameHasBeenSet; }
  template <typename ContainerNameT = Aws::String>
  void SetContainerName(ContainerNameT&& value) {
    m_containerNameHasBeenSet = true;
    m_containerName = std::forward<ContainerNameT>(value);
  }
  template <typename ContainerNameT = Aws::String>
  DescribeContainerGroupPortMappingsRequest& WithContainerName(ContainerNameT&& value) {
    SetContainerName(std::forward<ContainerNameT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_fleetId;

  ContainerGroupType m_containerGroupType{ContainerGroupType::NOT_SET};

  Aws::String m_computeName;

  Aws::String m_instanceId;

  Aws::String m_containerName;
  bool m_fleetIdHasBeenSet = false;
  bool m_containerGroupTypeHasBeenSet = false;
  bool m_computeNameHasBeenSet = false;
  bool m_instanceIdHasBeenSet = false;
  bool m_containerNameHasBeenSet = false;
};

}  // namespace Model
}  // namespace GameLift
}  // namespace Aws

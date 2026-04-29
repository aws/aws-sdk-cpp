/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/gamelift/GameLift_EXPORTS.h>
#include <aws/gamelift/model/ContainerGroupPortMapping.h>
#include <aws/gamelift/model/ContainerGroupType.h>

#include <utility>
namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Cbor {
class CborValue;
}  // namespace Cbor
}  // namespace Utils
namespace GameLift {
namespace Model {
class DescribeContainerGroupPortMappingsResult {
 public:
  AWS_GAMELIFT_API DescribeContainerGroupPortMappingsResult() = default;
  AWS_GAMELIFT_API DescribeContainerGroupPortMappingsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Cbor::CborValue>& result);
  AWS_GAMELIFT_API DescribeContainerGroupPortMappingsResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Cbor::CborValue>& result);

  ///@{
  /**
   * <p>A unique identifier for the container fleet.</p>
   */
  inline const Aws::String& GetFleetId() const { return m_fleetId; }
  template <typename FleetIdT = Aws::String>
  void SetFleetId(FleetIdT&& value) {
    m_fleetIdHasBeenSet = true;
    m_fleetId = std::forward<FleetIdT>(value);
  }
  template <typename FleetIdT = Aws::String>
  DescribeContainerGroupPortMappingsResult& WithFleetId(FleetIdT&& value) {
    SetFleetId(std::forward<FleetIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The location of the fleet instance, expressed as an Amazon Web Services
   * Region code, such as <code>us-west-2</code>.</p>
   */
  inline const Aws::String& GetLocation() const { return m_location; }
  template <typename LocationT = Aws::String>
  void SetLocation(LocationT&& value) {
    m_locationHasBeenSet = true;
    m_location = std::forward<LocationT>(value);
  }
  template <typename LocationT = Aws::String>
  DescribeContainerGroupPortMappingsResult& WithLocation(LocationT&& value) {
    SetLocation(std::forward<LocationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (<a
   * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/s3-arn-format.html">ARN</a>)
   * that is assigned to the container group definition. The ARN value also
   * identifies the specific container group definition version in use.</p>
   */
  inline const Aws::String& GetContainerGroupDefinitionArn() const { return m_containerGroupDefinitionArn; }
  template <typename ContainerGroupDefinitionArnT = Aws::String>
  void SetContainerGroupDefinitionArn(ContainerGroupDefinitionArnT&& value) {
    m_containerGroupDefinitionArnHasBeenSet = true;
    m_containerGroupDefinitionArn = std::forward<ContainerGroupDefinitionArnT>(value);
  }
  template <typename ContainerGroupDefinitionArnT = Aws::String>
  DescribeContainerGroupPortMappingsResult& WithContainerGroupDefinitionArn(ContainerGroupDefinitionArnT&& value) {
    SetContainerGroupDefinitionArn(std::forward<ContainerGroupDefinitionArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of container group that was specified in the request. Valid values
   * are <code>GAME_SERVER</code> or <code>PER_INSTANCE</code>.</p>
   */
  inline ContainerGroupType GetContainerGroupType() const { return m_containerGroupType; }
  inline void SetContainerGroupType(ContainerGroupType value) {
    m_containerGroupTypeHasBeenSet = true;
    m_containerGroupType = value;
  }
  inline DescribeContainerGroupPortMappingsResult& WithContainerGroupType(ContainerGroupType value) {
    SetContainerGroupType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A unique identifier for the compute resource running the game server
   * container group. Returned when <code>ContainerGroupType</code> is
   * <code>GAME_SERVER</code>.</p>
   */
  inline const Aws::String& GetComputeName() const { return m_computeName; }
  template <typename ComputeNameT = Aws::String>
  void SetComputeName(ComputeNameT&& value) {
    m_computeNameHasBeenSet = true;
    m_computeName = std::forward<ComputeNameT>(value);
  }
  template <typename ComputeNameT = Aws::String>
  DescribeContainerGroupPortMappingsResult& WithComputeName(ComputeNameT&& value) {
    SetComputeName(std::forward<ComputeNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A unique identifier for the fleet instance. For <code>GAME_SERVER</code>
   * requests, this is the instance running the specified compute. For
   * <code>PER_INSTANCE</code> requests, this is the instance specified in the
   * request.</p>
   */
  inline const Aws::String& GetInstanceId() const { return m_instanceId; }
  template <typename InstanceIdT = Aws::String>
  void SetInstanceId(InstanceIdT&& value) {
    m_instanceIdHasBeenSet = true;
    m_instanceId = std::forward<InstanceIdT>(value);
  }
  template <typename InstanceIdT = Aws::String>
  DescribeContainerGroupPortMappingsResult& WithInstanceId(InstanceIdT&& value) {
    SetInstanceId(std::forward<InstanceIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of <code>ContainerGroupPortMapping</code> objects that describe the
   * port mappings for each container in the container group.</p>
   */
  inline const Aws::Vector<ContainerGroupPortMapping>& GetContainerGroupPortMappings() const { return m_containerGroupPortMappings; }
  template <typename ContainerGroupPortMappingsT = Aws::Vector<ContainerGroupPortMapping>>
  void SetContainerGroupPortMappings(ContainerGroupPortMappingsT&& value) {
    m_containerGroupPortMappingsHasBeenSet = true;
    m_containerGroupPortMappings = std::forward<ContainerGroupPortMappingsT>(value);
  }
  template <typename ContainerGroupPortMappingsT = Aws::Vector<ContainerGroupPortMapping>>
  DescribeContainerGroupPortMappingsResult& WithContainerGroupPortMappings(ContainerGroupPortMappingsT&& value) {
    SetContainerGroupPortMappings(std::forward<ContainerGroupPortMappingsT>(value));
    return *this;
  }
  template <typename ContainerGroupPortMappingsT = ContainerGroupPortMapping>
  DescribeContainerGroupPortMappingsResult& AddContainerGroupPortMappings(ContainerGroupPortMappingsT&& value) {
    m_containerGroupPortMappingsHasBeenSet = true;
    m_containerGroupPortMappings.emplace_back(std::forward<ContainerGroupPortMappingsT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetRequestId() const { return m_requestId; }
  template <typename RequestIdT = Aws::String>
  void SetRequestId(RequestIdT&& value) {
    m_requestIdHasBeenSet = true;
    m_requestId = std::forward<RequestIdT>(value);
  }
  template <typename RequestIdT = Aws::String>
  DescribeContainerGroupPortMappingsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_fleetId;

  Aws::String m_location;

  Aws::String m_containerGroupDefinitionArn;

  ContainerGroupType m_containerGroupType{ContainerGroupType::NOT_SET};

  Aws::String m_computeName;

  Aws::String m_instanceId;

  Aws::Vector<ContainerGroupPortMapping> m_containerGroupPortMappings;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_fleetIdHasBeenSet = false;
  bool m_locationHasBeenSet = false;
  bool m_containerGroupDefinitionArnHasBeenSet = false;
  bool m_containerGroupTypeHasBeenSet = false;
  bool m_computeNameHasBeenSet = false;
  bool m_instanceIdHasBeenSet = false;
  bool m_containerGroupPortMappingsHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace GameLift
}  // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/gamelift/GameLift_EXPORTS.h>
#include <aws/gamelift/model/ContainerPortMapping.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Cbor {
class CborValue;
}  // namespace Cbor
}  // namespace Utils
namespace GameLift {
namespace Model {

/**
 * <p>Describes the port mappings for a single container in a container group. Each
 * mapping shows how a container port maps to a connection port on the fleet
 * instance.</p> <p> <b>Returned by:</b> <a
 * href="https://docs.aws.amazon.com/gamelift/latest/apireference/API_DescribeContainerGroupPortMappings.html">DescribeContainerGroupPortMappings</a>
 * </p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/ContainerGroupPortMapping">AWS
 * API Reference</a></p>
 */
class ContainerGroupPortMapping {
 public:
  AWS_GAMELIFT_API ContainerGroupPortMapping() = default;
  AWS_GAMELIFT_API ContainerGroupPortMapping(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_GAMELIFT_API ContainerGroupPortMapping& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_GAMELIFT_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>The name of the container, as defined in the container group definition.</p>
   */
  inline const Aws::String& GetContainerName() const { return m_containerName; }
  inline bool ContainerNameHasBeenSet() const { return m_containerNameHasBeenSet; }
  template <typename ContainerNameT = Aws::String>
  void SetContainerName(ContainerNameT&& value) {
    m_containerNameHasBeenSet = true;
    m_containerName = std::forward<ContainerNameT>(value);
  }
  template <typename ContainerNameT = Aws::String>
  ContainerGroupPortMapping& WithContainerName(ContainerNameT&& value) {
    SetContainerName(std::forward<ContainerNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The runtime ID for the container that's running in a compute. This value is
   * unique within the compute.</p>
   */
  inline const Aws::String& GetContainerRuntimeId() const { return m_containerRuntimeId; }
  inline bool ContainerRuntimeIdHasBeenSet() const { return m_containerRuntimeIdHasBeenSet; }
  template <typename ContainerRuntimeIdT = Aws::String>
  void SetContainerRuntimeId(ContainerRuntimeIdT&& value) {
    m_containerRuntimeIdHasBeenSet = true;
    m_containerRuntimeId = std::forward<ContainerRuntimeIdT>(value);
  }
  template <typename ContainerRuntimeIdT = Aws::String>
  ContainerGroupPortMapping& WithContainerRuntimeId(ContainerRuntimeIdT&& value) {
    SetContainerRuntimeId(std::forward<ContainerRuntimeIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of <code>ContainerPortMapping</code> objects that describe the port
   * mappings for this container.</p>
   */
  inline const Aws::Vector<ContainerPortMapping>& GetContainerPortMappings() const { return m_containerPortMappings; }
  inline bool ContainerPortMappingsHasBeenSet() const { return m_containerPortMappingsHasBeenSet; }
  template <typename ContainerPortMappingsT = Aws::Vector<ContainerPortMapping>>
  void SetContainerPortMappings(ContainerPortMappingsT&& value) {
    m_containerPortMappingsHasBeenSet = true;
    m_containerPortMappings = std::forward<ContainerPortMappingsT>(value);
  }
  template <typename ContainerPortMappingsT = Aws::Vector<ContainerPortMapping>>
  ContainerGroupPortMapping& WithContainerPortMappings(ContainerPortMappingsT&& value) {
    SetContainerPortMappings(std::forward<ContainerPortMappingsT>(value));
    return *this;
  }
  template <typename ContainerPortMappingsT = ContainerPortMapping>
  ContainerGroupPortMapping& AddContainerPortMappings(ContainerPortMappingsT&& value) {
    m_containerPortMappingsHasBeenSet = true;
    m_containerPortMappings.emplace_back(std::forward<ContainerPortMappingsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_containerName;

  Aws::String m_containerRuntimeId;

  Aws::Vector<ContainerPortMapping> m_containerPortMappings;
  bool m_containerNameHasBeenSet = false;
  bool m_containerRuntimeIdHasBeenSet = false;
  bool m_containerPortMappingsHasBeenSet = false;
};

}  // namespace Model
}  // namespace GameLift
}  // namespace Aws

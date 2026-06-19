/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/gamelift/GameLift_EXPORTS.h>
#include <aws/gamelift/model/LinuxCapability.h>

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
 * <p>A set of Linux capabilities that are added to a container's default Docker
 * configuration for a container defined in the <a
 * href="https://docs.aws.amazon.com/gamelift/latest/apireference/API_ContainerGroupDefinition.html">ContainerGroupDefinition</a>.
 * For more detailed information about these Linux capabilities, see the <a
 * href="https://man7.org/linux/man-pages/man7/capabilities.7.html">capabilities(7)</a>
 * Linux manual page.</p> <p> <b>Modifying capabilities on an existing
 * container:</b> To remove a capability, update the <code>Include</code> list with
 * only the needed capabilities. To revert back to default capabilities, omit
 * <code>LinuxCapabilities</code> within the ContainerDefinition.</p> <p> <b>Part
 * of: </b> <a
 * href="https://docs.aws.amazon.com/gamelift/latest/apireference/API_GameServerContainerDefinition.html">GameServerContainerDefinition</a>,
 * <a
 * href="https://docs.aws.amazon.com/gamelift/latest/apireference/API_GameServerContainerDefinitionInput.html">GameServerContainerDefinitionInput</a>,
 * <a
 * href="https://docs.aws.amazon.com/gamelift/latest/apireference/API_SupportContainerDefinition.html">SupportContainerDefinition</a>,
 * <a
 * href="https://docs.aws.amazon.com/gamelift/latest/apireference/API_SupportContainerDefinitionInput.html">SupportContainerDefinitionInput</a>
 * </p> <p> <b>Returned by: </b> <a
 * href="https://docs.aws.amazon.com/gamelift/latest/apireference/API_CreateContainerGroupDefinition.html">CreateContainerGroupDefinition</a>,
 * <a
 * href="https://docs.aws.amazon.com/gamelift/latest/apireference/API_DescribeContainerGroupDefinition.html">DescribeContainerGroupDefinition</a>,
 * <a
 * href="https://docs.aws.amazon.com/gamelift/latest/apireference/API_ListContainerGroupDefinitions.html">ListContainerGroupDefinitions</a>,
 * <a
 * href="https://docs.aws.amazon.com/gamelift/latest/apireference/API_ListContainerGroupDefinitionVersions.html">ListContainerGroupDefinitionVersions</a>,
 * <a
 * href="https://docs.aws.amazon.com/gamelift/latest/apireference/API_UpdateContainerGroupDefinition.html">UpdateContainerGroupDefinition</a>
 * </p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/LinuxCapabilities">AWS
 * API Reference</a></p>
 */
class LinuxCapabilities {
 public:
  AWS_GAMELIFT_API LinuxCapabilities() = default;
  AWS_GAMELIFT_API LinuxCapabilities(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_GAMELIFT_API LinuxCapabilities& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_GAMELIFT_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>The list of Linux capabilities to add to the container's default
   * configuration. Specify each capability as a string from the set of supported
   * capability names (for example, <code>NET_BIND_SERVICE</code> or
   * <code>SYS_PTRACE</code>).</p>
   */
  inline const Aws::Vector<LinuxCapability>& GetInclude() const { return m_include; }
  inline bool IncludeHasBeenSet() const { return m_includeHasBeenSet; }
  template <typename IncludeT = Aws::Vector<LinuxCapability>>
  void SetInclude(IncludeT&& value) {
    m_includeHasBeenSet = true;
    m_include = std::forward<IncludeT>(value);
  }
  template <typename IncludeT = Aws::Vector<LinuxCapability>>
  LinuxCapabilities& WithInclude(IncludeT&& value) {
    SetInclude(std::forward<IncludeT>(value));
    return *this;
  }
  inline LinuxCapabilities& AddInclude(LinuxCapability value) {
    m_includeHasBeenSet = true;
    m_include.push_back(value);
    return *this;
  }
  ///@}
 private:
  Aws::Vector<LinuxCapability> m_include;
  bool m_includeHasBeenSet = false;
};

}  // namespace Model
}  // namespace GameLift
}  // namespace Aws

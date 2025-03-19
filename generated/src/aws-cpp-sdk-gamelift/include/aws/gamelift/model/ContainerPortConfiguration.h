/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamelift/GameLift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/gamelift/model/ContainerPortRange.h>
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
namespace GameLift
{
namespace Model
{

  /**
   * <p>A set of port ranges that can be opened on the container. A process that's
   * running in the container can bind to a port number, making it accessible to
   * inbound traffic. Container ports map to a container fleet's connection ports.
   * </p> <p> <b>Part of:</b> <a
   * href="https://docs.aws.amazon.com/gamelift/latest/apireference/API_GameServerContainerDefinition.html">GameServerContainerDefinition</a>,
   * <a
   * href="https://docs.aws.amazon.com/gamelift/latest/apireference/API_GameServerContainerDefinitionInput.html">GameServerContainerDefinitionInput</a>,
   * <a
   * href="https://docs.aws.amazon.com/gamelift/latest/apireference/API_SupportContainerDefinition.html">SupportContainerDefinition</a>,
   * <a
   * href="https://docs.aws.amazon.com/gamelift/latest/apireference/API_SupportContainerDefinitionInput.html">SupportContainerDefinitionInput</a>
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/ContainerPortConfiguration">AWS
   * API Reference</a></p>
   */
  class ContainerPortConfiguration
  {
  public:
    AWS_GAMELIFT_API ContainerPortConfiguration() = default;
    AWS_GAMELIFT_API ContainerPortConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_GAMELIFT_API ContainerPortConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GAMELIFT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A set of one or more container port number ranges. The ranges can't overlap.
     * </p>
     */
    inline const Aws::Vector<ContainerPortRange>& GetContainerPortRanges() const { return m_containerPortRanges; }
    inline bool ContainerPortRangesHasBeenSet() const { return m_containerPortRangesHasBeenSet; }
    template<typename ContainerPortRangesT = Aws::Vector<ContainerPortRange>>
    void SetContainerPortRanges(ContainerPortRangesT&& value) { m_containerPortRangesHasBeenSet = true; m_containerPortRanges = std::forward<ContainerPortRangesT>(value); }
    template<typename ContainerPortRangesT = Aws::Vector<ContainerPortRange>>
    ContainerPortConfiguration& WithContainerPortRanges(ContainerPortRangesT&& value) { SetContainerPortRanges(std::forward<ContainerPortRangesT>(value)); return *this;}
    template<typename ContainerPortRangesT = ContainerPortRange>
    ContainerPortConfiguration& AddContainerPortRanges(ContainerPortRangesT&& value) { m_containerPortRangesHasBeenSet = true; m_containerPortRanges.emplace_back(std::forward<ContainerPortRangesT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<ContainerPortRange> m_containerPortRanges;
    bool m_containerPortRangesHasBeenSet = false;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws

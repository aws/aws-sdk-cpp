/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamelift/GameLift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>A unique identifier for a container in a compute on a managed container fleet
   * instance. This information makes it possible to remotely connect to a specific
   * container on a fleet instance.</p> <p> <b>Related to:</b> <a
   * href="https://docs.aws.amazon.com/gamelift/latest/apireference/API_ContainerAttribute.html">ContainerAttribute</a>
   * </p> <p> <b>Use with: </b> <a
   * href="https://docs.aws.amazon.com/gamelift/latest/apireference/API_GetComputeAccess.html">GetComputeAccess</a>
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/ContainerIdentifier">AWS
   * API Reference</a></p>
   */
  class ContainerIdentifier
  {
  public:
    AWS_GAMELIFT_API ContainerIdentifier() = default;
    AWS_GAMELIFT_API ContainerIdentifier(Aws::Utils::Json::JsonView jsonValue);
    AWS_GAMELIFT_API ContainerIdentifier& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GAMELIFT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The identifier for a container that's running in a compute. </p>
     */
    inline const Aws::String& GetContainerName() const { return m_containerName; }
    inline bool ContainerNameHasBeenSet() const { return m_containerNameHasBeenSet; }
    template<typename ContainerNameT = Aws::String>
    void SetContainerName(ContainerNameT&& value) { m_containerNameHasBeenSet = true; m_containerName = std::forward<ContainerNameT>(value); }
    template<typename ContainerNameT = Aws::String>
    ContainerIdentifier& WithContainerName(ContainerNameT&& value) { SetContainerName(std::forward<ContainerNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The runtime ID for the container that's running in a compute. This value is
     * unique within the compute. It is returned as a <code>ContainerAttribute</code>
     * value in a <code>Compute</code> object.</p>
     */
    inline const Aws::String& GetContainerRuntimeId() const { return m_containerRuntimeId; }
    inline bool ContainerRuntimeIdHasBeenSet() const { return m_containerRuntimeIdHasBeenSet; }
    template<typename ContainerRuntimeIdT = Aws::String>
    void SetContainerRuntimeId(ContainerRuntimeIdT&& value) { m_containerRuntimeIdHasBeenSet = true; m_containerRuntimeId = std::forward<ContainerRuntimeIdT>(value); }
    template<typename ContainerRuntimeIdT = Aws::String>
    ContainerIdentifier& WithContainerRuntimeId(ContainerRuntimeIdT&& value) { SetContainerRuntimeId(std::forward<ContainerRuntimeIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_containerName;
    bool m_containerNameHasBeenSet = false;

    Aws::String m_containerRuntimeId;
    bool m_containerRuntimeIdHasBeenSet = false;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws

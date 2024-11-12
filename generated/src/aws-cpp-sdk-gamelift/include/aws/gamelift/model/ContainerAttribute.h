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
   * <p>A unique identifier for a container in a container fleet compute. </p> <p>
   * <b>Returned by:</b> <a>DescribeCompute</a> </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/ContainerAttribute">AWS
   * API Reference</a></p>
   */
  class ContainerAttribute
  {
  public:
    AWS_GAMELIFT_API ContainerAttribute();
    AWS_GAMELIFT_API ContainerAttribute(Aws::Utils::Json::JsonView jsonValue);
    AWS_GAMELIFT_API ContainerAttribute& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GAMELIFT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The identifier for a container that's running in a compute. </p>
     */
    inline const Aws::String& GetContainerName() const{ return m_containerName; }
    inline bool ContainerNameHasBeenSet() const { return m_containerNameHasBeenSet; }
    inline void SetContainerName(const Aws::String& value) { m_containerNameHasBeenSet = true; m_containerName = value; }
    inline void SetContainerName(Aws::String&& value) { m_containerNameHasBeenSet = true; m_containerName = std::move(value); }
    inline void SetContainerName(const char* value) { m_containerNameHasBeenSet = true; m_containerName.assign(value); }
    inline ContainerAttribute& WithContainerName(const Aws::String& value) { SetContainerName(value); return *this;}
    inline ContainerAttribute& WithContainerName(Aws::String&& value) { SetContainerName(std::move(value)); return *this;}
    inline ContainerAttribute& WithContainerName(const char* value) { SetContainerName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The runtime ID for the container that's running in a compute. This value is
     * unique within the compute.</p>
     */
    inline const Aws::String& GetContainerRuntimeId() const{ return m_containerRuntimeId; }
    inline bool ContainerRuntimeIdHasBeenSet() const { return m_containerRuntimeIdHasBeenSet; }
    inline void SetContainerRuntimeId(const Aws::String& value) { m_containerRuntimeIdHasBeenSet = true; m_containerRuntimeId = value; }
    inline void SetContainerRuntimeId(Aws::String&& value) { m_containerRuntimeIdHasBeenSet = true; m_containerRuntimeId = std::move(value); }
    inline void SetContainerRuntimeId(const char* value) { m_containerRuntimeIdHasBeenSet = true; m_containerRuntimeId.assign(value); }
    inline ContainerAttribute& WithContainerRuntimeId(const Aws::String& value) { SetContainerRuntimeId(value); return *this;}
    inline ContainerAttribute& WithContainerRuntimeId(Aws::String&& value) { SetContainerRuntimeId(std::move(value)); return *this;}
    inline ContainerAttribute& WithContainerRuntimeId(const char* value) { SetContainerRuntimeId(value); return *this;}
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

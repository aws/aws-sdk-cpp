/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecs/ECS_EXPORTS.h>
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
namespace ECS
{
namespace Model
{

  /**
   * <p>The details about the container image a service revision uses. </p> <p>To
   * ensure that all tasks in a service use the same container image, Amazon ECS
   * resolves container image names and any image tags specified in the task
   * definition to container image digests. </p> <p>After the container image digest
   * has been established, Amazon ECS uses the digest to start any other desired
   * tasks, and for any future service and service revision updates. This leads to
   * all tasks in a service always running identical container images, resulting in
   * version consistency for your software. For more information, see <a
   * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/deployment-type-ecs.html#deployment-container-image-stability">Container
   * image resolution</a> in the Amazon ECS Developer Guide.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/ContainerImage">AWS
   * API Reference</a></p>
   */
  class ContainerImage
  {
  public:
    AWS_ECS_API ContainerImage() = default;
    AWS_ECS_API ContainerImage(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECS_API ContainerImage& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the container.</p>
     */
    inline const Aws::String& GetContainerName() const { return m_containerName; }
    inline bool ContainerNameHasBeenSet() const { return m_containerNameHasBeenSet; }
    template<typename ContainerNameT = Aws::String>
    void SetContainerName(ContainerNameT&& value) { m_containerNameHasBeenSet = true; m_containerName = std::forward<ContainerNameT>(value); }
    template<typename ContainerNameT = Aws::String>
    ContainerImage& WithContainerName(ContainerNameT&& value) { SetContainerName(std::forward<ContainerNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The container image digest.</p>
     */
    inline const Aws::String& GetImageDigest() const { return m_imageDigest; }
    inline bool ImageDigestHasBeenSet() const { return m_imageDigestHasBeenSet; }
    template<typename ImageDigestT = Aws::String>
    void SetImageDigest(ImageDigestT&& value) { m_imageDigestHasBeenSet = true; m_imageDigest = std::forward<ImageDigestT>(value); }
    template<typename ImageDigestT = Aws::String>
    ContainerImage& WithImageDigest(ImageDigestT&& value) { SetImageDigest(std::forward<ImageDigestT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The container image. </p>
     */
    inline const Aws::String& GetImage() const { return m_image; }
    inline bool ImageHasBeenSet() const { return m_imageHasBeenSet; }
    template<typename ImageT = Aws::String>
    void SetImage(ImageT&& value) { m_imageHasBeenSet = true; m_image = std::forward<ImageT>(value); }
    template<typename ImageT = Aws::String>
    ContainerImage& WithImage(ImageT&& value) { SetImage(std::forward<ImageT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_containerName;
    bool m_containerNameHasBeenSet = false;

    Aws::String m_imageDigest;
    bool m_imageDigestHasBeenSet = false;

    Aws::String m_image;
    bool m_imageHasBeenSet = false;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws

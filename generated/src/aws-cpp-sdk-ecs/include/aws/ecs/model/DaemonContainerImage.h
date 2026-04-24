/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ecs/ECS_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace ECS {
namespace Model {

/**
 * <p>The details about the container image a daemon revision uses.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/DaemonContainerImage">AWS
 * API Reference</a></p>
 */
class DaemonContainerImage {
 public:
  AWS_ECS_API DaemonContainerImage() = default;
  AWS_ECS_API DaemonContainerImage(Aws::Utils::Json::JsonView jsonValue);
  AWS_ECS_API DaemonContainerImage& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ECS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The name of the container.</p>
   */
  inline const Aws::String& GetContainerName() const { return m_containerName; }
  inline bool ContainerNameHasBeenSet() const { return m_containerNameHasBeenSet; }
  template <typename ContainerNameT = Aws::String>
  void SetContainerName(ContainerNameT&& value) {
    m_containerNameHasBeenSet = true;
    m_containerName = std::forward<ContainerNameT>(value);
  }
  template <typename ContainerNameT = Aws::String>
  DaemonContainerImage& WithContainerName(ContainerNameT&& value) {
    SetContainerName(std::forward<ContainerNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The container image digest.</p>
   */
  inline const Aws::String& GetImageDigest() const { return m_imageDigest; }
  inline bool ImageDigestHasBeenSet() const { return m_imageDigestHasBeenSet; }
  template <typename ImageDigestT = Aws::String>
  void SetImageDigest(ImageDigestT&& value) {
    m_imageDigestHasBeenSet = true;
    m_imageDigest = std::forward<ImageDigestT>(value);
  }
  template <typename ImageDigestT = Aws::String>
  DaemonContainerImage& WithImageDigest(ImageDigestT&& value) {
    SetImageDigest(std::forward<ImageDigestT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The container image.</p>
   */
  inline const Aws::String& GetImage() const { return m_image; }
  inline bool ImageHasBeenSet() const { return m_imageHasBeenSet; }
  template <typename ImageT = Aws::String>
  void SetImage(ImageT&& value) {
    m_imageHasBeenSet = true;
    m_image = std::forward<ImageT>(value);
  }
  template <typename ImageT = Aws::String>
  DaemonContainerImage& WithImage(ImageT&& value) {
    SetImage(std::forward<ImageT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_containerName;

  Aws::String m_imageDigest;

  Aws::String m_image;
  bool m_containerNameHasBeenSet = false;
  bool m_imageDigestHasBeenSet = false;
  bool m_imageHasBeenSet = false;
};

}  // namespace Model
}  // namespace ECS
}  // namespace Aws

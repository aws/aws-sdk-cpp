/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/ecs/model/HostVolumeProperties.h>

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
 * <p>A data volume definition for a daemon task.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/DaemonVolume">AWS
 * API Reference</a></p>
 */
class DaemonVolume {
 public:
  AWS_ECS_API DaemonVolume() = default;
  AWS_ECS_API DaemonVolume(Aws::Utils::Json::JsonView jsonValue);
  AWS_ECS_API DaemonVolume& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ECS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The name of the volume. Up to 255 letters (uppercase and lowercase), numbers,
   * underscores, and hyphens are allowed.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  DaemonVolume& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The contents of the <code>host</code> parameter determine whether your bind
   * mount host volume persists on the host container instance and where it's
   * stored.</p>
   */
  inline const HostVolumeProperties& GetHost() const { return m_host; }
  inline bool HostHasBeenSet() const { return m_hostHasBeenSet; }
  template <typename HostT = HostVolumeProperties>
  void SetHost(HostT&& value) {
    m_hostHasBeenSet = true;
    m_host = std::forward<HostT>(value);
  }
  template <typename HostT = HostVolumeProperties>
  DaemonVolume& WithHost(HostT&& value) {
    SetHost(std::forward<HostT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_name;

  HostVolumeProperties m_host;
  bool m_nameHasBeenSet = false;
  bool m_hostHasBeenSet = false;
};

}  // namespace Model
}  // namespace ECS
}  // namespace Aws

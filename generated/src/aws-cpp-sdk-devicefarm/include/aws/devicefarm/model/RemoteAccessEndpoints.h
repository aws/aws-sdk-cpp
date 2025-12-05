/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/devicefarm/DeviceFarm_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace DeviceFarm {
namespace Model {

/**
 * <p>Represents the remote endpoints for viewing and controlling a device during a
 * remote access session.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/RemoteAccessEndpoints">AWS
 * API Reference</a></p>
 */
class RemoteAccessEndpoints {
 public:
  AWS_DEVICEFARM_API RemoteAccessEndpoints() = default;
  AWS_DEVICEFARM_API RemoteAccessEndpoints(Aws::Utils::Json::JsonView jsonValue);
  AWS_DEVICEFARM_API RemoteAccessEndpoints& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_DEVICEFARM_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>URL for controlling the device using WebDriver-compliant clients, like
   * Appium, during the remote access session.</p>
   */
  inline const Aws::String& GetRemoteDriverEndpoint() const { return m_remoteDriverEndpoint; }
  inline bool RemoteDriverEndpointHasBeenSet() const { return m_remoteDriverEndpointHasBeenSet; }
  template <typename RemoteDriverEndpointT = Aws::String>
  void SetRemoteDriverEndpoint(RemoteDriverEndpointT&& value) {
    m_remoteDriverEndpointHasBeenSet = true;
    m_remoteDriverEndpoint = std::forward<RemoteDriverEndpointT>(value);
  }
  template <typename RemoteDriverEndpointT = Aws::String>
  RemoteAccessEndpoints& WithRemoteDriverEndpoint(RemoteDriverEndpointT&& value) {
    SetRemoteDriverEndpoint(std::forward<RemoteDriverEndpointT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>URL for viewing and interacting with the device during the remote access
   * session.</p>
   */
  inline const Aws::String& GetInteractiveEndpoint() const { return m_interactiveEndpoint; }
  inline bool InteractiveEndpointHasBeenSet() const { return m_interactiveEndpointHasBeenSet; }
  template <typename InteractiveEndpointT = Aws::String>
  void SetInteractiveEndpoint(InteractiveEndpointT&& value) {
    m_interactiveEndpointHasBeenSet = true;
    m_interactiveEndpoint = std::forward<InteractiveEndpointT>(value);
  }
  template <typename InteractiveEndpointT = Aws::String>
  RemoteAccessEndpoints& WithInteractiveEndpoint(InteractiveEndpointT&& value) {
    SetInteractiveEndpoint(std::forward<InteractiveEndpointT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_remoteDriverEndpoint;

  Aws::String m_interactiveEndpoint;
  bool m_remoteDriverEndpointHasBeenSet = false;
  bool m_interactiveEndpointHasBeenSet = false;
};

}  // namespace Model
}  // namespace DeviceFarm
}  // namespace Aws

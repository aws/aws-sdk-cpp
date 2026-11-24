/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/fsx/FSx_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace FSx {
namespace Model {

/**
 * <p>Describes the authentication status of an Amazon FSx for NetApp ONTAP cluster
 * peer relationship.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/ClusterPeerAuthenticationStatus">AWS
 * API Reference</a></p>
 */
class ClusterPeerAuthenticationStatus {
 public:
  AWS_FSX_API ClusterPeerAuthenticationStatus() = default;
  AWS_FSX_API ClusterPeerAuthenticationStatus(Aws::Utils::Json::JsonView jsonValue);
  AWS_FSX_API ClusterPeerAuthenticationStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_FSX_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The authentication state of the cluster peer relationship.</p>
   */
  inline const Aws::String& GetState() const { return m_state; }
  inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
  template <typename StateT = Aws::String>
  void SetState(StateT&& value) {
    m_stateHasBeenSet = true;
    m_state = std::forward<StateT>(value);
  }
  template <typename StateT = Aws::String>
  ClusterPeerAuthenticationStatus& WithState(StateT&& value) {
    SetState(std::forward<StateT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The status of the authentication that the cluster peer relationship is
   * using.</p>
   */
  inline const Aws::String& GetInUse() const { return m_inUse; }
  inline bool InUseHasBeenSet() const { return m_inUseHasBeenSet; }
  template <typename InUseT = Aws::String>
  void SetInUse(InUseT&& value) {
    m_inUseHasBeenSet = true;
    m_inUse = std::forward<InUseT>(value);
  }
  template <typename InUseT = Aws::String>
  ClusterPeerAuthenticationStatus& WithInUse(InUseT&& value) {
    SetInUse(std::forward<InUseT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_state;

  Aws::String m_inUse;
  bool m_stateHasBeenSet = false;
  bool m_inUseHasBeenSet = false;
};

}  // namespace Model
}  // namespace FSx
}  // namespace Aws

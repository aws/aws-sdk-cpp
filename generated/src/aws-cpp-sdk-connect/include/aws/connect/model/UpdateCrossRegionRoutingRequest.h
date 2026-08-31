/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/ConnectRequest.h>
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Connect {
namespace Model {

/**
 */
class UpdateCrossRegionRoutingRequest : public ConnectRequest {
 public:
  AWS_CONNECT_API UpdateCrossRegionRoutingRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "UpdateCrossRegionRouting"; }

  AWS_CONNECT_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The identifier of the Connect Customer instance. You can <a
   * href="https://docs.aws.amazon.com/connect/latest/adminguide/find-instance-arn.html">find
   * the instance ID</a> in the Amazon Resource Name (ARN) of the instance.</p>
   */
  inline const Aws::String& GetInstanceId() const { return m_instanceId; }
  inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }
  template <typename InstanceIdT = Aws::String>
  void SetInstanceId(InstanceIdT&& value) {
    m_instanceIdHasBeenSet = true;
    m_instanceId = std::forward<InstanceIdT>(value);
  }
  template <typename InstanceIdT = Aws::String>
  UpdateCrossRegionRoutingRequest& WithInstanceId(InstanceIdT&& value) {
    SetInstanceId(std::forward<InstanceIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Set to <code>true</code> to disable cross-region routing for all Regions
   * associated with this instance. Set to <code>false</code> to re-enable
   * cross-region routing.</p>
   */
  inline bool GetIsolatedAll() const { return m_isolatedAll; }
  inline bool IsolatedAllHasBeenSet() const { return m_isolatedAllHasBeenSet; }
  inline void SetIsolatedAll(bool value) {
    m_isolatedAllHasBeenSet = true;
    m_isolatedAll = value;
  }
  inline UpdateCrossRegionRoutingRequest& WithIsolatedAll(bool value) {
    SetIsolatedAll(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_instanceId;

  bool m_isolatedAll{false};
  bool m_instanceIdHasBeenSet = false;
  bool m_isolatedAllHasBeenSet = false;
};

}  // namespace Model
}  // namespace Connect
}  // namespace Aws

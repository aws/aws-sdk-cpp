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
class DeleteContactFlowModuleVersionRequest : public ConnectRequest {
 public:
  AWS_CONNECT_API DeleteContactFlowModuleVersionRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "DeleteContactFlowModuleVersion"; }

  AWS_CONNECT_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The identifier of the Amazon Connect instance. You can <a
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
  DeleteContactFlowModuleVersionRequest& WithInstanceId(InstanceIdT&& value) {
    SetInstanceId(std::forward<InstanceIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier of the flow module.</p>
   */
  inline const Aws::String& GetContactFlowModuleId() const { return m_contactFlowModuleId; }
  inline bool ContactFlowModuleIdHasBeenSet() const { return m_contactFlowModuleIdHasBeenSet; }
  template <typename ContactFlowModuleIdT = Aws::String>
  void SetContactFlowModuleId(ContactFlowModuleIdT&& value) {
    m_contactFlowModuleIdHasBeenSet = true;
    m_contactFlowModuleId = std::forward<ContactFlowModuleIdT>(value);
  }
  template <typename ContactFlowModuleIdT = Aws::String>
  DeleteContactFlowModuleVersionRequest& WithContactFlowModuleId(ContactFlowModuleIdT&& value) {
    SetContactFlowModuleId(std::forward<ContactFlowModuleIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The version of the flow module to delete.</p>
   */
  inline long long GetContactFlowModuleVersion() const { return m_contactFlowModuleVersion; }
  inline bool ContactFlowModuleVersionHasBeenSet() const { return m_contactFlowModuleVersionHasBeenSet; }
  inline void SetContactFlowModuleVersion(long long value) {
    m_contactFlowModuleVersionHasBeenSet = true;
    m_contactFlowModuleVersion = value;
  }
  inline DeleteContactFlowModuleVersionRequest& WithContactFlowModuleVersion(long long value) {
    SetContactFlowModuleVersion(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_instanceId;

  Aws::String m_contactFlowModuleId;

  long long m_contactFlowModuleVersion{0};
  bool m_instanceIdHasBeenSet = false;
  bool m_contactFlowModuleIdHasBeenSet = false;
  bool m_contactFlowModuleVersionHasBeenSet = false;
};

}  // namespace Model
}  // namespace Connect
}  // namespace Aws

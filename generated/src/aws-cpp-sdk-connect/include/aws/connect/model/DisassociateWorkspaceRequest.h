/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/ConnectRequest.h>
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <utility>

namespace Aws {
namespace Connect {
namespace Model {

/**
 */
class DisassociateWorkspaceRequest : public ConnectRequest {
 public:
  AWS_CONNECT_API DisassociateWorkspaceRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "DisassociateWorkspace"; }

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
  DisassociateWorkspaceRequest& WithInstanceId(InstanceIdT&& value) {
    SetInstanceId(std::forward<InstanceIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier of the workspace.</p>
   */
  inline const Aws::String& GetWorkspaceId() const { return m_workspaceId; }
  inline bool WorkspaceIdHasBeenSet() const { return m_workspaceIdHasBeenSet; }
  template <typename WorkspaceIdT = Aws::String>
  void SetWorkspaceId(WorkspaceIdT&& value) {
    m_workspaceIdHasBeenSet = true;
    m_workspaceId = std::forward<WorkspaceIdT>(value);
  }
  template <typename WorkspaceIdT = Aws::String>
  DisassociateWorkspaceRequest& WithWorkspaceId(WorkspaceIdT&& value) {
    SetWorkspaceId(std::forward<WorkspaceIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Names (ARNs) of the resources to disassociate from the
   * workspace.</p>
   */
  inline const Aws::Vector<Aws::String>& GetResourceArns() const { return m_resourceArns; }
  inline bool ResourceArnsHasBeenSet() const { return m_resourceArnsHasBeenSet; }
  template <typename ResourceArnsT = Aws::Vector<Aws::String>>
  void SetResourceArns(ResourceArnsT&& value) {
    m_resourceArnsHasBeenSet = true;
    m_resourceArns = std::forward<ResourceArnsT>(value);
  }
  template <typename ResourceArnsT = Aws::Vector<Aws::String>>
  DisassociateWorkspaceRequest& WithResourceArns(ResourceArnsT&& value) {
    SetResourceArns(std::forward<ResourceArnsT>(value));
    return *this;
  }
  template <typename ResourceArnsT = Aws::String>
  DisassociateWorkspaceRequest& AddResourceArns(ResourceArnsT&& value) {
    m_resourceArnsHasBeenSet = true;
    m_resourceArns.emplace_back(std::forward<ResourceArnsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_instanceId;

  Aws::String m_workspaceId;

  Aws::Vector<Aws::String> m_resourceArns;
  bool m_instanceIdHasBeenSet = false;
  bool m_workspaceIdHasBeenSet = false;
  bool m_resourceArnsHasBeenSet = false;
};

}  // namespace Model
}  // namespace Connect
}  // namespace Aws

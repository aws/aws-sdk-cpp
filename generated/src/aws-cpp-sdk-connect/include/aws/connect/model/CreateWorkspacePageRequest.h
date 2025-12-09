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
class CreateWorkspacePageRequest : public ConnectRequest {
 public:
  AWS_CONNECT_API CreateWorkspacePageRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "CreateWorkspacePage"; }

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
  CreateWorkspacePageRequest& WithInstanceId(InstanceIdT&& value) {
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
  CreateWorkspacePageRequest& WithWorkspaceId(WorkspaceIdT&& value) {
    SetWorkspaceId(std::forward<WorkspaceIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the view to associate with the page.</p>
   */
  inline const Aws::String& GetResourceArn() const { return m_resourceArn; }
  inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }
  template <typename ResourceArnT = Aws::String>
  void SetResourceArn(ResourceArnT&& value) {
    m_resourceArnHasBeenSet = true;
    m_resourceArn = std::forward<ResourceArnT>(value);
  }
  template <typename ResourceArnT = Aws::String>
  CreateWorkspacePageRequest& WithResourceArn(ResourceArnT&& value) {
    SetResourceArn(std::forward<ResourceArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The page identifier. Valid system pages include <code>HOME</code> and
   * <code>AGENT_EXPERIENCE</code>. Custom pages cannot use the <code>aws:</code> or
   * <code>connect:</code> prefixes.</p>
   */
  inline const Aws::String& GetPage() const { return m_page; }
  inline bool PageHasBeenSet() const { return m_pageHasBeenSet; }
  template <typename PageT = Aws::String>
  void SetPage(PageT&& value) {
    m_pageHasBeenSet = true;
    m_page = std::forward<PageT>(value);
  }
  template <typename PageT = Aws::String>
  CreateWorkspacePageRequest& WithPage(PageT&& value) {
    SetPage(std::forward<PageT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The URL-friendly identifier for the page.</p>
   */
  inline const Aws::String& GetSlug() const { return m_slug; }
  inline bool SlugHasBeenSet() const { return m_slugHasBeenSet; }
  template <typename SlugT = Aws::String>
  void SetSlug(SlugT&& value) {
    m_slugHasBeenSet = true;
    m_slug = std::forward<SlugT>(value);
  }
  template <typename SlugT = Aws::String>
  CreateWorkspacePageRequest& WithSlug(SlugT&& value) {
    SetSlug(std::forward<SlugT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A JSON string containing input parameters for the view, validated against the
   * view's input schema.</p>
   */
  inline const Aws::String& GetInputData() const { return m_inputData; }
  inline bool InputDataHasBeenSet() const { return m_inputDataHasBeenSet; }
  template <typename InputDataT = Aws::String>
  void SetInputData(InputDataT&& value) {
    m_inputDataHasBeenSet = true;
    m_inputData = std::forward<InputDataT>(value);
  }
  template <typename InputDataT = Aws::String>
  CreateWorkspacePageRequest& WithInputData(InputDataT&& value) {
    SetInputData(std::forward<InputDataT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_instanceId;

  Aws::String m_workspaceId;

  Aws::String m_resourceArn;

  Aws::String m_page;

  Aws::String m_slug;

  Aws::String m_inputData;
  bool m_instanceIdHasBeenSet = false;
  bool m_workspaceIdHasBeenSet = false;
  bool m_resourceArnHasBeenSet = false;
  bool m_pageHasBeenSet = false;
  bool m_slugHasBeenSet = false;
  bool m_inputDataHasBeenSet = false;
};

}  // namespace Model
}  // namespace Connect
}  // namespace Aws

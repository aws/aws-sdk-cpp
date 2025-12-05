/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Connect {
namespace Model {

/**
 * <p>Contains summary information about a workspace association with a user or
 * routing profile.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/WorkspaceAssociationSearchSummary">AWS
 * API Reference</a></p>
 */
class WorkspaceAssociationSearchSummary {
 public:
  AWS_CONNECT_API WorkspaceAssociationSearchSummary() = default;
  AWS_CONNECT_API WorkspaceAssociationSearchSummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API WorkspaceAssociationSearchSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

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
  WorkspaceAssociationSearchSummary& WithWorkspaceId(WorkspaceIdT&& value) {
    SetWorkspaceId(std::forward<WorkspaceIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the workspace.</p>
   */
  inline const Aws::String& GetWorkspaceArn() const { return m_workspaceArn; }
  inline bool WorkspaceArnHasBeenSet() const { return m_workspaceArnHasBeenSet; }
  template <typename WorkspaceArnT = Aws::String>
  void SetWorkspaceArn(WorkspaceArnT&& value) {
    m_workspaceArnHasBeenSet = true;
    m_workspaceArn = std::forward<WorkspaceArnT>(value);
  }
  template <typename WorkspaceArnT = Aws::String>
  WorkspaceAssociationSearchSummary& WithWorkspaceArn(WorkspaceArnT&& value) {
    SetWorkspaceArn(std::forward<WorkspaceArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier of the associated resource (user or routing profile).</p>
   */
  inline const Aws::String& GetResourceId() const { return m_resourceId; }
  inline bool ResourceIdHasBeenSet() const { return m_resourceIdHasBeenSet; }
  template <typename ResourceIdT = Aws::String>
  void SetResourceId(ResourceIdT&& value) {
    m_resourceIdHasBeenSet = true;
    m_resourceId = std::forward<ResourceIdT>(value);
  }
  template <typename ResourceIdT = Aws::String>
  WorkspaceAssociationSearchSummary& WithResourceId(ResourceIdT&& value) {
    SetResourceId(std::forward<ResourceIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the associated resource.</p>
   */
  inline const Aws::String& GetResourceArn() const { return m_resourceArn; }
  inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }
  template <typename ResourceArnT = Aws::String>
  void SetResourceArn(ResourceArnT&& value) {
    m_resourceArnHasBeenSet = true;
    m_resourceArn = std::forward<ResourceArnT>(value);
  }
  template <typename ResourceArnT = Aws::String>
  WorkspaceAssociationSearchSummary& WithResourceArn(ResourceArnT&& value) {
    SetResourceArn(std::forward<ResourceArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of resource associated with the workspace. Valid values are:
   * <code>USER</code> and <code>ROUTING_PROFILE</code>.</p>
   */
  inline const Aws::String& GetResourceType() const { return m_resourceType; }
  inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
  template <typename ResourceTypeT = Aws::String>
  void SetResourceType(ResourceTypeT&& value) {
    m_resourceTypeHasBeenSet = true;
    m_resourceType = std::forward<ResourceTypeT>(value);
  }
  template <typename ResourceTypeT = Aws::String>
  WorkspaceAssociationSearchSummary& WithResourceType(ResourceTypeT&& value) {
    SetResourceType(std::forward<ResourceTypeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the associated resource.</p>
   */
  inline const Aws::String& GetResourceName() const { return m_resourceName; }
  inline bool ResourceNameHasBeenSet() const { return m_resourceNameHasBeenSet; }
  template <typename ResourceNameT = Aws::String>
  void SetResourceName(ResourceNameT&& value) {
    m_resourceNameHasBeenSet = true;
    m_resourceName = std::forward<ResourceNameT>(value);
  }
  template <typename ResourceNameT = Aws::String>
  WorkspaceAssociationSearchSummary& WithResourceName(ResourceNameT&& value) {
    SetResourceName(std::forward<ResourceNameT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_workspaceId;

  Aws::String m_workspaceArn;

  Aws::String m_resourceId;

  Aws::String m_resourceArn;

  Aws::String m_resourceType;

  Aws::String m_resourceName;
  bool m_workspaceIdHasBeenSet = false;
  bool m_workspaceArnHasBeenSet = false;
  bool m_resourceIdHasBeenSet = false;
  bool m_resourceArnHasBeenSet = false;
  bool m_resourceTypeHasBeenSet = false;
  bool m_resourceNameHasBeenSet = false;
};

}  // namespace Model
}  // namespace Connect
}  // namespace Aws

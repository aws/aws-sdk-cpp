/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/cleanrooms/model/ChildResourceType.h>
#include <aws/cleanrooms/model/ResourceStatus.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace CleanRooms {
namespace Model {

/**
 * <p>Contains information about a child resource of a given resource in a
 * collaboration.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/cleanrooms-2022-02-17/ChildResource">AWS
 * API Reference</a></p>
 */
class ChildResource {
 public:
  AWS_CLEANROOMS_API ChildResource() = default;
  AWS_CLEANROOMS_API ChildResource(Aws::Utils::Json::JsonView jsonValue);
  AWS_CLEANROOMS_API ChildResource& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CLEANROOMS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The unique identifier of the child resource.</p>
   */
  inline const Aws::String& GetResourceId() const { return m_resourceId; }
  inline bool ResourceIdHasBeenSet() const { return m_resourceIdHasBeenSet; }
  template <typename ResourceIdT = Aws::String>
  void SetResourceId(ResourceIdT&& value) {
    m_resourceIdHasBeenSet = true;
    m_resourceId = std::forward<ResourceIdT>(value);
  }
  template <typename ResourceIdT = Aws::String>
  ChildResource& WithResourceId(ResourceIdT&& value) {
    SetResourceId(std::forward<ResourceIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of the child resource.</p>
   */
  inline ChildResourceType GetResourceType() const { return m_resourceType; }
  inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
  inline void SetResourceType(ChildResourceType value) {
    m_resourceTypeHasBeenSet = true;
    m_resourceType = value;
  }
  inline ChildResource& WithResourceType(ChildResourceType value) {
    SetResourceType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the child resource.</p>
   */
  inline const Aws::String& GetResourceName() const { return m_resourceName; }
  inline bool ResourceNameHasBeenSet() const { return m_resourceNameHasBeenSet; }
  template <typename ResourceNameT = Aws::String>
  void SetResourceName(ResourceNameT&& value) {
    m_resourceNameHasBeenSet = true;
    m_resourceName = std::forward<ResourceNameT>(value);
  }
  template <typename ResourceNameT = Aws::String>
  ChildResource& WithResourceName(ResourceNameT&& value) {
    SetResourceName(std::forward<ResourceNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Web Services account ID of the member who owns the child
   * resource.</p>
   */
  inline const Aws::String& GetOwnerAccountId() const { return m_ownerAccountId; }
  inline bool OwnerAccountIdHasBeenSet() const { return m_ownerAccountIdHasBeenSet; }
  template <typename OwnerAccountIdT = Aws::String>
  void SetOwnerAccountId(OwnerAccountIdT&& value) {
    m_ownerAccountIdHasBeenSet = true;
    m_ownerAccountId = std::forward<OwnerAccountIdT>(value);
  }
  template <typename OwnerAccountIdT = Aws::String>
  ChildResource& WithOwnerAccountId(OwnerAccountIdT&& value) {
    SetOwnerAccountId(std::forward<OwnerAccountIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current status of the child resource.</p>
   */
  inline ResourceStatus GetResourceStatus() const { return m_resourceStatus; }
  inline bool ResourceStatusHasBeenSet() const { return m_resourceStatusHasBeenSet; }
  inline void SetResourceStatus(ResourceStatus value) {
    m_resourceStatusHasBeenSet = true;
    m_resourceStatus = value;
  }
  inline ChildResource& WithResourceStatus(ResourceStatus value) {
    SetResourceStatus(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_resourceId;

  ChildResourceType m_resourceType{ChildResourceType::NOT_SET};

  Aws::String m_resourceName;

  Aws::String m_ownerAccountId;

  ResourceStatus m_resourceStatus{ResourceStatus::NOT_SET};
  bool m_resourceIdHasBeenSet = false;
  bool m_resourceTypeHasBeenSet = false;
  bool m_resourceNameHasBeenSet = false;
  bool m_ownerAccountIdHasBeenSet = false;
  bool m_resourceStatusHasBeenSet = false;
};

}  // namespace Model
}  // namespace CleanRooms
}  // namespace Aws

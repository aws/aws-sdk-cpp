/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/arc-region-switch/ARCRegionswitch_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace ARCRegionswitch {
namespace Model {

/**
 * <p>The request conflicted with a concurrent modification of the same resource
 * and did not take effect.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/arc-region-switch-2022-07-26/RetryableConflictException">AWS
 * API Reference</a></p>
 */
class RetryableConflictException {
 public:
  AWS_ARCREGIONSWITCH_API RetryableConflictException() = default;
  AWS_ARCREGIONSWITCH_API RetryableConflictException(Aws::Utils::Json::JsonView jsonValue);
  AWS_ARCREGIONSWITCH_API RetryableConflictException& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ARCREGIONSWITCH_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{

  inline const Aws::String& GetMessage() const { return m_message; }
  inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
  template <typename MessageT = Aws::String>
  void SetMessage(MessageT&& value) {
    m_messageHasBeenSet = true;
    m_message = std::forward<MessageT>(value);
  }
  template <typename MessageT = Aws::String>
  RetryableConflictException& WithMessage(MessageT&& value) {
    SetMessage(std::forward<MessageT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier of the resource involved in the concurrent modification.</p>
   */
  inline const Aws::String& GetResourceId() const { return m_resourceId; }
  inline bool ResourceIdHasBeenSet() const { return m_resourceIdHasBeenSet; }
  template <typename ResourceIdT = Aws::String>
  void SetResourceId(ResourceIdT&& value) {
    m_resourceIdHasBeenSet = true;
    m_resourceId = std::forward<ResourceIdT>(value);
  }
  template <typename ResourceIdT = Aws::String>
  RetryableConflictException& WithResourceId(ResourceIdT&& value) {
    SetResourceId(std::forward<ResourceIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of the resource involved in the concurrent modification.</p>
   */
  inline const Aws::String& GetResourceType() const { return m_resourceType; }
  inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
  template <typename ResourceTypeT = Aws::String>
  void SetResourceType(ResourceTypeT&& value) {
    m_resourceTypeHasBeenSet = true;
    m_resourceType = std::forward<ResourceTypeT>(value);
  }
  template <typename ResourceTypeT = Aws::String>
  RetryableConflictException& WithResourceType(ResourceTypeT&& value) {
    SetResourceType(std::forward<ResourceTypeT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_message;

  Aws::String m_resourceId;

  Aws::String m_resourceType;
  bool m_messageHasBeenSet = false;
  bool m_resourceIdHasBeenSet = false;
  bool m_resourceTypeHasBeenSet = false;
};

}  // namespace Model
}  // namespace ARCRegionswitch
}  // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/ConnectRequest.h>
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/AttachmentScope.h>
#include <aws/connect/model/ExtensionConfiguration.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Connect {
namespace Model {

/**
 */
class UpdateAttachedFilesConfigurationRequest : public ConnectRequest {
 public:
  AWS_CONNECT_API UpdateAttachedFilesConfigurationRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "UpdateAttachedFilesConfiguration"; }

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
  UpdateAttachedFilesConfigurationRequest& WithInstanceId(InstanceIdT&& value) {
    SetInstanceId(std::forward<InstanceIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The scope of the attachment. Valid values are <code>EMAIL</code>,
   * <code>CHAT</code>, <code>CASE</code>, and <code>TASK</code>.</p>
   */
  inline AttachmentScope GetAttachmentScope() const { return m_attachmentScope; }
  inline bool AttachmentScopeHasBeenSet() const { return m_attachmentScopeHasBeenSet; }
  inline void SetAttachmentScope(AttachmentScope value) {
    m_attachmentScopeHasBeenSet = true;
    m_attachmentScope = value;
  }
  inline UpdateAttachedFilesConfigurationRequest& WithAttachmentScope(AttachmentScope value) {
    SetAttachmentScope(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum size limit for attached files in bytes. The minimum value is 1
   * and the maximum value is 104857600 (100 MB).</p>
   */
  inline long long GetMaximumSizeLimitInBytes() const { return m_maximumSizeLimitInBytes; }
  inline bool MaximumSizeLimitInBytesHasBeenSet() const { return m_maximumSizeLimitInBytesHasBeenSet; }
  inline void SetMaximumSizeLimitInBytes(long long value) {
    m_maximumSizeLimitInBytesHasBeenSet = true;
    m_maximumSizeLimitInBytes = value;
  }
  inline UpdateAttachedFilesConfigurationRequest& WithMaximumSizeLimitInBytes(long long value) {
    SetMaximumSizeLimitInBytes(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The configuration for allowed file extensions.</p>
   */
  inline const ExtensionConfiguration& GetExtensionConfiguration() const { return m_extensionConfiguration; }
  inline bool ExtensionConfigurationHasBeenSet() const { return m_extensionConfigurationHasBeenSet; }
  template <typename ExtensionConfigurationT = ExtensionConfiguration>
  void SetExtensionConfiguration(ExtensionConfigurationT&& value) {
    m_extensionConfigurationHasBeenSet = true;
    m_extensionConfiguration = std::forward<ExtensionConfigurationT>(value);
  }
  template <typename ExtensionConfigurationT = ExtensionConfiguration>
  UpdateAttachedFilesConfigurationRequest& WithExtensionConfiguration(ExtensionConfigurationT&& value) {
    SetExtensionConfiguration(std::forward<ExtensionConfigurationT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_instanceId;

  AttachmentScope m_attachmentScope{AttachmentScope::NOT_SET};

  long long m_maximumSizeLimitInBytes{0};

  ExtensionConfiguration m_extensionConfiguration;
  bool m_instanceIdHasBeenSet = false;
  bool m_attachmentScopeHasBeenSet = false;
  bool m_maximumSizeLimitInBytesHasBeenSet = false;
  bool m_extensionConfigurationHasBeenSet = false;
};

}  // namespace Model
}  // namespace Connect
}  // namespace Aws

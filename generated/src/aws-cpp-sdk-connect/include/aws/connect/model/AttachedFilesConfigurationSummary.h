/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/AttachmentScope.h>
#include <aws/connect/model/ExtensionConfiguration.h>
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
 * <p>A summary of the attached files configuration.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/AttachedFilesConfigurationSummary">AWS
 * API Reference</a></p>
 */
class AttachedFilesConfigurationSummary {
 public:
  AWS_CONNECT_API AttachedFilesConfigurationSummary() = default;
  AWS_CONNECT_API AttachedFilesConfigurationSummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API AttachedFilesConfigurationSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The identifier of the Amazon Connect instance.</p>
   */
  inline const Aws::String& GetInstanceId() const { return m_instanceId; }
  inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }
  template <typename InstanceIdT = Aws::String>
  void SetInstanceId(InstanceIdT&& value) {
    m_instanceIdHasBeenSet = true;
    m_instanceId = std::forward<InstanceIdT>(value);
  }
  template <typename InstanceIdT = Aws::String>
  AttachedFilesConfigurationSummary& WithInstanceId(InstanceIdT&& value) {
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
  inline AttachedFilesConfigurationSummary& WithAttachmentScope(AttachmentScope value) {
    SetAttachmentScope(value);
    return *this;
  }
  ///@}

  ///@{

  inline long long GetMaximumSizeLimitInBytes() const { return m_maximumSizeLimitInBytes; }
  inline bool MaximumSizeLimitInBytesHasBeenSet() const { return m_maximumSizeLimitInBytesHasBeenSet; }
  inline void SetMaximumSizeLimitInBytes(long long value) {
    m_maximumSizeLimitInBytesHasBeenSet = true;
    m_maximumSizeLimitInBytes = value;
  }
  inline AttachedFilesConfigurationSummary& WithMaximumSizeLimitInBytes(long long value) {
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
  AttachedFilesConfigurationSummary& WithExtensionConfiguration(ExtensionConfigurationT&& value) {
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

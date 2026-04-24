/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/AttachmentScope.h>
#include <aws/connect/model/ExtensionConfiguration.h>
#include <aws/core/utils/DateTime.h>
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
 * <p>The configuration for attached files for a specific attachment
 * scope.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/AttachedFilesConfiguration">AWS
 * API Reference</a></p>
 */
class AttachedFilesConfiguration {
 public:
  AWS_CONNECT_API AttachedFilesConfiguration() = default;
  AWS_CONNECT_API AttachedFilesConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API AttachedFilesConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
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
  AttachedFilesConfiguration& WithInstanceId(InstanceIdT&& value) {
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
  inline AttachedFilesConfiguration& WithAttachmentScope(AttachmentScope value) {
    SetAttachmentScope(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum size limit for attached files in bytes.</p>
   */
  inline long long GetMaximumSizeLimitInBytes() const { return m_maximumSizeLimitInBytes; }
  inline bool MaximumSizeLimitInBytesHasBeenSet() const { return m_maximumSizeLimitInBytesHasBeenSet; }
  inline void SetMaximumSizeLimitInBytes(long long value) {
    m_maximumSizeLimitInBytesHasBeenSet = true;
    m_maximumSizeLimitInBytes = value;
  }
  inline AttachedFilesConfiguration& WithMaximumSizeLimitInBytes(long long value) {
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
  AttachedFilesConfiguration& WithExtensionConfiguration(ExtensionConfigurationT&& value) {
    SetExtensionConfiguration(std::forward<ExtensionConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the configuration was last modified.</p>
   */
  inline const Aws::Utils::DateTime& GetLastModifiedTime() const { return m_lastModifiedTime; }
  inline bool LastModifiedTimeHasBeenSet() const { return m_lastModifiedTimeHasBeenSet; }
  template <typename LastModifiedTimeT = Aws::Utils::DateTime>
  void SetLastModifiedTime(LastModifiedTimeT&& value) {
    m_lastModifiedTimeHasBeenSet = true;
    m_lastModifiedTime = std::forward<LastModifiedTimeT>(value);
  }
  template <typename LastModifiedTimeT = Aws::Utils::DateTime>
  AttachedFilesConfiguration& WithLastModifiedTime(LastModifiedTimeT&& value) {
    SetLastModifiedTime(std::forward<LastModifiedTimeT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_instanceId;

  AttachmentScope m_attachmentScope{AttachmentScope::NOT_SET};

  long long m_maximumSizeLimitInBytes{0};

  ExtensionConfiguration m_extensionConfiguration;

  Aws::Utils::DateTime m_lastModifiedTime{};
  bool m_instanceIdHasBeenSet = false;
  bool m_attachmentScopeHasBeenSet = false;
  bool m_maximumSizeLimitInBytesHasBeenSet = false;
  bool m_extensionConfigurationHasBeenSet = false;
  bool m_lastModifiedTimeHasBeenSet = false;
};

}  // namespace Model
}  // namespace Connect
}  // namespace Aws

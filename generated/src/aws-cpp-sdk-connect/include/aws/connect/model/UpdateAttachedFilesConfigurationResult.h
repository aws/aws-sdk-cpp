/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/AttachmentScope.h>
#include <aws/connect/model/ExtensionConfiguration.h>
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace Connect {
namespace Model {
class UpdateAttachedFilesConfigurationResult {
 public:
  AWS_CONNECT_API UpdateAttachedFilesConfigurationResult() = default;
  AWS_CONNECT_API UpdateAttachedFilesConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_CONNECT_API UpdateAttachedFilesConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The identifier of the Amazon Connect instance.</p>
   */
  inline const Aws::String& GetInstanceId() const { return m_instanceId; }
  template <typename InstanceIdT = Aws::String>
  void SetInstanceId(InstanceIdT&& value) {
    m_instanceIdHasBeenSet = true;
    m_instanceId = std::forward<InstanceIdT>(value);
  }
  template <typename InstanceIdT = Aws::String>
  UpdateAttachedFilesConfigurationResult& WithInstanceId(InstanceIdT&& value) {
    SetInstanceId(std::forward<InstanceIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The scope of the attachment.</p>
   */
  inline AttachmentScope GetAttachmentScope() const { return m_attachmentScope; }
  inline void SetAttachmentScope(AttachmentScope value) {
    m_attachmentScopeHasBeenSet = true;
    m_attachmentScope = value;
  }
  inline UpdateAttachedFilesConfigurationResult& WithAttachmentScope(AttachmentScope value) {
    SetAttachmentScope(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum size limit for attached files in bytes.</p>
   */
  inline long long GetMaximumSizeLimitInBytes() const { return m_maximumSizeLimitInBytes; }
  inline void SetMaximumSizeLimitInBytes(long long value) {
    m_maximumSizeLimitInBytesHasBeenSet = true;
    m_maximumSizeLimitInBytes = value;
  }
  inline UpdateAttachedFilesConfigurationResult& WithMaximumSizeLimitInBytes(long long value) {
    SetMaximumSizeLimitInBytes(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The configuration for allowed file extensions.</p>
   */
  inline const ExtensionConfiguration& GetExtensionConfiguration() const { return m_extensionConfiguration; }
  template <typename ExtensionConfigurationT = ExtensionConfiguration>
  void SetExtensionConfiguration(ExtensionConfigurationT&& value) {
    m_extensionConfigurationHasBeenSet = true;
    m_extensionConfiguration = std::forward<ExtensionConfigurationT>(value);
  }
  template <typename ExtensionConfigurationT = ExtensionConfiguration>
  UpdateAttachedFilesConfigurationResult& WithExtensionConfiguration(ExtensionConfigurationT&& value) {
    SetExtensionConfiguration(std::forward<ExtensionConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the configuration was last modified.</p>
   */
  inline const Aws::Utils::DateTime& GetLastModifiedTime() const { return m_lastModifiedTime; }
  template <typename LastModifiedTimeT = Aws::Utils::DateTime>
  void SetLastModifiedTime(LastModifiedTimeT&& value) {
    m_lastModifiedTimeHasBeenSet = true;
    m_lastModifiedTime = std::forward<LastModifiedTimeT>(value);
  }
  template <typename LastModifiedTimeT = Aws::Utils::DateTime>
  UpdateAttachedFilesConfigurationResult& WithLastModifiedTime(LastModifiedTimeT&& value) {
    SetLastModifiedTime(std::forward<LastModifiedTimeT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetRequestId() const { return m_requestId; }
  template <typename RequestIdT = Aws::String>
  void SetRequestId(RequestIdT&& value) {
    m_requestIdHasBeenSet = true;
    m_requestId = std::forward<RequestIdT>(value);
  }
  template <typename RequestIdT = Aws::String>
  UpdateAttachedFilesConfigurationResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_instanceId;

  AttachmentScope m_attachmentScope{AttachmentScope::NOT_SET};

  long long m_maximumSizeLimitInBytes{0};

  ExtensionConfiguration m_extensionConfiguration;

  Aws::Utils::DateTime m_lastModifiedTime{};

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_instanceIdHasBeenSet = false;
  bool m_attachmentScopeHasBeenSet = false;
  bool m_maximumSizeLimitInBytesHasBeenSet = false;
  bool m_extensionConfigurationHasBeenSet = false;
  bool m_lastModifiedTimeHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Connect
}  // namespace Aws

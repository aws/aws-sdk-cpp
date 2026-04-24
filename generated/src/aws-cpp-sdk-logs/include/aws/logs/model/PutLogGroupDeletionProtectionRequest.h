/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/logs/CloudWatchLogsRequest.h>
#include <aws/logs/CloudWatchLogs_EXPORTS.h>

#include <utility>

namespace Aws {
namespace CloudWatchLogs {
namespace Model {

/**
 */
class PutLogGroupDeletionProtectionRequest : public CloudWatchLogsRequest {
 public:
  AWS_CLOUDWATCHLOGS_API PutLogGroupDeletionProtectionRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "PutLogGroupDeletionProtection"; }

  AWS_CLOUDWATCHLOGS_API Aws::String SerializePayload() const override;

  AWS_CLOUDWATCHLOGS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The name or ARN of the log group.</p> <p>Type: String</p> <p>Length
   * Constraints: Minimum length of 1. Maximum length of 512.</p> <p>Pattern:
   * <code>[\.\-_/#A-Za-z0-9]+</code> </p> <p>Required: Yes</p>
   */
  inline const Aws::String& GetLogGroupIdentifier() const { return m_logGroupIdentifier; }
  inline bool LogGroupIdentifierHasBeenSet() const { return m_logGroupIdentifierHasBeenSet; }
  template <typename LogGroupIdentifierT = Aws::String>
  void SetLogGroupIdentifier(LogGroupIdentifierT&& value) {
    m_logGroupIdentifierHasBeenSet = true;
    m_logGroupIdentifier = std::forward<LogGroupIdentifierT>(value);
  }
  template <typename LogGroupIdentifierT = Aws::String>
  PutLogGroupDeletionProtectionRequest& WithLogGroupIdentifier(LogGroupIdentifierT&& value) {
    SetLogGroupIdentifier(std::forward<LogGroupIdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Whether to enable deletion protection.</p> <p>Type: Boolean</p> <p>Required:
   * Yes</p>
   */
  inline bool GetDeletionProtectionEnabled() const { return m_deletionProtectionEnabled; }
  inline bool DeletionProtectionEnabledHasBeenSet() const { return m_deletionProtectionEnabledHasBeenSet; }
  inline void SetDeletionProtectionEnabled(bool value) {
    m_deletionProtectionEnabledHasBeenSet = true;
    m_deletionProtectionEnabled = value;
  }
  inline PutLogGroupDeletionProtectionRequest& WithDeletionProtectionEnabled(bool value) {
    SetDeletionProtectionEnabled(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_logGroupIdentifier;

  bool m_deletionProtectionEnabled{false};
  bool m_logGroupIdentifierHasBeenSet = false;
  bool m_deletionProtectionEnabledHasBeenSet = false;
};

}  // namespace Model
}  // namespace CloudWatchLogs
}  // namespace Aws

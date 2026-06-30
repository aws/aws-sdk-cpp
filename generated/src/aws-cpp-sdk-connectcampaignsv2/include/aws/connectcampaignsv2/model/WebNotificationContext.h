/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectcampaignsv2/ConnectCampaignsV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace ConnectCampaignsV2 {
namespace Model {

/**
 * <p>Context metadata for the web notification type channel</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connectcampaignsv2-2024-04-23/WebNotificationContext">AWS
 * API Reference</a></p>
 */
class WebNotificationContext {
 public:
  AWS_CONNECTCAMPAIGNSV2_API WebNotificationContext() = default;
  AWS_CONNECTCAMPAIGNSV2_API WebNotificationContext(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECTCAMPAIGNSV2_API WebNotificationContext& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECTCAMPAIGNSV2_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{

  inline const Aws::String& GetSessionId() const { return m_sessionId; }
  inline bool SessionIdHasBeenSet() const { return m_sessionIdHasBeenSet; }
  template <typename SessionIdT = Aws::String>
  void SetSessionId(SessionIdT&& value) {
    m_sessionIdHasBeenSet = true;
    m_sessionId = std::forward<SessionIdT>(value);
  }
  template <typename SessionIdT = Aws::String>
  WebNotificationContext& WithSessionId(SessionIdT&& value) {
    SetSessionId(std::forward<SessionIdT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetBrowserId() const { return m_browserId; }
  inline bool BrowserIdHasBeenSet() const { return m_browserIdHasBeenSet; }
  template <typename BrowserIdT = Aws::String>
  void SetBrowserId(BrowserIdT&& value) {
    m_browserIdHasBeenSet = true;
    m_browserId = std::forward<BrowserIdT>(value);
  }
  template <typename BrowserIdT = Aws::String>
  WebNotificationContext& WithBrowserId(BrowserIdT&& value) {
    SetBrowserId(std::forward<BrowserIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_sessionId;

  Aws::String m_browserId;
  bool m_sessionIdHasBeenSet = false;
  bool m_browserIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace ConnectCampaignsV2
}  // namespace Aws

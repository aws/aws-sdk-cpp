/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/endusermessaging/EndUserMessagingRequest.h>
#include <aws/endusermessaging/EndUserMessaging_EXPORTS.h>

#include <utility>

namespace Aws {
namespace EndUserMessaging {
namespace Model {

/**
 */
class GetNotifyCodeConfigurationRequest : public EndUserMessagingRequest {
 public:
  AWS_ENDUSERMESSAGING_API GetNotifyCodeConfigurationRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "GetNotifyCodeConfiguration"; }

  AWS_ENDUSERMESSAGING_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The unique identifier of the notify code configuration. You can specify
   * either the bare ID or the full Amazon Resource Name (ARN).</p>
   */
  inline const Aws::String& GetNotifyCodeConfigurationId() const { return m_notifyCodeConfigurationId; }
  inline bool NotifyCodeConfigurationIdHasBeenSet() const { return m_notifyCodeConfigurationIdHasBeenSet; }
  template <typename NotifyCodeConfigurationIdT = Aws::String>
  void SetNotifyCodeConfigurationId(NotifyCodeConfigurationIdT&& value) {
    m_notifyCodeConfigurationIdHasBeenSet = true;
    m_notifyCodeConfigurationId = std::forward<NotifyCodeConfigurationIdT>(value);
  }
  template <typename NotifyCodeConfigurationIdT = Aws::String>
  GetNotifyCodeConfigurationRequest& WithNotifyCodeConfigurationId(NotifyCodeConfigurationIdT&& value) {
    SetNotifyCodeConfigurationId(std::forward<NotifyCodeConfigurationIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_notifyCodeConfigurationId;
  bool m_notifyCodeConfigurationIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace EndUserMessaging
}  // namespace Aws

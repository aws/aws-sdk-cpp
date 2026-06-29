/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectcampaignsv2/ConnectCampaignsV2_EXPORTS.h>
#include <aws/connectcampaignsv2/model/WebNotificationContext.h>

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
 * <p>Additional metadata related to the event trigger context</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connectcampaignsv2-2024-04-23/ChannelContext">AWS
 * API Reference</a></p>
 */
class ChannelContext {
 public:
  AWS_CONNECTCAMPAIGNSV2_API ChannelContext() = default;
  AWS_CONNECTCAMPAIGNSV2_API ChannelContext(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECTCAMPAIGNSV2_API ChannelContext& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECTCAMPAIGNSV2_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{

  inline const WebNotificationContext& GetWebNotificationContext() const { return m_webNotificationContext; }
  inline bool WebNotificationContextHasBeenSet() const { return m_webNotificationContextHasBeenSet; }
  template <typename WebNotificationContextT = WebNotificationContext>
  void SetWebNotificationContext(WebNotificationContextT&& value) {
    m_webNotificationContextHasBeenSet = true;
    m_webNotificationContext = std::forward<WebNotificationContextT>(value);
  }
  template <typename WebNotificationContextT = WebNotificationContext>
  ChannelContext& WithWebNotificationContext(WebNotificationContextT&& value) {
    SetWebNotificationContext(std::forward<WebNotificationContextT>(value));
    return *this;
  }
  ///@}
 private:
  WebNotificationContext m_webNotificationContext;
  bool m_webNotificationContextHasBeenSet = false;
};

}  // namespace Model
}  // namespace ConnectCampaignsV2
}  // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-messaging/ChimeSDKMessaging_EXPORTS.h>
#include <aws/chime-sdk-messaging/model/ChannelSummary.h>
#include <aws/chime-sdk-messaging/model/AppInstanceUserMembershipSummary.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace ChimeSDKMessaging
{
namespace Model
{

  /**
   * <p>Summary of the channel membership details of an
   * <code>AppInstanceUser</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-messaging-2021-05-15/ChannelMembershipForAppInstanceUserSummary">AWS
   * API Reference</a></p>
   */
  class ChannelMembershipForAppInstanceUserSummary
  {
  public:
    AWS_CHIMESDKMESSAGING_API ChannelMembershipForAppInstanceUserSummary() = default;
    AWS_CHIMESDKMESSAGING_API ChannelMembershipForAppInstanceUserSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMESSAGING_API ChannelMembershipForAppInstanceUserSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMESSAGING_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Returns the channel data for an <code>AppInstance</code>.</p>
     */
    inline const ChannelSummary& GetChannelSummary() const { return m_channelSummary; }
    inline bool ChannelSummaryHasBeenSet() const { return m_channelSummaryHasBeenSet; }
    template<typename ChannelSummaryT = ChannelSummary>
    void SetChannelSummary(ChannelSummaryT&& value) { m_channelSummaryHasBeenSet = true; m_channelSummary = std::forward<ChannelSummaryT>(value); }
    template<typename ChannelSummaryT = ChannelSummary>
    ChannelMembershipForAppInstanceUserSummary& WithChannelSummary(ChannelSummaryT&& value) { SetChannelSummary(std::forward<ChannelSummaryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns the channel membership data for an <code>AppInstance</code>.</p>
     */
    inline const AppInstanceUserMembershipSummary& GetAppInstanceUserMembershipSummary() const { return m_appInstanceUserMembershipSummary; }
    inline bool AppInstanceUserMembershipSummaryHasBeenSet() const { return m_appInstanceUserMembershipSummaryHasBeenSet; }
    template<typename AppInstanceUserMembershipSummaryT = AppInstanceUserMembershipSummary>
    void SetAppInstanceUserMembershipSummary(AppInstanceUserMembershipSummaryT&& value) { m_appInstanceUserMembershipSummaryHasBeenSet = true; m_appInstanceUserMembershipSummary = std::forward<AppInstanceUserMembershipSummaryT>(value); }
    template<typename AppInstanceUserMembershipSummaryT = AppInstanceUserMembershipSummary>
    ChannelMembershipForAppInstanceUserSummary& WithAppInstanceUserMembershipSummary(AppInstanceUserMembershipSummaryT&& value) { SetAppInstanceUserMembershipSummary(std::forward<AppInstanceUserMembershipSummaryT>(value)); return *this;}
    ///@}
  private:

    ChannelSummary m_channelSummary;
    bool m_channelSummaryHasBeenSet = false;

    AppInstanceUserMembershipSummary m_appInstanceUserMembershipSummary;
    bool m_appInstanceUserMembershipSummaryHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKMessaging
} // namespace Aws

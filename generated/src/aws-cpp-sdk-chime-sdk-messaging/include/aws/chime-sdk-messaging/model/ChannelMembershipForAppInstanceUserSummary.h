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
    AWS_CHIMESDKMESSAGING_API ChannelMembershipForAppInstanceUserSummary();
    AWS_CHIMESDKMESSAGING_API ChannelMembershipForAppInstanceUserSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMESSAGING_API ChannelMembershipForAppInstanceUserSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMESSAGING_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Returns the channel data for an <code>AppInstance</code>.</p>
     */
    inline const ChannelSummary& GetChannelSummary() const{ return m_channelSummary; }

    /**
     * <p>Returns the channel data for an <code>AppInstance</code>.</p>
     */
    inline bool ChannelSummaryHasBeenSet() const { return m_channelSummaryHasBeenSet; }

    /**
     * <p>Returns the channel data for an <code>AppInstance</code>.</p>
     */
    inline void SetChannelSummary(const ChannelSummary& value) { m_channelSummaryHasBeenSet = true; m_channelSummary = value; }

    /**
     * <p>Returns the channel data for an <code>AppInstance</code>.</p>
     */
    inline void SetChannelSummary(ChannelSummary&& value) { m_channelSummaryHasBeenSet = true; m_channelSummary = std::move(value); }

    /**
     * <p>Returns the channel data for an <code>AppInstance</code>.</p>
     */
    inline ChannelMembershipForAppInstanceUserSummary& WithChannelSummary(const ChannelSummary& value) { SetChannelSummary(value); return *this;}

    /**
     * <p>Returns the channel data for an <code>AppInstance</code>.</p>
     */
    inline ChannelMembershipForAppInstanceUserSummary& WithChannelSummary(ChannelSummary&& value) { SetChannelSummary(std::move(value)); return *this;}


    /**
     * <p>Returns the channel membership data for an <code>AppInstance</code>.</p>
     */
    inline const AppInstanceUserMembershipSummary& GetAppInstanceUserMembershipSummary() const{ return m_appInstanceUserMembershipSummary; }

    /**
     * <p>Returns the channel membership data for an <code>AppInstance</code>.</p>
     */
    inline bool AppInstanceUserMembershipSummaryHasBeenSet() const { return m_appInstanceUserMembershipSummaryHasBeenSet; }

    /**
     * <p>Returns the channel membership data for an <code>AppInstance</code>.</p>
     */
    inline void SetAppInstanceUserMembershipSummary(const AppInstanceUserMembershipSummary& value) { m_appInstanceUserMembershipSummaryHasBeenSet = true; m_appInstanceUserMembershipSummary = value; }

    /**
     * <p>Returns the channel membership data for an <code>AppInstance</code>.</p>
     */
    inline void SetAppInstanceUserMembershipSummary(AppInstanceUserMembershipSummary&& value) { m_appInstanceUserMembershipSummaryHasBeenSet = true; m_appInstanceUserMembershipSummary = std::move(value); }

    /**
     * <p>Returns the channel membership data for an <code>AppInstance</code>.</p>
     */
    inline ChannelMembershipForAppInstanceUserSummary& WithAppInstanceUserMembershipSummary(const AppInstanceUserMembershipSummary& value) { SetAppInstanceUserMembershipSummary(value); return *this;}

    /**
     * <p>Returns the channel membership data for an <code>AppInstance</code>.</p>
     */
    inline ChannelMembershipForAppInstanceUserSummary& WithAppInstanceUserMembershipSummary(AppInstanceUserMembershipSummary&& value) { SetAppInstanceUserMembershipSummary(std::move(value)); return *this;}

  private:

    ChannelSummary m_channelSummary;
    bool m_channelSummaryHasBeenSet = false;

    AppInstanceUserMembershipSummary m_appInstanceUserMembershipSummary;
    bool m_appInstanceUserMembershipSummaryHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKMessaging
} // namespace Aws

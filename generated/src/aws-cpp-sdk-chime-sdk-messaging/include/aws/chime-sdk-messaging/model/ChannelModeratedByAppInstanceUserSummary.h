/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-messaging/ChimeSDKMessaging_EXPORTS.h>
#include <aws/chime-sdk-messaging/model/ChannelSummary.h>
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
   * <p>Summary of the details of a moderated channel.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-messaging-2021-05-15/ChannelModeratedByAppInstanceUserSummary">AWS
   * API Reference</a></p>
   */
  class ChannelModeratedByAppInstanceUserSummary
  {
  public:
    AWS_CHIMESDKMESSAGING_API ChannelModeratedByAppInstanceUserSummary();
    AWS_CHIMESDKMESSAGING_API ChannelModeratedByAppInstanceUserSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMESSAGING_API ChannelModeratedByAppInstanceUserSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMESSAGING_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Summary of the details of a <code>Channel</code>.</p>
     */
    inline const ChannelSummary& GetChannelSummary() const{ return m_channelSummary; }

    /**
     * <p>Summary of the details of a <code>Channel</code>.</p>
     */
    inline bool ChannelSummaryHasBeenSet() const { return m_channelSummaryHasBeenSet; }

    /**
     * <p>Summary of the details of a <code>Channel</code>.</p>
     */
    inline void SetChannelSummary(const ChannelSummary& value) { m_channelSummaryHasBeenSet = true; m_channelSummary = value; }

    /**
     * <p>Summary of the details of a <code>Channel</code>.</p>
     */
    inline void SetChannelSummary(ChannelSummary&& value) { m_channelSummaryHasBeenSet = true; m_channelSummary = std::move(value); }

    /**
     * <p>Summary of the details of a <code>Channel</code>.</p>
     */
    inline ChannelModeratedByAppInstanceUserSummary& WithChannelSummary(const ChannelSummary& value) { SetChannelSummary(value); return *this;}

    /**
     * <p>Summary of the details of a <code>Channel</code>.</p>
     */
    inline ChannelModeratedByAppInstanceUserSummary& WithChannelSummary(ChannelSummary&& value) { SetChannelSummary(std::move(value)); return *this;}

  private:

    ChannelSummary m_channelSummary;
    bool m_channelSummaryHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKMessaging
} // namespace Aws

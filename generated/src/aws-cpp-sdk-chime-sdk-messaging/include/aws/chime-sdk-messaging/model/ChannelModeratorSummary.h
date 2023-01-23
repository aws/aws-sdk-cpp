/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-messaging/ChimeSDKMessaging_EXPORTS.h>
#include <aws/chime-sdk-messaging/model/Identity.h>
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
   * <p>Summary of the details of a <code>ChannelModerator</code>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-messaging-2021-05-15/ChannelModeratorSummary">AWS
   * API Reference</a></p>
   */
  class ChannelModeratorSummary
  {
  public:
    AWS_CHIMESDKMESSAGING_API ChannelModeratorSummary();
    AWS_CHIMESDKMESSAGING_API ChannelModeratorSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMESSAGING_API ChannelModeratorSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMESSAGING_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The data for a moderator.</p>
     */
    inline const Identity& GetModerator() const{ return m_moderator; }

    /**
     * <p>The data for a moderator.</p>
     */
    inline bool ModeratorHasBeenSet() const { return m_moderatorHasBeenSet; }

    /**
     * <p>The data for a moderator.</p>
     */
    inline void SetModerator(const Identity& value) { m_moderatorHasBeenSet = true; m_moderator = value; }

    /**
     * <p>The data for a moderator.</p>
     */
    inline void SetModerator(Identity&& value) { m_moderatorHasBeenSet = true; m_moderator = std::move(value); }

    /**
     * <p>The data for a moderator.</p>
     */
    inline ChannelModeratorSummary& WithModerator(const Identity& value) { SetModerator(value); return *this;}

    /**
     * <p>The data for a moderator.</p>
     */
    inline ChannelModeratorSummary& WithModerator(Identity&& value) { SetModerator(std::move(value)); return *this;}

  private:

    Identity m_moderator;
    bool m_moderatorHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKMessaging
} // namespace Aws

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
    AWS_CHIMESDKMESSAGING_API ChannelModeratorSummary() = default;
    AWS_CHIMESDKMESSAGING_API ChannelModeratorSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMESSAGING_API ChannelModeratorSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMESSAGING_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The data for a moderator.</p>
     */
    inline const Identity& GetModerator() const { return m_moderator; }
    inline bool ModeratorHasBeenSet() const { return m_moderatorHasBeenSet; }
    template<typename ModeratorT = Identity>
    void SetModerator(ModeratorT&& value) { m_moderatorHasBeenSet = true; m_moderator = std::forward<ModeratorT>(value); }
    template<typename ModeratorT = Identity>
    ChannelModeratorSummary& WithModerator(ModeratorT&& value) { SetModerator(std::forward<ModeratorT>(value)); return *this;}
    ///@}
  private:

    Identity m_moderator;
    bool m_moderatorHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKMessaging
} // namespace Aws

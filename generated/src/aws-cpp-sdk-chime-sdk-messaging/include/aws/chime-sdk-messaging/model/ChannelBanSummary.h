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
   * <p>Summary of the details of a <code>ChannelBan</code>.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-messaging-2021-05-15/ChannelBanSummary">AWS
   * API Reference</a></p>
   */
  class ChannelBanSummary
  {
  public:
    AWS_CHIMESDKMESSAGING_API ChannelBanSummary();
    AWS_CHIMESDKMESSAGING_API ChannelBanSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMESSAGING_API ChannelBanSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMESSAGING_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The member being banned from a channel.</p>
     */
    inline const Identity& GetMember() const{ return m_member; }

    /**
     * <p>The member being banned from a channel.</p>
     */
    inline bool MemberHasBeenSet() const { return m_memberHasBeenSet; }

    /**
     * <p>The member being banned from a channel.</p>
     */
    inline void SetMember(const Identity& value) { m_memberHasBeenSet = true; m_member = value; }

    /**
     * <p>The member being banned from a channel.</p>
     */
    inline void SetMember(Identity&& value) { m_memberHasBeenSet = true; m_member = std::move(value); }

    /**
     * <p>The member being banned from a channel.</p>
     */
    inline ChannelBanSummary& WithMember(const Identity& value) { SetMember(value); return *this;}

    /**
     * <p>The member being banned from a channel.</p>
     */
    inline ChannelBanSummary& WithMember(Identity&& value) { SetMember(std::move(value)); return *this;}

  private:

    Identity m_member;
    bool m_memberHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKMessaging
} // namespace Aws

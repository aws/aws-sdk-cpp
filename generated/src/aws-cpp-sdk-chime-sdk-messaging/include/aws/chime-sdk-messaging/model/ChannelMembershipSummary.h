﻿/**
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
   * <p>Summary of the details of a <code>ChannelMembership</code>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-messaging-2021-05-15/ChannelMembershipSummary">AWS
   * API Reference</a></p>
   */
  class ChannelMembershipSummary
  {
  public:
    AWS_CHIMESDKMESSAGING_API ChannelMembershipSummary() = default;
    AWS_CHIMESDKMESSAGING_API ChannelMembershipSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMESSAGING_API ChannelMembershipSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMESSAGING_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A member's summary data.</p>
     */
    inline const Identity& GetMember() const { return m_member; }
    inline bool MemberHasBeenSet() const { return m_memberHasBeenSet; }
    template<typename MemberT = Identity>
    void SetMember(MemberT&& value) { m_memberHasBeenSet = true; m_member = std::forward<MemberT>(value); }
    template<typename MemberT = Identity>
    ChannelMembershipSummary& WithMember(MemberT&& value) { SetMember(std::forward<MemberT>(value)); return *this;}
    ///@}
  private:

    Identity m_member;
    bool m_memberHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKMessaging
} // namespace Aws

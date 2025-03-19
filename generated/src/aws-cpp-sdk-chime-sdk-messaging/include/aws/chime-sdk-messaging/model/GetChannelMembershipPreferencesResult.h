/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-messaging/ChimeSDKMessaging_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/chime-sdk-messaging/model/Identity.h>
#include <aws/chime-sdk-messaging/model/ChannelMembershipPreferences.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace ChimeSDKMessaging
{
namespace Model
{
  class GetChannelMembershipPreferencesResult
  {
  public:
    AWS_CHIMESDKMESSAGING_API GetChannelMembershipPreferencesResult() = default;
    AWS_CHIMESDKMESSAGING_API GetChannelMembershipPreferencesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CHIMESDKMESSAGING_API GetChannelMembershipPreferencesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ARN of the channel.</p>
     */
    inline const Aws::String& GetChannelArn() const { return m_channelArn; }
    template<typename ChannelArnT = Aws::String>
    void SetChannelArn(ChannelArnT&& value) { m_channelArnHasBeenSet = true; m_channelArn = std::forward<ChannelArnT>(value); }
    template<typename ChannelArnT = Aws::String>
    GetChannelMembershipPreferencesResult& WithChannelArn(ChannelArnT&& value) { SetChannelArn(std::forward<ChannelArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The details of a user.</p>
     */
    inline const Identity& GetMember() const { return m_member; }
    template<typename MemberT = Identity>
    void SetMember(MemberT&& value) { m_memberHasBeenSet = true; m_member = std::forward<MemberT>(value); }
    template<typename MemberT = Identity>
    GetChannelMembershipPreferencesResult& WithMember(MemberT&& value) { SetMember(std::forward<MemberT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The channel membership preferences for an <code>AppInstanceUser</code> .</p>
     */
    inline const ChannelMembershipPreferences& GetPreferences() const { return m_preferences; }
    template<typename PreferencesT = ChannelMembershipPreferences>
    void SetPreferences(PreferencesT&& value) { m_preferencesHasBeenSet = true; m_preferences = std::forward<PreferencesT>(value); }
    template<typename PreferencesT = ChannelMembershipPreferences>
    GetChannelMembershipPreferencesResult& WithPreferences(PreferencesT&& value) { SetPreferences(std::forward<PreferencesT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetChannelMembershipPreferencesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_channelArn;
    bool m_channelArnHasBeenSet = false;

    Identity m_member;
    bool m_memberHasBeenSet = false;

    ChannelMembershipPreferences m_preferences;
    bool m_preferencesHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKMessaging
} // namespace Aws

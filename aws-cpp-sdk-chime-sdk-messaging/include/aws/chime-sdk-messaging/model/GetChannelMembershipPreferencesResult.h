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
    AWS_CHIMESDKMESSAGING_API GetChannelMembershipPreferencesResult();
    AWS_CHIMESDKMESSAGING_API GetChannelMembershipPreferencesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CHIMESDKMESSAGING_API GetChannelMembershipPreferencesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ARN of the channel.</p>
     */
    inline const Aws::String& GetChannelArn() const{ return m_channelArn; }

    /**
     * <p>The ARN of the channel.</p>
     */
    inline void SetChannelArn(const Aws::String& value) { m_channelArn = value; }

    /**
     * <p>The ARN of the channel.</p>
     */
    inline void SetChannelArn(Aws::String&& value) { m_channelArn = std::move(value); }

    /**
     * <p>The ARN of the channel.</p>
     */
    inline void SetChannelArn(const char* value) { m_channelArn.assign(value); }

    /**
     * <p>The ARN of the channel.</p>
     */
    inline GetChannelMembershipPreferencesResult& WithChannelArn(const Aws::String& value) { SetChannelArn(value); return *this;}

    /**
     * <p>The ARN of the channel.</p>
     */
    inline GetChannelMembershipPreferencesResult& WithChannelArn(Aws::String&& value) { SetChannelArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the channel.</p>
     */
    inline GetChannelMembershipPreferencesResult& WithChannelArn(const char* value) { SetChannelArn(value); return *this;}


    /**
     * <p>The details of a user.</p>
     */
    inline const Identity& GetMember() const{ return m_member; }

    /**
     * <p>The details of a user.</p>
     */
    inline void SetMember(const Identity& value) { m_member = value; }

    /**
     * <p>The details of a user.</p>
     */
    inline void SetMember(Identity&& value) { m_member = std::move(value); }

    /**
     * <p>The details of a user.</p>
     */
    inline GetChannelMembershipPreferencesResult& WithMember(const Identity& value) { SetMember(value); return *this;}

    /**
     * <p>The details of a user.</p>
     */
    inline GetChannelMembershipPreferencesResult& WithMember(Identity&& value) { SetMember(std::move(value)); return *this;}


    /**
     * <p>The channel membership preferences for an <code>AppInstanceUser</code> .</p>
     */
    inline const ChannelMembershipPreferences& GetPreferences() const{ return m_preferences; }

    /**
     * <p>The channel membership preferences for an <code>AppInstanceUser</code> .</p>
     */
    inline void SetPreferences(const ChannelMembershipPreferences& value) { m_preferences = value; }

    /**
     * <p>The channel membership preferences for an <code>AppInstanceUser</code> .</p>
     */
    inline void SetPreferences(ChannelMembershipPreferences&& value) { m_preferences = std::move(value); }

    /**
     * <p>The channel membership preferences for an <code>AppInstanceUser</code> .</p>
     */
    inline GetChannelMembershipPreferencesResult& WithPreferences(const ChannelMembershipPreferences& value) { SetPreferences(value); return *this;}

    /**
     * <p>The channel membership preferences for an <code>AppInstanceUser</code> .</p>
     */
    inline GetChannelMembershipPreferencesResult& WithPreferences(ChannelMembershipPreferences&& value) { SetPreferences(std::move(value)); return *this;}

  private:

    Aws::String m_channelArn;

    Identity m_member;

    ChannelMembershipPreferences m_preferences;
  };

} // namespace Model
} // namespace ChimeSDKMessaging
} // namespace Aws

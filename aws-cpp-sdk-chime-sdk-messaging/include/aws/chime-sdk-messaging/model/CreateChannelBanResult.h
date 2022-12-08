/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-messaging/ChimeSDKMessaging_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/chime-sdk-messaging/model/Identity.h>
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
  class CreateChannelBanResult
  {
  public:
    AWS_CHIMESDKMESSAGING_API CreateChannelBanResult();
    AWS_CHIMESDKMESSAGING_API CreateChannelBanResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CHIMESDKMESSAGING_API CreateChannelBanResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ARN of the response to the ban request.</p>
     */
    inline const Aws::String& GetChannelArn() const{ return m_channelArn; }

    /**
     * <p>The ARN of the response to the ban request.</p>
     */
    inline void SetChannelArn(const Aws::String& value) { m_channelArn = value; }

    /**
     * <p>The ARN of the response to the ban request.</p>
     */
    inline void SetChannelArn(Aws::String&& value) { m_channelArn = std::move(value); }

    /**
     * <p>The ARN of the response to the ban request.</p>
     */
    inline void SetChannelArn(const char* value) { m_channelArn.assign(value); }

    /**
     * <p>The ARN of the response to the ban request.</p>
     */
    inline CreateChannelBanResult& WithChannelArn(const Aws::String& value) { SetChannelArn(value); return *this;}

    /**
     * <p>The ARN of the response to the ban request.</p>
     */
    inline CreateChannelBanResult& WithChannelArn(Aws::String&& value) { SetChannelArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the response to the ban request.</p>
     */
    inline CreateChannelBanResult& WithChannelArn(const char* value) { SetChannelArn(value); return *this;}


    /**
     * <p>The <code>ChannelArn</code> and <code>BannedIdentity</code> of the member in
     * the ban response.</p>
     */
    inline const Identity& GetMember() const{ return m_member; }

    /**
     * <p>The <code>ChannelArn</code> and <code>BannedIdentity</code> of the member in
     * the ban response.</p>
     */
    inline void SetMember(const Identity& value) { m_member = value; }

    /**
     * <p>The <code>ChannelArn</code> and <code>BannedIdentity</code> of the member in
     * the ban response.</p>
     */
    inline void SetMember(Identity&& value) { m_member = std::move(value); }

    /**
     * <p>The <code>ChannelArn</code> and <code>BannedIdentity</code> of the member in
     * the ban response.</p>
     */
    inline CreateChannelBanResult& WithMember(const Identity& value) { SetMember(value); return *this;}

    /**
     * <p>The <code>ChannelArn</code> and <code>BannedIdentity</code> of the member in
     * the ban response.</p>
     */
    inline CreateChannelBanResult& WithMember(Identity&& value) { SetMember(std::move(value)); return *this;}

  private:

    Aws::String m_channelArn;

    Identity m_member;
  };

} // namespace Model
} // namespace ChimeSDKMessaging
} // namespace Aws

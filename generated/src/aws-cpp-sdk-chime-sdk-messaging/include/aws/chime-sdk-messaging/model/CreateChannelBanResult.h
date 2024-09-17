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


    ///@{
    /**
     * <p>The ARN of the response to the ban request.</p>
     */
    inline const Aws::String& GetChannelArn() const{ return m_channelArn; }
    inline void SetChannelArn(const Aws::String& value) { m_channelArn = value; }
    inline void SetChannelArn(Aws::String&& value) { m_channelArn = std::move(value); }
    inline void SetChannelArn(const char* value) { m_channelArn.assign(value); }
    inline CreateChannelBanResult& WithChannelArn(const Aws::String& value) { SetChannelArn(value); return *this;}
    inline CreateChannelBanResult& WithChannelArn(Aws::String&& value) { SetChannelArn(std::move(value)); return *this;}
    inline CreateChannelBanResult& WithChannelArn(const char* value) { SetChannelArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <code>ChannelArn</code> and <code>BannedIdentity</code> of the member in
     * the ban response.</p>
     */
    inline const Identity& GetMember() const{ return m_member; }
    inline void SetMember(const Identity& value) { m_member = value; }
    inline void SetMember(Identity&& value) { m_member = std::move(value); }
    inline CreateChannelBanResult& WithMember(const Identity& value) { SetMember(value); return *this;}
    inline CreateChannelBanResult& WithMember(Identity&& value) { SetMember(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateChannelBanResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateChannelBanResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateChannelBanResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_channelArn;

    Identity m_member;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ChimeSDKMessaging
} // namespace Aws

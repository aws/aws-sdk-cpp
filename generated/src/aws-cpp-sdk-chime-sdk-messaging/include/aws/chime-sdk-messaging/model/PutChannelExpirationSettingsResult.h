/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-messaging/ChimeSDKMessaging_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/chime-sdk-messaging/model/ExpirationSettings.h>
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
  class PutChannelExpirationSettingsResult
  {
  public:
    AWS_CHIMESDKMESSAGING_API PutChannelExpirationSettingsResult();
    AWS_CHIMESDKMESSAGING_API PutChannelExpirationSettingsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CHIMESDKMESSAGING_API PutChannelExpirationSettingsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The channel ARN.</p>
     */
    inline const Aws::String& GetChannelArn() const{ return m_channelArn; }

    /**
     * <p>The channel ARN.</p>
     */
    inline void SetChannelArn(const Aws::String& value) { m_channelArn = value; }

    /**
     * <p>The channel ARN.</p>
     */
    inline void SetChannelArn(Aws::String&& value) { m_channelArn = std::move(value); }

    /**
     * <p>The channel ARN.</p>
     */
    inline void SetChannelArn(const char* value) { m_channelArn.assign(value); }

    /**
     * <p>The channel ARN.</p>
     */
    inline PutChannelExpirationSettingsResult& WithChannelArn(const Aws::String& value) { SetChannelArn(value); return *this;}

    /**
     * <p>The channel ARN.</p>
     */
    inline PutChannelExpirationSettingsResult& WithChannelArn(Aws::String&& value) { SetChannelArn(std::move(value)); return *this;}

    /**
     * <p>The channel ARN.</p>
     */
    inline PutChannelExpirationSettingsResult& WithChannelArn(const char* value) { SetChannelArn(value); return *this;}


    /**
     * <p>Settings that control the interval after which a channel is deleted.</p>
     */
    inline const ExpirationSettings& GetExpirationSettings() const{ return m_expirationSettings; }

    /**
     * <p>Settings that control the interval after which a channel is deleted.</p>
     */
    inline void SetExpirationSettings(const ExpirationSettings& value) { m_expirationSettings = value; }

    /**
     * <p>Settings that control the interval after which a channel is deleted.</p>
     */
    inline void SetExpirationSettings(ExpirationSettings&& value) { m_expirationSettings = std::move(value); }

    /**
     * <p>Settings that control the interval after which a channel is deleted.</p>
     */
    inline PutChannelExpirationSettingsResult& WithExpirationSettings(const ExpirationSettings& value) { SetExpirationSettings(value); return *this;}

    /**
     * <p>Settings that control the interval after which a channel is deleted.</p>
     */
    inline PutChannelExpirationSettingsResult& WithExpirationSettings(ExpirationSettings&& value) { SetExpirationSettings(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline PutChannelExpirationSettingsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline PutChannelExpirationSettingsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline PutChannelExpirationSettingsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_channelArn;

    ExpirationSettings m_expirationSettings;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ChimeSDKMessaging
} // namespace Aws

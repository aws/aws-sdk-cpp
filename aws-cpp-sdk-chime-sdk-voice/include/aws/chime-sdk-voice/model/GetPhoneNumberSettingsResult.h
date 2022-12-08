/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-voice/ChimeSDKVoice_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
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
namespace ChimeSDKVoice
{
namespace Model
{
  class GetPhoneNumberSettingsResult
  {
  public:
    AWS_CHIMESDKVOICE_API GetPhoneNumberSettingsResult();
    AWS_CHIMESDKVOICE_API GetPhoneNumberSettingsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CHIMESDKVOICE_API GetPhoneNumberSettingsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const Aws::String& GetCallingName() const{ return m_callingName; }

    
    inline void SetCallingName(const Aws::String& value) { m_callingName = value; }

    
    inline void SetCallingName(Aws::String&& value) { m_callingName = std::move(value); }

    
    inline void SetCallingName(const char* value) { m_callingName.assign(value); }

    
    inline GetPhoneNumberSettingsResult& WithCallingName(const Aws::String& value) { SetCallingName(value); return *this;}

    
    inline GetPhoneNumberSettingsResult& WithCallingName(Aws::String&& value) { SetCallingName(std::move(value)); return *this;}

    
    inline GetPhoneNumberSettingsResult& WithCallingName(const char* value) { SetCallingName(value); return *this;}


    
    inline const Aws::Utils::DateTime& GetCallingNameUpdatedTimestamp() const{ return m_callingNameUpdatedTimestamp; }

    
    inline void SetCallingNameUpdatedTimestamp(const Aws::Utils::DateTime& value) { m_callingNameUpdatedTimestamp = value; }

    
    inline void SetCallingNameUpdatedTimestamp(Aws::Utils::DateTime&& value) { m_callingNameUpdatedTimestamp = std::move(value); }

    
    inline GetPhoneNumberSettingsResult& WithCallingNameUpdatedTimestamp(const Aws::Utils::DateTime& value) { SetCallingNameUpdatedTimestamp(value); return *this;}

    
    inline GetPhoneNumberSettingsResult& WithCallingNameUpdatedTimestamp(Aws::Utils::DateTime&& value) { SetCallingNameUpdatedTimestamp(std::move(value)); return *this;}

  private:

    Aws::String m_callingName;

    Aws::Utils::DateTime m_callingNameUpdatedTimestamp;
  };

} // namespace Model
} // namespace ChimeSDKVoice
} // namespace Aws

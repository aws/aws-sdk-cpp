﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime/Chime_EXPORTS.h>
#include <aws/chime/model/BusinessCallingSettings.h>
#include <aws/chime/model/VoiceConnectorSettings.h>
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
namespace Chime
{
namespace Model
{
  class AWS_CHIME_API GetGlobalSettingsResult
  {
  public:
    GetGlobalSettingsResult();
    GetGlobalSettingsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetGlobalSettingsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon Chime Business Calling settings.</p>
     */
    inline const BusinessCallingSettings& GetBusinessCalling() const{ return m_businessCalling; }

    /**
     * <p>The Amazon Chime Business Calling settings.</p>
     */
    inline void SetBusinessCalling(const BusinessCallingSettings& value) { m_businessCalling = value; }

    /**
     * <p>The Amazon Chime Business Calling settings.</p>
     */
    inline void SetBusinessCalling(BusinessCallingSettings&& value) { m_businessCalling = std::move(value); }

    /**
     * <p>The Amazon Chime Business Calling settings.</p>
     */
    inline GetGlobalSettingsResult& WithBusinessCalling(const BusinessCallingSettings& value) { SetBusinessCalling(value); return *this;}

    /**
     * <p>The Amazon Chime Business Calling settings.</p>
     */
    inline GetGlobalSettingsResult& WithBusinessCalling(BusinessCallingSettings&& value) { SetBusinessCalling(std::move(value)); return *this;}


    /**
     * <p>The Amazon Chime Voice Connector settings.</p>
     */
    inline const VoiceConnectorSettings& GetVoiceConnector() const{ return m_voiceConnector; }

    /**
     * <p>The Amazon Chime Voice Connector settings.</p>
     */
    inline void SetVoiceConnector(const VoiceConnectorSettings& value) { m_voiceConnector = value; }

    /**
     * <p>The Amazon Chime Voice Connector settings.</p>
     */
    inline void SetVoiceConnector(VoiceConnectorSettings&& value) { m_voiceConnector = std::move(value); }

    /**
     * <p>The Amazon Chime Voice Connector settings.</p>
     */
    inline GetGlobalSettingsResult& WithVoiceConnector(const VoiceConnectorSettings& value) { SetVoiceConnector(value); return *this;}

    /**
     * <p>The Amazon Chime Voice Connector settings.</p>
     */
    inline GetGlobalSettingsResult& WithVoiceConnector(VoiceConnectorSettings&& value) { SetVoiceConnector(std::move(value)); return *this;}

  private:

    BusinessCallingSettings m_businessCalling;

    VoiceConnectorSettings m_voiceConnector;
  };

} // namespace Model
} // namespace Chime
} // namespace Aws

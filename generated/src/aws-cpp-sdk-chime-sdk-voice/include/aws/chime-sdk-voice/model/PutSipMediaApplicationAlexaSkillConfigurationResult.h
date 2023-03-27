/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-voice/ChimeSDKVoice_EXPORTS.h>
#include <aws/chime-sdk-voice/model/SipMediaApplicationAlexaSkillConfiguration.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class PutSipMediaApplicationAlexaSkillConfigurationResult
  {
  public:
    AWS_CHIMESDKVOICE_API PutSipMediaApplicationAlexaSkillConfigurationResult();
    AWS_CHIMESDKVOICE_API PutSipMediaApplicationAlexaSkillConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CHIMESDKVOICE_API PutSipMediaApplicationAlexaSkillConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Returns the Alexa Skill configuration.</p>
     */
    inline const SipMediaApplicationAlexaSkillConfiguration& GetSipMediaApplicationAlexaSkillConfiguration() const{ return m_sipMediaApplicationAlexaSkillConfiguration; }

    /**
     * <p>Returns the Alexa Skill configuration.</p>
     */
    inline void SetSipMediaApplicationAlexaSkillConfiguration(const SipMediaApplicationAlexaSkillConfiguration& value) { m_sipMediaApplicationAlexaSkillConfiguration = value; }

    /**
     * <p>Returns the Alexa Skill configuration.</p>
     */
    inline void SetSipMediaApplicationAlexaSkillConfiguration(SipMediaApplicationAlexaSkillConfiguration&& value) { m_sipMediaApplicationAlexaSkillConfiguration = std::move(value); }

    /**
     * <p>Returns the Alexa Skill configuration.</p>
     */
    inline PutSipMediaApplicationAlexaSkillConfigurationResult& WithSipMediaApplicationAlexaSkillConfiguration(const SipMediaApplicationAlexaSkillConfiguration& value) { SetSipMediaApplicationAlexaSkillConfiguration(value); return *this;}

    /**
     * <p>Returns the Alexa Skill configuration.</p>
     */
    inline PutSipMediaApplicationAlexaSkillConfigurationResult& WithSipMediaApplicationAlexaSkillConfiguration(SipMediaApplicationAlexaSkillConfiguration&& value) { SetSipMediaApplicationAlexaSkillConfiguration(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline PutSipMediaApplicationAlexaSkillConfigurationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline PutSipMediaApplicationAlexaSkillConfigurationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline PutSipMediaApplicationAlexaSkillConfigurationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    SipMediaApplicationAlexaSkillConfiguration m_sipMediaApplicationAlexaSkillConfiguration;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ChimeSDKVoice
} // namespace Aws

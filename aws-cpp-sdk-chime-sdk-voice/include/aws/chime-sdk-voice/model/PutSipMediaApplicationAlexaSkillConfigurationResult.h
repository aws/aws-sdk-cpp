/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-voice/ChimeSDKVoice_EXPORTS.h>
#include <aws/chime-sdk-voice/model/SipMediaApplicationAlexaSkillConfiguration.h>
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


    
    inline const SipMediaApplicationAlexaSkillConfiguration& GetSipMediaApplicationAlexaSkillConfiguration() const{ return m_sipMediaApplicationAlexaSkillConfiguration; }

    
    inline void SetSipMediaApplicationAlexaSkillConfiguration(const SipMediaApplicationAlexaSkillConfiguration& value) { m_sipMediaApplicationAlexaSkillConfiguration = value; }

    
    inline void SetSipMediaApplicationAlexaSkillConfiguration(SipMediaApplicationAlexaSkillConfiguration&& value) { m_sipMediaApplicationAlexaSkillConfiguration = std::move(value); }

    
    inline PutSipMediaApplicationAlexaSkillConfigurationResult& WithSipMediaApplicationAlexaSkillConfiguration(const SipMediaApplicationAlexaSkillConfiguration& value) { SetSipMediaApplicationAlexaSkillConfiguration(value); return *this;}

    
    inline PutSipMediaApplicationAlexaSkillConfigurationResult& WithSipMediaApplicationAlexaSkillConfiguration(SipMediaApplicationAlexaSkillConfiguration&& value) { SetSipMediaApplicationAlexaSkillConfiguration(std::move(value)); return *this;}

  private:

    SipMediaApplicationAlexaSkillConfiguration m_sipMediaApplicationAlexaSkillConfiguration;
  };

} // namespace Model
} // namespace ChimeSDKVoice
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-voice/ChimeSDKVoice_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/chime-sdk-voice/model/VoiceConnectorGroup.h>
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
  class ListVoiceConnectorGroupsResult
  {
  public:
    AWS_CHIMESDKVOICE_API ListVoiceConnectorGroupsResult();
    AWS_CHIMESDKVOICE_API ListVoiceConnectorGroupsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CHIMESDKVOICE_API ListVoiceConnectorGroupsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const Aws::Vector<VoiceConnectorGroup>& GetVoiceConnectorGroups() const{ return m_voiceConnectorGroups; }

    
    inline void SetVoiceConnectorGroups(const Aws::Vector<VoiceConnectorGroup>& value) { m_voiceConnectorGroups = value; }

    
    inline void SetVoiceConnectorGroups(Aws::Vector<VoiceConnectorGroup>&& value) { m_voiceConnectorGroups = std::move(value); }

    
    inline ListVoiceConnectorGroupsResult& WithVoiceConnectorGroups(const Aws::Vector<VoiceConnectorGroup>& value) { SetVoiceConnectorGroups(value); return *this;}

    
    inline ListVoiceConnectorGroupsResult& WithVoiceConnectorGroups(Aws::Vector<VoiceConnectorGroup>&& value) { SetVoiceConnectorGroups(std::move(value)); return *this;}

    
    inline ListVoiceConnectorGroupsResult& AddVoiceConnectorGroups(const VoiceConnectorGroup& value) { m_voiceConnectorGroups.push_back(value); return *this; }

    
    inline ListVoiceConnectorGroupsResult& AddVoiceConnectorGroups(VoiceConnectorGroup&& value) { m_voiceConnectorGroups.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    
    inline ListVoiceConnectorGroupsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    
    inline ListVoiceConnectorGroupsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    
    inline ListVoiceConnectorGroupsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<VoiceConnectorGroup> m_voiceConnectorGroups;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace ChimeSDKVoice
} // namespace Aws

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


    /**
     * <p>The details of the Voice Connector groups.</p>
     */
    inline const Aws::Vector<VoiceConnectorGroup>& GetVoiceConnectorGroups() const{ return m_voiceConnectorGroups; }

    /**
     * <p>The details of the Voice Connector groups.</p>
     */
    inline void SetVoiceConnectorGroups(const Aws::Vector<VoiceConnectorGroup>& value) { m_voiceConnectorGroups = value; }

    /**
     * <p>The details of the Voice Connector groups.</p>
     */
    inline void SetVoiceConnectorGroups(Aws::Vector<VoiceConnectorGroup>&& value) { m_voiceConnectorGroups = std::move(value); }

    /**
     * <p>The details of the Voice Connector groups.</p>
     */
    inline ListVoiceConnectorGroupsResult& WithVoiceConnectorGroups(const Aws::Vector<VoiceConnectorGroup>& value) { SetVoiceConnectorGroups(value); return *this;}

    /**
     * <p>The details of the Voice Connector groups.</p>
     */
    inline ListVoiceConnectorGroupsResult& WithVoiceConnectorGroups(Aws::Vector<VoiceConnectorGroup>&& value) { SetVoiceConnectorGroups(std::move(value)); return *this;}

    /**
     * <p>The details of the Voice Connector groups.</p>
     */
    inline ListVoiceConnectorGroupsResult& AddVoiceConnectorGroups(const VoiceConnectorGroup& value) { m_voiceConnectorGroups.push_back(value); return *this; }

    /**
     * <p>The details of the Voice Connector groups.</p>
     */
    inline ListVoiceConnectorGroupsResult& AddVoiceConnectorGroups(VoiceConnectorGroup&& value) { m_voiceConnectorGroups.push_back(std::move(value)); return *this; }


    /**
     * <p>The token used to return the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token used to return the next page of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token used to return the next page of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token used to return the next page of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token used to return the next page of results.</p>
     */
    inline ListVoiceConnectorGroupsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token used to return the next page of results.</p>
     */
    inline ListVoiceConnectorGroupsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token used to return the next page of results.</p>
     */
    inline ListVoiceConnectorGroupsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListVoiceConnectorGroupsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListVoiceConnectorGroupsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListVoiceConnectorGroupsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<VoiceConnectorGroup> m_voiceConnectorGroups;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ChimeSDKVoice
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-voice/ChimeSDKVoice_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/chime-sdk-voice/model/VoiceConnector.h>
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
  class ListVoiceConnectorsResult
  {
  public:
    AWS_CHIMESDKVOICE_API ListVoiceConnectorsResult();
    AWS_CHIMESDKVOICE_API ListVoiceConnectorsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CHIMESDKVOICE_API ListVoiceConnectorsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The details of the Voice Connectors.</p>
     */
    inline const Aws::Vector<VoiceConnector>& GetVoiceConnectors() const{ return m_voiceConnectors; }

    /**
     * <p>The details of the Voice Connectors.</p>
     */
    inline void SetVoiceConnectors(const Aws::Vector<VoiceConnector>& value) { m_voiceConnectors = value; }

    /**
     * <p>The details of the Voice Connectors.</p>
     */
    inline void SetVoiceConnectors(Aws::Vector<VoiceConnector>&& value) { m_voiceConnectors = std::move(value); }

    /**
     * <p>The details of the Voice Connectors.</p>
     */
    inline ListVoiceConnectorsResult& WithVoiceConnectors(const Aws::Vector<VoiceConnector>& value) { SetVoiceConnectors(value); return *this;}

    /**
     * <p>The details of the Voice Connectors.</p>
     */
    inline ListVoiceConnectorsResult& WithVoiceConnectors(Aws::Vector<VoiceConnector>&& value) { SetVoiceConnectors(std::move(value)); return *this;}

    /**
     * <p>The details of the Voice Connectors.</p>
     */
    inline ListVoiceConnectorsResult& AddVoiceConnectors(const VoiceConnector& value) { m_voiceConnectors.push_back(value); return *this; }

    /**
     * <p>The details of the Voice Connectors.</p>
     */
    inline ListVoiceConnectorsResult& AddVoiceConnectors(VoiceConnector&& value) { m_voiceConnectors.push_back(std::move(value)); return *this; }


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
    inline ListVoiceConnectorsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token used to return the next page of results.</p>
     */
    inline ListVoiceConnectorsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token used to return the next page of results.</p>
     */
    inline ListVoiceConnectorsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListVoiceConnectorsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListVoiceConnectorsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListVoiceConnectorsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<VoiceConnector> m_voiceConnectors;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ChimeSDKVoice
} // namespace Aws

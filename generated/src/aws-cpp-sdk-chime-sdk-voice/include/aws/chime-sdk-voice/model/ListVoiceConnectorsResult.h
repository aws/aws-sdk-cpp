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


    
    inline const Aws::Vector<VoiceConnector>& GetVoiceConnectors() const{ return m_voiceConnectors; }

    
    inline void SetVoiceConnectors(const Aws::Vector<VoiceConnector>& value) { m_voiceConnectors = value; }

    
    inline void SetVoiceConnectors(Aws::Vector<VoiceConnector>&& value) { m_voiceConnectors = std::move(value); }

    
    inline ListVoiceConnectorsResult& WithVoiceConnectors(const Aws::Vector<VoiceConnector>& value) { SetVoiceConnectors(value); return *this;}

    
    inline ListVoiceConnectorsResult& WithVoiceConnectors(Aws::Vector<VoiceConnector>&& value) { SetVoiceConnectors(std::move(value)); return *this;}

    
    inline ListVoiceConnectorsResult& AddVoiceConnectors(const VoiceConnector& value) { m_voiceConnectors.push_back(value); return *this; }

    
    inline ListVoiceConnectorsResult& AddVoiceConnectors(VoiceConnector&& value) { m_voiceConnectors.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    
    inline ListVoiceConnectorsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    
    inline ListVoiceConnectorsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    
    inline ListVoiceConnectorsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<VoiceConnector> m_voiceConnectors;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace ChimeSDKVoice
} // namespace Aws

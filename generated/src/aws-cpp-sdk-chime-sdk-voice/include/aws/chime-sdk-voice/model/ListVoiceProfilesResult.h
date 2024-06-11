/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-voice/ChimeSDKVoice_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/chime-sdk-voice/model/VoiceProfileSummary.h>
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
  class ListVoiceProfilesResult
  {
  public:
    AWS_CHIMESDKVOICE_API ListVoiceProfilesResult();
    AWS_CHIMESDKVOICE_API ListVoiceProfilesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CHIMESDKVOICE_API ListVoiceProfilesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The list of voice profiles.</p>
     */
    inline const Aws::Vector<VoiceProfileSummary>& GetVoiceProfiles() const{ return m_voiceProfiles; }
    inline void SetVoiceProfiles(const Aws::Vector<VoiceProfileSummary>& value) { m_voiceProfiles = value; }
    inline void SetVoiceProfiles(Aws::Vector<VoiceProfileSummary>&& value) { m_voiceProfiles = std::move(value); }
    inline ListVoiceProfilesResult& WithVoiceProfiles(const Aws::Vector<VoiceProfileSummary>& value) { SetVoiceProfiles(value); return *this;}
    inline ListVoiceProfilesResult& WithVoiceProfiles(Aws::Vector<VoiceProfileSummary>&& value) { SetVoiceProfiles(std::move(value)); return *this;}
    inline ListVoiceProfilesResult& AddVoiceProfiles(const VoiceProfileSummary& value) { m_voiceProfiles.push_back(value); return *this; }
    inline ListVoiceProfilesResult& AddVoiceProfiles(VoiceProfileSummary&& value) { m_voiceProfiles.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token used to retrieve the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListVoiceProfilesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListVoiceProfilesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListVoiceProfilesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListVoiceProfilesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListVoiceProfilesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListVoiceProfilesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<VoiceProfileSummary> m_voiceProfiles;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ChimeSDKVoice
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-voice/ChimeSDKVoice_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/chime-sdk-voice/model/VoiceProfileDomainSummary.h>
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
  class ListVoiceProfileDomainsResult
  {
  public:
    AWS_CHIMESDKVOICE_API ListVoiceProfileDomainsResult();
    AWS_CHIMESDKVOICE_API ListVoiceProfileDomainsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CHIMESDKVOICE_API ListVoiceProfileDomainsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The list of voice profile domains.</p>
     */
    inline const Aws::Vector<VoiceProfileDomainSummary>& GetVoiceProfileDomains() const{ return m_voiceProfileDomains; }

    /**
     * <p>The list of voice profile domains.</p>
     */
    inline void SetVoiceProfileDomains(const Aws::Vector<VoiceProfileDomainSummary>& value) { m_voiceProfileDomains = value; }

    /**
     * <p>The list of voice profile domains.</p>
     */
    inline void SetVoiceProfileDomains(Aws::Vector<VoiceProfileDomainSummary>&& value) { m_voiceProfileDomains = std::move(value); }

    /**
     * <p>The list of voice profile domains.</p>
     */
    inline ListVoiceProfileDomainsResult& WithVoiceProfileDomains(const Aws::Vector<VoiceProfileDomainSummary>& value) { SetVoiceProfileDomains(value); return *this;}

    /**
     * <p>The list of voice profile domains.</p>
     */
    inline ListVoiceProfileDomainsResult& WithVoiceProfileDomains(Aws::Vector<VoiceProfileDomainSummary>&& value) { SetVoiceProfileDomains(std::move(value)); return *this;}

    /**
     * <p>The list of voice profile domains.</p>
     */
    inline ListVoiceProfileDomainsResult& AddVoiceProfileDomains(const VoiceProfileDomainSummary& value) { m_voiceProfileDomains.push_back(value); return *this; }

    /**
     * <p>The list of voice profile domains.</p>
     */
    inline ListVoiceProfileDomainsResult& AddVoiceProfileDomains(VoiceProfileDomainSummary&& value) { m_voiceProfileDomains.push_back(std::move(value)); return *this; }


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
    inline ListVoiceProfileDomainsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token used to return the next page of results.</p>
     */
    inline ListVoiceProfileDomainsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token used to return the next page of results.</p>
     */
    inline ListVoiceProfileDomainsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListVoiceProfileDomainsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListVoiceProfileDomainsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListVoiceProfileDomainsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<VoiceProfileDomainSummary> m_voiceProfileDomains;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ChimeSDKVoice
} // namespace Aws

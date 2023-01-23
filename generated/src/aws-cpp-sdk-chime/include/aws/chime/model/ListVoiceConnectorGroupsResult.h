/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime/Chime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/chime/model/VoiceConnectorGroup.h>
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
  class ListVoiceConnectorGroupsResult
  {
  public:
    AWS_CHIME_API ListVoiceConnectorGroupsResult();
    AWS_CHIME_API ListVoiceConnectorGroupsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CHIME_API ListVoiceConnectorGroupsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The details of the Amazon Chime Voice Connector groups.</p>
     */
    inline const Aws::Vector<VoiceConnectorGroup>& GetVoiceConnectorGroups() const{ return m_voiceConnectorGroups; }

    /**
     * <p>The details of the Amazon Chime Voice Connector groups.</p>
     */
    inline void SetVoiceConnectorGroups(const Aws::Vector<VoiceConnectorGroup>& value) { m_voiceConnectorGroups = value; }

    /**
     * <p>The details of the Amazon Chime Voice Connector groups.</p>
     */
    inline void SetVoiceConnectorGroups(Aws::Vector<VoiceConnectorGroup>&& value) { m_voiceConnectorGroups = std::move(value); }

    /**
     * <p>The details of the Amazon Chime Voice Connector groups.</p>
     */
    inline ListVoiceConnectorGroupsResult& WithVoiceConnectorGroups(const Aws::Vector<VoiceConnectorGroup>& value) { SetVoiceConnectorGroups(value); return *this;}

    /**
     * <p>The details of the Amazon Chime Voice Connector groups.</p>
     */
    inline ListVoiceConnectorGroupsResult& WithVoiceConnectorGroups(Aws::Vector<VoiceConnectorGroup>&& value) { SetVoiceConnectorGroups(std::move(value)); return *this;}

    /**
     * <p>The details of the Amazon Chime Voice Connector groups.</p>
     */
    inline ListVoiceConnectorGroupsResult& AddVoiceConnectorGroups(const VoiceConnectorGroup& value) { m_voiceConnectorGroups.push_back(value); return *this; }

    /**
     * <p>The details of the Amazon Chime Voice Connector groups.</p>
     */
    inline ListVoiceConnectorGroupsResult& AddVoiceConnectorGroups(VoiceConnectorGroup&& value) { m_voiceConnectorGroups.push_back(std::move(value)); return *this; }


    /**
     * <p>The token to use to retrieve the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token to use to retrieve the next page of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token to use to retrieve the next page of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token to use to retrieve the next page of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token to use to retrieve the next page of results.</p>
     */
    inline ListVoiceConnectorGroupsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to use to retrieve the next page of results.</p>
     */
    inline ListVoiceConnectorGroupsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to use to retrieve the next page of results.</p>
     */
    inline ListVoiceConnectorGroupsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<VoiceConnectorGroup> m_voiceConnectorGroups;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace Chime
} // namespace Aws

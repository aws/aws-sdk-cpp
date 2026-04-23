/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/chime/Chime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/chime/model/VoiceConnector.h>
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
  class AWS_CHIME_API ListVoiceConnectorsResult
  {
  public:
    ListVoiceConnectorsResult();
    ListVoiceConnectorsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListVoiceConnectorsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The details of the Amazon Chime Voice Connectors.</p>
     */
    inline const Aws::Vector<VoiceConnector>& GetVoiceConnectors() const{ return m_voiceConnectors; }

    /**
     * <p>The details of the Amazon Chime Voice Connectors.</p>
     */
    inline void SetVoiceConnectors(const Aws::Vector<VoiceConnector>& value) { m_voiceConnectors = value; }

    /**
     * <p>The details of the Amazon Chime Voice Connectors.</p>
     */
    inline void SetVoiceConnectors(Aws::Vector<VoiceConnector>&& value) { m_voiceConnectors = std::move(value); }

    /**
     * <p>The details of the Amazon Chime Voice Connectors.</p>
     */
    inline ListVoiceConnectorsResult& WithVoiceConnectors(const Aws::Vector<VoiceConnector>& value) { SetVoiceConnectors(value); return *this;}

    /**
     * <p>The details of the Amazon Chime Voice Connectors.</p>
     */
    inline ListVoiceConnectorsResult& WithVoiceConnectors(Aws::Vector<VoiceConnector>&& value) { SetVoiceConnectors(std::move(value)); return *this;}

    /**
     * <p>The details of the Amazon Chime Voice Connectors.</p>
     */
    inline ListVoiceConnectorsResult& AddVoiceConnectors(const VoiceConnector& value) { m_voiceConnectors.push_back(value); return *this; }

    /**
     * <p>The details of the Amazon Chime Voice Connectors.</p>
     */
    inline ListVoiceConnectorsResult& AddVoiceConnectors(VoiceConnector&& value) { m_voiceConnectors.push_back(std::move(value)); return *this; }


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
    inline ListVoiceConnectorsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to use to retrieve the next page of results.</p>
     */
    inline ListVoiceConnectorsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to use to retrieve the next page of results.</p>
     */
    inline ListVoiceConnectorsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<VoiceConnector> m_voiceConnectors;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace Chime
} // namespace Aws

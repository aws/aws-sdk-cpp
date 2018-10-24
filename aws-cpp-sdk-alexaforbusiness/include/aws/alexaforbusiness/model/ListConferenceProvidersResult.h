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
#include <aws/alexaforbusiness/AlexaForBusiness_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/alexaforbusiness/model/ConferenceProvider.h>
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
namespace AlexaForBusiness
{
namespace Model
{
  class AWS_ALEXAFORBUSINESS_API ListConferenceProvidersResult
  {
  public:
    ListConferenceProvidersResult();
    ListConferenceProvidersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListConferenceProvidersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The conference providers.</p>
     */
    inline const Aws::Vector<ConferenceProvider>& GetConferenceProviders() const{ return m_conferenceProviders; }

    /**
     * <p>The conference providers.</p>
     */
    inline void SetConferenceProviders(const Aws::Vector<ConferenceProvider>& value) { m_conferenceProviders = value; }

    /**
     * <p>The conference providers.</p>
     */
    inline void SetConferenceProviders(Aws::Vector<ConferenceProvider>&& value) { m_conferenceProviders = std::move(value); }

    /**
     * <p>The conference providers.</p>
     */
    inline ListConferenceProvidersResult& WithConferenceProviders(const Aws::Vector<ConferenceProvider>& value) { SetConferenceProviders(value); return *this;}

    /**
     * <p>The conference providers.</p>
     */
    inline ListConferenceProvidersResult& WithConferenceProviders(Aws::Vector<ConferenceProvider>&& value) { SetConferenceProviders(std::move(value)); return *this;}

    /**
     * <p>The conference providers.</p>
     */
    inline ListConferenceProvidersResult& AddConferenceProviders(const ConferenceProvider& value) { m_conferenceProviders.push_back(value); return *this; }

    /**
     * <p>The conference providers.</p>
     */
    inline ListConferenceProvidersResult& AddConferenceProviders(ConferenceProvider&& value) { m_conferenceProviders.push_back(std::move(value)); return *this; }


    /**
     * <p>The tokens used for pagination.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The tokens used for pagination.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The tokens used for pagination.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The tokens used for pagination.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The tokens used for pagination.</p>
     */
    inline ListConferenceProvidersResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The tokens used for pagination.</p>
     */
    inline ListConferenceProvidersResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The tokens used for pagination.</p>
     */
    inline ListConferenceProvidersResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<ConferenceProvider> m_conferenceProviders;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace AlexaForBusiness
} // namespace Aws

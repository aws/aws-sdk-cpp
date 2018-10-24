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
  class AWS_ALEXAFORBUSINESS_API GetConferenceProviderResult
  {
  public:
    GetConferenceProviderResult();
    GetConferenceProviderResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetConferenceProviderResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The conference provider.</p>
     */
    inline const ConferenceProvider& GetConferenceProvider() const{ return m_conferenceProvider; }

    /**
     * <p>The conference provider.</p>
     */
    inline void SetConferenceProvider(const ConferenceProvider& value) { m_conferenceProvider = value; }

    /**
     * <p>The conference provider.</p>
     */
    inline void SetConferenceProvider(ConferenceProvider&& value) { m_conferenceProvider = std::move(value); }

    /**
     * <p>The conference provider.</p>
     */
    inline GetConferenceProviderResult& WithConferenceProvider(const ConferenceProvider& value) { SetConferenceProvider(value); return *this;}

    /**
     * <p>The conference provider.</p>
     */
    inline GetConferenceProviderResult& WithConferenceProvider(ConferenceProvider&& value) { SetConferenceProvider(std::move(value)); return *this;}

  private:

    ConferenceProvider m_conferenceProvider;
  };

} // namespace Model
} // namespace AlexaForBusiness
} // namespace Aws

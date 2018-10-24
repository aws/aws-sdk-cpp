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
#include <aws/alexaforbusiness/model/ConferencePreference.h>
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
  class AWS_ALEXAFORBUSINESS_API GetConferencePreferenceResult
  {
  public:
    GetConferencePreferenceResult();
    GetConferencePreferenceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetConferencePreferenceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The conference preference.</p>
     */
    inline const ConferencePreference& GetPreference() const{ return m_preference; }

    /**
     * <p>The conference preference.</p>
     */
    inline void SetPreference(const ConferencePreference& value) { m_preference = value; }

    /**
     * <p>The conference preference.</p>
     */
    inline void SetPreference(ConferencePreference&& value) { m_preference = std::move(value); }

    /**
     * <p>The conference preference.</p>
     */
    inline GetConferencePreferenceResult& WithPreference(const ConferencePreference& value) { SetPreference(value); return *this;}

    /**
     * <p>The conference preference.</p>
     */
    inline GetConferencePreferenceResult& WithPreference(ConferencePreference&& value) { SetPreference(std::move(value)); return *this;}

  private:

    ConferencePreference m_preference;
  };

} // namespace Model
} // namespace AlexaForBusiness
} // namespace Aws

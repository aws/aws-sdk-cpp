/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class GetConferencePreferenceResult
  {
  public:
    AWS_ALEXAFORBUSINESS_API GetConferencePreferenceResult();
    AWS_ALEXAFORBUSINESS_API GetConferencePreferenceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ALEXAFORBUSINESS_API GetConferencePreferenceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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

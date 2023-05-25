/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/alexaforbusiness/AlexaForBusiness_EXPORTS.h>
#include <aws/alexaforbusiness/model/ConferencePreference.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetConferencePreferenceResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetConferencePreferenceResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetConferencePreferenceResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    ConferencePreference m_preference;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace AlexaForBusiness
} // namespace Aws

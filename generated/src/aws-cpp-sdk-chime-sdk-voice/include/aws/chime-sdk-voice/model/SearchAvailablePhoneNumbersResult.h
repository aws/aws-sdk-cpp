/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-voice/ChimeSDKVoice_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace ChimeSDKVoice
{
namespace Model
{
  class SearchAvailablePhoneNumbersResult
  {
  public:
    AWS_CHIMESDKVOICE_API SearchAvailablePhoneNumbersResult();
    AWS_CHIMESDKVOICE_API SearchAvailablePhoneNumbersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CHIMESDKVOICE_API SearchAvailablePhoneNumbersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Confines a search to just the phone numbers in the E.164 format.</p>
     */
    inline const Aws::Vector<Aws::String>& GetE164PhoneNumbers() const{ return m_e164PhoneNumbers; }

    /**
     * <p>Confines a search to just the phone numbers in the E.164 format.</p>
     */
    inline void SetE164PhoneNumbers(const Aws::Vector<Aws::String>& value) { m_e164PhoneNumbers = value; }

    /**
     * <p>Confines a search to just the phone numbers in the E.164 format.</p>
     */
    inline void SetE164PhoneNumbers(Aws::Vector<Aws::String>&& value) { m_e164PhoneNumbers = std::move(value); }

    /**
     * <p>Confines a search to just the phone numbers in the E.164 format.</p>
     */
    inline SearchAvailablePhoneNumbersResult& WithE164PhoneNumbers(const Aws::Vector<Aws::String>& value) { SetE164PhoneNumbers(value); return *this;}

    /**
     * <p>Confines a search to just the phone numbers in the E.164 format.</p>
     */
    inline SearchAvailablePhoneNumbersResult& WithE164PhoneNumbers(Aws::Vector<Aws::String>&& value) { SetE164PhoneNumbers(std::move(value)); return *this;}

    /**
     * <p>Confines a search to just the phone numbers in the E.164 format.</p>
     */
    inline SearchAvailablePhoneNumbersResult& AddE164PhoneNumbers(const Aws::String& value) { m_e164PhoneNumbers.push_back(value); return *this; }

    /**
     * <p>Confines a search to just the phone numbers in the E.164 format.</p>
     */
    inline SearchAvailablePhoneNumbersResult& AddE164PhoneNumbers(Aws::String&& value) { m_e164PhoneNumbers.push_back(std::move(value)); return *this; }

    /**
     * <p>Confines a search to just the phone numbers in the E.164 format.</p>
     */
    inline SearchAvailablePhoneNumbersResult& AddE164PhoneNumbers(const char* value) { m_e164PhoneNumbers.push_back(value); return *this; }


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
    inline SearchAvailablePhoneNumbersResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token used to return the next page of results.</p>
     */
    inline SearchAvailablePhoneNumbersResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token used to return the next page of results.</p>
     */
    inline SearchAvailablePhoneNumbersResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline SearchAvailablePhoneNumbersResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline SearchAvailablePhoneNumbersResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline SearchAvailablePhoneNumbersResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_e164PhoneNumbers;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ChimeSDKVoice
} // namespace Aws

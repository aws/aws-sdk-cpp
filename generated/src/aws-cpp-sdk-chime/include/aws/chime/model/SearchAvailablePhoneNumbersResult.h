/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime/Chime_EXPORTS.h>
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
namespace Chime
{
namespace Model
{
  class SearchAvailablePhoneNumbersResult
  {
  public:
    AWS_CHIME_API SearchAvailablePhoneNumbersResult();
    AWS_CHIME_API SearchAvailablePhoneNumbersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CHIME_API SearchAvailablePhoneNumbersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>List of phone numbers, in E.164 format.</p>
     */
    inline const Aws::Vector<Aws::String>& GetE164PhoneNumbers() const{ return m_e164PhoneNumbers; }

    /**
     * <p>List of phone numbers, in E.164 format.</p>
     */
    inline void SetE164PhoneNumbers(const Aws::Vector<Aws::String>& value) { m_e164PhoneNumbers = value; }

    /**
     * <p>List of phone numbers, in E.164 format.</p>
     */
    inline void SetE164PhoneNumbers(Aws::Vector<Aws::String>&& value) { m_e164PhoneNumbers = std::move(value); }

    /**
     * <p>List of phone numbers, in E.164 format.</p>
     */
    inline SearchAvailablePhoneNumbersResult& WithE164PhoneNumbers(const Aws::Vector<Aws::String>& value) { SetE164PhoneNumbers(value); return *this;}

    /**
     * <p>List of phone numbers, in E.164 format.</p>
     */
    inline SearchAvailablePhoneNumbersResult& WithE164PhoneNumbers(Aws::Vector<Aws::String>&& value) { SetE164PhoneNumbers(std::move(value)); return *this;}

    /**
     * <p>List of phone numbers, in E.164 format.</p>
     */
    inline SearchAvailablePhoneNumbersResult& AddE164PhoneNumbers(const Aws::String& value) { m_e164PhoneNumbers.push_back(value); return *this; }

    /**
     * <p>List of phone numbers, in E.164 format.</p>
     */
    inline SearchAvailablePhoneNumbersResult& AddE164PhoneNumbers(Aws::String&& value) { m_e164PhoneNumbers.push_back(std::move(value)); return *this; }

    /**
     * <p>List of phone numbers, in E.164 format.</p>
     */
    inline SearchAvailablePhoneNumbersResult& AddE164PhoneNumbers(const char* value) { m_e164PhoneNumbers.push_back(value); return *this; }


    /**
     * <p>The token used to retrieve the next page of search results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token used to retrieve the next page of search results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token used to retrieve the next page of search results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token used to retrieve the next page of search results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token used to retrieve the next page of search results.</p>
     */
    inline SearchAvailablePhoneNumbersResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token used to retrieve the next page of search results.</p>
     */
    inline SearchAvailablePhoneNumbersResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token used to retrieve the next page of search results.</p>
     */
    inline SearchAvailablePhoneNumbersResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_e164PhoneNumbers;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace Chime
} // namespace Aws

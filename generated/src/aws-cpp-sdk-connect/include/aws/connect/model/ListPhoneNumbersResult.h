/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/connect/model/PhoneNumberSummary.h>
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
namespace Connect
{
namespace Model
{
  class ListPhoneNumbersResult
  {
  public:
    AWS_CONNECT_API ListPhoneNumbersResult();
    AWS_CONNECT_API ListPhoneNumbersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECT_API ListPhoneNumbersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the phone numbers.</p>
     */
    inline const Aws::Vector<PhoneNumberSummary>& GetPhoneNumberSummaryList() const{ return m_phoneNumberSummaryList; }

    /**
     * <p>Information about the phone numbers.</p>
     */
    inline void SetPhoneNumberSummaryList(const Aws::Vector<PhoneNumberSummary>& value) { m_phoneNumberSummaryList = value; }

    /**
     * <p>Information about the phone numbers.</p>
     */
    inline void SetPhoneNumberSummaryList(Aws::Vector<PhoneNumberSummary>&& value) { m_phoneNumberSummaryList = std::move(value); }

    /**
     * <p>Information about the phone numbers.</p>
     */
    inline ListPhoneNumbersResult& WithPhoneNumberSummaryList(const Aws::Vector<PhoneNumberSummary>& value) { SetPhoneNumberSummaryList(value); return *this;}

    /**
     * <p>Information about the phone numbers.</p>
     */
    inline ListPhoneNumbersResult& WithPhoneNumberSummaryList(Aws::Vector<PhoneNumberSummary>&& value) { SetPhoneNumberSummaryList(std::move(value)); return *this;}

    /**
     * <p>Information about the phone numbers.</p>
     */
    inline ListPhoneNumbersResult& AddPhoneNumberSummaryList(const PhoneNumberSummary& value) { m_phoneNumberSummaryList.push_back(value); return *this; }

    /**
     * <p>Information about the phone numbers.</p>
     */
    inline ListPhoneNumbersResult& AddPhoneNumberSummaryList(PhoneNumberSummary&& value) { m_phoneNumberSummaryList.push_back(std::move(value)); return *this; }


    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>
     */
    inline ListPhoneNumbersResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>
     */
    inline ListPhoneNumbersResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>
     */
    inline ListPhoneNumbersResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<PhoneNumberSummary> m_phoneNumberSummaryList;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws

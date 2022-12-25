/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/connect/model/ListPhoneNumbersSummary.h>
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
  class ListPhoneNumbersV2Result
  {
  public:
    AWS_CONNECT_API ListPhoneNumbersV2Result();
    AWS_CONNECT_API ListPhoneNumbersV2Result(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECT_API ListPhoneNumbersV2Result& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    inline ListPhoneNumbersV2Result& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>
     */
    inline ListPhoneNumbersV2Result& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>
     */
    inline ListPhoneNumbersV2Result& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>Information about phone numbers that have been claimed to your Amazon Connect
     * instances or traffic distribution groups.</p>
     */
    inline const Aws::Vector<ListPhoneNumbersSummary>& GetListPhoneNumbersSummaryList() const{ return m_listPhoneNumbersSummaryList; }

    /**
     * <p>Information about phone numbers that have been claimed to your Amazon Connect
     * instances or traffic distribution groups.</p>
     */
    inline void SetListPhoneNumbersSummaryList(const Aws::Vector<ListPhoneNumbersSummary>& value) { m_listPhoneNumbersSummaryList = value; }

    /**
     * <p>Information about phone numbers that have been claimed to your Amazon Connect
     * instances or traffic distribution groups.</p>
     */
    inline void SetListPhoneNumbersSummaryList(Aws::Vector<ListPhoneNumbersSummary>&& value) { m_listPhoneNumbersSummaryList = std::move(value); }

    /**
     * <p>Information about phone numbers that have been claimed to your Amazon Connect
     * instances or traffic distribution groups.</p>
     */
    inline ListPhoneNumbersV2Result& WithListPhoneNumbersSummaryList(const Aws::Vector<ListPhoneNumbersSummary>& value) { SetListPhoneNumbersSummaryList(value); return *this;}

    /**
     * <p>Information about phone numbers that have been claimed to your Amazon Connect
     * instances or traffic distribution groups.</p>
     */
    inline ListPhoneNumbersV2Result& WithListPhoneNumbersSummaryList(Aws::Vector<ListPhoneNumbersSummary>&& value) { SetListPhoneNumbersSummaryList(std::move(value)); return *this;}

    /**
     * <p>Information about phone numbers that have been claimed to your Amazon Connect
     * instances or traffic distribution groups.</p>
     */
    inline ListPhoneNumbersV2Result& AddListPhoneNumbersSummaryList(const ListPhoneNumbersSummary& value) { m_listPhoneNumbersSummaryList.push_back(value); return *this; }

    /**
     * <p>Information about phone numbers that have been claimed to your Amazon Connect
     * instances or traffic distribution groups.</p>
     */
    inline ListPhoneNumbersV2Result& AddListPhoneNumbersSummaryList(ListPhoneNumbersSummary&& value) { m_listPhoneNumbersSummaryList.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_nextToken;

    Aws::Vector<ListPhoneNumbersSummary> m_listPhoneNumbersSummaryList;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws

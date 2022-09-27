﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/connect/model/AvailableNumberSummary.h>
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
  class AWS_CONNECT_API SearchAvailablePhoneNumbersResult
  {
  public:
    SearchAvailablePhoneNumbersResult();
    SearchAvailablePhoneNumbersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    SearchAvailablePhoneNumbersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    inline SearchAvailablePhoneNumbersResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>
     */
    inline SearchAvailablePhoneNumbersResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>
     */
    inline SearchAvailablePhoneNumbersResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>A list of available phone numbers that you can claim for your Amazon Connect
     * instance.</p>
     */
    inline const Aws::Vector<AvailableNumberSummary>& GetAvailableNumbersList() const{ return m_availableNumbersList; }

    /**
     * <p>A list of available phone numbers that you can claim for your Amazon Connect
     * instance.</p>
     */
    inline void SetAvailableNumbersList(const Aws::Vector<AvailableNumberSummary>& value) { m_availableNumbersList = value; }

    /**
     * <p>A list of available phone numbers that you can claim for your Amazon Connect
     * instance.</p>
     */
    inline void SetAvailableNumbersList(Aws::Vector<AvailableNumberSummary>&& value) { m_availableNumbersList = std::move(value); }

    /**
     * <p>A list of available phone numbers that you can claim for your Amazon Connect
     * instance.</p>
     */
    inline SearchAvailablePhoneNumbersResult& WithAvailableNumbersList(const Aws::Vector<AvailableNumberSummary>& value) { SetAvailableNumbersList(value); return *this;}

    /**
     * <p>A list of available phone numbers that you can claim for your Amazon Connect
     * instance.</p>
     */
    inline SearchAvailablePhoneNumbersResult& WithAvailableNumbersList(Aws::Vector<AvailableNumberSummary>&& value) { SetAvailableNumbersList(std::move(value)); return *this;}

    /**
     * <p>A list of available phone numbers that you can claim for your Amazon Connect
     * instance.</p>
     */
    inline SearchAvailablePhoneNumbersResult& AddAvailableNumbersList(const AvailableNumberSummary& value) { m_availableNumbersList.push_back(value); return *this; }

    /**
     * <p>A list of available phone numbers that you can claim for your Amazon Connect
     * instance.</p>
     */
    inline SearchAvailablePhoneNumbersResult& AddAvailableNumbersList(AvailableNumberSummary&& value) { m_availableNumbersList.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_nextToken;

    Aws::Vector<AvailableNumberSummary> m_availableNumbersList;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws

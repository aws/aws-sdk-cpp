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
  class SearchAvailablePhoneNumbersResult
  {
  public:
    AWS_CONNECT_API SearchAvailablePhoneNumbersResult();
    AWS_CONNECT_API SearchAvailablePhoneNumbersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECT_API SearchAvailablePhoneNumbersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline SearchAvailablePhoneNumbersResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline SearchAvailablePhoneNumbersResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline SearchAvailablePhoneNumbersResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of available phone numbers that you can claim to your Amazon Connect
     * instance or traffic distribution group.</p>
     */
    inline const Aws::Vector<AvailableNumberSummary>& GetAvailableNumbersList() const{ return m_availableNumbersList; }
    inline void SetAvailableNumbersList(const Aws::Vector<AvailableNumberSummary>& value) { m_availableNumbersList = value; }
    inline void SetAvailableNumbersList(Aws::Vector<AvailableNumberSummary>&& value) { m_availableNumbersList = std::move(value); }
    inline SearchAvailablePhoneNumbersResult& WithAvailableNumbersList(const Aws::Vector<AvailableNumberSummary>& value) { SetAvailableNumbersList(value); return *this;}
    inline SearchAvailablePhoneNumbersResult& WithAvailableNumbersList(Aws::Vector<AvailableNumberSummary>&& value) { SetAvailableNumbersList(std::move(value)); return *this;}
    inline SearchAvailablePhoneNumbersResult& AddAvailableNumbersList(const AvailableNumberSummary& value) { m_availableNumbersList.push_back(value); return *this; }
    inline SearchAvailablePhoneNumbersResult& AddAvailableNumbersList(AvailableNumberSummary&& value) { m_availableNumbersList.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline SearchAvailablePhoneNumbersResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline SearchAvailablePhoneNumbersResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline SearchAvailablePhoneNumbersResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;

    Aws::Vector<AvailableNumberSummary> m_availableNumbersList;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws

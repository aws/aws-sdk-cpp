﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/connect/model/HoursOfOperationSummary.h>
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
  class ListHoursOfOperationsResult
  {
  public:
    AWS_CONNECT_API ListHoursOfOperationsResult();
    AWS_CONNECT_API ListHoursOfOperationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECT_API ListHoursOfOperationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about the hours of operation.</p>
     */
    inline const Aws::Vector<HoursOfOperationSummary>& GetHoursOfOperationSummaryList() const{ return m_hoursOfOperationSummaryList; }
    inline void SetHoursOfOperationSummaryList(const Aws::Vector<HoursOfOperationSummary>& value) { m_hoursOfOperationSummaryList = value; }
    inline void SetHoursOfOperationSummaryList(Aws::Vector<HoursOfOperationSummary>&& value) { m_hoursOfOperationSummaryList = std::move(value); }
    inline ListHoursOfOperationsResult& WithHoursOfOperationSummaryList(const Aws::Vector<HoursOfOperationSummary>& value) { SetHoursOfOperationSummaryList(value); return *this;}
    inline ListHoursOfOperationsResult& WithHoursOfOperationSummaryList(Aws::Vector<HoursOfOperationSummary>&& value) { SetHoursOfOperationSummaryList(std::move(value)); return *this;}
    inline ListHoursOfOperationsResult& AddHoursOfOperationSummaryList(const HoursOfOperationSummary& value) { m_hoursOfOperationSummaryList.push_back(value); return *this; }
    inline ListHoursOfOperationsResult& AddHoursOfOperationSummaryList(HoursOfOperationSummary&& value) { m_hoursOfOperationSummaryList.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListHoursOfOperationsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListHoursOfOperationsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListHoursOfOperationsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListHoursOfOperationsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListHoursOfOperationsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListHoursOfOperationsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<HoursOfOperationSummary> m_hoursOfOperationSummaryList;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws

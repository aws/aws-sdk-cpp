﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/guardduty/model/UsageStatistics.h>
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
namespace GuardDuty
{
namespace Model
{
  class GetUsageStatisticsResult
  {
  public:
    AWS_GUARDDUTY_API GetUsageStatisticsResult();
    AWS_GUARDDUTY_API GetUsageStatisticsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GUARDDUTY_API GetUsageStatisticsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The usage statistics object. If a UsageStatisticType was provided, the
     * objects representing other types will be null.</p>
     */
    inline const UsageStatistics& GetUsageStatistics() const{ return m_usageStatistics; }
    inline void SetUsageStatistics(const UsageStatistics& value) { m_usageStatistics = value; }
    inline void SetUsageStatistics(UsageStatistics&& value) { m_usageStatistics = std::move(value); }
    inline GetUsageStatisticsResult& WithUsageStatistics(const UsageStatistics& value) { SetUsageStatistics(value); return *this;}
    inline GetUsageStatisticsResult& WithUsageStatistics(UsageStatistics&& value) { SetUsageStatistics(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The pagination parameter to be used on the next list operation to retrieve
     * more items.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline GetUsageStatisticsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline GetUsageStatisticsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline GetUsageStatisticsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetUsageStatisticsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetUsageStatisticsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetUsageStatisticsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    UsageStatistics m_usageStatistics;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws

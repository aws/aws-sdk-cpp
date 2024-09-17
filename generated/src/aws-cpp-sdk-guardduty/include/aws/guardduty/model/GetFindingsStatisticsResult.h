/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/guardduty/model/FindingStatistics.h>
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
  class GetFindingsStatisticsResult
  {
  public:
    AWS_GUARDDUTY_API GetFindingsStatisticsResult();
    AWS_GUARDDUTY_API GetFindingsStatisticsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GUARDDUTY_API GetFindingsStatisticsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The finding statistics object.</p>
     */
    inline const FindingStatistics& GetFindingStatistics() const{ return m_findingStatistics; }
    inline void SetFindingStatistics(const FindingStatistics& value) { m_findingStatistics = value; }
    inline void SetFindingStatistics(FindingStatistics&& value) { m_findingStatistics = std::move(value); }
    inline GetFindingsStatisticsResult& WithFindingStatistics(const FindingStatistics& value) { SetFindingStatistics(value); return *this;}
    inline GetFindingsStatisticsResult& WithFindingStatistics(FindingStatistics&& value) { SetFindingStatistics(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The pagination parameter to be used on the next list operation to retrieve
     * more items.</p> <p>This parameter is currently not supported.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline GetFindingsStatisticsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline GetFindingsStatisticsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline GetFindingsStatisticsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetFindingsStatisticsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetFindingsStatisticsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetFindingsStatisticsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    FindingStatistics m_findingStatistics;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws

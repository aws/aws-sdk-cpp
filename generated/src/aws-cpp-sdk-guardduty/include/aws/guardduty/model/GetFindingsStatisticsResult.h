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


    /**
     * <p>The finding statistics object.</p>
     */
    inline const FindingStatistics& GetFindingStatistics() const{ return m_findingStatistics; }

    /**
     * <p>The finding statistics object.</p>
     */
    inline void SetFindingStatistics(const FindingStatistics& value) { m_findingStatistics = value; }

    /**
     * <p>The finding statistics object.</p>
     */
    inline void SetFindingStatistics(FindingStatistics&& value) { m_findingStatistics = std::move(value); }

    /**
     * <p>The finding statistics object.</p>
     */
    inline GetFindingsStatisticsResult& WithFindingStatistics(const FindingStatistics& value) { SetFindingStatistics(value); return *this;}

    /**
     * <p>The finding statistics object.</p>
     */
    inline GetFindingsStatisticsResult& WithFindingStatistics(FindingStatistics&& value) { SetFindingStatistics(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetFindingsStatisticsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetFindingsStatisticsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetFindingsStatisticsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    FindingStatistics m_findingStatistics;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws

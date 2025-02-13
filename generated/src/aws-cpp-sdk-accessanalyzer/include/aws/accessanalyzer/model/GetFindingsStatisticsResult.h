/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/accessanalyzer/AccessAnalyzer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/accessanalyzer/model/FindingsStatistics.h>
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
namespace AccessAnalyzer
{
namespace Model
{
  class GetFindingsStatisticsResult
  {
  public:
    AWS_ACCESSANALYZER_API GetFindingsStatisticsResult();
    AWS_ACCESSANALYZER_API GetFindingsStatisticsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ACCESSANALYZER_API GetFindingsStatisticsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A group of external access or unused access findings statistics.</p>
     */
    inline const Aws::Vector<FindingsStatistics>& GetFindingsStatistics() const{ return m_findingsStatistics; }
    inline void SetFindingsStatistics(const Aws::Vector<FindingsStatistics>& value) { m_findingsStatistics = value; }
    inline void SetFindingsStatistics(Aws::Vector<FindingsStatistics>&& value) { m_findingsStatistics = std::move(value); }
    inline GetFindingsStatisticsResult& WithFindingsStatistics(const Aws::Vector<FindingsStatistics>& value) { SetFindingsStatistics(value); return *this;}
    inline GetFindingsStatisticsResult& WithFindingsStatistics(Aws::Vector<FindingsStatistics>&& value) { SetFindingsStatistics(std::move(value)); return *this;}
    inline GetFindingsStatisticsResult& AddFindingsStatistics(const FindingsStatistics& value) { m_findingsStatistics.push_back(value); return *this; }
    inline GetFindingsStatisticsResult& AddFindingsStatistics(FindingsStatistics&& value) { m_findingsStatistics.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The time at which the retrieval of the findings statistics was last updated.
     * If the findings statistics have not been previously retrieved for the specified
     * analyzer, this field will not be populated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedAt() const{ return m_lastUpdatedAt; }
    inline void SetLastUpdatedAt(const Aws::Utils::DateTime& value) { m_lastUpdatedAt = value; }
    inline void SetLastUpdatedAt(Aws::Utils::DateTime&& value) { m_lastUpdatedAt = std::move(value); }
    inline GetFindingsStatisticsResult& WithLastUpdatedAt(const Aws::Utils::DateTime& value) { SetLastUpdatedAt(value); return *this;}
    inline GetFindingsStatisticsResult& WithLastUpdatedAt(Aws::Utils::DateTime&& value) { SetLastUpdatedAt(std::move(value)); return *this;}
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

    Aws::Vector<FindingsStatistics> m_findingsStatistics;

    Aws::Utils::DateTime m_lastUpdatedAt;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace AccessAnalyzer
} // namespace Aws

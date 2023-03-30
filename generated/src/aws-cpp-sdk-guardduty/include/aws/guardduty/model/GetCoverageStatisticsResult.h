/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/guardduty/model/CoverageStatistics.h>
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
  class GetCoverageStatisticsResult
  {
  public:
    AWS_GUARDDUTY_API GetCoverageStatisticsResult();
    AWS_GUARDDUTY_API GetCoverageStatisticsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GUARDDUTY_API GetCoverageStatisticsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Represents the count aggregated by the <code>statusCode</code> and
     * <code>resourceType</code>.</p>
     */
    inline const CoverageStatistics& GetCoverageStatistics() const{ return m_coverageStatistics; }

    /**
     * <p>Represents the count aggregated by the <code>statusCode</code> and
     * <code>resourceType</code>.</p>
     */
    inline void SetCoverageStatistics(const CoverageStatistics& value) { m_coverageStatistics = value; }

    /**
     * <p>Represents the count aggregated by the <code>statusCode</code> and
     * <code>resourceType</code>.</p>
     */
    inline void SetCoverageStatistics(CoverageStatistics&& value) { m_coverageStatistics = std::move(value); }

    /**
     * <p>Represents the count aggregated by the <code>statusCode</code> and
     * <code>resourceType</code>.</p>
     */
    inline GetCoverageStatisticsResult& WithCoverageStatistics(const CoverageStatistics& value) { SetCoverageStatistics(value); return *this;}

    /**
     * <p>Represents the count aggregated by the <code>statusCode</code> and
     * <code>resourceType</code>.</p>
     */
    inline GetCoverageStatisticsResult& WithCoverageStatistics(CoverageStatistics&& value) { SetCoverageStatistics(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetCoverageStatisticsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetCoverageStatisticsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetCoverageStatisticsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    CoverageStatistics m_coverageStatistics;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws

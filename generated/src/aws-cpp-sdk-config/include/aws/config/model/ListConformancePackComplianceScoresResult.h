/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/config/model/ConformancePackComplianceScore.h>
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
namespace ConfigService
{
namespace Model
{
  class ListConformancePackComplianceScoresResult
  {
  public:
    AWS_CONFIGSERVICE_API ListConformancePackComplianceScoresResult();
    AWS_CONFIGSERVICE_API ListConformancePackComplianceScoresResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONFIGSERVICE_API ListConformancePackComplianceScoresResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The <code>nextToken</code> string that you can use to get the next page of
     * results in a paginated response.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The <code>nextToken</code> string that you can use to get the next page of
     * results in a paginated response.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The <code>nextToken</code> string that you can use to get the next page of
     * results in a paginated response.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The <code>nextToken</code> string that you can use to get the next page of
     * results in a paginated response.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The <code>nextToken</code> string that you can use to get the next page of
     * results in a paginated response.</p>
     */
    inline ListConformancePackComplianceScoresResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The <code>nextToken</code> string that you can use to get the next page of
     * results in a paginated response.</p>
     */
    inline ListConformancePackComplianceScoresResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The <code>nextToken</code> string that you can use to get the next page of
     * results in a paginated response.</p>
     */
    inline ListConformancePackComplianceScoresResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>A list of <code>ConformancePackComplianceScore</code> objects.</p>
     */
    inline const Aws::Vector<ConformancePackComplianceScore>& GetConformancePackComplianceScores() const{ return m_conformancePackComplianceScores; }

    /**
     * <p>A list of <code>ConformancePackComplianceScore</code> objects.</p>
     */
    inline void SetConformancePackComplianceScores(const Aws::Vector<ConformancePackComplianceScore>& value) { m_conformancePackComplianceScores = value; }

    /**
     * <p>A list of <code>ConformancePackComplianceScore</code> objects.</p>
     */
    inline void SetConformancePackComplianceScores(Aws::Vector<ConformancePackComplianceScore>&& value) { m_conformancePackComplianceScores = std::move(value); }

    /**
     * <p>A list of <code>ConformancePackComplianceScore</code> objects.</p>
     */
    inline ListConformancePackComplianceScoresResult& WithConformancePackComplianceScores(const Aws::Vector<ConformancePackComplianceScore>& value) { SetConformancePackComplianceScores(value); return *this;}

    /**
     * <p>A list of <code>ConformancePackComplianceScore</code> objects.</p>
     */
    inline ListConformancePackComplianceScoresResult& WithConformancePackComplianceScores(Aws::Vector<ConformancePackComplianceScore>&& value) { SetConformancePackComplianceScores(std::move(value)); return *this;}

    /**
     * <p>A list of <code>ConformancePackComplianceScore</code> objects.</p>
     */
    inline ListConformancePackComplianceScoresResult& AddConformancePackComplianceScores(const ConformancePackComplianceScore& value) { m_conformancePackComplianceScores.push_back(value); return *this; }

    /**
     * <p>A list of <code>ConformancePackComplianceScore</code> objects.</p>
     */
    inline ListConformancePackComplianceScoresResult& AddConformancePackComplianceScores(ConformancePackComplianceScore&& value) { m_conformancePackComplianceScores.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_nextToken;

    Aws::Vector<ConformancePackComplianceScore> m_conformancePackComplianceScores;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws

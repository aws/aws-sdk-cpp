﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeguru-security/CodeGuruSecurity_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codeguru-security/model/AccountFindingsMetric.h>
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
namespace CodeGuruSecurity
{
namespace Model
{
  class ListFindingsMetricsResult
  {
  public:
    AWS_CODEGURUSECURITY_API ListFindingsMetricsResult();
    AWS_CODEGURUSECURITY_API ListFindingsMetricsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODEGURUSECURITY_API ListFindingsMetricsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of <code>AccountFindingsMetric</code> objects retrieved from the
     * specified time interval.</p>
     */
    inline const Aws::Vector<AccountFindingsMetric>& GetFindingsMetrics() const{ return m_findingsMetrics; }
    inline void SetFindingsMetrics(const Aws::Vector<AccountFindingsMetric>& value) { m_findingsMetrics = value; }
    inline void SetFindingsMetrics(Aws::Vector<AccountFindingsMetric>&& value) { m_findingsMetrics = std::move(value); }
    inline ListFindingsMetricsResult& WithFindingsMetrics(const Aws::Vector<AccountFindingsMetric>& value) { SetFindingsMetrics(value); return *this;}
    inline ListFindingsMetricsResult& WithFindingsMetrics(Aws::Vector<AccountFindingsMetric>&& value) { SetFindingsMetrics(std::move(value)); return *this;}
    inline ListFindingsMetricsResult& AddFindingsMetrics(const AccountFindingsMetric& value) { m_findingsMetrics.push_back(value); return *this; }
    inline ListFindingsMetricsResult& AddFindingsMetrics(AccountFindingsMetric&& value) { m_findingsMetrics.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A pagination token. You can use this in future calls to
     * <code>ListFindingMetrics</code> to continue listing results after the current
     * page. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListFindingsMetricsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListFindingsMetricsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListFindingsMetricsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListFindingsMetricsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListFindingsMetricsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListFindingsMetricsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<AccountFindingsMetric> m_findingsMetrics;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CodeGuruSecurity
} // namespace Aws

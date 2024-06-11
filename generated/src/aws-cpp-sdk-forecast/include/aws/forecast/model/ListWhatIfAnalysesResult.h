﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/forecast/ForecastService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/forecast/model/WhatIfAnalysisSummary.h>
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
namespace ForecastService
{
namespace Model
{
  class ListWhatIfAnalysesResult
  {
  public:
    AWS_FORECASTSERVICE_API ListWhatIfAnalysesResult();
    AWS_FORECASTSERVICE_API ListWhatIfAnalysesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FORECASTSERVICE_API ListWhatIfAnalysesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of <code>WhatIfAnalysisSummary</code> objects that describe the
     * matched analyses.</p>
     */
    inline const Aws::Vector<WhatIfAnalysisSummary>& GetWhatIfAnalyses() const{ return m_whatIfAnalyses; }
    inline void SetWhatIfAnalyses(const Aws::Vector<WhatIfAnalysisSummary>& value) { m_whatIfAnalyses = value; }
    inline void SetWhatIfAnalyses(Aws::Vector<WhatIfAnalysisSummary>&& value) { m_whatIfAnalyses = std::move(value); }
    inline ListWhatIfAnalysesResult& WithWhatIfAnalyses(const Aws::Vector<WhatIfAnalysisSummary>& value) { SetWhatIfAnalyses(value); return *this;}
    inline ListWhatIfAnalysesResult& WithWhatIfAnalyses(Aws::Vector<WhatIfAnalysisSummary>&& value) { SetWhatIfAnalyses(std::move(value)); return *this;}
    inline ListWhatIfAnalysesResult& AddWhatIfAnalyses(const WhatIfAnalysisSummary& value) { m_whatIfAnalyses.push_back(value); return *this; }
    inline ListWhatIfAnalysesResult& AddWhatIfAnalyses(WhatIfAnalysisSummary&& value) { m_whatIfAnalyses.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If the response is truncated, Forecast returns this token. To retrieve the
     * next set of results, use the token in the next request.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListWhatIfAnalysesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListWhatIfAnalysesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListWhatIfAnalysesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListWhatIfAnalysesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListWhatIfAnalysesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListWhatIfAnalysesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<WhatIfAnalysisSummary> m_whatIfAnalyses;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ForecastService
} // namespace Aws

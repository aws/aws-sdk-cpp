/**
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
    AWS_FORECASTSERVICE_API ListWhatIfAnalysesResult() = default;
    AWS_FORECASTSERVICE_API ListWhatIfAnalysesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FORECASTSERVICE_API ListWhatIfAnalysesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of <code>WhatIfAnalysisSummary</code> objects that describe the
     * matched analyses.</p>
     */
    inline const Aws::Vector<WhatIfAnalysisSummary>& GetWhatIfAnalyses() const { return m_whatIfAnalyses; }
    template<typename WhatIfAnalysesT = Aws::Vector<WhatIfAnalysisSummary>>
    void SetWhatIfAnalyses(WhatIfAnalysesT&& value) { m_whatIfAnalysesHasBeenSet = true; m_whatIfAnalyses = std::forward<WhatIfAnalysesT>(value); }
    template<typename WhatIfAnalysesT = Aws::Vector<WhatIfAnalysisSummary>>
    ListWhatIfAnalysesResult& WithWhatIfAnalyses(WhatIfAnalysesT&& value) { SetWhatIfAnalyses(std::forward<WhatIfAnalysesT>(value)); return *this;}
    template<typename WhatIfAnalysesT = WhatIfAnalysisSummary>
    ListWhatIfAnalysesResult& AddWhatIfAnalyses(WhatIfAnalysesT&& value) { m_whatIfAnalysesHasBeenSet = true; m_whatIfAnalyses.emplace_back(std::forward<WhatIfAnalysesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If the response is truncated, Forecast returns this token. To retrieve the
     * next set of results, use the token in the next request.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListWhatIfAnalysesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListWhatIfAnalysesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<WhatIfAnalysisSummary> m_whatIfAnalyses;
    bool m_whatIfAnalysesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ForecastService
} // namespace Aws

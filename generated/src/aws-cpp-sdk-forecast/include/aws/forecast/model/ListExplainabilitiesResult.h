/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/forecast/ForecastService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/forecast/model/ExplainabilitySummary.h>
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
  class ListExplainabilitiesResult
  {
  public:
    AWS_FORECASTSERVICE_API ListExplainabilitiesResult() = default;
    AWS_FORECASTSERVICE_API ListExplainabilitiesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FORECASTSERVICE_API ListExplainabilitiesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of objects that summarize the properties of each Explainability
     * resource.</p>
     */
    inline const Aws::Vector<ExplainabilitySummary>& GetExplainabilities() const { return m_explainabilities; }
    template<typename ExplainabilitiesT = Aws::Vector<ExplainabilitySummary>>
    void SetExplainabilities(ExplainabilitiesT&& value) { m_explainabilitiesHasBeenSet = true; m_explainabilities = std::forward<ExplainabilitiesT>(value); }
    template<typename ExplainabilitiesT = Aws::Vector<ExplainabilitySummary>>
    ListExplainabilitiesResult& WithExplainabilities(ExplainabilitiesT&& value) { SetExplainabilities(std::forward<ExplainabilitiesT>(value)); return *this;}
    template<typename ExplainabilitiesT = ExplainabilitySummary>
    ListExplainabilitiesResult& AddExplainabilities(ExplainabilitiesT&& value) { m_explainabilitiesHasBeenSet = true; m_explainabilities.emplace_back(std::forward<ExplainabilitiesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Returns this token if the response is truncated. To retrieve the next set of
     * results, use the token in the next request.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListExplainabilitiesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListExplainabilitiesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ExplainabilitySummary> m_explainabilities;
    bool m_explainabilitiesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ForecastService
} // namespace Aws

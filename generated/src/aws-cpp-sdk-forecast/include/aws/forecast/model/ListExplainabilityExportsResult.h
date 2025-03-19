/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/forecast/ForecastService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/forecast/model/ExplainabilityExportSummary.h>
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
  class ListExplainabilityExportsResult
  {
  public:
    AWS_FORECASTSERVICE_API ListExplainabilityExportsResult() = default;
    AWS_FORECASTSERVICE_API ListExplainabilityExportsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FORECASTSERVICE_API ListExplainabilityExportsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of objects that summarize the properties of each Explainability
     * export.</p>
     */
    inline const Aws::Vector<ExplainabilityExportSummary>& GetExplainabilityExports() const { return m_explainabilityExports; }
    template<typename ExplainabilityExportsT = Aws::Vector<ExplainabilityExportSummary>>
    void SetExplainabilityExports(ExplainabilityExportsT&& value) { m_explainabilityExportsHasBeenSet = true; m_explainabilityExports = std::forward<ExplainabilityExportsT>(value); }
    template<typename ExplainabilityExportsT = Aws::Vector<ExplainabilityExportSummary>>
    ListExplainabilityExportsResult& WithExplainabilityExports(ExplainabilityExportsT&& value) { SetExplainabilityExports(std::forward<ExplainabilityExportsT>(value)); return *this;}
    template<typename ExplainabilityExportsT = ExplainabilityExportSummary>
    ListExplainabilityExportsResult& AddExplainabilityExports(ExplainabilityExportsT&& value) { m_explainabilityExportsHasBeenSet = true; m_explainabilityExports.emplace_back(std::forward<ExplainabilityExportsT>(value)); return *this; }
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
    ListExplainabilityExportsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListExplainabilityExportsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ExplainabilityExportSummary> m_explainabilityExports;
    bool m_explainabilityExportsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ForecastService
} // namespace Aws

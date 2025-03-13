/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/cleanrooms/model/AnalysisTemplateSummary.h>
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
namespace CleanRooms
{
namespace Model
{
  class ListAnalysisTemplatesResult
  {
  public:
    AWS_CLEANROOMS_API ListAnalysisTemplatesResult() = default;
    AWS_CLEANROOMS_API ListAnalysisTemplatesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLEANROOMS_API ListAnalysisTemplatesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The pagination token that's used to fetch the next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListAnalysisTemplatesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Lists analysis template metadata.</p>
     */
    inline const Aws::Vector<AnalysisTemplateSummary>& GetAnalysisTemplateSummaries() const { return m_analysisTemplateSummaries; }
    template<typename AnalysisTemplateSummariesT = Aws::Vector<AnalysisTemplateSummary>>
    void SetAnalysisTemplateSummaries(AnalysisTemplateSummariesT&& value) { m_analysisTemplateSummariesHasBeenSet = true; m_analysisTemplateSummaries = std::forward<AnalysisTemplateSummariesT>(value); }
    template<typename AnalysisTemplateSummariesT = Aws::Vector<AnalysisTemplateSummary>>
    ListAnalysisTemplatesResult& WithAnalysisTemplateSummaries(AnalysisTemplateSummariesT&& value) { SetAnalysisTemplateSummaries(std::forward<AnalysisTemplateSummariesT>(value)); return *this;}
    template<typename AnalysisTemplateSummariesT = AnalysisTemplateSummary>
    ListAnalysisTemplatesResult& AddAnalysisTemplateSummaries(AnalysisTemplateSummariesT&& value) { m_analysisTemplateSummariesHasBeenSet = true; m_analysisTemplateSummaries.emplace_back(std::forward<AnalysisTemplateSummariesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListAnalysisTemplatesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<AnalysisTemplateSummary> m_analysisTemplateSummaries;
    bool m_analysisTemplateSummariesHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws

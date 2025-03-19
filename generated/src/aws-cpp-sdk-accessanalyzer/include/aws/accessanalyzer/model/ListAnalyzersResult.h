/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/accessanalyzer/AccessAnalyzer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/accessanalyzer/model/AnalyzerSummary.h>
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
  /**
   * <p>The response to the request.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/accessanalyzer-2019-11-01/ListAnalyzersResponse">AWS
   * API Reference</a></p>
   */
  class ListAnalyzersResult
  {
  public:
    AWS_ACCESSANALYZER_API ListAnalyzersResult() = default;
    AWS_ACCESSANALYZER_API ListAnalyzersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ACCESSANALYZER_API ListAnalyzersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The analyzers retrieved.</p>
     */
    inline const Aws::Vector<AnalyzerSummary>& GetAnalyzers() const { return m_analyzers; }
    template<typename AnalyzersT = Aws::Vector<AnalyzerSummary>>
    void SetAnalyzers(AnalyzersT&& value) { m_analyzersHasBeenSet = true; m_analyzers = std::forward<AnalyzersT>(value); }
    template<typename AnalyzersT = Aws::Vector<AnalyzerSummary>>
    ListAnalyzersResult& WithAnalyzers(AnalyzersT&& value) { SetAnalyzers(std::forward<AnalyzersT>(value)); return *this;}
    template<typename AnalyzersT = AnalyzerSummary>
    ListAnalyzersResult& AddAnalyzers(AnalyzersT&& value) { m_analyzersHasBeenSet = true; m_analyzers.emplace_back(std::forward<AnalyzersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A token used for pagination of results returned.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListAnalyzersResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListAnalyzersResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<AnalyzerSummary> m_analyzers;
    bool m_analyzersHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace AccessAnalyzer
} // namespace Aws

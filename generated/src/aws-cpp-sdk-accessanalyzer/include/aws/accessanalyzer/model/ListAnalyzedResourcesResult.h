/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/accessanalyzer/AccessAnalyzer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/accessanalyzer/model/AnalyzedResourceSummary.h>
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
   * href="http://docs.aws.amazon.com/goto/WebAPI/accessanalyzer-2019-11-01/ListAnalyzedResourcesResponse">AWS
   * API Reference</a></p>
   */
  class ListAnalyzedResourcesResult
  {
  public:
    AWS_ACCESSANALYZER_API ListAnalyzedResourcesResult() = default;
    AWS_ACCESSANALYZER_API ListAnalyzedResourcesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ACCESSANALYZER_API ListAnalyzedResourcesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of resources that were analyzed.</p>
     */
    inline const Aws::Vector<AnalyzedResourceSummary>& GetAnalyzedResources() const { return m_analyzedResources; }
    template<typename AnalyzedResourcesT = Aws::Vector<AnalyzedResourceSummary>>
    void SetAnalyzedResources(AnalyzedResourcesT&& value) { m_analyzedResourcesHasBeenSet = true; m_analyzedResources = std::forward<AnalyzedResourcesT>(value); }
    template<typename AnalyzedResourcesT = Aws::Vector<AnalyzedResourceSummary>>
    ListAnalyzedResourcesResult& WithAnalyzedResources(AnalyzedResourcesT&& value) { SetAnalyzedResources(std::forward<AnalyzedResourcesT>(value)); return *this;}
    template<typename AnalyzedResourcesT = AnalyzedResourceSummary>
    ListAnalyzedResourcesResult& AddAnalyzedResources(AnalyzedResourcesT&& value) { m_analyzedResourcesHasBeenSet = true; m_analyzedResources.emplace_back(std::forward<AnalyzedResourcesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A token used for pagination of results returned.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListAnalyzedResourcesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListAnalyzedResourcesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<AnalyzedResourceSummary> m_analyzedResources;
    bool m_analyzedResourcesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace AccessAnalyzer
} // namespace Aws

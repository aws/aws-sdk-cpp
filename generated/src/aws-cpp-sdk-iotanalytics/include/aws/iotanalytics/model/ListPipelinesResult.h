/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotanalytics/IoTAnalytics_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotanalytics/model/PipelineSummary.h>
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
namespace IoTAnalytics
{
namespace Model
{
  class ListPipelinesResult
  {
  public:
    AWS_IOTANALYTICS_API ListPipelinesResult() = default;
    AWS_IOTANALYTICS_API ListPipelinesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTANALYTICS_API ListPipelinesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of <code>PipelineSummary</code> objects.</p>
     */
    inline const Aws::Vector<PipelineSummary>& GetPipelineSummaries() const { return m_pipelineSummaries; }
    template<typename PipelineSummariesT = Aws::Vector<PipelineSummary>>
    void SetPipelineSummaries(PipelineSummariesT&& value) { m_pipelineSummariesHasBeenSet = true; m_pipelineSummaries = std::forward<PipelineSummariesT>(value); }
    template<typename PipelineSummariesT = Aws::Vector<PipelineSummary>>
    ListPipelinesResult& WithPipelineSummaries(PipelineSummariesT&& value) { SetPipelineSummaries(std::forward<PipelineSummariesT>(value)); return *this;}
    template<typename PipelineSummariesT = PipelineSummary>
    ListPipelinesResult& AddPipelineSummaries(PipelineSummariesT&& value) { m_pipelineSummariesHasBeenSet = true; m_pipelineSummaries.emplace_back(std::forward<PipelineSummariesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token to retrieve the next set of results, or <code>null</code> if there
     * are no more results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListPipelinesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListPipelinesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<PipelineSummary> m_pipelineSummaries;
    bool m_pipelineSummariesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTAnalytics
} // namespace Aws

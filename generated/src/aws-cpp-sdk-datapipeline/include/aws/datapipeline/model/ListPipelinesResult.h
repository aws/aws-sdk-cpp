/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datapipeline/DataPipeline_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/datapipeline/model/PipelineIdName.h>
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
namespace DataPipeline
{
namespace Model
{
  /**
   * <p>Contains the output of ListPipelines.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datapipeline-2012-10-29/ListPipelinesOutput">AWS
   * API Reference</a></p>
   */
  class ListPipelinesResult
  {
  public:
    AWS_DATAPIPELINE_API ListPipelinesResult() = default;
    AWS_DATAPIPELINE_API ListPipelinesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DATAPIPELINE_API ListPipelinesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The pipeline identifiers. If you require additional information about the
     * pipelines, you can use these identifiers to call <a>DescribePipelines</a> and
     * <a>GetPipelineDefinition</a>.</p>
     */
    inline const Aws::Vector<PipelineIdName>& GetPipelineIdList() const { return m_pipelineIdList; }
    template<typename PipelineIdListT = Aws::Vector<PipelineIdName>>
    void SetPipelineIdList(PipelineIdListT&& value) { m_pipelineIdListHasBeenSet = true; m_pipelineIdList = std::forward<PipelineIdListT>(value); }
    template<typename PipelineIdListT = Aws::Vector<PipelineIdName>>
    ListPipelinesResult& WithPipelineIdList(PipelineIdListT&& value) { SetPipelineIdList(std::forward<PipelineIdListT>(value)); return *this;}
    template<typename PipelineIdListT = PipelineIdName>
    ListPipelinesResult& AddPipelineIdList(PipelineIdListT&& value) { m_pipelineIdListHasBeenSet = true; m_pipelineIdList.emplace_back(std::forward<PipelineIdListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The starting point for the next page of results. To view the next page of
     * results, call <code>ListPipelinesOutput</code> again with this marker value. If
     * the value is null, there are no more results.</p>
     */
    inline const Aws::String& GetMarker() const { return m_marker; }
    template<typename MarkerT = Aws::String>
    void SetMarker(MarkerT&& value) { m_markerHasBeenSet = true; m_marker = std::forward<MarkerT>(value); }
    template<typename MarkerT = Aws::String>
    ListPipelinesResult& WithMarker(MarkerT&& value) { SetMarker(std::forward<MarkerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether there are more results that can be obtained by a subsequent
     * call.</p>
     */
    inline bool GetHasMoreResults() const { return m_hasMoreResults; }
    inline void SetHasMoreResults(bool value) { m_hasMoreResultsHasBeenSet = true; m_hasMoreResults = value; }
    inline ListPipelinesResult& WithHasMoreResults(bool value) { SetHasMoreResults(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListPipelinesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<PipelineIdName> m_pipelineIdList;
    bool m_pipelineIdListHasBeenSet = false;

    Aws::String m_marker;
    bool m_markerHasBeenSet = false;

    bool m_hasMoreResults{false};
    bool m_hasMoreResultsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace DataPipeline
} // namespace Aws

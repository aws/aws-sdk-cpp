/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datapipeline/DataPipeline_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/datapipeline/model/PipelineObject.h>
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
   * <p>Contains the output of DescribeObjects.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datapipeline-2012-10-29/DescribeObjectsOutput">AWS
   * API Reference</a></p>
   */
  class DescribeObjectsResult
  {
  public:
    AWS_DATAPIPELINE_API DescribeObjectsResult() = default;
    AWS_DATAPIPELINE_API DescribeObjectsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DATAPIPELINE_API DescribeObjectsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of object definitions.</p>
     */
    inline const Aws::Vector<PipelineObject>& GetPipelineObjects() const { return m_pipelineObjects; }
    template<typename PipelineObjectsT = Aws::Vector<PipelineObject>>
    void SetPipelineObjects(PipelineObjectsT&& value) { m_pipelineObjectsHasBeenSet = true; m_pipelineObjects = std::forward<PipelineObjectsT>(value); }
    template<typename PipelineObjectsT = Aws::Vector<PipelineObject>>
    DescribeObjectsResult& WithPipelineObjects(PipelineObjectsT&& value) { SetPipelineObjects(std::forward<PipelineObjectsT>(value)); return *this;}
    template<typename PipelineObjectsT = PipelineObject>
    DescribeObjectsResult& AddPipelineObjects(PipelineObjectsT&& value) { m_pipelineObjectsHasBeenSet = true; m_pipelineObjects.emplace_back(std::forward<PipelineObjectsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The starting point for the next page of results. To view the next page of
     * results, call <code>DescribeObjects</code> again with this marker value. If the
     * value is null, there are no more results.</p>
     */
    inline const Aws::String& GetMarker() const { return m_marker; }
    template<typename MarkerT = Aws::String>
    void SetMarker(MarkerT&& value) { m_markerHasBeenSet = true; m_marker = std::forward<MarkerT>(value); }
    template<typename MarkerT = Aws::String>
    DescribeObjectsResult& WithMarker(MarkerT&& value) { SetMarker(std::forward<MarkerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether there are more results to return.</p>
     */
    inline bool GetHasMoreResults() const { return m_hasMoreResults; }
    inline void SetHasMoreResults(bool value) { m_hasMoreResultsHasBeenSet = true; m_hasMoreResults = value; }
    inline DescribeObjectsResult& WithHasMoreResults(bool value) { SetHasMoreResults(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeObjectsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<PipelineObject> m_pipelineObjects;
    bool m_pipelineObjectsHasBeenSet = false;

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

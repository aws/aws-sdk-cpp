/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elastictranscoder/ElasticTranscoder_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/elastictranscoder/model/Pipeline.h>
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
namespace ElasticTranscoder
{
namespace Model
{
  /**
   * <p>A list of the pipelines associated with the current AWS
   * account.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elastictranscoder-2012-09-25/ListPipelinesResponse">AWS
   * API Reference</a></p>
   */
  class ListPipelinesResult
  {
  public:
    AWS_ELASTICTRANSCODER_API ListPipelinesResult() = default;
    AWS_ELASTICTRANSCODER_API ListPipelinesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ELASTICTRANSCODER_API ListPipelinesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of <code>Pipeline</code> objects.</p>
     */
    inline const Aws::Vector<Pipeline>& GetPipelines() const { return m_pipelines; }
    template<typename PipelinesT = Aws::Vector<Pipeline>>
    void SetPipelines(PipelinesT&& value) { m_pipelinesHasBeenSet = true; m_pipelines = std::forward<PipelinesT>(value); }
    template<typename PipelinesT = Aws::Vector<Pipeline>>
    ListPipelinesResult& WithPipelines(PipelinesT&& value) { SetPipelines(std::forward<PipelinesT>(value)); return *this;}
    template<typename PipelinesT = Pipeline>
    ListPipelinesResult& AddPipelines(PipelinesT&& value) { m_pipelinesHasBeenSet = true; m_pipelines.emplace_back(std::forward<PipelinesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A value that you use to access the second and subsequent pages of results, if
     * any. When the pipelines fit on one page or when you've reached the last page of
     * results, the value of <code>NextPageToken</code> is <code>null</code>.</p>
     */
    inline const Aws::String& GetNextPageToken() const { return m_nextPageToken; }
    template<typename NextPageTokenT = Aws::String>
    void SetNextPageToken(NextPageTokenT&& value) { m_nextPageTokenHasBeenSet = true; m_nextPageToken = std::forward<NextPageTokenT>(value); }
    template<typename NextPageTokenT = Aws::String>
    ListPipelinesResult& WithNextPageToken(NextPageTokenT&& value) { SetNextPageToken(std::forward<NextPageTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListPipelinesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Pipeline> m_pipelines;
    bool m_pipelinesHasBeenSet = false;

    Aws::String m_nextPageToken;
    bool m_nextPageTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticTranscoder
} // namespace Aws

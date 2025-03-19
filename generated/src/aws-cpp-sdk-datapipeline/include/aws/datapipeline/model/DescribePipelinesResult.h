/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datapipeline/DataPipeline_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/datapipeline/model/PipelineDescription.h>
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
   * <p>Contains the output of DescribePipelines.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datapipeline-2012-10-29/DescribePipelinesOutput">AWS
   * API Reference</a></p>
   */
  class DescribePipelinesResult
  {
  public:
    AWS_DATAPIPELINE_API DescribePipelinesResult() = default;
    AWS_DATAPIPELINE_API DescribePipelinesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DATAPIPELINE_API DescribePipelinesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of descriptions for the specified pipelines.</p>
     */
    inline const Aws::Vector<PipelineDescription>& GetPipelineDescriptionList() const { return m_pipelineDescriptionList; }
    template<typename PipelineDescriptionListT = Aws::Vector<PipelineDescription>>
    void SetPipelineDescriptionList(PipelineDescriptionListT&& value) { m_pipelineDescriptionListHasBeenSet = true; m_pipelineDescriptionList = std::forward<PipelineDescriptionListT>(value); }
    template<typename PipelineDescriptionListT = Aws::Vector<PipelineDescription>>
    DescribePipelinesResult& WithPipelineDescriptionList(PipelineDescriptionListT&& value) { SetPipelineDescriptionList(std::forward<PipelineDescriptionListT>(value)); return *this;}
    template<typename PipelineDescriptionListT = PipelineDescription>
    DescribePipelinesResult& AddPipelineDescriptionList(PipelineDescriptionListT&& value) { m_pipelineDescriptionListHasBeenSet = true; m_pipelineDescriptionList.emplace_back(std::forward<PipelineDescriptionListT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribePipelinesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<PipelineDescription> m_pipelineDescriptionList;
    bool m_pipelineDescriptionListHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace DataPipeline
} // namespace Aws

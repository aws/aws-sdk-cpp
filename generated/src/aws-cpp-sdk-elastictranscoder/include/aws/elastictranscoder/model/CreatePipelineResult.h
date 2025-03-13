/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elastictranscoder/ElasticTranscoder_EXPORTS.h>
#include <aws/elastictranscoder/model/Pipeline.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/elastictranscoder/model/Warning.h>
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
   * <p>When you create a pipeline, Elastic Transcoder returns the values that you
   * specified in the request.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elastictranscoder-2012-09-25/CreatePipelineResponse">AWS
   * API Reference</a></p>
   */
  class CreatePipelineResult
  {
  public:
    AWS_ELASTICTRANSCODER_API CreatePipelineResult() = default;
    AWS_ELASTICTRANSCODER_API CreatePipelineResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ELASTICTRANSCODER_API CreatePipelineResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A section of the response body that provides information about the pipeline
     * that is created.</p>
     */
    inline const Pipeline& GetPipeline() const { return m_pipeline; }
    template<typename PipelineT = Pipeline>
    void SetPipeline(PipelineT&& value) { m_pipelineHasBeenSet = true; m_pipeline = std::forward<PipelineT>(value); }
    template<typename PipelineT = Pipeline>
    CreatePipelineResult& WithPipeline(PipelineT&& value) { SetPipeline(std::forward<PipelineT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Elastic Transcoder returns a warning if the resources used by your pipeline
     * are not in the same region as the pipeline.</p> <p>Using resources in the same
     * region, such as your Amazon S3 buckets, Amazon SNS notification topics, and AWS
     * KMS key, reduces processing time and prevents cross-regional charges.</p>
     */
    inline const Aws::Vector<Warning>& GetWarnings() const { return m_warnings; }
    template<typename WarningsT = Aws::Vector<Warning>>
    void SetWarnings(WarningsT&& value) { m_warningsHasBeenSet = true; m_warnings = std::forward<WarningsT>(value); }
    template<typename WarningsT = Aws::Vector<Warning>>
    CreatePipelineResult& WithWarnings(WarningsT&& value) { SetWarnings(std::forward<WarningsT>(value)); return *this;}
    template<typename WarningsT = Warning>
    CreatePipelineResult& AddWarnings(WarningsT&& value) { m_warningsHasBeenSet = true; m_warnings.emplace_back(std::forward<WarningsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreatePipelineResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Pipeline m_pipeline;
    bool m_pipelineHasBeenSet = false;

    Aws::Vector<Warning> m_warnings;
    bool m_warningsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticTranscoder
} // namespace Aws

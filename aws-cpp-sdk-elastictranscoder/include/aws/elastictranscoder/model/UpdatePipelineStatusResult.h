/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elastictranscoder/ElasticTranscoder_EXPORTS.h>
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
   * <p>When you update status for a pipeline, Elastic Transcoder returns the values
   * that you specified in the request.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elastictranscoder-2012-09-25/UpdatePipelineStatusResponse">AWS
   * API Reference</a></p>
   */
  class UpdatePipelineStatusResult
  {
  public:
    AWS_ELASTICTRANSCODER_API UpdatePipelineStatusResult();
    AWS_ELASTICTRANSCODER_API UpdatePipelineStatusResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ELASTICTRANSCODER_API UpdatePipelineStatusResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A section of the response body that provides information about the
     * pipeline.</p>
     */
    inline const Pipeline& GetPipeline() const{ return m_pipeline; }

    /**
     * <p>A section of the response body that provides information about the
     * pipeline.</p>
     */
    inline void SetPipeline(const Pipeline& value) { m_pipeline = value; }

    /**
     * <p>A section of the response body that provides information about the
     * pipeline.</p>
     */
    inline void SetPipeline(Pipeline&& value) { m_pipeline = std::move(value); }

    /**
     * <p>A section of the response body that provides information about the
     * pipeline.</p>
     */
    inline UpdatePipelineStatusResult& WithPipeline(const Pipeline& value) { SetPipeline(value); return *this;}

    /**
     * <p>A section of the response body that provides information about the
     * pipeline.</p>
     */
    inline UpdatePipelineStatusResult& WithPipeline(Pipeline&& value) { SetPipeline(std::move(value)); return *this;}

  private:

    Pipeline m_pipeline;
  };

} // namespace Model
} // namespace ElasticTranscoder
} // namespace Aws

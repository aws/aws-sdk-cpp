﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elastictranscoder/ElasticTranscoder_EXPORTS.h>
#include <aws/elastictranscoder/model/Pipeline.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p>When you update a pipeline, Elastic Transcoder returns the values that you
   * specified in the request.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elastictranscoder-2012-09-25/UpdatePipelineResponse">AWS
   * API Reference</a></p>
   */
  class AWS_ELASTICTRANSCODER_API UpdatePipelineResult
  {
  public:
    UpdatePipelineResult();
    UpdatePipelineResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    UpdatePipelineResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The pipeline updated by this <code>UpdatePipelineResponse</code> call.</p>
     */
    inline const Pipeline& GetPipeline() const{ return m_pipeline; }

    /**
     * <p>The pipeline updated by this <code>UpdatePipelineResponse</code> call.</p>
     */
    inline void SetPipeline(const Pipeline& value) { m_pipeline = value; }

    /**
     * <p>The pipeline updated by this <code>UpdatePipelineResponse</code> call.</p>
     */
    inline void SetPipeline(Pipeline&& value) { m_pipeline = std::move(value); }

    /**
     * <p>The pipeline updated by this <code>UpdatePipelineResponse</code> call.</p>
     */
    inline UpdatePipelineResult& WithPipeline(const Pipeline& value) { SetPipeline(value); return *this;}

    /**
     * <p>The pipeline updated by this <code>UpdatePipelineResponse</code> call.</p>
     */
    inline UpdatePipelineResult& WithPipeline(Pipeline&& value) { SetPipeline(std::move(value)); return *this;}


    /**
     * <p>Elastic Transcoder returns a warning if the resources used by your pipeline
     * are not in the same region as the pipeline.</p> <p>Using resources in the same
     * region, such as your Amazon S3 buckets, Amazon SNS notification topics, and AWS
     * KMS key, reduces processing time and prevents cross-regional charges.</p>
     */
    inline const Aws::Vector<Warning>& GetWarnings() const{ return m_warnings; }

    /**
     * <p>Elastic Transcoder returns a warning if the resources used by your pipeline
     * are not in the same region as the pipeline.</p> <p>Using resources in the same
     * region, such as your Amazon S3 buckets, Amazon SNS notification topics, and AWS
     * KMS key, reduces processing time and prevents cross-regional charges.</p>
     */
    inline void SetWarnings(const Aws::Vector<Warning>& value) { m_warnings = value; }

    /**
     * <p>Elastic Transcoder returns a warning if the resources used by your pipeline
     * are not in the same region as the pipeline.</p> <p>Using resources in the same
     * region, such as your Amazon S3 buckets, Amazon SNS notification topics, and AWS
     * KMS key, reduces processing time and prevents cross-regional charges.</p>
     */
    inline void SetWarnings(Aws::Vector<Warning>&& value) { m_warnings = std::move(value); }

    /**
     * <p>Elastic Transcoder returns a warning if the resources used by your pipeline
     * are not in the same region as the pipeline.</p> <p>Using resources in the same
     * region, such as your Amazon S3 buckets, Amazon SNS notification topics, and AWS
     * KMS key, reduces processing time and prevents cross-regional charges.</p>
     */
    inline UpdatePipelineResult& WithWarnings(const Aws::Vector<Warning>& value) { SetWarnings(value); return *this;}

    /**
     * <p>Elastic Transcoder returns a warning if the resources used by your pipeline
     * are not in the same region as the pipeline.</p> <p>Using resources in the same
     * region, such as your Amazon S3 buckets, Amazon SNS notification topics, and AWS
     * KMS key, reduces processing time and prevents cross-regional charges.</p>
     */
    inline UpdatePipelineResult& WithWarnings(Aws::Vector<Warning>&& value) { SetWarnings(std::move(value)); return *this;}

    /**
     * <p>Elastic Transcoder returns a warning if the resources used by your pipeline
     * are not in the same region as the pipeline.</p> <p>Using resources in the same
     * region, such as your Amazon S3 buckets, Amazon SNS notification topics, and AWS
     * KMS key, reduces processing time and prevents cross-regional charges.</p>
     */
    inline UpdatePipelineResult& AddWarnings(const Warning& value) { m_warnings.push_back(value); return *this; }

    /**
     * <p>Elastic Transcoder returns a warning if the resources used by your pipeline
     * are not in the same region as the pipeline.</p> <p>Using resources in the same
     * region, such as your Amazon S3 buckets, Amazon SNS notification topics, and AWS
     * KMS key, reduces processing time and prevents cross-regional charges.</p>
     */
    inline UpdatePipelineResult& AddWarnings(Warning&& value) { m_warnings.push_back(std::move(value)); return *this; }

  private:

    Pipeline m_pipeline;

    Aws::Vector<Warning> m_warnings;
  };

} // namespace Model
} // namespace ElasticTranscoder
} // namespace Aws

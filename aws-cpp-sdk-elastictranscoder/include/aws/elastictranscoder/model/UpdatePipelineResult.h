/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#pragma once
#include <aws/elastictranscoder/ElasticTranscoder_EXPORTS.h>
#include <aws/elastictranscoder/model/Pipeline.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/elastictranscoder/model/Warning.h>

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
   * specified in the request. </p>
   */
  class AWS_ELASTICTRANSCODER_API UpdatePipelineResult
  {
  public:
    UpdatePipelineResult();
    UpdatePipelineResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    UpdatePipelineResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    
    inline const Pipeline& GetPipeline() const{ return m_pipeline; }

    
    inline void SetPipeline(const Pipeline& value) { m_pipeline = value; }

    
    inline void SetPipeline(Pipeline&& value) { m_pipeline = value; }

    
    inline UpdatePipelineResult& WithPipeline(const Pipeline& value) { SetPipeline(value); return *this;}

    
    inline UpdatePipelineResult& WithPipeline(Pipeline&& value) { SetPipeline(value); return *this;}

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
    inline void SetWarnings(Aws::Vector<Warning>&& value) { m_warnings = value; }

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
    inline UpdatePipelineResult& WithWarnings(Aws::Vector<Warning>&& value) { SetWarnings(value); return *this;}

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
    inline UpdatePipelineResult& AddWarnings(Warning&& value) { m_warnings.push_back(value); return *this; }

  private:
    Pipeline m_pipeline;
    Aws::Vector<Warning> m_warnings;
  };

} // namespace Model
} // namespace ElasticTranscoder
} // namespace Aws

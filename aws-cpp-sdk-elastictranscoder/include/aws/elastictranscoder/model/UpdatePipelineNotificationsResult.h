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
   * <p>The <code>UpdatePipelineNotificationsResponse</code> structure.</p>
   */
  class AWS_ELASTICTRANSCODER_API UpdatePipelineNotificationsResult
  {
  public:
    UpdatePipelineNotificationsResult();
    UpdatePipelineNotificationsResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    UpdatePipelineNotificationsResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

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
    inline void SetPipeline(Pipeline&& value) { m_pipeline = value; }

    /**
     * <p>A section of the response body that provides information about the
     * pipeline.</p>
     */
    inline UpdatePipelineNotificationsResult& WithPipeline(const Pipeline& value) { SetPipeline(value); return *this;}

    /**
     * <p>A section of the response body that provides information about the
     * pipeline.</p>
     */
    inline UpdatePipelineNotificationsResult& WithPipeline(Pipeline&& value) { SetPipeline(value); return *this;}

  private:
    Pipeline m_pipeline;
  };

} // namespace Model
} // namespace ElasticTranscoder
} // namespace Aws

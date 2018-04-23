/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/iotanalytics/IoTAnalytics_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class AWS_IOTANALYTICS_API CreatePipelineResult
  {
  public:
    CreatePipelineResult();
    CreatePipelineResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    CreatePipelineResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The name of the pipeline.</p>
     */
    inline const Aws::String& GetPipelineName() const{ return m_pipelineName; }

    /**
     * <p>The name of the pipeline.</p>
     */
    inline void SetPipelineName(const Aws::String& value) { m_pipelineName = value; }

    /**
     * <p>The name of the pipeline.</p>
     */
    inline void SetPipelineName(Aws::String&& value) { m_pipelineName = std::move(value); }

    /**
     * <p>The name of the pipeline.</p>
     */
    inline void SetPipelineName(const char* value) { m_pipelineName.assign(value); }

    /**
     * <p>The name of the pipeline.</p>
     */
    inline CreatePipelineResult& WithPipelineName(const Aws::String& value) { SetPipelineName(value); return *this;}

    /**
     * <p>The name of the pipeline.</p>
     */
    inline CreatePipelineResult& WithPipelineName(Aws::String&& value) { SetPipelineName(std::move(value)); return *this;}

    /**
     * <p>The name of the pipeline.</p>
     */
    inline CreatePipelineResult& WithPipelineName(const char* value) { SetPipelineName(value); return *this;}


    /**
     * <p>The ARN of the pipeline.</p>
     */
    inline const Aws::String& GetPipelineArn() const{ return m_pipelineArn; }

    /**
     * <p>The ARN of the pipeline.</p>
     */
    inline void SetPipelineArn(const Aws::String& value) { m_pipelineArn = value; }

    /**
     * <p>The ARN of the pipeline.</p>
     */
    inline void SetPipelineArn(Aws::String&& value) { m_pipelineArn = std::move(value); }

    /**
     * <p>The ARN of the pipeline.</p>
     */
    inline void SetPipelineArn(const char* value) { m_pipelineArn.assign(value); }

    /**
     * <p>The ARN of the pipeline.</p>
     */
    inline CreatePipelineResult& WithPipelineArn(const Aws::String& value) { SetPipelineArn(value); return *this;}

    /**
     * <p>The ARN of the pipeline.</p>
     */
    inline CreatePipelineResult& WithPipelineArn(Aws::String&& value) { SetPipelineArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the pipeline.</p>
     */
    inline CreatePipelineResult& WithPipelineArn(const char* value) { SetPipelineArn(value); return *this;}

  private:

    Aws::String m_pipelineName;

    Aws::String m_pipelineArn;
  };

} // namespace Model
} // namespace IoTAnalytics
} // namespace Aws

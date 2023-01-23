/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class CreatePipelineResult
  {
  public:
    AWS_IOTANALYTICS_API CreatePipelineResult();
    AWS_IOTANALYTICS_API CreatePipelineResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTANALYTICS_API CreatePipelineResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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

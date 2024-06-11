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


    ///@{
    /**
     * <p>The name of the pipeline.</p>
     */
    inline const Aws::String& GetPipelineName() const{ return m_pipelineName; }
    inline void SetPipelineName(const Aws::String& value) { m_pipelineName = value; }
    inline void SetPipelineName(Aws::String&& value) { m_pipelineName = std::move(value); }
    inline void SetPipelineName(const char* value) { m_pipelineName.assign(value); }
    inline CreatePipelineResult& WithPipelineName(const Aws::String& value) { SetPipelineName(value); return *this;}
    inline CreatePipelineResult& WithPipelineName(Aws::String&& value) { SetPipelineName(std::move(value)); return *this;}
    inline CreatePipelineResult& WithPipelineName(const char* value) { SetPipelineName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the pipeline.</p>
     */
    inline const Aws::String& GetPipelineArn() const{ return m_pipelineArn; }
    inline void SetPipelineArn(const Aws::String& value) { m_pipelineArn = value; }
    inline void SetPipelineArn(Aws::String&& value) { m_pipelineArn = std::move(value); }
    inline void SetPipelineArn(const char* value) { m_pipelineArn.assign(value); }
    inline CreatePipelineResult& WithPipelineArn(const Aws::String& value) { SetPipelineArn(value); return *this;}
    inline CreatePipelineResult& WithPipelineArn(Aws::String&& value) { SetPipelineArn(std::move(value)); return *this;}
    inline CreatePipelineResult& WithPipelineArn(const char* value) { SetPipelineArn(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreatePipelineResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreatePipelineResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreatePipelineResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_pipelineName;

    Aws::String m_pipelineArn;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace IoTAnalytics
} // namespace Aws

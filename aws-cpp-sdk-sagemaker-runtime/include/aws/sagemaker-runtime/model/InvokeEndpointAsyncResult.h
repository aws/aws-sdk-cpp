/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker-runtime/SageMakerRuntime_EXPORTS.h>
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
namespace SageMakerRuntime
{
namespace Model
{
  class InvokeEndpointAsyncResult
  {
  public:
    AWS_SAGEMAKERRUNTIME_API InvokeEndpointAsyncResult();
    AWS_SAGEMAKERRUNTIME_API InvokeEndpointAsyncResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKERRUNTIME_API InvokeEndpointAsyncResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Identifier for an inference request. This will be the same as the
     * <code>InferenceId</code> specified in the input. Amazon SageMaker will generate
     * an identifier for you if you do not specify one.</p>
     */
    inline const Aws::String& GetInferenceId() const{ return m_inferenceId; }

    /**
     * <p>Identifier for an inference request. This will be the same as the
     * <code>InferenceId</code> specified in the input. Amazon SageMaker will generate
     * an identifier for you if you do not specify one.</p>
     */
    inline void SetInferenceId(const Aws::String& value) { m_inferenceId = value; }

    /**
     * <p>Identifier for an inference request. This will be the same as the
     * <code>InferenceId</code> specified in the input. Amazon SageMaker will generate
     * an identifier for you if you do not specify one.</p>
     */
    inline void SetInferenceId(Aws::String&& value) { m_inferenceId = std::move(value); }

    /**
     * <p>Identifier for an inference request. This will be the same as the
     * <code>InferenceId</code> specified in the input. Amazon SageMaker will generate
     * an identifier for you if you do not specify one.</p>
     */
    inline void SetInferenceId(const char* value) { m_inferenceId.assign(value); }

    /**
     * <p>Identifier for an inference request. This will be the same as the
     * <code>InferenceId</code> specified in the input. Amazon SageMaker will generate
     * an identifier for you if you do not specify one.</p>
     */
    inline InvokeEndpointAsyncResult& WithInferenceId(const Aws::String& value) { SetInferenceId(value); return *this;}

    /**
     * <p>Identifier for an inference request. This will be the same as the
     * <code>InferenceId</code> specified in the input. Amazon SageMaker will generate
     * an identifier for you if you do not specify one.</p>
     */
    inline InvokeEndpointAsyncResult& WithInferenceId(Aws::String&& value) { SetInferenceId(std::move(value)); return *this;}

    /**
     * <p>Identifier for an inference request. This will be the same as the
     * <code>InferenceId</code> specified in the input. Amazon SageMaker will generate
     * an identifier for you if you do not specify one.</p>
     */
    inline InvokeEndpointAsyncResult& WithInferenceId(const char* value) { SetInferenceId(value); return *this;}


    /**
     * <p>The Amazon S3 URI where the inference response payload is stored.</p>
     */
    inline const Aws::String& GetOutputLocation() const{ return m_outputLocation; }

    /**
     * <p>The Amazon S3 URI where the inference response payload is stored.</p>
     */
    inline void SetOutputLocation(const Aws::String& value) { m_outputLocation = value; }

    /**
     * <p>The Amazon S3 URI where the inference response payload is stored.</p>
     */
    inline void SetOutputLocation(Aws::String&& value) { m_outputLocation = std::move(value); }

    /**
     * <p>The Amazon S3 URI where the inference response payload is stored.</p>
     */
    inline void SetOutputLocation(const char* value) { m_outputLocation.assign(value); }

    /**
     * <p>The Amazon S3 URI where the inference response payload is stored.</p>
     */
    inline InvokeEndpointAsyncResult& WithOutputLocation(const Aws::String& value) { SetOutputLocation(value); return *this;}

    /**
     * <p>The Amazon S3 URI where the inference response payload is stored.</p>
     */
    inline InvokeEndpointAsyncResult& WithOutputLocation(Aws::String&& value) { SetOutputLocation(std::move(value)); return *this;}

    /**
     * <p>The Amazon S3 URI where the inference response payload is stored.</p>
     */
    inline InvokeEndpointAsyncResult& WithOutputLocation(const char* value) { SetOutputLocation(value); return *this;}

  private:

    Aws::String m_inferenceId;

    Aws::String m_outputLocation;
  };

} // namespace Model
} // namespace SageMakerRuntime
} // namespace Aws

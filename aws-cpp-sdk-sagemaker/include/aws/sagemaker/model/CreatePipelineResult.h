/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
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
namespace SageMaker
{
namespace Model
{
  class CreatePipelineResult
  {
  public:
    AWS_SAGEMAKER_API CreatePipelineResult();
    AWS_SAGEMAKER_API CreatePipelineResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API CreatePipelineResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon Resource Name (ARN) of the created pipeline.</p>
     */
    inline const Aws::String& GetPipelineArn() const{ return m_pipelineArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the created pipeline.</p>
     */
    inline void SetPipelineArn(const Aws::String& value) { m_pipelineArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the created pipeline.</p>
     */
    inline void SetPipelineArn(Aws::String&& value) { m_pipelineArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the created pipeline.</p>
     */
    inline void SetPipelineArn(const char* value) { m_pipelineArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the created pipeline.</p>
     */
    inline CreatePipelineResult& WithPipelineArn(const Aws::String& value) { SetPipelineArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the created pipeline.</p>
     */
    inline CreatePipelineResult& WithPipelineArn(Aws::String&& value) { SetPipelineArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the created pipeline.</p>
     */
    inline CreatePipelineResult& WithPipelineArn(const char* value) { SetPipelineArn(value); return *this;}

  private:

    Aws::String m_pipelineArn;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws

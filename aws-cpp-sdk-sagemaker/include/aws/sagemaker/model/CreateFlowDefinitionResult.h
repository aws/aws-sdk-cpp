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
  class CreateFlowDefinitionResult
  {
  public:
    AWS_SAGEMAKER_API CreateFlowDefinitionResult();
    AWS_SAGEMAKER_API CreateFlowDefinitionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API CreateFlowDefinitionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon Resource Name (ARN) of the flow definition you create.</p>
     */
    inline const Aws::String& GetFlowDefinitionArn() const{ return m_flowDefinitionArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the flow definition you create.</p>
     */
    inline void SetFlowDefinitionArn(const Aws::String& value) { m_flowDefinitionArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the flow definition you create.</p>
     */
    inline void SetFlowDefinitionArn(Aws::String&& value) { m_flowDefinitionArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the flow definition you create.</p>
     */
    inline void SetFlowDefinitionArn(const char* value) { m_flowDefinitionArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the flow definition you create.</p>
     */
    inline CreateFlowDefinitionResult& WithFlowDefinitionArn(const Aws::String& value) { SetFlowDefinitionArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the flow definition you create.</p>
     */
    inline CreateFlowDefinitionResult& WithFlowDefinitionArn(Aws::String&& value) { SetFlowDefinitionArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the flow definition you create.</p>
     */
    inline CreateFlowDefinitionResult& WithFlowDefinitionArn(const char* value) { SetFlowDefinitionArn(value); return *this;}

  private:

    Aws::String m_flowDefinitionArn;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws

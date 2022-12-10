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
  class CreateEndpointConfigResult
  {
  public:
    AWS_SAGEMAKER_API CreateEndpointConfigResult();
    AWS_SAGEMAKER_API CreateEndpointConfigResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API CreateEndpointConfigResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon Resource Name (ARN) of the endpoint configuration. </p>
     */
    inline const Aws::String& GetEndpointConfigArn() const{ return m_endpointConfigArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the endpoint configuration. </p>
     */
    inline void SetEndpointConfigArn(const Aws::String& value) { m_endpointConfigArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the endpoint configuration. </p>
     */
    inline void SetEndpointConfigArn(Aws::String&& value) { m_endpointConfigArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the endpoint configuration. </p>
     */
    inline void SetEndpointConfigArn(const char* value) { m_endpointConfigArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the endpoint configuration. </p>
     */
    inline CreateEndpointConfigResult& WithEndpointConfigArn(const Aws::String& value) { SetEndpointConfigArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the endpoint configuration. </p>
     */
    inline CreateEndpointConfigResult& WithEndpointConfigArn(Aws::String&& value) { SetEndpointConfigArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the endpoint configuration. </p>
     */
    inline CreateEndpointConfigResult& WithEndpointConfigArn(const char* value) { SetEndpointConfigArn(value); return *this;}

  private:

    Aws::String m_endpointConfigArn;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws

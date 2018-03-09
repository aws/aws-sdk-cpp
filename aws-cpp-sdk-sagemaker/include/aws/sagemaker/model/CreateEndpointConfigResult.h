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
  class AWS_SAGEMAKER_API CreateEndpointConfigResult
  {
  public:
    CreateEndpointConfigResult();
    CreateEndpointConfigResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    CreateEndpointConfigResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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

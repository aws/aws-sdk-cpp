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
  class AWS_SAGEMAKER_API CreateModelResult
  {
  public:
    CreateModelResult();
    CreateModelResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    CreateModelResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ARN of the model created in Amazon SageMaker.</p>
     */
    inline const Aws::String& GetModelArn() const{ return m_modelArn; }

    /**
     * <p>The ARN of the model created in Amazon SageMaker.</p>
     */
    inline void SetModelArn(const Aws::String& value) { m_modelArn = value; }

    /**
     * <p>The ARN of the model created in Amazon SageMaker.</p>
     */
    inline void SetModelArn(Aws::String&& value) { m_modelArn = std::move(value); }

    /**
     * <p>The ARN of the model created in Amazon SageMaker.</p>
     */
    inline void SetModelArn(const char* value) { m_modelArn.assign(value); }

    /**
     * <p>The ARN of the model created in Amazon SageMaker.</p>
     */
    inline CreateModelResult& WithModelArn(const Aws::String& value) { SetModelArn(value); return *this;}

    /**
     * <p>The ARN of the model created in Amazon SageMaker.</p>
     */
    inline CreateModelResult& WithModelArn(Aws::String&& value) { SetModelArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the model created in Amazon SageMaker.</p>
     */
    inline CreateModelResult& WithModelArn(const char* value) { SetModelArn(value); return *this;}

  private:

    Aws::String m_modelArn;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws

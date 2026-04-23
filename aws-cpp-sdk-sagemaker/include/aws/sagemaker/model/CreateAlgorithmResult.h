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
  class AWS_SAGEMAKER_API CreateAlgorithmResult
  {
  public:
    CreateAlgorithmResult();
    CreateAlgorithmResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    CreateAlgorithmResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon Resource Name (ARN) of the new algorithm.</p>
     */
    inline const Aws::String& GetAlgorithmArn() const{ return m_algorithmArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the new algorithm.</p>
     */
    inline void SetAlgorithmArn(const Aws::String& value) { m_algorithmArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the new algorithm.</p>
     */
    inline void SetAlgorithmArn(Aws::String&& value) { m_algorithmArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the new algorithm.</p>
     */
    inline void SetAlgorithmArn(const char* value) { m_algorithmArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the new algorithm.</p>
     */
    inline CreateAlgorithmResult& WithAlgorithmArn(const Aws::String& value) { SetAlgorithmArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the new algorithm.</p>
     */
    inline CreateAlgorithmResult& WithAlgorithmArn(Aws::String&& value) { SetAlgorithmArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the new algorithm.</p>
     */
    inline CreateAlgorithmResult& WithAlgorithmArn(const char* value) { SetAlgorithmArn(value); return *this;}

  private:

    Aws::String m_algorithmArn;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws

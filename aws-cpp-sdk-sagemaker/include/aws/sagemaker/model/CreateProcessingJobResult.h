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
  class AWS_SAGEMAKER_API CreateProcessingJobResult
  {
  public:
    CreateProcessingJobResult();
    CreateProcessingJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    CreateProcessingJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon Resource Name (ARN) of the processing job.</p>
     */
    inline const Aws::String& GetProcessingJobArn() const{ return m_processingJobArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the processing job.</p>
     */
    inline void SetProcessingJobArn(const Aws::String& value) { m_processingJobArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the processing job.</p>
     */
    inline void SetProcessingJobArn(Aws::String&& value) { m_processingJobArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the processing job.</p>
     */
    inline void SetProcessingJobArn(const char* value) { m_processingJobArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the processing job.</p>
     */
    inline CreateProcessingJobResult& WithProcessingJobArn(const Aws::String& value) { SetProcessingJobArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the processing job.</p>
     */
    inline CreateProcessingJobResult& WithProcessingJobArn(Aws::String&& value) { SetProcessingJobArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the processing job.</p>
     */
    inline CreateProcessingJobResult& WithProcessingJobArn(const char* value) { SetProcessingJobArn(value); return *this;}

  private:

    Aws::String m_processingJobArn;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws

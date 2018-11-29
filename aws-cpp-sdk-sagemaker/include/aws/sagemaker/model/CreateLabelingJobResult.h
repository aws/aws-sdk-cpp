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
  class AWS_SAGEMAKER_API CreateLabelingJobResult
  {
  public:
    CreateLabelingJobResult();
    CreateLabelingJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    CreateLabelingJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon Resource Name (ARN) of the labeling job. You use this ARN to
     * identify the labeling job.</p>
     */
    inline const Aws::String& GetLabelingJobArn() const{ return m_labelingJobArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the labeling job. You use this ARN to
     * identify the labeling job.</p>
     */
    inline void SetLabelingJobArn(const Aws::String& value) { m_labelingJobArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the labeling job. You use this ARN to
     * identify the labeling job.</p>
     */
    inline void SetLabelingJobArn(Aws::String&& value) { m_labelingJobArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the labeling job. You use this ARN to
     * identify the labeling job.</p>
     */
    inline void SetLabelingJobArn(const char* value) { m_labelingJobArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the labeling job. You use this ARN to
     * identify the labeling job.</p>
     */
    inline CreateLabelingJobResult& WithLabelingJobArn(const Aws::String& value) { SetLabelingJobArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the labeling job. You use this ARN to
     * identify the labeling job.</p>
     */
    inline CreateLabelingJobResult& WithLabelingJobArn(Aws::String&& value) { SetLabelingJobArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the labeling job. You use this ARN to
     * identify the labeling job.</p>
     */
    inline CreateLabelingJobResult& WithLabelingJobArn(const char* value) { SetLabelingJobArn(value); return *this;}

  private:

    Aws::String m_labelingJobArn;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws

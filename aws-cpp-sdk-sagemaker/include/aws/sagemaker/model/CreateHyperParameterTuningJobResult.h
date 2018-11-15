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
  class AWS_SAGEMAKER_API CreateHyperParameterTuningJobResult
  {
  public:
    CreateHyperParameterTuningJobResult();
    CreateHyperParameterTuningJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    CreateHyperParameterTuningJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon Resource Name (ARN) of the tuning job. Amazon SageMaker assigns an
     * ARN to a hyperparameter tuning job when you create it.</p>
     */
    inline const Aws::String& GetHyperParameterTuningJobArn() const{ return m_hyperParameterTuningJobArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the tuning job. Amazon SageMaker assigns an
     * ARN to a hyperparameter tuning job when you create it.</p>
     */
    inline void SetHyperParameterTuningJobArn(const Aws::String& value) { m_hyperParameterTuningJobArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the tuning job. Amazon SageMaker assigns an
     * ARN to a hyperparameter tuning job when you create it.</p>
     */
    inline void SetHyperParameterTuningJobArn(Aws::String&& value) { m_hyperParameterTuningJobArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the tuning job. Amazon SageMaker assigns an
     * ARN to a hyperparameter tuning job when you create it.</p>
     */
    inline void SetHyperParameterTuningJobArn(const char* value) { m_hyperParameterTuningJobArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the tuning job. Amazon SageMaker assigns an
     * ARN to a hyperparameter tuning job when you create it.</p>
     */
    inline CreateHyperParameterTuningJobResult& WithHyperParameterTuningJobArn(const Aws::String& value) { SetHyperParameterTuningJobArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the tuning job. Amazon SageMaker assigns an
     * ARN to a hyperparameter tuning job when you create it.</p>
     */
    inline CreateHyperParameterTuningJobResult& WithHyperParameterTuningJobArn(Aws::String&& value) { SetHyperParameterTuningJobArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the tuning job. Amazon SageMaker assigns an
     * ARN to a hyperparameter tuning job when you create it.</p>
     */
    inline CreateHyperParameterTuningJobResult& WithHyperParameterTuningJobArn(const char* value) { SetHyperParameterTuningJobArn(value); return *this;}

  private:

    Aws::String m_hyperParameterTuningJobArn;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws

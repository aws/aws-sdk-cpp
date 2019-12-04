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
  class AWS_SAGEMAKER_API CreateHumanTaskUiResult
  {
  public:
    CreateHumanTaskUiResult();
    CreateHumanTaskUiResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    CreateHumanTaskUiResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon Resource Name (ARN) of the human review workflow user interface
     * you create.</p>
     */
    inline const Aws::String& GetHumanTaskUiArn() const{ return m_humanTaskUiArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the human review workflow user interface
     * you create.</p>
     */
    inline void SetHumanTaskUiArn(const Aws::String& value) { m_humanTaskUiArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the human review workflow user interface
     * you create.</p>
     */
    inline void SetHumanTaskUiArn(Aws::String&& value) { m_humanTaskUiArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the human review workflow user interface
     * you create.</p>
     */
    inline void SetHumanTaskUiArn(const char* value) { m_humanTaskUiArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the human review workflow user interface
     * you create.</p>
     */
    inline CreateHumanTaskUiResult& WithHumanTaskUiArn(const Aws::String& value) { SetHumanTaskUiArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the human review workflow user interface
     * you create.</p>
     */
    inline CreateHumanTaskUiResult& WithHumanTaskUiArn(Aws::String&& value) { SetHumanTaskUiArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the human review workflow user interface
     * you create.</p>
     */
    inline CreateHumanTaskUiResult& WithHumanTaskUiArn(const char* value) { SetHumanTaskUiArn(value); return *this;}

  private:

    Aws::String m_humanTaskUiArn;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws

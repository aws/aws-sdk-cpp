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
  class AWS_SAGEMAKER_API CreateNotebookInstanceLifecycleConfigResult
  {
  public:
    CreateNotebookInstanceLifecycleConfigResult();
    CreateNotebookInstanceLifecycleConfigResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    CreateNotebookInstanceLifecycleConfigResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon Resource Name (ARN) of the lifecycle configuration.</p>
     */
    inline const Aws::String& GetNotebookInstanceLifecycleConfigArn() const{ return m_notebookInstanceLifecycleConfigArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the lifecycle configuration.</p>
     */
    inline void SetNotebookInstanceLifecycleConfigArn(const Aws::String& value) { m_notebookInstanceLifecycleConfigArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the lifecycle configuration.</p>
     */
    inline void SetNotebookInstanceLifecycleConfigArn(Aws::String&& value) { m_notebookInstanceLifecycleConfigArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the lifecycle configuration.</p>
     */
    inline void SetNotebookInstanceLifecycleConfigArn(const char* value) { m_notebookInstanceLifecycleConfigArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the lifecycle configuration.</p>
     */
    inline CreateNotebookInstanceLifecycleConfigResult& WithNotebookInstanceLifecycleConfigArn(const Aws::String& value) { SetNotebookInstanceLifecycleConfigArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the lifecycle configuration.</p>
     */
    inline CreateNotebookInstanceLifecycleConfigResult& WithNotebookInstanceLifecycleConfigArn(Aws::String&& value) { SetNotebookInstanceLifecycleConfigArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the lifecycle configuration.</p>
     */
    inline CreateNotebookInstanceLifecycleConfigResult& WithNotebookInstanceLifecycleConfigArn(const char* value) { SetNotebookInstanceLifecycleConfigArn(value); return *this;}

  private:

    Aws::String m_notebookInstanceLifecycleConfigArn;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws

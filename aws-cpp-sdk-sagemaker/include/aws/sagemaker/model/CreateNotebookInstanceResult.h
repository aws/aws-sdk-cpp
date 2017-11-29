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
  class AWS_SAGEMAKER_API CreateNotebookInstanceResult
  {
  public:
    CreateNotebookInstanceResult();
    CreateNotebookInstanceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    CreateNotebookInstanceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon Resource Name (ARN) of the notebook instance. </p>
     */
    inline const Aws::String& GetNotebookInstanceArn() const{ return m_notebookInstanceArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the notebook instance. </p>
     */
    inline void SetNotebookInstanceArn(const Aws::String& value) { m_notebookInstanceArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the notebook instance. </p>
     */
    inline void SetNotebookInstanceArn(Aws::String&& value) { m_notebookInstanceArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the notebook instance. </p>
     */
    inline void SetNotebookInstanceArn(const char* value) { m_notebookInstanceArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the notebook instance. </p>
     */
    inline CreateNotebookInstanceResult& WithNotebookInstanceArn(const Aws::String& value) { SetNotebookInstanceArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the notebook instance. </p>
     */
    inline CreateNotebookInstanceResult& WithNotebookInstanceArn(Aws::String&& value) { SetNotebookInstanceArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the notebook instance. </p>
     */
    inline CreateNotebookInstanceResult& WithNotebookInstanceArn(const char* value) { SetNotebookInstanceArn(value); return *this;}

  private:

    Aws::String m_notebookInstanceArn;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws

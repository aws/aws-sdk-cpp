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
  class AWS_SAGEMAKER_API UpdateCodeRepositoryResult
  {
  public:
    UpdateCodeRepositoryResult();
    UpdateCodeRepositoryResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    UpdateCodeRepositoryResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ARN of the Git repository.</p>
     */
    inline const Aws::String& GetCodeRepositoryArn() const{ return m_codeRepositoryArn; }

    /**
     * <p>The ARN of the Git repository.</p>
     */
    inline void SetCodeRepositoryArn(const Aws::String& value) { m_codeRepositoryArn = value; }

    /**
     * <p>The ARN of the Git repository.</p>
     */
    inline void SetCodeRepositoryArn(Aws::String&& value) { m_codeRepositoryArn = std::move(value); }

    /**
     * <p>The ARN of the Git repository.</p>
     */
    inline void SetCodeRepositoryArn(const char* value) { m_codeRepositoryArn.assign(value); }

    /**
     * <p>The ARN of the Git repository.</p>
     */
    inline UpdateCodeRepositoryResult& WithCodeRepositoryArn(const Aws::String& value) { SetCodeRepositoryArn(value); return *this;}

    /**
     * <p>The ARN of the Git repository.</p>
     */
    inline UpdateCodeRepositoryResult& WithCodeRepositoryArn(Aws::String&& value) { SetCodeRepositoryArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the Git repository.</p>
     */
    inline UpdateCodeRepositoryResult& WithCodeRepositoryArn(const char* value) { SetCodeRepositoryArn(value); return *this;}

  private:

    Aws::String m_codeRepositoryArn;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws

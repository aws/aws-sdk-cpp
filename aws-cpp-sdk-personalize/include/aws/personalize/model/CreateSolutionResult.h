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
#include <aws/personalize/Personalize_EXPORTS.h>
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
namespace Personalize
{
namespace Model
{
  class AWS_PERSONALIZE_API CreateSolutionResult
  {
  public:
    CreateSolutionResult();
    CreateSolutionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    CreateSolutionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ARN of the solution.</p>
     */
    inline const Aws::String& GetSolutionArn() const{ return m_solutionArn; }

    /**
     * <p>The ARN of the solution.</p>
     */
    inline void SetSolutionArn(const Aws::String& value) { m_solutionArn = value; }

    /**
     * <p>The ARN of the solution.</p>
     */
    inline void SetSolutionArn(Aws::String&& value) { m_solutionArn = std::move(value); }

    /**
     * <p>The ARN of the solution.</p>
     */
    inline void SetSolutionArn(const char* value) { m_solutionArn.assign(value); }

    /**
     * <p>The ARN of the solution.</p>
     */
    inline CreateSolutionResult& WithSolutionArn(const Aws::String& value) { SetSolutionArn(value); return *this;}

    /**
     * <p>The ARN of the solution.</p>
     */
    inline CreateSolutionResult& WithSolutionArn(Aws::String&& value) { SetSolutionArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the solution.</p>
     */
    inline CreateSolutionResult& WithSolutionArn(const char* value) { SetSolutionArn(value); return *this;}

  private:

    Aws::String m_solutionArn;
  };

} // namespace Model
} // namespace Personalize
} // namespace Aws

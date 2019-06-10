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
  class AWS_PERSONALIZE_API CreateSolutionVersionResult
  {
  public:
    CreateSolutionVersionResult();
    CreateSolutionVersionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    CreateSolutionVersionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ARN of the new solution version.</p>
     */
    inline const Aws::String& GetSolutionVersionArn() const{ return m_solutionVersionArn; }

    /**
     * <p>The ARN of the new solution version.</p>
     */
    inline void SetSolutionVersionArn(const Aws::String& value) { m_solutionVersionArn = value; }

    /**
     * <p>The ARN of the new solution version.</p>
     */
    inline void SetSolutionVersionArn(Aws::String&& value) { m_solutionVersionArn = std::move(value); }

    /**
     * <p>The ARN of the new solution version.</p>
     */
    inline void SetSolutionVersionArn(const char* value) { m_solutionVersionArn.assign(value); }

    /**
     * <p>The ARN of the new solution version.</p>
     */
    inline CreateSolutionVersionResult& WithSolutionVersionArn(const Aws::String& value) { SetSolutionVersionArn(value); return *this;}

    /**
     * <p>The ARN of the new solution version.</p>
     */
    inline CreateSolutionVersionResult& WithSolutionVersionArn(Aws::String&& value) { SetSolutionVersionArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the new solution version.</p>
     */
    inline CreateSolutionVersionResult& WithSolutionVersionArn(const char* value) { SetSolutionVersionArn(value); return *this;}

  private:

    Aws::String m_solutionVersionArn;
  };

} // namespace Model
} // namespace Personalize
} // namespace Aws

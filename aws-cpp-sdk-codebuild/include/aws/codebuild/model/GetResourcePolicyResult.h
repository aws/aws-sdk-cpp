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
#include <aws/codebuild/CodeBuild_EXPORTS.h>
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
namespace CodeBuild
{
namespace Model
{
  class AWS_CODEBUILD_API GetResourcePolicyResult
  {
  public:
    GetResourcePolicyResult();
    GetResourcePolicyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetResourcePolicyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> The resource policy for the resource identified by the input ARN parameter.
     * </p>
     */
    inline const Aws::String& GetPolicy() const{ return m_policy; }

    /**
     * <p> The resource policy for the resource identified by the input ARN parameter.
     * </p>
     */
    inline void SetPolicy(const Aws::String& value) { m_policy = value; }

    /**
     * <p> The resource policy for the resource identified by the input ARN parameter.
     * </p>
     */
    inline void SetPolicy(Aws::String&& value) { m_policy = std::move(value); }

    /**
     * <p> The resource policy for the resource identified by the input ARN parameter.
     * </p>
     */
    inline void SetPolicy(const char* value) { m_policy.assign(value); }

    /**
     * <p> The resource policy for the resource identified by the input ARN parameter.
     * </p>
     */
    inline GetResourcePolicyResult& WithPolicy(const Aws::String& value) { SetPolicy(value); return *this;}

    /**
     * <p> The resource policy for the resource identified by the input ARN parameter.
     * </p>
     */
    inline GetResourcePolicyResult& WithPolicy(Aws::String&& value) { SetPolicy(std::move(value)); return *this;}

    /**
     * <p> The resource policy for the resource identified by the input ARN parameter.
     * </p>
     */
    inline GetResourcePolicyResult& WithPolicy(const char* value) { SetPolicy(value); return *this;}

  private:

    Aws::String m_policy;
  };

} // namespace Model
} // namespace CodeBuild
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class GetResourcePolicyResult
  {
  public:
    AWS_CODEBUILD_API GetResourcePolicyResult();
    AWS_CODEBUILD_API GetResourcePolicyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODEBUILD_API GetResourcePolicyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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

﻿/**
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
  class PutResourcePolicyResult
  {
  public:
    AWS_CODEBUILD_API PutResourcePolicyResult();
    AWS_CODEBUILD_API PutResourcePolicyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODEBUILD_API PutResourcePolicyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> The ARN of the <code>Project</code> or <code>ReportGroup</code> resource
     * that is associated with a resource policy. </p>
     */
    inline const Aws::String& GetResourceArn() const{ return m_resourceArn; }

    /**
     * <p> The ARN of the <code>Project</code> or <code>ReportGroup</code> resource
     * that is associated with a resource policy. </p>
     */
    inline void SetResourceArn(const Aws::String& value) { m_resourceArn = value; }

    /**
     * <p> The ARN of the <code>Project</code> or <code>ReportGroup</code> resource
     * that is associated with a resource policy. </p>
     */
    inline void SetResourceArn(Aws::String&& value) { m_resourceArn = std::move(value); }

    /**
     * <p> The ARN of the <code>Project</code> or <code>ReportGroup</code> resource
     * that is associated with a resource policy. </p>
     */
    inline void SetResourceArn(const char* value) { m_resourceArn.assign(value); }

    /**
     * <p> The ARN of the <code>Project</code> or <code>ReportGroup</code> resource
     * that is associated with a resource policy. </p>
     */
    inline PutResourcePolicyResult& WithResourceArn(const Aws::String& value) { SetResourceArn(value); return *this;}

    /**
     * <p> The ARN of the <code>Project</code> or <code>ReportGroup</code> resource
     * that is associated with a resource policy. </p>
     */
    inline PutResourcePolicyResult& WithResourceArn(Aws::String&& value) { SetResourceArn(std::move(value)); return *this;}

    /**
     * <p> The ARN of the <code>Project</code> or <code>ReportGroup</code> resource
     * that is associated with a resource policy. </p>
     */
    inline PutResourcePolicyResult& WithResourceArn(const char* value) { SetResourceArn(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline PutResourcePolicyResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline PutResourcePolicyResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline PutResourcePolicyResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_resourceArn;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CodeBuild
} // namespace Aws

﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/entityresolution/EntityResolution_EXPORTS.h>
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
namespace EntityResolution
{
namespace Model
{
  class DeletePolicyStatementResult
  {
  public:
    AWS_ENTITYRESOLUTION_API DeletePolicyStatementResult();
    AWS_ENTITYRESOLUTION_API DeletePolicyStatementResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ENTITYRESOLUTION_API DeletePolicyStatementResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ARN of the resource for which the policy need to be deleted.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline void SetArn(const Aws::String& value) { m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arn.assign(value); }
    inline DeletePolicyStatementResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline DeletePolicyStatementResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline DeletePolicyStatementResult& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The resource-based policy.</p>
     */
    inline const Aws::String& GetPolicy() const{ return m_policy; }
    inline void SetPolicy(const Aws::String& value) { m_policy = value; }
    inline void SetPolicy(Aws::String&& value) { m_policy = std::move(value); }
    inline void SetPolicy(const char* value) { m_policy.assign(value); }
    inline DeletePolicyStatementResult& WithPolicy(const Aws::String& value) { SetPolicy(value); return *this;}
    inline DeletePolicyStatementResult& WithPolicy(Aws::String&& value) { SetPolicy(std::move(value)); return *this;}
    inline DeletePolicyStatementResult& WithPolicy(const char* value) { SetPolicy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique identifier for the deleted policy.</p>
     */
    inline const Aws::String& GetToken() const{ return m_token; }
    inline void SetToken(const Aws::String& value) { m_token = value; }
    inline void SetToken(Aws::String&& value) { m_token = std::move(value); }
    inline void SetToken(const char* value) { m_token.assign(value); }
    inline DeletePolicyStatementResult& WithToken(const Aws::String& value) { SetToken(value); return *this;}
    inline DeletePolicyStatementResult& WithToken(Aws::String&& value) { SetToken(std::move(value)); return *this;}
    inline DeletePolicyStatementResult& WithToken(const char* value) { SetToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DeletePolicyStatementResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DeletePolicyStatementResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DeletePolicyStatementResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_arn;

    Aws::String m_policy;

    Aws::String m_token;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace EntityResolution
} // namespace Aws

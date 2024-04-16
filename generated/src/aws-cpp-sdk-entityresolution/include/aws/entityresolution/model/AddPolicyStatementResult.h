/**
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
  class AddPolicyStatementResult
  {
  public:
    AWS_ENTITYRESOLUTION_API AddPolicyStatementResult();
    AWS_ENTITYRESOLUTION_API AddPolicyStatementResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ENTITYRESOLUTION_API AddPolicyStatementResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon Resource Name (ARN) of the resource that will be accessed by the
     * principal.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the resource that will be accessed by the
     * principal.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the resource that will be accessed by the
     * principal.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the resource that will be accessed by the
     * principal.</p>
     */
    inline void SetArn(const char* value) { m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the resource that will be accessed by the
     * principal.</p>
     */
    inline AddPolicyStatementResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the resource that will be accessed by the
     * principal.</p>
     */
    inline AddPolicyStatementResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the resource that will be accessed by the
     * principal.</p>
     */
    inline AddPolicyStatementResult& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The resource-based policy.</p>
     */
    inline const Aws::String& GetPolicy() const{ return m_policy; }

    /**
     * <p>The resource-based policy.</p>
     */
    inline void SetPolicy(const Aws::String& value) { m_policy = value; }

    /**
     * <p>The resource-based policy.</p>
     */
    inline void SetPolicy(Aws::String&& value) { m_policy = std::move(value); }

    /**
     * <p>The resource-based policy.</p>
     */
    inline void SetPolicy(const char* value) { m_policy.assign(value); }

    /**
     * <p>The resource-based policy.</p>
     */
    inline AddPolicyStatementResult& WithPolicy(const Aws::String& value) { SetPolicy(value); return *this;}

    /**
     * <p>The resource-based policy.</p>
     */
    inline AddPolicyStatementResult& WithPolicy(Aws::String&& value) { SetPolicy(std::move(value)); return *this;}

    /**
     * <p>The resource-based policy.</p>
     */
    inline AddPolicyStatementResult& WithPolicy(const char* value) { SetPolicy(value); return *this;}


    /**
     * <p>A unique identifier for the current revision of the policy.</p>
     */
    inline const Aws::String& GetToken() const{ return m_token; }

    /**
     * <p>A unique identifier for the current revision of the policy.</p>
     */
    inline void SetToken(const Aws::String& value) { m_token = value; }

    /**
     * <p>A unique identifier for the current revision of the policy.</p>
     */
    inline void SetToken(Aws::String&& value) { m_token = std::move(value); }

    /**
     * <p>A unique identifier for the current revision of the policy.</p>
     */
    inline void SetToken(const char* value) { m_token.assign(value); }

    /**
     * <p>A unique identifier for the current revision of the policy.</p>
     */
    inline AddPolicyStatementResult& WithToken(const Aws::String& value) { SetToken(value); return *this;}

    /**
     * <p>A unique identifier for the current revision of the policy.</p>
     */
    inline AddPolicyStatementResult& WithToken(Aws::String&& value) { SetToken(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for the current revision of the policy.</p>
     */
    inline AddPolicyStatementResult& WithToken(const char* value) { SetToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline AddPolicyStatementResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline AddPolicyStatementResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline AddPolicyStatementResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_arn;

    Aws::String m_policy;

    Aws::String m_token;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace EntityResolution
} // namespace Aws

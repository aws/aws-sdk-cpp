/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
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
namespace Bedrock
{
namespace Model
{
  class CreateGuardrailResult
  {
  public:
    AWS_BEDROCK_API CreateGuardrailResult();
    AWS_BEDROCK_API CreateGuardrailResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BEDROCK_API CreateGuardrailResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The unique identifier of the guardrail that was created.</p>
     */
    inline const Aws::String& GetGuardrailId() const{ return m_guardrailId; }

    /**
     * <p>The unique identifier of the guardrail that was created.</p>
     */
    inline void SetGuardrailId(const Aws::String& value) { m_guardrailId = value; }

    /**
     * <p>The unique identifier of the guardrail that was created.</p>
     */
    inline void SetGuardrailId(Aws::String&& value) { m_guardrailId = std::move(value); }

    /**
     * <p>The unique identifier of the guardrail that was created.</p>
     */
    inline void SetGuardrailId(const char* value) { m_guardrailId.assign(value); }

    /**
     * <p>The unique identifier of the guardrail that was created.</p>
     */
    inline CreateGuardrailResult& WithGuardrailId(const Aws::String& value) { SetGuardrailId(value); return *this;}

    /**
     * <p>The unique identifier of the guardrail that was created.</p>
     */
    inline CreateGuardrailResult& WithGuardrailId(Aws::String&& value) { SetGuardrailId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the guardrail that was created.</p>
     */
    inline CreateGuardrailResult& WithGuardrailId(const char* value) { SetGuardrailId(value); return *this;}


    /**
     * <p>The ARN of the guardrail that was created.</p>
     */
    inline const Aws::String& GetGuardrailArn() const{ return m_guardrailArn; }

    /**
     * <p>The ARN of the guardrail that was created.</p>
     */
    inline void SetGuardrailArn(const Aws::String& value) { m_guardrailArn = value; }

    /**
     * <p>The ARN of the guardrail that was created.</p>
     */
    inline void SetGuardrailArn(Aws::String&& value) { m_guardrailArn = std::move(value); }

    /**
     * <p>The ARN of the guardrail that was created.</p>
     */
    inline void SetGuardrailArn(const char* value) { m_guardrailArn.assign(value); }

    /**
     * <p>The ARN of the guardrail that was created.</p>
     */
    inline CreateGuardrailResult& WithGuardrailArn(const Aws::String& value) { SetGuardrailArn(value); return *this;}

    /**
     * <p>The ARN of the guardrail that was created.</p>
     */
    inline CreateGuardrailResult& WithGuardrailArn(Aws::String&& value) { SetGuardrailArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the guardrail that was created.</p>
     */
    inline CreateGuardrailResult& WithGuardrailArn(const char* value) { SetGuardrailArn(value); return *this;}


    /**
     * <p>The version of the guardrail that was created. This value should be 1.</p>
     */
    inline const Aws::String& GetVersion() const{ return m_version; }

    /**
     * <p>The version of the guardrail that was created. This value should be 1.</p>
     */
    inline void SetVersion(const Aws::String& value) { m_version = value; }

    /**
     * <p>The version of the guardrail that was created. This value should be 1.</p>
     */
    inline void SetVersion(Aws::String&& value) { m_version = std::move(value); }

    /**
     * <p>The version of the guardrail that was created. This value should be 1.</p>
     */
    inline void SetVersion(const char* value) { m_version.assign(value); }

    /**
     * <p>The version of the guardrail that was created. This value should be 1.</p>
     */
    inline CreateGuardrailResult& WithVersion(const Aws::String& value) { SetVersion(value); return *this;}

    /**
     * <p>The version of the guardrail that was created. This value should be 1.</p>
     */
    inline CreateGuardrailResult& WithVersion(Aws::String&& value) { SetVersion(std::move(value)); return *this;}

    /**
     * <p>The version of the guardrail that was created. This value should be 1.</p>
     */
    inline CreateGuardrailResult& WithVersion(const char* value) { SetVersion(value); return *this;}


    /**
     * <p>The time at which the guardrail was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>The time at which the guardrail was created.</p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAt = value; }

    /**
     * <p>The time at which the guardrail was created.</p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAt = std::move(value); }

    /**
     * <p>The time at which the guardrail was created.</p>
     */
    inline CreateGuardrailResult& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>The time at which the guardrail was created.</p>
     */
    inline CreateGuardrailResult& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline CreateGuardrailResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline CreateGuardrailResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline CreateGuardrailResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_guardrailId;

    Aws::String m_guardrailArn;

    Aws::String m_version;

    Aws::Utils::DateTime m_createdAt;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws

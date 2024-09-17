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


    ///@{
    /**
     * <p>The unique identifier of the guardrail that was created.</p>
     */
    inline const Aws::String& GetGuardrailId() const{ return m_guardrailId; }
    inline void SetGuardrailId(const Aws::String& value) { m_guardrailId = value; }
    inline void SetGuardrailId(Aws::String&& value) { m_guardrailId = std::move(value); }
    inline void SetGuardrailId(const char* value) { m_guardrailId.assign(value); }
    inline CreateGuardrailResult& WithGuardrailId(const Aws::String& value) { SetGuardrailId(value); return *this;}
    inline CreateGuardrailResult& WithGuardrailId(Aws::String&& value) { SetGuardrailId(std::move(value)); return *this;}
    inline CreateGuardrailResult& WithGuardrailId(const char* value) { SetGuardrailId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the guardrail.</p>
     */
    inline const Aws::String& GetGuardrailArn() const{ return m_guardrailArn; }
    inline void SetGuardrailArn(const Aws::String& value) { m_guardrailArn = value; }
    inline void SetGuardrailArn(Aws::String&& value) { m_guardrailArn = std::move(value); }
    inline void SetGuardrailArn(const char* value) { m_guardrailArn.assign(value); }
    inline CreateGuardrailResult& WithGuardrailArn(const Aws::String& value) { SetGuardrailArn(value); return *this;}
    inline CreateGuardrailResult& WithGuardrailArn(Aws::String&& value) { SetGuardrailArn(std::move(value)); return *this;}
    inline CreateGuardrailResult& WithGuardrailArn(const char* value) { SetGuardrailArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the guardrail that was created. This value will always be
     * <code>DRAFT</code>.</p>
     */
    inline const Aws::String& GetVersion() const{ return m_version; }
    inline void SetVersion(const Aws::String& value) { m_version = value; }
    inline void SetVersion(Aws::String&& value) { m_version = std::move(value); }
    inline void SetVersion(const char* value) { m_version.assign(value); }
    inline CreateGuardrailResult& WithVersion(const Aws::String& value) { SetVersion(value); return *this;}
    inline CreateGuardrailResult& WithVersion(Aws::String&& value) { SetVersion(std::move(value)); return *this;}
    inline CreateGuardrailResult& WithVersion(const char* value) { SetVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which the guardrail was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAt = std::move(value); }
    inline CreateGuardrailResult& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline CreateGuardrailResult& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateGuardrailResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateGuardrailResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateGuardrailResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
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

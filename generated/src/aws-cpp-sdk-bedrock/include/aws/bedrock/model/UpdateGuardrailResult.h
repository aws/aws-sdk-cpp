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
  class UpdateGuardrailResult
  {
  public:
    AWS_BEDROCK_API UpdateGuardrailResult();
    AWS_BEDROCK_API UpdateGuardrailResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BEDROCK_API UpdateGuardrailResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The unique identifier of the guardrail</p>
     */
    inline const Aws::String& GetGuardrailId() const{ return m_guardrailId; }
    inline void SetGuardrailId(const Aws::String& value) { m_guardrailId = value; }
    inline void SetGuardrailId(Aws::String&& value) { m_guardrailId = std::move(value); }
    inline void SetGuardrailId(const char* value) { m_guardrailId.assign(value); }
    inline UpdateGuardrailResult& WithGuardrailId(const Aws::String& value) { SetGuardrailId(value); return *this;}
    inline UpdateGuardrailResult& WithGuardrailId(Aws::String&& value) { SetGuardrailId(std::move(value)); return *this;}
    inline UpdateGuardrailResult& WithGuardrailId(const char* value) { SetGuardrailId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the guardrail.</p>
     */
    inline const Aws::String& GetGuardrailArn() const{ return m_guardrailArn; }
    inline void SetGuardrailArn(const Aws::String& value) { m_guardrailArn = value; }
    inline void SetGuardrailArn(Aws::String&& value) { m_guardrailArn = std::move(value); }
    inline void SetGuardrailArn(const char* value) { m_guardrailArn.assign(value); }
    inline UpdateGuardrailResult& WithGuardrailArn(const Aws::String& value) { SetGuardrailArn(value); return *this;}
    inline UpdateGuardrailResult& WithGuardrailArn(Aws::String&& value) { SetGuardrailArn(std::move(value)); return *this;}
    inline UpdateGuardrailResult& WithGuardrailArn(const char* value) { SetGuardrailArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the guardrail.</p>
     */
    inline const Aws::String& GetVersion() const{ return m_version; }
    inline void SetVersion(const Aws::String& value) { m_version = value; }
    inline void SetVersion(Aws::String&& value) { m_version = std::move(value); }
    inline void SetVersion(const char* value) { m_version.assign(value); }
    inline UpdateGuardrailResult& WithVersion(const Aws::String& value) { SetVersion(value); return *this;}
    inline UpdateGuardrailResult& WithVersion(Aws::String&& value) { SetVersion(std::move(value)); return *this;}
    inline UpdateGuardrailResult& WithVersion(const char* value) { SetVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time at which the guardrail was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const{ return m_updatedAt; }
    inline void SetUpdatedAt(const Aws::Utils::DateTime& value) { m_updatedAt = value; }
    inline void SetUpdatedAt(Aws::Utils::DateTime&& value) { m_updatedAt = std::move(value); }
    inline UpdateGuardrailResult& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}
    inline UpdateGuardrailResult& WithUpdatedAt(Aws::Utils::DateTime&& value) { SetUpdatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline UpdateGuardrailResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline UpdateGuardrailResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline UpdateGuardrailResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_guardrailId;

    Aws::String m_guardrailArn;

    Aws::String m_version;

    Aws::Utils::DateTime m_updatedAt;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws

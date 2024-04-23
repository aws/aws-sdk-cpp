/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
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
namespace Bedrock
{
namespace Model
{
  class CreateGuardrailVersionResult
  {
  public:
    AWS_BEDROCK_API CreateGuardrailVersionResult();
    AWS_BEDROCK_API CreateGuardrailVersionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BEDROCK_API CreateGuardrailVersionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The unique identifier of the guardrail.</p>
     */
    inline const Aws::String& GetGuardrailId() const{ return m_guardrailId; }

    /**
     * <p>The unique identifier of the guardrail.</p>
     */
    inline void SetGuardrailId(const Aws::String& value) { m_guardrailId = value; }

    /**
     * <p>The unique identifier of the guardrail.</p>
     */
    inline void SetGuardrailId(Aws::String&& value) { m_guardrailId = std::move(value); }

    /**
     * <p>The unique identifier of the guardrail.</p>
     */
    inline void SetGuardrailId(const char* value) { m_guardrailId.assign(value); }

    /**
     * <p>The unique identifier of the guardrail.</p>
     */
    inline CreateGuardrailVersionResult& WithGuardrailId(const Aws::String& value) { SetGuardrailId(value); return *this;}

    /**
     * <p>The unique identifier of the guardrail.</p>
     */
    inline CreateGuardrailVersionResult& WithGuardrailId(Aws::String&& value) { SetGuardrailId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the guardrail.</p>
     */
    inline CreateGuardrailVersionResult& WithGuardrailId(const char* value) { SetGuardrailId(value); return *this;}


    /**
     * <p>The number of the version of the guardrail.</p>
     */
    inline const Aws::String& GetVersion() const{ return m_version; }

    /**
     * <p>The number of the version of the guardrail.</p>
     */
    inline void SetVersion(const Aws::String& value) { m_version = value; }

    /**
     * <p>The number of the version of the guardrail.</p>
     */
    inline void SetVersion(Aws::String&& value) { m_version = std::move(value); }

    /**
     * <p>The number of the version of the guardrail.</p>
     */
    inline void SetVersion(const char* value) { m_version.assign(value); }

    /**
     * <p>The number of the version of the guardrail.</p>
     */
    inline CreateGuardrailVersionResult& WithVersion(const Aws::String& value) { SetVersion(value); return *this;}

    /**
     * <p>The number of the version of the guardrail.</p>
     */
    inline CreateGuardrailVersionResult& WithVersion(Aws::String&& value) { SetVersion(std::move(value)); return *this;}

    /**
     * <p>The number of the version of the guardrail.</p>
     */
    inline CreateGuardrailVersionResult& WithVersion(const char* value) { SetVersion(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline CreateGuardrailVersionResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline CreateGuardrailVersionResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline CreateGuardrailVersionResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_guardrailId;

    Aws::String m_version;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws

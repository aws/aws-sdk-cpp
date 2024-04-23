/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock/model/GuardrailSummary.h>
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
  class ListGuardrailsResult
  {
  public:
    AWS_BEDROCK_API ListGuardrailsResult();
    AWS_BEDROCK_API ListGuardrailsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BEDROCK_API ListGuardrailsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of objects, each of which contains details about a guardrail.</p>
     */
    inline const Aws::Vector<GuardrailSummary>& GetGuardrails() const{ return m_guardrails; }

    /**
     * <p>A list of objects, each of which contains details about a guardrail.</p>
     */
    inline void SetGuardrails(const Aws::Vector<GuardrailSummary>& value) { m_guardrails = value; }

    /**
     * <p>A list of objects, each of which contains details about a guardrail.</p>
     */
    inline void SetGuardrails(Aws::Vector<GuardrailSummary>&& value) { m_guardrails = std::move(value); }

    /**
     * <p>A list of objects, each of which contains details about a guardrail.</p>
     */
    inline ListGuardrailsResult& WithGuardrails(const Aws::Vector<GuardrailSummary>& value) { SetGuardrails(value); return *this;}

    /**
     * <p>A list of objects, each of which contains details about a guardrail.</p>
     */
    inline ListGuardrailsResult& WithGuardrails(Aws::Vector<GuardrailSummary>&& value) { SetGuardrails(std::move(value)); return *this;}

    /**
     * <p>A list of objects, each of which contains details about a guardrail.</p>
     */
    inline ListGuardrailsResult& AddGuardrails(const GuardrailSummary& value) { m_guardrails.push_back(value); return *this; }

    /**
     * <p>A list of objects, each of which contains details about a guardrail.</p>
     */
    inline ListGuardrailsResult& AddGuardrails(GuardrailSummary&& value) { m_guardrails.push_back(std::move(value)); return *this; }


    /**
     * <p>If there are more results than were returned in the response, the response
     * returns a <code>nextToken</code> that you can send in another
     * <code>ListGuardrails</code> request to see the next batch of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If there are more results than were returned in the response, the response
     * returns a <code>nextToken</code> that you can send in another
     * <code>ListGuardrails</code> request to see the next batch of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>If there are more results than were returned in the response, the response
     * returns a <code>nextToken</code> that you can send in another
     * <code>ListGuardrails</code> request to see the next batch of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>If there are more results than were returned in the response, the response
     * returns a <code>nextToken</code> that you can send in another
     * <code>ListGuardrails</code> request to see the next batch of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>If there are more results than were returned in the response, the response
     * returns a <code>nextToken</code> that you can send in another
     * <code>ListGuardrails</code> request to see the next batch of results.</p>
     */
    inline ListGuardrailsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If there are more results than were returned in the response, the response
     * returns a <code>nextToken</code> that you can send in another
     * <code>ListGuardrails</code> request to see the next batch of results.</p>
     */
    inline ListGuardrailsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If there are more results than were returned in the response, the response
     * returns a <code>nextToken</code> that you can send in another
     * <code>ListGuardrails</code> request to see the next batch of results.</p>
     */
    inline ListGuardrailsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListGuardrailsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListGuardrailsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListGuardrailsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<GuardrailSummary> m_guardrails;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws

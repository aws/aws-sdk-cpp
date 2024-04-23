/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/bedrock/BedrockRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace Bedrock
{
namespace Model
{

  /**
   */
  class ListGuardrailsRequest : public BedrockRequest
  {
  public:
    AWS_BEDROCK_API ListGuardrailsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListGuardrails"; }

    AWS_BEDROCK_API Aws::String SerializePayload() const override;

    AWS_BEDROCK_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The unique identifier of the guardrail.</p>
     */
    inline const Aws::String& GetGuardrailIdentifier() const{ return m_guardrailIdentifier; }

    /**
     * <p>The unique identifier of the guardrail.</p>
     */
    inline bool GuardrailIdentifierHasBeenSet() const { return m_guardrailIdentifierHasBeenSet; }

    /**
     * <p>The unique identifier of the guardrail.</p>
     */
    inline void SetGuardrailIdentifier(const Aws::String& value) { m_guardrailIdentifierHasBeenSet = true; m_guardrailIdentifier = value; }

    /**
     * <p>The unique identifier of the guardrail.</p>
     */
    inline void SetGuardrailIdentifier(Aws::String&& value) { m_guardrailIdentifierHasBeenSet = true; m_guardrailIdentifier = std::move(value); }

    /**
     * <p>The unique identifier of the guardrail.</p>
     */
    inline void SetGuardrailIdentifier(const char* value) { m_guardrailIdentifierHasBeenSet = true; m_guardrailIdentifier.assign(value); }

    /**
     * <p>The unique identifier of the guardrail.</p>
     */
    inline ListGuardrailsRequest& WithGuardrailIdentifier(const Aws::String& value) { SetGuardrailIdentifier(value); return *this;}

    /**
     * <p>The unique identifier of the guardrail.</p>
     */
    inline ListGuardrailsRequest& WithGuardrailIdentifier(Aws::String&& value) { SetGuardrailIdentifier(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the guardrail.</p>
     */
    inline ListGuardrailsRequest& WithGuardrailIdentifier(const char* value) { SetGuardrailIdentifier(value); return *this;}


    /**
     * <p>The maximum number of results to return in the response.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of results to return in the response.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of results to return in the response.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of results to return in the response.</p>
     */
    inline ListGuardrailsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


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
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>If there are more results than were returned in the response, the response
     * returns a <code>nextToken</code> that you can send in another
     * <code>ListGuardrails</code> request to see the next batch of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>If there are more results than were returned in the response, the response
     * returns a <code>nextToken</code> that you can send in another
     * <code>ListGuardrails</code> request to see the next batch of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>If there are more results than were returned in the response, the response
     * returns a <code>nextToken</code> that you can send in another
     * <code>ListGuardrails</code> request to see the next batch of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>If there are more results than were returned in the response, the response
     * returns a <code>nextToken</code> that you can send in another
     * <code>ListGuardrails</code> request to see the next batch of results.</p>
     */
    inline ListGuardrailsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If there are more results than were returned in the response, the response
     * returns a <code>nextToken</code> that you can send in another
     * <code>ListGuardrails</code> request to see the next batch of results.</p>
     */
    inline ListGuardrailsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If there are more results than were returned in the response, the response
     * returns a <code>nextToken</code> that you can send in another
     * <code>ListGuardrails</code> request to see the next batch of results.</p>
     */
    inline ListGuardrailsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::String m_guardrailIdentifier;
    bool m_guardrailIdentifierHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws

﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/bedrock-agent/BedrockAgentRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace BedrockAgent
{
namespace Model
{

  /**
   */
  class ListPromptsRequest : public BedrockAgentRequest
  {
  public:
    AWS_BEDROCKAGENT_API ListPromptsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListPrompts"; }

    AWS_BEDROCKAGENT_API Aws::String SerializePayload() const override;

    AWS_BEDROCKAGENT_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The maximum number of results to return in the response. If the total number
     * of results is greater than this value, use the token returned in the response in
     * the <code>nextToken</code> field when making another request to return the next
     * batch of results.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListPromptsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the total number of results is greater than the <code>maxResults</code>
     * value provided in the request, enter the token returned in the
     * <code>nextToken</code> field in the response in this field to return the next
     * batch of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline ListPromptsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListPromptsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListPromptsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the prompt for whose versions you want to return
     * information. Omit this field to list information about all prompts in an
     * account.</p>
     */
    inline const Aws::String& GetPromptIdentifier() const{ return m_promptIdentifier; }
    inline bool PromptIdentifierHasBeenSet() const { return m_promptIdentifierHasBeenSet; }
    inline void SetPromptIdentifier(const Aws::String& value) { m_promptIdentifierHasBeenSet = true; m_promptIdentifier = value; }
    inline void SetPromptIdentifier(Aws::String&& value) { m_promptIdentifierHasBeenSet = true; m_promptIdentifier = std::move(value); }
    inline void SetPromptIdentifier(const char* value) { m_promptIdentifierHasBeenSet = true; m_promptIdentifier.assign(value); }
    inline ListPromptsRequest& WithPromptIdentifier(const Aws::String& value) { SetPromptIdentifier(value); return *this;}
    inline ListPromptsRequest& WithPromptIdentifier(Aws::String&& value) { SetPromptIdentifier(std::move(value)); return *this;}
    inline ListPromptsRequest& WithPromptIdentifier(const char* value) { SetPromptIdentifier(value); return *this;}
    ///@}
  private:

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_promptIdentifier;
    bool m_promptIdentifierHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws

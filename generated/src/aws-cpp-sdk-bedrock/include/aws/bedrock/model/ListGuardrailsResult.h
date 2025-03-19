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
    AWS_BEDROCK_API ListGuardrailsResult() = default;
    AWS_BEDROCK_API ListGuardrailsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BEDROCK_API ListGuardrailsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of objects, each of which contains details about a guardrail.</p>
     */
    inline const Aws::Vector<GuardrailSummary>& GetGuardrails() const { return m_guardrails; }
    template<typename GuardrailsT = Aws::Vector<GuardrailSummary>>
    void SetGuardrails(GuardrailsT&& value) { m_guardrailsHasBeenSet = true; m_guardrails = std::forward<GuardrailsT>(value); }
    template<typename GuardrailsT = Aws::Vector<GuardrailSummary>>
    ListGuardrailsResult& WithGuardrails(GuardrailsT&& value) { SetGuardrails(std::forward<GuardrailsT>(value)); return *this;}
    template<typename GuardrailsT = GuardrailSummary>
    ListGuardrailsResult& AddGuardrails(GuardrailsT&& value) { m_guardrailsHasBeenSet = true; m_guardrails.emplace_back(std::forward<GuardrailsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If there are more results than were returned in the response, the response
     * returns a <code>nextToken</code> that you can send in another
     * <code>ListGuardrails</code> request to see the next batch of results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListGuardrailsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListGuardrailsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<GuardrailSummary> m_guardrails;
    bool m_guardrailsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws

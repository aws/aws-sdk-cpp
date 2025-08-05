/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/bedrock/model/AutomatedReasoningPolicyDefinition.h>
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
  class ExportAutomatedReasoningPolicyVersionResult
  {
  public:
    AWS_BEDROCK_API ExportAutomatedReasoningPolicyVersionResult() = default;
    AWS_BEDROCK_API ExportAutomatedReasoningPolicyVersionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BEDROCK_API ExportAutomatedReasoningPolicyVersionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The exported policy definition containing the formal logic rules, variables,
     * and custom variable types.</p>
     */
    inline const AutomatedReasoningPolicyDefinition& GetPolicyDefinition() const { return m_policyDefinition; }
    template<typename PolicyDefinitionT = AutomatedReasoningPolicyDefinition>
    void SetPolicyDefinition(PolicyDefinitionT&& value) { m_policyDefinitionHasBeenSet = true; m_policyDefinition = std::forward<PolicyDefinitionT>(value); }
    template<typename PolicyDefinitionT = AutomatedReasoningPolicyDefinition>
    ExportAutomatedReasoningPolicyVersionResult& WithPolicyDefinition(PolicyDefinitionT&& value) { SetPolicyDefinition(std::forward<PolicyDefinitionT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ExportAutomatedReasoningPolicyVersionResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    AutomatedReasoningPolicyDefinition m_policyDefinition;
    bool m_policyDefinitionHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws

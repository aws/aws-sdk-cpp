/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock/model/AutomatedReasoningPolicyScenario.h>
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
  class GetAutomatedReasoningPolicyNextScenarioResult
  {
  public:
    AWS_BEDROCK_API GetAutomatedReasoningPolicyNextScenarioResult() = default;
    AWS_BEDROCK_API GetAutomatedReasoningPolicyNextScenarioResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BEDROCK_API GetAutomatedReasoningPolicyNextScenarioResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the Automated Reasoning policy.</p>
     */
    inline const Aws::String& GetPolicyArn() const { return m_policyArn; }
    template<typename PolicyArnT = Aws::String>
    void SetPolicyArn(PolicyArnT&& value) { m_policyArnHasBeenSet = true; m_policyArn = std::forward<PolicyArnT>(value); }
    template<typename PolicyArnT = Aws::String>
    GetAutomatedReasoningPolicyNextScenarioResult& WithPolicyArn(PolicyArnT&& value) { SetPolicyArn(std::forward<PolicyArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The next test scenario to validate, including the test expression and
     * expected results.</p>
     */
    inline const AutomatedReasoningPolicyScenario& GetScenario() const { return m_scenario; }
    template<typename ScenarioT = AutomatedReasoningPolicyScenario>
    void SetScenario(ScenarioT&& value) { m_scenarioHasBeenSet = true; m_scenario = std::forward<ScenarioT>(value); }
    template<typename ScenarioT = AutomatedReasoningPolicyScenario>
    GetAutomatedReasoningPolicyNextScenarioResult& WithScenario(ScenarioT&& value) { SetScenario(std::forward<ScenarioT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetAutomatedReasoningPolicyNextScenarioResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_policyArn;
    bool m_policyArnHasBeenSet = false;

    AutomatedReasoningPolicyScenario m_scenario;
    bool m_scenarioHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws

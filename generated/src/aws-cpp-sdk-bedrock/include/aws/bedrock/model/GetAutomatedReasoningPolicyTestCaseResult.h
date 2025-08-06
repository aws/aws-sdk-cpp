/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock/model/AutomatedReasoningPolicyTestCase.h>
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
  class GetAutomatedReasoningPolicyTestCaseResult
  {
  public:
    AWS_BEDROCK_API GetAutomatedReasoningPolicyTestCaseResult() = default;
    AWS_BEDROCK_API GetAutomatedReasoningPolicyTestCaseResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BEDROCK_API GetAutomatedReasoningPolicyTestCaseResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the policy that contains the test.</p>
     */
    inline const Aws::String& GetPolicyArn() const { return m_policyArn; }
    template<typename PolicyArnT = Aws::String>
    void SetPolicyArn(PolicyArnT&& value) { m_policyArnHasBeenSet = true; m_policyArn = std::forward<PolicyArnT>(value); }
    template<typename PolicyArnT = Aws::String>
    GetAutomatedReasoningPolicyTestCaseResult& WithPolicyArn(PolicyArnT&& value) { SetPolicyArn(std::forward<PolicyArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The test details including the content, query, expected result, and
     * metadata.</p>
     */
    inline const AutomatedReasoningPolicyTestCase& GetTestCase() const { return m_testCase; }
    template<typename TestCaseT = AutomatedReasoningPolicyTestCase>
    void SetTestCase(TestCaseT&& value) { m_testCaseHasBeenSet = true; m_testCase = std::forward<TestCaseT>(value); }
    template<typename TestCaseT = AutomatedReasoningPolicyTestCase>
    GetAutomatedReasoningPolicyTestCaseResult& WithTestCase(TestCaseT&& value) { SetTestCase(std::forward<TestCaseT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetAutomatedReasoningPolicyTestCaseResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_policyArn;
    bool m_policyArnHasBeenSet = false;

    AutomatedReasoningPolicyTestCase m_testCase;
    bool m_testCaseHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws

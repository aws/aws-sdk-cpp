/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/bedrock/model/AutomatedReasoningPolicyTestResult.h>
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
  class GetAutomatedReasoningPolicyTestResultResult
  {
  public:
    AWS_BEDROCK_API GetAutomatedReasoningPolicyTestResultResult() = default;
    AWS_BEDROCK_API GetAutomatedReasoningPolicyTestResultResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BEDROCK_API GetAutomatedReasoningPolicyTestResultResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The test result containing validation findings, execution status, and
     * detailed analysis.</p>
     */
    inline const AutomatedReasoningPolicyTestResult& GetTestResult() const { return m_testResult; }
    template<typename TestResultT = AutomatedReasoningPolicyTestResult>
    void SetTestResult(TestResultT&& value) { m_testResultHasBeenSet = true; m_testResult = std::forward<TestResultT>(value); }
    template<typename TestResultT = AutomatedReasoningPolicyTestResult>
    GetAutomatedReasoningPolicyTestResultResult& WithTestResult(TestResultT&& value) { SetTestResult(std::forward<TestResultT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetAutomatedReasoningPolicyTestResultResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    AutomatedReasoningPolicyTestResult m_testResult;
    bool m_testResultHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws

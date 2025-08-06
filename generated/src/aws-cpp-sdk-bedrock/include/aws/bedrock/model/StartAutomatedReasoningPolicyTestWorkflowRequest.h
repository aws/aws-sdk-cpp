/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/bedrock/BedrockRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace Bedrock
{
namespace Model
{

  /**
   */
  class StartAutomatedReasoningPolicyTestWorkflowRequest : public BedrockRequest
  {
  public:
    AWS_BEDROCK_API StartAutomatedReasoningPolicyTestWorkflowRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartAutomatedReasoningPolicyTestWorkflow"; }

    AWS_BEDROCK_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the Automated Reasoning policy to test.</p>
     */
    inline const Aws::String& GetPolicyArn() const { return m_policyArn; }
    inline bool PolicyArnHasBeenSet() const { return m_policyArnHasBeenSet; }
    template<typename PolicyArnT = Aws::String>
    void SetPolicyArn(PolicyArnT&& value) { m_policyArnHasBeenSet = true; m_policyArn = std::forward<PolicyArnT>(value); }
    template<typename PolicyArnT = Aws::String>
    StartAutomatedReasoningPolicyTestWorkflowRequest& WithPolicyArn(PolicyArnT&& value) { SetPolicyArn(std::forward<PolicyArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The build workflow identifier. The build workflow must show a
     * <code>COMPLETED</code> status before running tests.</p>
     */
    inline const Aws::String& GetBuildWorkflowId() const { return m_buildWorkflowId; }
    inline bool BuildWorkflowIdHasBeenSet() const { return m_buildWorkflowIdHasBeenSet; }
    template<typename BuildWorkflowIdT = Aws::String>
    void SetBuildWorkflowId(BuildWorkflowIdT&& value) { m_buildWorkflowIdHasBeenSet = true; m_buildWorkflowId = std::forward<BuildWorkflowIdT>(value); }
    template<typename BuildWorkflowIdT = Aws::String>
    StartAutomatedReasoningPolicyTestWorkflowRequest& WithBuildWorkflowId(BuildWorkflowIdT&& value) { SetBuildWorkflowId(std::forward<BuildWorkflowIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of test identifiers to run. If not provided, all tests for the
     * policy are run.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTestCaseIds() const { return m_testCaseIds; }
    inline bool TestCaseIdsHasBeenSet() const { return m_testCaseIdsHasBeenSet; }
    template<typename TestCaseIdsT = Aws::Vector<Aws::String>>
    void SetTestCaseIds(TestCaseIdsT&& value) { m_testCaseIdsHasBeenSet = true; m_testCaseIds = std::forward<TestCaseIdsT>(value); }
    template<typename TestCaseIdsT = Aws::Vector<Aws::String>>
    StartAutomatedReasoningPolicyTestWorkflowRequest& WithTestCaseIds(TestCaseIdsT&& value) { SetTestCaseIds(std::forward<TestCaseIdsT>(value)); return *this;}
    template<typename TestCaseIdsT = Aws::String>
    StartAutomatedReasoningPolicyTestWorkflowRequest& AddTestCaseIds(TestCaseIdsT&& value) { m_testCaseIdsHasBeenSet = true; m_testCaseIds.emplace_back(std::forward<TestCaseIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A unique, case-sensitive identifier to ensure that the operation completes no
     * more than one time. If this token matches a previous request, Amazon Bedrock
     * ignores the request but doesn't return an error.</p>
     */
    inline const Aws::String& GetClientRequestToken() const { return m_clientRequestToken; }
    inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }
    template<typename ClientRequestTokenT = Aws::String>
    void SetClientRequestToken(ClientRequestTokenT&& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = std::forward<ClientRequestTokenT>(value); }
    template<typename ClientRequestTokenT = Aws::String>
    StartAutomatedReasoningPolicyTestWorkflowRequest& WithClientRequestToken(ClientRequestTokenT&& value) { SetClientRequestToken(std::forward<ClientRequestTokenT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_policyArn;
    bool m_policyArnHasBeenSet = false;

    Aws::String m_buildWorkflowId;
    bool m_buildWorkflowIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_testCaseIds;
    bool m_testCaseIdsHasBeenSet = false;

    Aws::String m_clientRequestToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientRequestTokenHasBeenSet = true;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws

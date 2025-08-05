/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/bedrock/BedrockRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock/model/AutomatedReasoningPolicyBuildWorkflowType.h>
#include <aws/bedrock/model/AutomatedReasoningPolicyBuildWorkflowSource.h>
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
  class StartAutomatedReasoningPolicyBuildWorkflowRequest : public BedrockRequest
  {
  public:
    AWS_BEDROCK_API StartAutomatedReasoningPolicyBuildWorkflowRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartAutomatedReasoningPolicyBuildWorkflow"; }

    AWS_BEDROCK_API Aws::String SerializePayload() const override;

    AWS_BEDROCK_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the Automated Reasoning policy for which to
     * start the build workflow.</p>
     */
    inline const Aws::String& GetPolicyArn() const { return m_policyArn; }
    inline bool PolicyArnHasBeenSet() const { return m_policyArnHasBeenSet; }
    template<typename PolicyArnT = Aws::String>
    void SetPolicyArn(PolicyArnT&& value) { m_policyArnHasBeenSet = true; m_policyArn = std::forward<PolicyArnT>(value); }
    template<typename PolicyArnT = Aws::String>
    StartAutomatedReasoningPolicyBuildWorkflowRequest& WithPolicyArn(PolicyArnT&& value) { SetPolicyArn(std::forward<PolicyArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of build workflow to start (e.g., DOCUMENT_INGESTION for processing
     * new documents, POLICY_REPAIR for fixing existing policies).</p>
     */
    inline AutomatedReasoningPolicyBuildWorkflowType GetBuildWorkflowType() const { return m_buildWorkflowType; }
    inline bool BuildWorkflowTypeHasBeenSet() const { return m_buildWorkflowTypeHasBeenSet; }
    inline void SetBuildWorkflowType(AutomatedReasoningPolicyBuildWorkflowType value) { m_buildWorkflowTypeHasBeenSet = true; m_buildWorkflowType = value; }
    inline StartAutomatedReasoningPolicyBuildWorkflowRequest& WithBuildWorkflowType(AutomatedReasoningPolicyBuildWorkflowType value) { SetBuildWorkflowType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique, case-sensitive identifier to ensure that the operation completes no
     * more than once. If this token matches a previous request, Amazon Bedrock ignores
     * the request but doesn't return an error.</p>
     */
    inline const Aws::String& GetClientRequestToken() const { return m_clientRequestToken; }
    inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }
    template<typename ClientRequestTokenT = Aws::String>
    void SetClientRequestToken(ClientRequestTokenT&& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = std::forward<ClientRequestTokenT>(value); }
    template<typename ClientRequestTokenT = Aws::String>
    StartAutomatedReasoningPolicyBuildWorkflowRequest& WithClientRequestToken(ClientRequestTokenT&& value) { SetClientRequestToken(std::forward<ClientRequestTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The source content for the build workflow, such as documents to analyze or
     * repair instructions for existing policies.</p>
     */
    inline const AutomatedReasoningPolicyBuildWorkflowSource& GetSourceContent() const { return m_sourceContent; }
    inline bool SourceContentHasBeenSet() const { return m_sourceContentHasBeenSet; }
    template<typename SourceContentT = AutomatedReasoningPolicyBuildWorkflowSource>
    void SetSourceContent(SourceContentT&& value) { m_sourceContentHasBeenSet = true; m_sourceContent = std::forward<SourceContentT>(value); }
    template<typename SourceContentT = AutomatedReasoningPolicyBuildWorkflowSource>
    StartAutomatedReasoningPolicyBuildWorkflowRequest& WithSourceContent(SourceContentT&& value) { SetSourceContent(std::forward<SourceContentT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_policyArn;
    bool m_policyArnHasBeenSet = false;

    AutomatedReasoningPolicyBuildWorkflowType m_buildWorkflowType{AutomatedReasoningPolicyBuildWorkflowType::NOT_SET};
    bool m_buildWorkflowTypeHasBeenSet = false;

    Aws::String m_clientRequestToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientRequestTokenHasBeenSet = true;

    AutomatedReasoningPolicyBuildWorkflowSource m_sourceContent;
    bool m_sourceContentHasBeenSet = false;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws

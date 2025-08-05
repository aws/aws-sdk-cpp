/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock/model/AutomatedReasoningPolicyBuildResultAssets.h>
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
  class GetAutomatedReasoningPolicyBuildWorkflowResultAssetsResult
  {
  public:
    AWS_BEDROCK_API GetAutomatedReasoningPolicyBuildWorkflowResultAssetsResult() = default;
    AWS_BEDROCK_API GetAutomatedReasoningPolicyBuildWorkflowResultAssetsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BEDROCK_API GetAutomatedReasoningPolicyBuildWorkflowResultAssetsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the Automated Reasoning policy.</p>
     */
    inline const Aws::String& GetPolicyArn() const { return m_policyArn; }
    template<typename PolicyArnT = Aws::String>
    void SetPolicyArn(PolicyArnT&& value) { m_policyArnHasBeenSet = true; m_policyArn = std::forward<PolicyArnT>(value); }
    template<typename PolicyArnT = Aws::String>
    GetAutomatedReasoningPolicyBuildWorkflowResultAssetsResult& WithPolicyArn(PolicyArnT&& value) { SetPolicyArn(std::forward<PolicyArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the build workflow.</p>
     */
    inline const Aws::String& GetBuildWorkflowId() const { return m_buildWorkflowId; }
    template<typename BuildWorkflowIdT = Aws::String>
    void SetBuildWorkflowId(BuildWorkflowIdT&& value) { m_buildWorkflowIdHasBeenSet = true; m_buildWorkflowId = std::forward<BuildWorkflowIdT>(value); }
    template<typename BuildWorkflowIdT = Aws::String>
    GetAutomatedReasoningPolicyBuildWorkflowResultAssetsResult& WithBuildWorkflowId(BuildWorkflowIdT&& value) { SetBuildWorkflowId(std::forward<BuildWorkflowIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The requested build workflow asset. This is a union type that returns only
     * one of the available asset types (logs, reports, or generated artifacts) based
     * on the specific asset type requested in the API call.</p>
     */
    inline const AutomatedReasoningPolicyBuildResultAssets& GetBuildWorkflowAssets() const { return m_buildWorkflowAssets; }
    template<typename BuildWorkflowAssetsT = AutomatedReasoningPolicyBuildResultAssets>
    void SetBuildWorkflowAssets(BuildWorkflowAssetsT&& value) { m_buildWorkflowAssetsHasBeenSet = true; m_buildWorkflowAssets = std::forward<BuildWorkflowAssetsT>(value); }
    template<typename BuildWorkflowAssetsT = AutomatedReasoningPolicyBuildResultAssets>
    GetAutomatedReasoningPolicyBuildWorkflowResultAssetsResult& WithBuildWorkflowAssets(BuildWorkflowAssetsT&& value) { SetBuildWorkflowAssets(std::forward<BuildWorkflowAssetsT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetAutomatedReasoningPolicyBuildWorkflowResultAssetsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_policyArn;
    bool m_policyArnHasBeenSet = false;

    Aws::String m_buildWorkflowId;
    bool m_buildWorkflowIdHasBeenSet = false;

    AutomatedReasoningPolicyBuildResultAssets m_buildWorkflowAssets;
    bool m_buildWorkflowAssetsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws

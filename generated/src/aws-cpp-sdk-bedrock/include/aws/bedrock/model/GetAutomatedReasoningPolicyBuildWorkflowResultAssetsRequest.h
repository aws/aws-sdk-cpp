/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/bedrock/BedrockRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock/model/AutomatedReasoningPolicyBuildResultAssetType.h>
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
  class GetAutomatedReasoningPolicyBuildWorkflowResultAssetsRequest : public BedrockRequest
  {
  public:
    AWS_BEDROCK_API GetAutomatedReasoningPolicyBuildWorkflowResultAssetsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetAutomatedReasoningPolicyBuildWorkflowResultAssets"; }

    AWS_BEDROCK_API Aws::String SerializePayload() const override;

    AWS_BEDROCK_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the Automated Reasoning policy whose build
     * workflow assets you want to retrieve.</p>
     */
    inline const Aws::String& GetPolicyArn() const { return m_policyArn; }
    inline bool PolicyArnHasBeenSet() const { return m_policyArnHasBeenSet; }
    template<typename PolicyArnT = Aws::String>
    void SetPolicyArn(PolicyArnT&& value) { m_policyArnHasBeenSet = true; m_policyArn = std::forward<PolicyArnT>(value); }
    template<typename PolicyArnT = Aws::String>
    GetAutomatedReasoningPolicyBuildWorkflowResultAssetsRequest& WithPolicyArn(PolicyArnT&& value) { SetPolicyArn(std::forward<PolicyArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the build workflow whose result assets you want to
     * retrieve.</p>
     */
    inline const Aws::String& GetBuildWorkflowId() const { return m_buildWorkflowId; }
    inline bool BuildWorkflowIdHasBeenSet() const { return m_buildWorkflowIdHasBeenSet; }
    template<typename BuildWorkflowIdT = Aws::String>
    void SetBuildWorkflowId(BuildWorkflowIdT&& value) { m_buildWorkflowIdHasBeenSet = true; m_buildWorkflowId = std::forward<BuildWorkflowIdT>(value); }
    template<typename BuildWorkflowIdT = Aws::String>
    GetAutomatedReasoningPolicyBuildWorkflowResultAssetsRequest& WithBuildWorkflowId(BuildWorkflowIdT&& value) { SetBuildWorkflowId(std::forward<BuildWorkflowIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of asset to retrieve (e.g., BUILD_LOG, QUALITY_REPORT,
     * POLICY_DEFINITION).</p>
     */
    inline AutomatedReasoningPolicyBuildResultAssetType GetAssetType() const { return m_assetType; }
    inline bool AssetTypeHasBeenSet() const { return m_assetTypeHasBeenSet; }
    inline void SetAssetType(AutomatedReasoningPolicyBuildResultAssetType value) { m_assetTypeHasBeenSet = true; m_assetType = value; }
    inline GetAutomatedReasoningPolicyBuildWorkflowResultAssetsRequest& WithAssetType(AutomatedReasoningPolicyBuildResultAssetType value) { SetAssetType(value); return *this;}
    ///@}
  private:

    Aws::String m_policyArn;
    bool m_policyArnHasBeenSet = false;

    Aws::String m_buildWorkflowId;
    bool m_buildWorkflowIdHasBeenSet = false;

    AutomatedReasoningPolicyBuildResultAssetType m_assetType{AutomatedReasoningPolicyBuildResultAssetType::NOT_SET};
    bool m_assetTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws

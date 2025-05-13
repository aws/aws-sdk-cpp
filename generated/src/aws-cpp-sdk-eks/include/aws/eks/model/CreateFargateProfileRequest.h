/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eks/EKS_EXPORTS.h>
#include <aws/eks/EKSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/eks/model/FargateProfileSelector.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace EKS
{
namespace Model
{

  /**
   */
  class CreateFargateProfileRequest : public EKSRequest
  {
  public:
    AWS_EKS_API CreateFargateProfileRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateFargateProfile"; }

    AWS_EKS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The name of the Fargate profile.</p>
     */
    inline const Aws::String& GetFargateProfileName() const { return m_fargateProfileName; }
    inline bool FargateProfileNameHasBeenSet() const { return m_fargateProfileNameHasBeenSet; }
    template<typename FargateProfileNameT = Aws::String>
    void SetFargateProfileName(FargateProfileNameT&& value) { m_fargateProfileNameHasBeenSet = true; m_fargateProfileName = std::forward<FargateProfileNameT>(value); }
    template<typename FargateProfileNameT = Aws::String>
    CreateFargateProfileRequest& WithFargateProfileName(FargateProfileNameT&& value) { SetFargateProfileName(std::forward<FargateProfileNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of your cluster.</p>
     */
    inline const Aws::String& GetClusterName() const { return m_clusterName; }
    inline bool ClusterNameHasBeenSet() const { return m_clusterNameHasBeenSet; }
    template<typename ClusterNameT = Aws::String>
    void SetClusterName(ClusterNameT&& value) { m_clusterNameHasBeenSet = true; m_clusterName = std::forward<ClusterNameT>(value); }
    template<typename ClusterNameT = Aws::String>
    CreateFargateProfileRequest& WithClusterName(ClusterNameT&& value) { SetClusterName(std::forward<ClusterNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the <code>Pod</code> execution role to use
     * for a <code>Pod</code> that matches the selectors in the Fargate profile. The
     * <code>Pod</code> execution role allows Fargate infrastructure to register with
     * your cluster as a node, and it provides read access to Amazon ECR image
     * repositories. For more information, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/pod-execution-role.html">
     * <code>Pod</code> execution role</a> in the <i>Amazon EKS User Guide</i>.</p>
     */
    inline const Aws::String& GetPodExecutionRoleArn() const { return m_podExecutionRoleArn; }
    inline bool PodExecutionRoleArnHasBeenSet() const { return m_podExecutionRoleArnHasBeenSet; }
    template<typename PodExecutionRoleArnT = Aws::String>
    void SetPodExecutionRoleArn(PodExecutionRoleArnT&& value) { m_podExecutionRoleArnHasBeenSet = true; m_podExecutionRoleArn = std::forward<PodExecutionRoleArnT>(value); }
    template<typename PodExecutionRoleArnT = Aws::String>
    CreateFargateProfileRequest& WithPodExecutionRoleArn(PodExecutionRoleArnT&& value) { SetPodExecutionRoleArn(std::forward<PodExecutionRoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IDs of subnets to launch a <code>Pod</code> into. A <code>Pod</code>
     * running on Fargate isn't assigned a public IP address, so only private subnets
     * (with no direct route to an Internet Gateway) are accepted for this
     * parameter.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSubnets() const { return m_subnets; }
    inline bool SubnetsHasBeenSet() const { return m_subnetsHasBeenSet; }
    template<typename SubnetsT = Aws::Vector<Aws::String>>
    void SetSubnets(SubnetsT&& value) { m_subnetsHasBeenSet = true; m_subnets = std::forward<SubnetsT>(value); }
    template<typename SubnetsT = Aws::Vector<Aws::String>>
    CreateFargateProfileRequest& WithSubnets(SubnetsT&& value) { SetSubnets(std::forward<SubnetsT>(value)); return *this;}
    template<typename SubnetsT = Aws::String>
    CreateFargateProfileRequest& AddSubnets(SubnetsT&& value) { m_subnetsHasBeenSet = true; m_subnets.emplace_back(std::forward<SubnetsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The selectors to match for a <code>Pod</code> to use this Fargate profile.
     * Each selector must have an associated Kubernetes <code>namespace</code>.
     * Optionally, you can also specify <code>labels</code> for a
     * <code>namespace</code>. You may specify up to five selectors in a Fargate
     * profile.</p>
     */
    inline const Aws::Vector<FargateProfileSelector>& GetSelectors() const { return m_selectors; }
    inline bool SelectorsHasBeenSet() const { return m_selectorsHasBeenSet; }
    template<typename SelectorsT = Aws::Vector<FargateProfileSelector>>
    void SetSelectors(SelectorsT&& value) { m_selectorsHasBeenSet = true; m_selectors = std::forward<SelectorsT>(value); }
    template<typename SelectorsT = Aws::Vector<FargateProfileSelector>>
    CreateFargateProfileRequest& WithSelectors(SelectorsT&& value) { SetSelectors(std::forward<SelectorsT>(value)); return *this;}
    template<typename SelectorsT = FargateProfileSelector>
    CreateFargateProfileRequest& AddSelectors(SelectorsT&& value) { m_selectorsHasBeenSet = true; m_selectors.emplace_back(std::forward<SelectorsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request.</p>
     */
    inline const Aws::String& GetClientRequestToken() const { return m_clientRequestToken; }
    inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }
    template<typename ClientRequestTokenT = Aws::String>
    void SetClientRequestToken(ClientRequestTokenT&& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = std::forward<ClientRequestTokenT>(value); }
    template<typename ClientRequestTokenT = Aws::String>
    CreateFargateProfileRequest& WithClientRequestToken(ClientRequestTokenT&& value) { SetClientRequestToken(std::forward<ClientRequestTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Metadata that assists with categorization and organization. Each tag consists
     * of a key and an optional value. You define both. Tags don't propagate to any
     * other cluster or Amazon Web Services resources.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    CreateFargateProfileRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    CreateFargateProfileRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::String m_fargateProfileName;
    bool m_fargateProfileNameHasBeenSet = false;

    Aws::String m_clusterName;
    bool m_clusterNameHasBeenSet = false;

    Aws::String m_podExecutionRoleArn;
    bool m_podExecutionRoleArnHasBeenSet = false;

    Aws::Vector<Aws::String> m_subnets;
    bool m_subnetsHasBeenSet = false;

    Aws::Vector<FargateProfileSelector> m_selectors;
    bool m_selectorsHasBeenSet = false;

    Aws::String m_clientRequestToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientRequestTokenHasBeenSet = true;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace EKS
} // namespace Aws

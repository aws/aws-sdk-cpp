/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eks/EKS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/eks/model/FargateProfileStatus.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/eks/model/FargateProfileHealth.h>
#include <aws/eks/model/FargateProfileSelector.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace EKS
{
namespace Model
{

  /**
   * <p>An object representing an Fargate profile.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/eks-2017-11-01/FargateProfile">AWS
   * API Reference</a></p>
   */
  class FargateProfile
  {
  public:
    AWS_EKS_API FargateProfile() = default;
    AWS_EKS_API FargateProfile(Aws::Utils::Json::JsonView jsonValue);
    AWS_EKS_API FargateProfile& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EKS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the Fargate profile.</p>
     */
    inline const Aws::String& GetFargateProfileName() const { return m_fargateProfileName; }
    inline bool FargateProfileNameHasBeenSet() const { return m_fargateProfileNameHasBeenSet; }
    template<typename FargateProfileNameT = Aws::String>
    void SetFargateProfileName(FargateProfileNameT&& value) { m_fargateProfileNameHasBeenSet = true; m_fargateProfileName = std::forward<FargateProfileNameT>(value); }
    template<typename FargateProfileNameT = Aws::String>
    FargateProfile& WithFargateProfileName(FargateProfileNameT&& value) { SetFargateProfileName(std::forward<FargateProfileNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The full Amazon Resource Name (ARN) of the Fargate profile.</p>
     */
    inline const Aws::String& GetFargateProfileArn() const { return m_fargateProfileArn; }
    inline bool FargateProfileArnHasBeenSet() const { return m_fargateProfileArnHasBeenSet; }
    template<typename FargateProfileArnT = Aws::String>
    void SetFargateProfileArn(FargateProfileArnT&& value) { m_fargateProfileArnHasBeenSet = true; m_fargateProfileArn = std::forward<FargateProfileArnT>(value); }
    template<typename FargateProfileArnT = Aws::String>
    FargateProfile& WithFargateProfileArn(FargateProfileArnT&& value) { SetFargateProfileArn(std::forward<FargateProfileArnT>(value)); return *this;}
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
    FargateProfile& WithClusterName(ClusterNameT&& value) { SetClusterName(std::forward<ClusterNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Unix epoch timestamp at object creation.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    FargateProfile& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the <code>Pod</code> execution role to use
     * for any <code>Pod</code> that matches the selectors in the Fargate profile. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/pod-execution-role.html">
     * <code>Pod</code> execution role</a> in the <i>Amazon EKS User Guide</i>.</p>
     */
    inline const Aws::String& GetPodExecutionRoleArn() const { return m_podExecutionRoleArn; }
    inline bool PodExecutionRoleArnHasBeenSet() const { return m_podExecutionRoleArnHasBeenSet; }
    template<typename PodExecutionRoleArnT = Aws::String>
    void SetPodExecutionRoleArn(PodExecutionRoleArnT&& value) { m_podExecutionRoleArnHasBeenSet = true; m_podExecutionRoleArn = std::forward<PodExecutionRoleArnT>(value); }
    template<typename PodExecutionRoleArnT = Aws::String>
    FargateProfile& WithPodExecutionRoleArn(PodExecutionRoleArnT&& value) { SetPodExecutionRoleArn(std::forward<PodExecutionRoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IDs of subnets to launch a <code>Pod</code> into.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSubnets() const { return m_subnets; }
    inline bool SubnetsHasBeenSet() const { return m_subnetsHasBeenSet; }
    template<typename SubnetsT = Aws::Vector<Aws::String>>
    void SetSubnets(SubnetsT&& value) { m_subnetsHasBeenSet = true; m_subnets = std::forward<SubnetsT>(value); }
    template<typename SubnetsT = Aws::Vector<Aws::String>>
    FargateProfile& WithSubnets(SubnetsT&& value) { SetSubnets(std::forward<SubnetsT>(value)); return *this;}
    template<typename SubnetsT = Aws::String>
    FargateProfile& AddSubnets(SubnetsT&& value) { m_subnetsHasBeenSet = true; m_subnets.emplace_back(std::forward<SubnetsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The selectors to match for a <code>Pod</code> to use this Fargate
     * profile.</p>
     */
    inline const Aws::Vector<FargateProfileSelector>& GetSelectors() const { return m_selectors; }
    inline bool SelectorsHasBeenSet() const { return m_selectorsHasBeenSet; }
    template<typename SelectorsT = Aws::Vector<FargateProfileSelector>>
    void SetSelectors(SelectorsT&& value) { m_selectorsHasBeenSet = true; m_selectors = std::forward<SelectorsT>(value); }
    template<typename SelectorsT = Aws::Vector<FargateProfileSelector>>
    FargateProfile& WithSelectors(SelectorsT&& value) { SetSelectors(std::forward<SelectorsT>(value)); return *this;}
    template<typename SelectorsT = FargateProfileSelector>
    FargateProfile& AddSelectors(SelectorsT&& value) { m_selectorsHasBeenSet = true; m_selectors.emplace_back(std::forward<SelectorsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The current status of the Fargate profile.</p>
     */
    inline FargateProfileStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(FargateProfileStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline FargateProfile& WithStatus(FargateProfileStatus value) { SetStatus(value); return *this;}
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
    FargateProfile& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    FargateProfile& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The health status of the Fargate profile. If there are issues with your
     * Fargate profile's health, they are listed here.</p>
     */
    inline const FargateProfileHealth& GetHealth() const { return m_health; }
    inline bool HealthHasBeenSet() const { return m_healthHasBeenSet; }
    template<typename HealthT = FargateProfileHealth>
    void SetHealth(HealthT&& value) { m_healthHasBeenSet = true; m_health = std::forward<HealthT>(value); }
    template<typename HealthT = FargateProfileHealth>
    FargateProfile& WithHealth(HealthT&& value) { SetHealth(std::forward<HealthT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_fargateProfileName;
    bool m_fargateProfileNameHasBeenSet = false;

    Aws::String m_fargateProfileArn;
    bool m_fargateProfileArnHasBeenSet = false;

    Aws::String m_clusterName;
    bool m_clusterNameHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    Aws::String m_podExecutionRoleArn;
    bool m_podExecutionRoleArnHasBeenSet = false;

    Aws::Vector<Aws::String> m_subnets;
    bool m_subnetsHasBeenSet = false;

    Aws::Vector<FargateProfileSelector> m_selectors;
    bool m_selectorsHasBeenSet = false;

    FargateProfileStatus m_status{FargateProfileStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    FargateProfileHealth m_health;
    bool m_healthHasBeenSet = false;
  };

} // namespace Model
} // namespace EKS
} // namespace Aws

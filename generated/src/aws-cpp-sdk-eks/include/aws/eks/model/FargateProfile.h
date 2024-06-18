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
    AWS_EKS_API FargateProfile();
    AWS_EKS_API FargateProfile(Aws::Utils::Json::JsonView jsonValue);
    AWS_EKS_API FargateProfile& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EKS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the Fargate profile.</p>
     */
    inline const Aws::String& GetFargateProfileName() const{ return m_fargateProfileName; }
    inline bool FargateProfileNameHasBeenSet() const { return m_fargateProfileNameHasBeenSet; }
    inline void SetFargateProfileName(const Aws::String& value) { m_fargateProfileNameHasBeenSet = true; m_fargateProfileName = value; }
    inline void SetFargateProfileName(Aws::String&& value) { m_fargateProfileNameHasBeenSet = true; m_fargateProfileName = std::move(value); }
    inline void SetFargateProfileName(const char* value) { m_fargateProfileNameHasBeenSet = true; m_fargateProfileName.assign(value); }
    inline FargateProfile& WithFargateProfileName(const Aws::String& value) { SetFargateProfileName(value); return *this;}
    inline FargateProfile& WithFargateProfileName(Aws::String&& value) { SetFargateProfileName(std::move(value)); return *this;}
    inline FargateProfile& WithFargateProfileName(const char* value) { SetFargateProfileName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The full Amazon Resource Name (ARN) of the Fargate profile.</p>
     */
    inline const Aws::String& GetFargateProfileArn() const{ return m_fargateProfileArn; }
    inline bool FargateProfileArnHasBeenSet() const { return m_fargateProfileArnHasBeenSet; }
    inline void SetFargateProfileArn(const Aws::String& value) { m_fargateProfileArnHasBeenSet = true; m_fargateProfileArn = value; }
    inline void SetFargateProfileArn(Aws::String&& value) { m_fargateProfileArnHasBeenSet = true; m_fargateProfileArn = std::move(value); }
    inline void SetFargateProfileArn(const char* value) { m_fargateProfileArnHasBeenSet = true; m_fargateProfileArn.assign(value); }
    inline FargateProfile& WithFargateProfileArn(const Aws::String& value) { SetFargateProfileArn(value); return *this;}
    inline FargateProfile& WithFargateProfileArn(Aws::String&& value) { SetFargateProfileArn(std::move(value)); return *this;}
    inline FargateProfile& WithFargateProfileArn(const char* value) { SetFargateProfileArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of your cluster.</p>
     */
    inline const Aws::String& GetClusterName() const{ return m_clusterName; }
    inline bool ClusterNameHasBeenSet() const { return m_clusterNameHasBeenSet; }
    inline void SetClusterName(const Aws::String& value) { m_clusterNameHasBeenSet = true; m_clusterName = value; }
    inline void SetClusterName(Aws::String&& value) { m_clusterNameHasBeenSet = true; m_clusterName = std::move(value); }
    inline void SetClusterName(const char* value) { m_clusterNameHasBeenSet = true; m_clusterName.assign(value); }
    inline FargateProfile& WithClusterName(const Aws::String& value) { SetClusterName(value); return *this;}
    inline FargateProfile& WithClusterName(Aws::String&& value) { SetClusterName(std::move(value)); return *this;}
    inline FargateProfile& WithClusterName(const char* value) { SetClusterName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Unix epoch timestamp at object creation.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }
    inline FargateProfile& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline FargateProfile& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the <code>Pod</code> execution role to use
     * for any <code>Pod</code> that matches the selectors in the Fargate profile. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/pod-execution-role.html">
     * <code>Pod</code> execution role</a> in the <i>Amazon EKS User Guide</i>.</p>
     */
    inline const Aws::String& GetPodExecutionRoleArn() const{ return m_podExecutionRoleArn; }
    inline bool PodExecutionRoleArnHasBeenSet() const { return m_podExecutionRoleArnHasBeenSet; }
    inline void SetPodExecutionRoleArn(const Aws::String& value) { m_podExecutionRoleArnHasBeenSet = true; m_podExecutionRoleArn = value; }
    inline void SetPodExecutionRoleArn(Aws::String&& value) { m_podExecutionRoleArnHasBeenSet = true; m_podExecutionRoleArn = std::move(value); }
    inline void SetPodExecutionRoleArn(const char* value) { m_podExecutionRoleArnHasBeenSet = true; m_podExecutionRoleArn.assign(value); }
    inline FargateProfile& WithPodExecutionRoleArn(const Aws::String& value) { SetPodExecutionRoleArn(value); return *this;}
    inline FargateProfile& WithPodExecutionRoleArn(Aws::String&& value) { SetPodExecutionRoleArn(std::move(value)); return *this;}
    inline FargateProfile& WithPodExecutionRoleArn(const char* value) { SetPodExecutionRoleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IDs of subnets to launch a <code>Pod</code> into.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSubnets() const{ return m_subnets; }
    inline bool SubnetsHasBeenSet() const { return m_subnetsHasBeenSet; }
    inline void SetSubnets(const Aws::Vector<Aws::String>& value) { m_subnetsHasBeenSet = true; m_subnets = value; }
    inline void SetSubnets(Aws::Vector<Aws::String>&& value) { m_subnetsHasBeenSet = true; m_subnets = std::move(value); }
    inline FargateProfile& WithSubnets(const Aws::Vector<Aws::String>& value) { SetSubnets(value); return *this;}
    inline FargateProfile& WithSubnets(Aws::Vector<Aws::String>&& value) { SetSubnets(std::move(value)); return *this;}
    inline FargateProfile& AddSubnets(const Aws::String& value) { m_subnetsHasBeenSet = true; m_subnets.push_back(value); return *this; }
    inline FargateProfile& AddSubnets(Aws::String&& value) { m_subnetsHasBeenSet = true; m_subnets.push_back(std::move(value)); return *this; }
    inline FargateProfile& AddSubnets(const char* value) { m_subnetsHasBeenSet = true; m_subnets.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The selectors to match for a <code>Pod</code> to use this Fargate
     * profile.</p>
     */
    inline const Aws::Vector<FargateProfileSelector>& GetSelectors() const{ return m_selectors; }
    inline bool SelectorsHasBeenSet() const { return m_selectorsHasBeenSet; }
    inline void SetSelectors(const Aws::Vector<FargateProfileSelector>& value) { m_selectorsHasBeenSet = true; m_selectors = value; }
    inline void SetSelectors(Aws::Vector<FargateProfileSelector>&& value) { m_selectorsHasBeenSet = true; m_selectors = std::move(value); }
    inline FargateProfile& WithSelectors(const Aws::Vector<FargateProfileSelector>& value) { SetSelectors(value); return *this;}
    inline FargateProfile& WithSelectors(Aws::Vector<FargateProfileSelector>&& value) { SetSelectors(std::move(value)); return *this;}
    inline FargateProfile& AddSelectors(const FargateProfileSelector& value) { m_selectorsHasBeenSet = true; m_selectors.push_back(value); return *this; }
    inline FargateProfile& AddSelectors(FargateProfileSelector&& value) { m_selectorsHasBeenSet = true; m_selectors.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The current status of the Fargate profile.</p>
     */
    inline const FargateProfileStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const FargateProfileStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(FargateProfileStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline FargateProfile& WithStatus(const FargateProfileStatus& value) { SetStatus(value); return *this;}
    inline FargateProfile& WithStatus(FargateProfileStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Metadata that assists with categorization and organization. Each tag consists
     * of a key and an optional value. You define both. Tags don't propagate to any
     * other cluster or Amazon Web Services resources.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline FargateProfile& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline FargateProfile& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline FargateProfile& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    inline FargateProfile& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline FargateProfile& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline FargateProfile& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline FargateProfile& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline FargateProfile& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline FargateProfile& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The health status of the Fargate profile. If there are issues with your
     * Fargate profile's health, they are listed here.</p>
     */
    inline const FargateProfileHealth& GetHealth() const{ return m_health; }
    inline bool HealthHasBeenSet() const { return m_healthHasBeenSet; }
    inline void SetHealth(const FargateProfileHealth& value) { m_healthHasBeenSet = true; m_health = value; }
    inline void SetHealth(FargateProfileHealth&& value) { m_healthHasBeenSet = true; m_health = std::move(value); }
    inline FargateProfile& WithHealth(const FargateProfileHealth& value) { SetHealth(value); return *this;}
    inline FargateProfile& WithHealth(FargateProfileHealth&& value) { SetHealth(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_fargateProfileName;
    bool m_fargateProfileNameHasBeenSet = false;

    Aws::String m_fargateProfileArn;
    bool m_fargateProfileArnHasBeenSet = false;

    Aws::String m_clusterName;
    bool m_clusterNameHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    Aws::String m_podExecutionRoleArn;
    bool m_podExecutionRoleArnHasBeenSet = false;

    Aws::Vector<Aws::String> m_subnets;
    bool m_subnetsHasBeenSet = false;

    Aws::Vector<FargateProfileSelector> m_selectors;
    bool m_selectorsHasBeenSet = false;

    FargateProfileStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    FargateProfileHealth m_health;
    bool m_healthHasBeenSet = false;
  };

} // namespace Model
} // namespace EKS
} // namespace Aws

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


    /**
     * <p>The name of the Fargate profile.</p>
     */
    inline const Aws::String& GetFargateProfileName() const{ return m_fargateProfileName; }

    /**
     * <p>The name of the Fargate profile.</p>
     */
    inline bool FargateProfileNameHasBeenSet() const { return m_fargateProfileNameHasBeenSet; }

    /**
     * <p>The name of the Fargate profile.</p>
     */
    inline void SetFargateProfileName(const Aws::String& value) { m_fargateProfileNameHasBeenSet = true; m_fargateProfileName = value; }

    /**
     * <p>The name of the Fargate profile.</p>
     */
    inline void SetFargateProfileName(Aws::String&& value) { m_fargateProfileNameHasBeenSet = true; m_fargateProfileName = std::move(value); }

    /**
     * <p>The name of the Fargate profile.</p>
     */
    inline void SetFargateProfileName(const char* value) { m_fargateProfileNameHasBeenSet = true; m_fargateProfileName.assign(value); }

    /**
     * <p>The name of the Fargate profile.</p>
     */
    inline FargateProfile& WithFargateProfileName(const Aws::String& value) { SetFargateProfileName(value); return *this;}

    /**
     * <p>The name of the Fargate profile.</p>
     */
    inline FargateProfile& WithFargateProfileName(Aws::String&& value) { SetFargateProfileName(std::move(value)); return *this;}

    /**
     * <p>The name of the Fargate profile.</p>
     */
    inline FargateProfile& WithFargateProfileName(const char* value) { SetFargateProfileName(value); return *this;}


    /**
     * <p>The full Amazon Resource Name (ARN) of the Fargate profile.</p>
     */
    inline const Aws::String& GetFargateProfileArn() const{ return m_fargateProfileArn; }

    /**
     * <p>The full Amazon Resource Name (ARN) of the Fargate profile.</p>
     */
    inline bool FargateProfileArnHasBeenSet() const { return m_fargateProfileArnHasBeenSet; }

    /**
     * <p>The full Amazon Resource Name (ARN) of the Fargate profile.</p>
     */
    inline void SetFargateProfileArn(const Aws::String& value) { m_fargateProfileArnHasBeenSet = true; m_fargateProfileArn = value; }

    /**
     * <p>The full Amazon Resource Name (ARN) of the Fargate profile.</p>
     */
    inline void SetFargateProfileArn(Aws::String&& value) { m_fargateProfileArnHasBeenSet = true; m_fargateProfileArn = std::move(value); }

    /**
     * <p>The full Amazon Resource Name (ARN) of the Fargate profile.</p>
     */
    inline void SetFargateProfileArn(const char* value) { m_fargateProfileArnHasBeenSet = true; m_fargateProfileArn.assign(value); }

    /**
     * <p>The full Amazon Resource Name (ARN) of the Fargate profile.</p>
     */
    inline FargateProfile& WithFargateProfileArn(const Aws::String& value) { SetFargateProfileArn(value); return *this;}

    /**
     * <p>The full Amazon Resource Name (ARN) of the Fargate profile.</p>
     */
    inline FargateProfile& WithFargateProfileArn(Aws::String&& value) { SetFargateProfileArn(std::move(value)); return *this;}

    /**
     * <p>The full Amazon Resource Name (ARN) of the Fargate profile.</p>
     */
    inline FargateProfile& WithFargateProfileArn(const char* value) { SetFargateProfileArn(value); return *this;}


    /**
     * <p>The name of the Amazon EKS cluster that the Fargate profile belongs to.</p>
     */
    inline const Aws::String& GetClusterName() const{ return m_clusterName; }

    /**
     * <p>The name of the Amazon EKS cluster that the Fargate profile belongs to.</p>
     */
    inline bool ClusterNameHasBeenSet() const { return m_clusterNameHasBeenSet; }

    /**
     * <p>The name of the Amazon EKS cluster that the Fargate profile belongs to.</p>
     */
    inline void SetClusterName(const Aws::String& value) { m_clusterNameHasBeenSet = true; m_clusterName = value; }

    /**
     * <p>The name of the Amazon EKS cluster that the Fargate profile belongs to.</p>
     */
    inline void SetClusterName(Aws::String&& value) { m_clusterNameHasBeenSet = true; m_clusterName = std::move(value); }

    /**
     * <p>The name of the Amazon EKS cluster that the Fargate profile belongs to.</p>
     */
    inline void SetClusterName(const char* value) { m_clusterNameHasBeenSet = true; m_clusterName.assign(value); }

    /**
     * <p>The name of the Amazon EKS cluster that the Fargate profile belongs to.</p>
     */
    inline FargateProfile& WithClusterName(const Aws::String& value) { SetClusterName(value); return *this;}

    /**
     * <p>The name of the Amazon EKS cluster that the Fargate profile belongs to.</p>
     */
    inline FargateProfile& WithClusterName(Aws::String&& value) { SetClusterName(std::move(value)); return *this;}

    /**
     * <p>The name of the Amazon EKS cluster that the Fargate profile belongs to.</p>
     */
    inline FargateProfile& WithClusterName(const char* value) { SetClusterName(value); return *this;}


    /**
     * <p>The Unix epoch timestamp in seconds for when the Fargate profile was
     * created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>The Unix epoch timestamp in seconds for when the Fargate profile was
     * created.</p>
     */
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }

    /**
     * <p>The Unix epoch timestamp in seconds for when the Fargate profile was
     * created.</p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }

    /**
     * <p>The Unix epoch timestamp in seconds for when the Fargate profile was
     * created.</p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }

    /**
     * <p>The Unix epoch timestamp in seconds for when the Fargate profile was
     * created.</p>
     */
    inline FargateProfile& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>The Unix epoch timestamp in seconds for when the Fargate profile was
     * created.</p>
     */
    inline FargateProfile& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the pod execution role to use for pods that
     * match the selectors in the Fargate profile. For more information, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/pod-execution-role.html">Pod
     * Execution Role</a> in the <i>Amazon EKS User Guide</i>.</p>
     */
    inline const Aws::String& GetPodExecutionRoleArn() const{ return m_podExecutionRoleArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the pod execution role to use for pods that
     * match the selectors in the Fargate profile. For more information, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/pod-execution-role.html">Pod
     * Execution Role</a> in the <i>Amazon EKS User Guide</i>.</p>
     */
    inline bool PodExecutionRoleArnHasBeenSet() const { return m_podExecutionRoleArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the pod execution role to use for pods that
     * match the selectors in the Fargate profile. For more information, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/pod-execution-role.html">Pod
     * Execution Role</a> in the <i>Amazon EKS User Guide</i>.</p>
     */
    inline void SetPodExecutionRoleArn(const Aws::String& value) { m_podExecutionRoleArnHasBeenSet = true; m_podExecutionRoleArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the pod execution role to use for pods that
     * match the selectors in the Fargate profile. For more information, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/pod-execution-role.html">Pod
     * Execution Role</a> in the <i>Amazon EKS User Guide</i>.</p>
     */
    inline void SetPodExecutionRoleArn(Aws::String&& value) { m_podExecutionRoleArnHasBeenSet = true; m_podExecutionRoleArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the pod execution role to use for pods that
     * match the selectors in the Fargate profile. For more information, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/pod-execution-role.html">Pod
     * Execution Role</a> in the <i>Amazon EKS User Guide</i>.</p>
     */
    inline void SetPodExecutionRoleArn(const char* value) { m_podExecutionRoleArnHasBeenSet = true; m_podExecutionRoleArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the pod execution role to use for pods that
     * match the selectors in the Fargate profile. For more information, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/pod-execution-role.html">Pod
     * Execution Role</a> in the <i>Amazon EKS User Guide</i>.</p>
     */
    inline FargateProfile& WithPodExecutionRoleArn(const Aws::String& value) { SetPodExecutionRoleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the pod execution role to use for pods that
     * match the selectors in the Fargate profile. For more information, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/pod-execution-role.html">Pod
     * Execution Role</a> in the <i>Amazon EKS User Guide</i>.</p>
     */
    inline FargateProfile& WithPodExecutionRoleArn(Aws::String&& value) { SetPodExecutionRoleArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the pod execution role to use for pods that
     * match the selectors in the Fargate profile. For more information, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/pod-execution-role.html">Pod
     * Execution Role</a> in the <i>Amazon EKS User Guide</i>.</p>
     */
    inline FargateProfile& WithPodExecutionRoleArn(const char* value) { SetPodExecutionRoleArn(value); return *this;}


    /**
     * <p>The IDs of subnets to launch pods into.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSubnets() const{ return m_subnets; }

    /**
     * <p>The IDs of subnets to launch pods into.</p>
     */
    inline bool SubnetsHasBeenSet() const { return m_subnetsHasBeenSet; }

    /**
     * <p>The IDs of subnets to launch pods into.</p>
     */
    inline void SetSubnets(const Aws::Vector<Aws::String>& value) { m_subnetsHasBeenSet = true; m_subnets = value; }

    /**
     * <p>The IDs of subnets to launch pods into.</p>
     */
    inline void SetSubnets(Aws::Vector<Aws::String>&& value) { m_subnetsHasBeenSet = true; m_subnets = std::move(value); }

    /**
     * <p>The IDs of subnets to launch pods into.</p>
     */
    inline FargateProfile& WithSubnets(const Aws::Vector<Aws::String>& value) { SetSubnets(value); return *this;}

    /**
     * <p>The IDs of subnets to launch pods into.</p>
     */
    inline FargateProfile& WithSubnets(Aws::Vector<Aws::String>&& value) { SetSubnets(std::move(value)); return *this;}

    /**
     * <p>The IDs of subnets to launch pods into.</p>
     */
    inline FargateProfile& AddSubnets(const Aws::String& value) { m_subnetsHasBeenSet = true; m_subnets.push_back(value); return *this; }

    /**
     * <p>The IDs of subnets to launch pods into.</p>
     */
    inline FargateProfile& AddSubnets(Aws::String&& value) { m_subnetsHasBeenSet = true; m_subnets.push_back(std::move(value)); return *this; }

    /**
     * <p>The IDs of subnets to launch pods into.</p>
     */
    inline FargateProfile& AddSubnets(const char* value) { m_subnetsHasBeenSet = true; m_subnets.push_back(value); return *this; }


    /**
     * <p>The selectors to match for pods to use this Fargate profile.</p>
     */
    inline const Aws::Vector<FargateProfileSelector>& GetSelectors() const{ return m_selectors; }

    /**
     * <p>The selectors to match for pods to use this Fargate profile.</p>
     */
    inline bool SelectorsHasBeenSet() const { return m_selectorsHasBeenSet; }

    /**
     * <p>The selectors to match for pods to use this Fargate profile.</p>
     */
    inline void SetSelectors(const Aws::Vector<FargateProfileSelector>& value) { m_selectorsHasBeenSet = true; m_selectors = value; }

    /**
     * <p>The selectors to match for pods to use this Fargate profile.</p>
     */
    inline void SetSelectors(Aws::Vector<FargateProfileSelector>&& value) { m_selectorsHasBeenSet = true; m_selectors = std::move(value); }

    /**
     * <p>The selectors to match for pods to use this Fargate profile.</p>
     */
    inline FargateProfile& WithSelectors(const Aws::Vector<FargateProfileSelector>& value) { SetSelectors(value); return *this;}

    /**
     * <p>The selectors to match for pods to use this Fargate profile.</p>
     */
    inline FargateProfile& WithSelectors(Aws::Vector<FargateProfileSelector>&& value) { SetSelectors(std::move(value)); return *this;}

    /**
     * <p>The selectors to match for pods to use this Fargate profile.</p>
     */
    inline FargateProfile& AddSelectors(const FargateProfileSelector& value) { m_selectorsHasBeenSet = true; m_selectors.push_back(value); return *this; }

    /**
     * <p>The selectors to match for pods to use this Fargate profile.</p>
     */
    inline FargateProfile& AddSelectors(FargateProfileSelector&& value) { m_selectorsHasBeenSet = true; m_selectors.push_back(std::move(value)); return *this; }


    /**
     * <p>The current status of the Fargate profile.</p>
     */
    inline const FargateProfileStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The current status of the Fargate profile.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The current status of the Fargate profile.</p>
     */
    inline void SetStatus(const FargateProfileStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The current status of the Fargate profile.</p>
     */
    inline void SetStatus(FargateProfileStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The current status of the Fargate profile.</p>
     */
    inline FargateProfile& WithStatus(const FargateProfileStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The current status of the Fargate profile.</p>
     */
    inline FargateProfile& WithStatus(FargateProfileStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The metadata applied to the Fargate profile to assist with categorization and
     * organization. Each tag consists of a key and an optional value. You define both.
     * Fargate profile tags do not propagate to any other resources associated with the
     * Fargate profile, such as the pods that are scheduled with it.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>The metadata applied to the Fargate profile to assist with categorization and
     * organization. Each tag consists of a key and an optional value. You define both.
     * Fargate profile tags do not propagate to any other resources associated with the
     * Fargate profile, such as the pods that are scheduled with it.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The metadata applied to the Fargate profile to assist with categorization and
     * organization. Each tag consists of a key and an optional value. You define both.
     * Fargate profile tags do not propagate to any other resources associated with the
     * Fargate profile, such as the pods that are scheduled with it.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The metadata applied to the Fargate profile to assist with categorization and
     * organization. Each tag consists of a key and an optional value. You define both.
     * Fargate profile tags do not propagate to any other resources associated with the
     * Fargate profile, such as the pods that are scheduled with it.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The metadata applied to the Fargate profile to assist with categorization and
     * organization. Each tag consists of a key and an optional value. You define both.
     * Fargate profile tags do not propagate to any other resources associated with the
     * Fargate profile, such as the pods that are scheduled with it.</p>
     */
    inline FargateProfile& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>The metadata applied to the Fargate profile to assist with categorization and
     * organization. Each tag consists of a key and an optional value. You define both.
     * Fargate profile tags do not propagate to any other resources associated with the
     * Fargate profile, such as the pods that are scheduled with it.</p>
     */
    inline FargateProfile& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The metadata applied to the Fargate profile to assist with categorization and
     * organization. Each tag consists of a key and an optional value. You define both.
     * Fargate profile tags do not propagate to any other resources associated with the
     * Fargate profile, such as the pods that are scheduled with it.</p>
     */
    inline FargateProfile& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>The metadata applied to the Fargate profile to assist with categorization and
     * organization. Each tag consists of a key and an optional value. You define both.
     * Fargate profile tags do not propagate to any other resources associated with the
     * Fargate profile, such as the pods that are scheduled with it.</p>
     */
    inline FargateProfile& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The metadata applied to the Fargate profile to assist with categorization and
     * organization. Each tag consists of a key and an optional value. You define both.
     * Fargate profile tags do not propagate to any other resources associated with the
     * Fargate profile, such as the pods that are scheduled with it.</p>
     */
    inline FargateProfile& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The metadata applied to the Fargate profile to assist with categorization and
     * organization. Each tag consists of a key and an optional value. You define both.
     * Fargate profile tags do not propagate to any other resources associated with the
     * Fargate profile, such as the pods that are scheduled with it.</p>
     */
    inline FargateProfile& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The metadata applied to the Fargate profile to assist with categorization and
     * organization. Each tag consists of a key and an optional value. You define both.
     * Fargate profile tags do not propagate to any other resources associated with the
     * Fargate profile, such as the pods that are scheduled with it.</p>
     */
    inline FargateProfile& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The metadata applied to the Fargate profile to assist with categorization and
     * organization. Each tag consists of a key and an optional value. You define both.
     * Fargate profile tags do not propagate to any other resources associated with the
     * Fargate profile, such as the pods that are scheduled with it.</p>
     */
    inline FargateProfile& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The metadata applied to the Fargate profile to assist with categorization and
     * organization. Each tag consists of a key and an optional value. You define both.
     * Fargate profile tags do not propagate to any other resources associated with the
     * Fargate profile, such as the pods that are scheduled with it.</p>
     */
    inline FargateProfile& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

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
  };

} // namespace Model
} // namespace EKS
} // namespace Aws

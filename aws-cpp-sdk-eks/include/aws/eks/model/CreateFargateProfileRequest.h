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
    AWS_EKS_API CreateFargateProfileRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateFargateProfile"; }

    AWS_EKS_API Aws::String SerializePayload() const override;


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
    inline CreateFargateProfileRequest& WithFargateProfileName(const Aws::String& value) { SetFargateProfileName(value); return *this;}

    /**
     * <p>The name of the Fargate profile.</p>
     */
    inline CreateFargateProfileRequest& WithFargateProfileName(Aws::String&& value) { SetFargateProfileName(std::move(value)); return *this;}

    /**
     * <p>The name of the Fargate profile.</p>
     */
    inline CreateFargateProfileRequest& WithFargateProfileName(const char* value) { SetFargateProfileName(value); return *this;}


    /**
     * <p>The name of the Amazon EKS cluster to apply the Fargate profile to.</p>
     */
    inline const Aws::String& GetClusterName() const{ return m_clusterName; }

    /**
     * <p>The name of the Amazon EKS cluster to apply the Fargate profile to.</p>
     */
    inline bool ClusterNameHasBeenSet() const { return m_clusterNameHasBeenSet; }

    /**
     * <p>The name of the Amazon EKS cluster to apply the Fargate profile to.</p>
     */
    inline void SetClusterName(const Aws::String& value) { m_clusterNameHasBeenSet = true; m_clusterName = value; }

    /**
     * <p>The name of the Amazon EKS cluster to apply the Fargate profile to.</p>
     */
    inline void SetClusterName(Aws::String&& value) { m_clusterNameHasBeenSet = true; m_clusterName = std::move(value); }

    /**
     * <p>The name of the Amazon EKS cluster to apply the Fargate profile to.</p>
     */
    inline void SetClusterName(const char* value) { m_clusterNameHasBeenSet = true; m_clusterName.assign(value); }

    /**
     * <p>The name of the Amazon EKS cluster to apply the Fargate profile to.</p>
     */
    inline CreateFargateProfileRequest& WithClusterName(const Aws::String& value) { SetClusterName(value); return *this;}

    /**
     * <p>The name of the Amazon EKS cluster to apply the Fargate profile to.</p>
     */
    inline CreateFargateProfileRequest& WithClusterName(Aws::String&& value) { SetClusterName(std::move(value)); return *this;}

    /**
     * <p>The name of the Amazon EKS cluster to apply the Fargate profile to.</p>
     */
    inline CreateFargateProfileRequest& WithClusterName(const char* value) { SetClusterName(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the pod execution role to use for pods that
     * match the selectors in the Fargate profile. The pod execution role allows
     * Fargate infrastructure to register with your cluster as a node, and it provides
     * read access to Amazon ECR image repositories. For more information, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/pod-execution-role.html">Pod
     * Execution Role</a> in the <i>Amazon EKS User Guide</i>.</p>
     */
    inline const Aws::String& GetPodExecutionRoleArn() const{ return m_podExecutionRoleArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the pod execution role to use for pods that
     * match the selectors in the Fargate profile. The pod execution role allows
     * Fargate infrastructure to register with your cluster as a node, and it provides
     * read access to Amazon ECR image repositories. For more information, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/pod-execution-role.html">Pod
     * Execution Role</a> in the <i>Amazon EKS User Guide</i>.</p>
     */
    inline bool PodExecutionRoleArnHasBeenSet() const { return m_podExecutionRoleArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the pod execution role to use for pods that
     * match the selectors in the Fargate profile. The pod execution role allows
     * Fargate infrastructure to register with your cluster as a node, and it provides
     * read access to Amazon ECR image repositories. For more information, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/pod-execution-role.html">Pod
     * Execution Role</a> in the <i>Amazon EKS User Guide</i>.</p>
     */
    inline void SetPodExecutionRoleArn(const Aws::String& value) { m_podExecutionRoleArnHasBeenSet = true; m_podExecutionRoleArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the pod execution role to use for pods that
     * match the selectors in the Fargate profile. The pod execution role allows
     * Fargate infrastructure to register with your cluster as a node, and it provides
     * read access to Amazon ECR image repositories. For more information, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/pod-execution-role.html">Pod
     * Execution Role</a> in the <i>Amazon EKS User Guide</i>.</p>
     */
    inline void SetPodExecutionRoleArn(Aws::String&& value) { m_podExecutionRoleArnHasBeenSet = true; m_podExecutionRoleArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the pod execution role to use for pods that
     * match the selectors in the Fargate profile. The pod execution role allows
     * Fargate infrastructure to register with your cluster as a node, and it provides
     * read access to Amazon ECR image repositories. For more information, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/pod-execution-role.html">Pod
     * Execution Role</a> in the <i>Amazon EKS User Guide</i>.</p>
     */
    inline void SetPodExecutionRoleArn(const char* value) { m_podExecutionRoleArnHasBeenSet = true; m_podExecutionRoleArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the pod execution role to use for pods that
     * match the selectors in the Fargate profile. The pod execution role allows
     * Fargate infrastructure to register with your cluster as a node, and it provides
     * read access to Amazon ECR image repositories. For more information, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/pod-execution-role.html">Pod
     * Execution Role</a> in the <i>Amazon EKS User Guide</i>.</p>
     */
    inline CreateFargateProfileRequest& WithPodExecutionRoleArn(const Aws::String& value) { SetPodExecutionRoleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the pod execution role to use for pods that
     * match the selectors in the Fargate profile. The pod execution role allows
     * Fargate infrastructure to register with your cluster as a node, and it provides
     * read access to Amazon ECR image repositories. For more information, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/pod-execution-role.html">Pod
     * Execution Role</a> in the <i>Amazon EKS User Guide</i>.</p>
     */
    inline CreateFargateProfileRequest& WithPodExecutionRoleArn(Aws::String&& value) { SetPodExecutionRoleArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the pod execution role to use for pods that
     * match the selectors in the Fargate profile. The pod execution role allows
     * Fargate infrastructure to register with your cluster as a node, and it provides
     * read access to Amazon ECR image repositories. For more information, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/pod-execution-role.html">Pod
     * Execution Role</a> in the <i>Amazon EKS User Guide</i>.</p>
     */
    inline CreateFargateProfileRequest& WithPodExecutionRoleArn(const char* value) { SetPodExecutionRoleArn(value); return *this;}


    /**
     * <p>The IDs of subnets to launch your pods into. At this time, pods running on
     * Fargate are not assigned public IP addresses, so only private subnets (with no
     * direct route to an Internet Gateway) are accepted for this parameter.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSubnets() const{ return m_subnets; }

    /**
     * <p>The IDs of subnets to launch your pods into. At this time, pods running on
     * Fargate are not assigned public IP addresses, so only private subnets (with no
     * direct route to an Internet Gateway) are accepted for this parameter.</p>
     */
    inline bool SubnetsHasBeenSet() const { return m_subnetsHasBeenSet; }

    /**
     * <p>The IDs of subnets to launch your pods into. At this time, pods running on
     * Fargate are not assigned public IP addresses, so only private subnets (with no
     * direct route to an Internet Gateway) are accepted for this parameter.</p>
     */
    inline void SetSubnets(const Aws::Vector<Aws::String>& value) { m_subnetsHasBeenSet = true; m_subnets = value; }

    /**
     * <p>The IDs of subnets to launch your pods into. At this time, pods running on
     * Fargate are not assigned public IP addresses, so only private subnets (with no
     * direct route to an Internet Gateway) are accepted for this parameter.</p>
     */
    inline void SetSubnets(Aws::Vector<Aws::String>&& value) { m_subnetsHasBeenSet = true; m_subnets = std::move(value); }

    /**
     * <p>The IDs of subnets to launch your pods into. At this time, pods running on
     * Fargate are not assigned public IP addresses, so only private subnets (with no
     * direct route to an Internet Gateway) are accepted for this parameter.</p>
     */
    inline CreateFargateProfileRequest& WithSubnets(const Aws::Vector<Aws::String>& value) { SetSubnets(value); return *this;}

    /**
     * <p>The IDs of subnets to launch your pods into. At this time, pods running on
     * Fargate are not assigned public IP addresses, so only private subnets (with no
     * direct route to an Internet Gateway) are accepted for this parameter.</p>
     */
    inline CreateFargateProfileRequest& WithSubnets(Aws::Vector<Aws::String>&& value) { SetSubnets(std::move(value)); return *this;}

    /**
     * <p>The IDs of subnets to launch your pods into. At this time, pods running on
     * Fargate are not assigned public IP addresses, so only private subnets (with no
     * direct route to an Internet Gateway) are accepted for this parameter.</p>
     */
    inline CreateFargateProfileRequest& AddSubnets(const Aws::String& value) { m_subnetsHasBeenSet = true; m_subnets.push_back(value); return *this; }

    /**
     * <p>The IDs of subnets to launch your pods into. At this time, pods running on
     * Fargate are not assigned public IP addresses, so only private subnets (with no
     * direct route to an Internet Gateway) are accepted for this parameter.</p>
     */
    inline CreateFargateProfileRequest& AddSubnets(Aws::String&& value) { m_subnetsHasBeenSet = true; m_subnets.push_back(std::move(value)); return *this; }

    /**
     * <p>The IDs of subnets to launch your pods into. At this time, pods running on
     * Fargate are not assigned public IP addresses, so only private subnets (with no
     * direct route to an Internet Gateway) are accepted for this parameter.</p>
     */
    inline CreateFargateProfileRequest& AddSubnets(const char* value) { m_subnetsHasBeenSet = true; m_subnets.push_back(value); return *this; }


    /**
     * <p>The selectors to match for pods to use this Fargate profile. Each selector
     * must have an associated namespace. Optionally, you can also specify labels for a
     * namespace. You may specify up to five selectors in a Fargate profile.</p>
     */
    inline const Aws::Vector<FargateProfileSelector>& GetSelectors() const{ return m_selectors; }

    /**
     * <p>The selectors to match for pods to use this Fargate profile. Each selector
     * must have an associated namespace. Optionally, you can also specify labels for a
     * namespace. You may specify up to five selectors in a Fargate profile.</p>
     */
    inline bool SelectorsHasBeenSet() const { return m_selectorsHasBeenSet; }

    /**
     * <p>The selectors to match for pods to use this Fargate profile. Each selector
     * must have an associated namespace. Optionally, you can also specify labels for a
     * namespace. You may specify up to five selectors in a Fargate profile.</p>
     */
    inline void SetSelectors(const Aws::Vector<FargateProfileSelector>& value) { m_selectorsHasBeenSet = true; m_selectors = value; }

    /**
     * <p>The selectors to match for pods to use this Fargate profile. Each selector
     * must have an associated namespace. Optionally, you can also specify labels for a
     * namespace. You may specify up to five selectors in a Fargate profile.</p>
     */
    inline void SetSelectors(Aws::Vector<FargateProfileSelector>&& value) { m_selectorsHasBeenSet = true; m_selectors = std::move(value); }

    /**
     * <p>The selectors to match for pods to use this Fargate profile. Each selector
     * must have an associated namespace. Optionally, you can also specify labels for a
     * namespace. You may specify up to five selectors in a Fargate profile.</p>
     */
    inline CreateFargateProfileRequest& WithSelectors(const Aws::Vector<FargateProfileSelector>& value) { SetSelectors(value); return *this;}

    /**
     * <p>The selectors to match for pods to use this Fargate profile. Each selector
     * must have an associated namespace. Optionally, you can also specify labels for a
     * namespace. You may specify up to five selectors in a Fargate profile.</p>
     */
    inline CreateFargateProfileRequest& WithSelectors(Aws::Vector<FargateProfileSelector>&& value) { SetSelectors(std::move(value)); return *this;}

    /**
     * <p>The selectors to match for pods to use this Fargate profile. Each selector
     * must have an associated namespace. Optionally, you can also specify labels for a
     * namespace. You may specify up to five selectors in a Fargate profile.</p>
     */
    inline CreateFargateProfileRequest& AddSelectors(const FargateProfileSelector& value) { m_selectorsHasBeenSet = true; m_selectors.push_back(value); return *this; }

    /**
     * <p>The selectors to match for pods to use this Fargate profile. Each selector
     * must have an associated namespace. Optionally, you can also specify labels for a
     * namespace. You may specify up to five selectors in a Fargate profile.</p>
     */
    inline CreateFargateProfileRequest& AddSelectors(FargateProfileSelector&& value) { m_selectorsHasBeenSet = true; m_selectors.push_back(std::move(value)); return *this; }


    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request.</p>
     */
    inline const Aws::String& GetClientRequestToken() const{ return m_clientRequestToken; }

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request.</p>
     */
    inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request.</p>
     */
    inline void SetClientRequestToken(const Aws::String& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = value; }

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request.</p>
     */
    inline void SetClientRequestToken(Aws::String&& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = std::move(value); }

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request.</p>
     */
    inline void SetClientRequestToken(const char* value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken.assign(value); }

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request.</p>
     */
    inline CreateFargateProfileRequest& WithClientRequestToken(const Aws::String& value) { SetClientRequestToken(value); return *this;}

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request.</p>
     */
    inline CreateFargateProfileRequest& WithClientRequestToken(Aws::String&& value) { SetClientRequestToken(std::move(value)); return *this;}

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request.</p>
     */
    inline CreateFargateProfileRequest& WithClientRequestToken(const char* value) { SetClientRequestToken(value); return *this;}


    /**
     * <p>The metadata to apply to the Fargate profile to assist with categorization
     * and organization. Each tag consists of a key and an optional value. You define
     * both. Fargate profile tags do not propagate to any other resources associated
     * with the Fargate profile, such as the pods that are scheduled with it.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>The metadata to apply to the Fargate profile to assist with categorization
     * and organization. Each tag consists of a key and an optional value. You define
     * both. Fargate profile tags do not propagate to any other resources associated
     * with the Fargate profile, such as the pods that are scheduled with it.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The metadata to apply to the Fargate profile to assist with categorization
     * and organization. Each tag consists of a key and an optional value. You define
     * both. Fargate profile tags do not propagate to any other resources associated
     * with the Fargate profile, such as the pods that are scheduled with it.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The metadata to apply to the Fargate profile to assist with categorization
     * and organization. Each tag consists of a key and an optional value. You define
     * both. Fargate profile tags do not propagate to any other resources associated
     * with the Fargate profile, such as the pods that are scheduled with it.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The metadata to apply to the Fargate profile to assist with categorization
     * and organization. Each tag consists of a key and an optional value. You define
     * both. Fargate profile tags do not propagate to any other resources associated
     * with the Fargate profile, such as the pods that are scheduled with it.</p>
     */
    inline CreateFargateProfileRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>The metadata to apply to the Fargate profile to assist with categorization
     * and organization. Each tag consists of a key and an optional value. You define
     * both. Fargate profile tags do not propagate to any other resources associated
     * with the Fargate profile, such as the pods that are scheduled with it.</p>
     */
    inline CreateFargateProfileRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The metadata to apply to the Fargate profile to assist with categorization
     * and organization. Each tag consists of a key and an optional value. You define
     * both. Fargate profile tags do not propagate to any other resources associated
     * with the Fargate profile, such as the pods that are scheduled with it.</p>
     */
    inline CreateFargateProfileRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>The metadata to apply to the Fargate profile to assist with categorization
     * and organization. Each tag consists of a key and an optional value. You define
     * both. Fargate profile tags do not propagate to any other resources associated
     * with the Fargate profile, such as the pods that are scheduled with it.</p>
     */
    inline CreateFargateProfileRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The metadata to apply to the Fargate profile to assist with categorization
     * and organization. Each tag consists of a key and an optional value. You define
     * both. Fargate profile tags do not propagate to any other resources associated
     * with the Fargate profile, such as the pods that are scheduled with it.</p>
     */
    inline CreateFargateProfileRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The metadata to apply to the Fargate profile to assist with categorization
     * and organization. Each tag consists of a key and an optional value. You define
     * both. Fargate profile tags do not propagate to any other resources associated
     * with the Fargate profile, such as the pods that are scheduled with it.</p>
     */
    inline CreateFargateProfileRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The metadata to apply to the Fargate profile to assist with categorization
     * and organization. Each tag consists of a key and an optional value. You define
     * both. Fargate profile tags do not propagate to any other resources associated
     * with the Fargate profile, such as the pods that are scheduled with it.</p>
     */
    inline CreateFargateProfileRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The metadata to apply to the Fargate profile to assist with categorization
     * and organization. Each tag consists of a key and an optional value. You define
     * both. Fargate profile tags do not propagate to any other resources associated
     * with the Fargate profile, such as the pods that are scheduled with it.</p>
     */
    inline CreateFargateProfileRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The metadata to apply to the Fargate profile to assist with categorization
     * and organization. Each tag consists of a key and an optional value. You define
     * both. Fargate profile tags do not propagate to any other resources associated
     * with the Fargate profile, such as the pods that are scheduled with it.</p>
     */
    inline CreateFargateProfileRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

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

    Aws::String m_clientRequestToken;
    bool m_clientRequestTokenHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace EKS
} // namespace Aws

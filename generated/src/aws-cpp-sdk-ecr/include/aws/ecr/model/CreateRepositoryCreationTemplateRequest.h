/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecr/ECR_EXPORTS.h>
#include <aws/ecr/ECRRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ecr/model/EncryptionConfigurationForRepositoryCreationTemplate.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ecr/model/ImageTagMutability.h>
#include <aws/ecr/model/Tag.h>
#include <aws/ecr/model/ImageTagMutabilityExclusionFilter.h>
#include <aws/ecr/model/RCTAppliedFor.h>
#include <utility>

namespace Aws
{
namespace ECR
{
namespace Model
{

  /**
   */
  class CreateRepositoryCreationTemplateRequest : public ECRRequest
  {
  public:
    AWS_ECR_API CreateRepositoryCreationTemplateRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateRepositoryCreationTemplate"; }

    AWS_ECR_API Aws::String SerializePayload() const override;

    AWS_ECR_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The repository namespace prefix to associate with the template. All
     * repositories created using this namespace prefix will have the settings defined
     * in this template applied. For example, a prefix of <code>prod</code> would apply
     * to all repositories beginning with <code>prod/</code>. Similarly, a prefix of
     * <code>prod/team</code> would apply to all repositories beginning with
     * <code>prod/team/</code>.</p> <p>To apply a template to all repositories in your
     * registry that don't have an associated creation template, you can use
     * <code>ROOT</code> as the prefix.</p>  <p>There is always an assumed
     * <code>/</code> applied to the end of the prefix. If you specify
     * <code>ecr-public</code> as the prefix, Amazon ECR treats that as
     * <code>ecr-public/</code>. When using a pull through cache rule, the repository
     * prefix you specify during rule creation is what you should specify as your
     * repository creation template prefix as well.</p> 
     */
    inline const Aws::String& GetPrefix() const { return m_prefix; }
    inline bool PrefixHasBeenSet() const { return m_prefixHasBeenSet; }
    template<typename PrefixT = Aws::String>
    void SetPrefix(PrefixT&& value) { m_prefixHasBeenSet = true; m_prefix = std::forward<PrefixT>(value); }
    template<typename PrefixT = Aws::String>
    CreateRepositoryCreationTemplateRequest& WithPrefix(PrefixT&& value) { SetPrefix(std::forward<PrefixT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description for the repository creation template.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    CreateRepositoryCreationTemplateRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The encryption configuration to use for repositories created using the
     * template.</p>
     */
    inline const EncryptionConfigurationForRepositoryCreationTemplate& GetEncryptionConfiguration() const { return m_encryptionConfiguration; }
    inline bool EncryptionConfigurationHasBeenSet() const { return m_encryptionConfigurationHasBeenSet; }
    template<typename EncryptionConfigurationT = EncryptionConfigurationForRepositoryCreationTemplate>
    void SetEncryptionConfiguration(EncryptionConfigurationT&& value) { m_encryptionConfigurationHasBeenSet = true; m_encryptionConfiguration = std::forward<EncryptionConfigurationT>(value); }
    template<typename EncryptionConfigurationT = EncryptionConfigurationForRepositoryCreationTemplate>
    CreateRepositoryCreationTemplateRequest& WithEncryptionConfiguration(EncryptionConfigurationT&& value) { SetEncryptionConfiguration(std::forward<EncryptionConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The metadata to apply to the repository to help you categorize and organize.
     * Each tag consists of a key and an optional value, both of which you define. Tag
     * keys can have a maximum character length of 128 characters, and tag values can
     * have a maximum length of 256 characters.</p>
     */
    inline const Aws::Vector<Tag>& GetResourceTags() const { return m_resourceTags; }
    inline bool ResourceTagsHasBeenSet() const { return m_resourceTagsHasBeenSet; }
    template<typename ResourceTagsT = Aws::Vector<Tag>>
    void SetResourceTags(ResourceTagsT&& value) { m_resourceTagsHasBeenSet = true; m_resourceTags = std::forward<ResourceTagsT>(value); }
    template<typename ResourceTagsT = Aws::Vector<Tag>>
    CreateRepositoryCreationTemplateRequest& WithResourceTags(ResourceTagsT&& value) { SetResourceTags(std::forward<ResourceTagsT>(value)); return *this;}
    template<typename ResourceTagsT = Tag>
    CreateRepositoryCreationTemplateRequest& AddResourceTags(ResourceTagsT&& value) { m_resourceTagsHasBeenSet = true; m_resourceTags.emplace_back(std::forward<ResourceTagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The tag mutability setting for the repository. If this parameter is omitted,
     * the default setting of <code>MUTABLE</code> will be used which will allow image
     * tags to be overwritten. If <code>IMMUTABLE</code> is specified, all image tags
     * within the repository will be immutable which will prevent them from being
     * overwritten.</p>
     */
    inline ImageTagMutability GetImageTagMutability() const { return m_imageTagMutability; }
    inline bool ImageTagMutabilityHasBeenSet() const { return m_imageTagMutabilityHasBeenSet; }
    inline void SetImageTagMutability(ImageTagMutability value) { m_imageTagMutabilityHasBeenSet = true; m_imageTagMutability = value; }
    inline CreateRepositoryCreationTemplateRequest& WithImageTagMutability(ImageTagMutability value) { SetImageTagMutability(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Creates a repository creation template with a list of filters that define
     * which image tags can override the default image tag mutability setting.</p>
     */
    inline const Aws::Vector<ImageTagMutabilityExclusionFilter>& GetImageTagMutabilityExclusionFilters() const { return m_imageTagMutabilityExclusionFilters; }
    inline bool ImageTagMutabilityExclusionFiltersHasBeenSet() const { return m_imageTagMutabilityExclusionFiltersHasBeenSet; }
    template<typename ImageTagMutabilityExclusionFiltersT = Aws::Vector<ImageTagMutabilityExclusionFilter>>
    void SetImageTagMutabilityExclusionFilters(ImageTagMutabilityExclusionFiltersT&& value) { m_imageTagMutabilityExclusionFiltersHasBeenSet = true; m_imageTagMutabilityExclusionFilters = std::forward<ImageTagMutabilityExclusionFiltersT>(value); }
    template<typename ImageTagMutabilityExclusionFiltersT = Aws::Vector<ImageTagMutabilityExclusionFilter>>
    CreateRepositoryCreationTemplateRequest& WithImageTagMutabilityExclusionFilters(ImageTagMutabilityExclusionFiltersT&& value) { SetImageTagMutabilityExclusionFilters(std::forward<ImageTagMutabilityExclusionFiltersT>(value)); return *this;}
    template<typename ImageTagMutabilityExclusionFiltersT = ImageTagMutabilityExclusionFilter>
    CreateRepositoryCreationTemplateRequest& AddImageTagMutabilityExclusionFilters(ImageTagMutabilityExclusionFiltersT&& value) { m_imageTagMutabilityExclusionFiltersHasBeenSet = true; m_imageTagMutabilityExclusionFilters.emplace_back(std::forward<ImageTagMutabilityExclusionFiltersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The repository policy to apply to repositories created using the template. A
     * repository policy is a permissions policy associated with a repository to
     * control access permissions. </p>
     */
    inline const Aws::String& GetRepositoryPolicy() const { return m_repositoryPolicy; }
    inline bool RepositoryPolicyHasBeenSet() const { return m_repositoryPolicyHasBeenSet; }
    template<typename RepositoryPolicyT = Aws::String>
    void SetRepositoryPolicy(RepositoryPolicyT&& value) { m_repositoryPolicyHasBeenSet = true; m_repositoryPolicy = std::forward<RepositoryPolicyT>(value); }
    template<typename RepositoryPolicyT = Aws::String>
    CreateRepositoryCreationTemplateRequest& WithRepositoryPolicy(RepositoryPolicyT&& value) { SetRepositoryPolicy(std::forward<RepositoryPolicyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The lifecycle policy to use for repositories created using the template.</p>
     */
    inline const Aws::String& GetLifecyclePolicy() const { return m_lifecyclePolicy; }
    inline bool LifecyclePolicyHasBeenSet() const { return m_lifecyclePolicyHasBeenSet; }
    template<typename LifecyclePolicyT = Aws::String>
    void SetLifecyclePolicy(LifecyclePolicyT&& value) { m_lifecyclePolicyHasBeenSet = true; m_lifecyclePolicy = std::forward<LifecyclePolicyT>(value); }
    template<typename LifecyclePolicyT = Aws::String>
    CreateRepositoryCreationTemplateRequest& WithLifecyclePolicy(LifecyclePolicyT&& value) { SetLifecyclePolicy(std::forward<LifecyclePolicyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of enumerable strings representing the Amazon ECR repository creation
     * scenarios that this template will apply towards. The two supported scenarios are
     * <code>PULL_THROUGH_CACHE</code> and <code>REPLICATION</code> </p>
     */
    inline const Aws::Vector<RCTAppliedFor>& GetAppliedFor() const { return m_appliedFor; }
    inline bool AppliedForHasBeenSet() const { return m_appliedForHasBeenSet; }
    template<typename AppliedForT = Aws::Vector<RCTAppliedFor>>
    void SetAppliedFor(AppliedForT&& value) { m_appliedForHasBeenSet = true; m_appliedFor = std::forward<AppliedForT>(value); }
    template<typename AppliedForT = Aws::Vector<RCTAppliedFor>>
    CreateRepositoryCreationTemplateRequest& WithAppliedFor(AppliedForT&& value) { SetAppliedFor(std::forward<AppliedForT>(value)); return *this;}
    inline CreateRepositoryCreationTemplateRequest& AddAppliedFor(RCTAppliedFor value) { m_appliedForHasBeenSet = true; m_appliedFor.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The ARN of the role to be assumed by Amazon ECR. This role must be in the
     * same account as the registry that you are configuring. Amazon ECR will assume
     * your supplied role when the customRoleArn is specified. When this field isn't
     * specified, Amazon ECR will use the service-linked role for the repository
     * creation template.</p>
     */
    inline const Aws::String& GetCustomRoleArn() const { return m_customRoleArn; }
    inline bool CustomRoleArnHasBeenSet() const { return m_customRoleArnHasBeenSet; }
    template<typename CustomRoleArnT = Aws::String>
    void SetCustomRoleArn(CustomRoleArnT&& value) { m_customRoleArnHasBeenSet = true; m_customRoleArn = std::forward<CustomRoleArnT>(value); }
    template<typename CustomRoleArnT = Aws::String>
    CreateRepositoryCreationTemplateRequest& WithCustomRoleArn(CustomRoleArnT&& value) { SetCustomRoleArn(std::forward<CustomRoleArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_prefix;
    bool m_prefixHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    EncryptionConfigurationForRepositoryCreationTemplate m_encryptionConfiguration;
    bool m_encryptionConfigurationHasBeenSet = false;

    Aws::Vector<Tag> m_resourceTags;
    bool m_resourceTagsHasBeenSet = false;

    ImageTagMutability m_imageTagMutability{ImageTagMutability::NOT_SET};
    bool m_imageTagMutabilityHasBeenSet = false;

    Aws::Vector<ImageTagMutabilityExclusionFilter> m_imageTagMutabilityExclusionFilters;
    bool m_imageTagMutabilityExclusionFiltersHasBeenSet = false;

    Aws::String m_repositoryPolicy;
    bool m_repositoryPolicyHasBeenSet = false;

    Aws::String m_lifecyclePolicy;
    bool m_lifecyclePolicyHasBeenSet = false;

    Aws::Vector<RCTAppliedFor> m_appliedFor;
    bool m_appliedForHasBeenSet = false;

    Aws::String m_customRoleArn;
    bool m_customRoleArnHasBeenSet = false;
  };

} // namespace Model
} // namespace ECR
} // namespace Aws

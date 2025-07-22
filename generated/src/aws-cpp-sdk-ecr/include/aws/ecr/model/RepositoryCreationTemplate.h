/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecr/ECR_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ecr/model/EncryptionConfigurationForRepositoryCreationTemplate.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ecr/model/ImageTagMutability.h>
#include <aws/core/utils/DateTime.h>
#include <aws/ecr/model/Tag.h>
#include <aws/ecr/model/ImageTagMutabilityExclusionFilter.h>
#include <aws/ecr/model/RCTAppliedFor.h>
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
namespace ECR
{
namespace Model
{

  /**
   * <p>The details of the repository creation template associated with the
   * request.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-2015-09-21/RepositoryCreationTemplate">AWS
   * API Reference</a></p>
   */
  class RepositoryCreationTemplate
  {
  public:
    AWS_ECR_API RepositoryCreationTemplate() = default;
    AWS_ECR_API RepositoryCreationTemplate(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECR_API RepositoryCreationTemplate& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The repository namespace prefix associated with the repository creation
     * template.</p>
     */
    inline const Aws::String& GetPrefix() const { return m_prefix; }
    inline bool PrefixHasBeenSet() const { return m_prefixHasBeenSet; }
    template<typename PrefixT = Aws::String>
    void SetPrefix(PrefixT&& value) { m_prefixHasBeenSet = true; m_prefix = std::forward<PrefixT>(value); }
    template<typename PrefixT = Aws::String>
    RepositoryCreationTemplate& WithPrefix(PrefixT&& value) { SetPrefix(std::forward<PrefixT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description associated with the repository creation template.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    RepositoryCreationTemplate& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The encryption configuration associated with the repository creation
     * template.</p>
     */
    inline const EncryptionConfigurationForRepositoryCreationTemplate& GetEncryptionConfiguration() const { return m_encryptionConfiguration; }
    inline bool EncryptionConfigurationHasBeenSet() const { return m_encryptionConfigurationHasBeenSet; }
    template<typename EncryptionConfigurationT = EncryptionConfigurationForRepositoryCreationTemplate>
    void SetEncryptionConfiguration(EncryptionConfigurationT&& value) { m_encryptionConfigurationHasBeenSet = true; m_encryptionConfiguration = std::forward<EncryptionConfigurationT>(value); }
    template<typename EncryptionConfigurationT = EncryptionConfigurationForRepositoryCreationTemplate>
    RepositoryCreationTemplate& WithEncryptionConfiguration(EncryptionConfigurationT&& value) { SetEncryptionConfiguration(std::forward<EncryptionConfigurationT>(value)); return *this;}
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
    RepositoryCreationTemplate& WithResourceTags(ResourceTagsT&& value) { SetResourceTags(std::forward<ResourceTagsT>(value)); return *this;}
    template<typename ResourceTagsT = Tag>
    RepositoryCreationTemplate& AddResourceTags(ResourceTagsT&& value) { m_resourceTagsHasBeenSet = true; m_resourceTags.emplace_back(std::forward<ResourceTagsT>(value)); return *this; }
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
    inline RepositoryCreationTemplate& WithImageTagMutability(ImageTagMutability value) { SetImageTagMutability(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Defines the image tag mutability exclusion filters to apply when creating
     * repositories from this template. These filters specify which image tags can
     * override the repository's default image tag mutability setting.</p>
     */
    inline const Aws::Vector<ImageTagMutabilityExclusionFilter>& GetImageTagMutabilityExclusionFilters() const { return m_imageTagMutabilityExclusionFilters; }
    inline bool ImageTagMutabilityExclusionFiltersHasBeenSet() const { return m_imageTagMutabilityExclusionFiltersHasBeenSet; }
    template<typename ImageTagMutabilityExclusionFiltersT = Aws::Vector<ImageTagMutabilityExclusionFilter>>
    void SetImageTagMutabilityExclusionFilters(ImageTagMutabilityExclusionFiltersT&& value) { m_imageTagMutabilityExclusionFiltersHasBeenSet = true; m_imageTagMutabilityExclusionFilters = std::forward<ImageTagMutabilityExclusionFiltersT>(value); }
    template<typename ImageTagMutabilityExclusionFiltersT = Aws::Vector<ImageTagMutabilityExclusionFilter>>
    RepositoryCreationTemplate& WithImageTagMutabilityExclusionFilters(ImageTagMutabilityExclusionFiltersT&& value) { SetImageTagMutabilityExclusionFilters(std::forward<ImageTagMutabilityExclusionFiltersT>(value)); return *this;}
    template<typename ImageTagMutabilityExclusionFiltersT = ImageTagMutabilityExclusionFilter>
    RepositoryCreationTemplate& AddImageTagMutabilityExclusionFilters(ImageTagMutabilityExclusionFiltersT&& value) { m_imageTagMutabilityExclusionFiltersHasBeenSet = true; m_imageTagMutabilityExclusionFilters.emplace_back(std::forward<ImageTagMutabilityExclusionFiltersT>(value)); return *this; }
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
    RepositoryCreationTemplate& WithRepositoryPolicy(RepositoryPolicyT&& value) { SetRepositoryPolicy(std::forward<RepositoryPolicyT>(value)); return *this;}
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
    RepositoryCreationTemplate& WithLifecyclePolicy(LifecyclePolicyT&& value) { SetLifecyclePolicy(std::forward<LifecyclePolicyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of enumerable Strings representing the repository creation scenarios
     * that this template will apply towards. The two supported scenarios are
     * PULL_THROUGH_CACHE and REPLICATION</p>
     */
    inline const Aws::Vector<RCTAppliedFor>& GetAppliedFor() const { return m_appliedFor; }
    inline bool AppliedForHasBeenSet() const { return m_appliedForHasBeenSet; }
    template<typename AppliedForT = Aws::Vector<RCTAppliedFor>>
    void SetAppliedFor(AppliedForT&& value) { m_appliedForHasBeenSet = true; m_appliedFor = std::forward<AppliedForT>(value); }
    template<typename AppliedForT = Aws::Vector<RCTAppliedFor>>
    RepositoryCreationTemplate& WithAppliedFor(AppliedForT&& value) { SetAppliedFor(std::forward<AppliedForT>(value)); return *this;}
    inline RepositoryCreationTemplate& AddAppliedFor(RCTAppliedFor value) { m_appliedForHasBeenSet = true; m_appliedFor.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The ARN of the role to be assumed by Amazon ECR. Amazon ECR will assume your
     * supplied role when the customRoleArn is specified. When this field isn't
     * specified, Amazon ECR will use the service-linked role for the repository
     * creation template.</p>
     */
    inline const Aws::String& GetCustomRoleArn() const { return m_customRoleArn; }
    inline bool CustomRoleArnHasBeenSet() const { return m_customRoleArnHasBeenSet; }
    template<typename CustomRoleArnT = Aws::String>
    void SetCustomRoleArn(CustomRoleArnT&& value) { m_customRoleArnHasBeenSet = true; m_customRoleArn = std::forward<CustomRoleArnT>(value); }
    template<typename CustomRoleArnT = Aws::String>
    RepositoryCreationTemplate& WithCustomRoleArn(CustomRoleArnT&& value) { SetCustomRoleArn(std::forward<CustomRoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time, in JavaScript date format, when the repository creation
     * template was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    RepositoryCreationTemplate& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time, in JavaScript date format, when the repository creation
     * template was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    void SetUpdatedAt(UpdatedAtT&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::forward<UpdatedAtT>(value); }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    RepositoryCreationTemplate& WithUpdatedAt(UpdatedAtT&& value) { SetUpdatedAt(std::forward<UpdatedAtT>(value)); return *this;}
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

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt{};
    bool m_updatedAtHasBeenSet = false;
  };

} // namespace Model
} // namespace ECR
} // namespace Aws

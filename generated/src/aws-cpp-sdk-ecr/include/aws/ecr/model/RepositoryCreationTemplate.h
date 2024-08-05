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
    AWS_ECR_API RepositoryCreationTemplate();
    AWS_ECR_API RepositoryCreationTemplate(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECR_API RepositoryCreationTemplate& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The repository namespace prefix associated with the repository creation
     * template.</p>
     */
    inline const Aws::String& GetPrefix() const{ return m_prefix; }
    inline bool PrefixHasBeenSet() const { return m_prefixHasBeenSet; }
    inline void SetPrefix(const Aws::String& value) { m_prefixHasBeenSet = true; m_prefix = value; }
    inline void SetPrefix(Aws::String&& value) { m_prefixHasBeenSet = true; m_prefix = std::move(value); }
    inline void SetPrefix(const char* value) { m_prefixHasBeenSet = true; m_prefix.assign(value); }
    inline RepositoryCreationTemplate& WithPrefix(const Aws::String& value) { SetPrefix(value); return *this;}
    inline RepositoryCreationTemplate& WithPrefix(Aws::String&& value) { SetPrefix(std::move(value)); return *this;}
    inline RepositoryCreationTemplate& WithPrefix(const char* value) { SetPrefix(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description associated with the repository creation template.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline RepositoryCreationTemplate& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline RepositoryCreationTemplate& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline RepositoryCreationTemplate& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The encryption configuration associated with the repository creation
     * template.</p>
     */
    inline const EncryptionConfigurationForRepositoryCreationTemplate& GetEncryptionConfiguration() const{ return m_encryptionConfiguration; }
    inline bool EncryptionConfigurationHasBeenSet() const { return m_encryptionConfigurationHasBeenSet; }
    inline void SetEncryptionConfiguration(const EncryptionConfigurationForRepositoryCreationTemplate& value) { m_encryptionConfigurationHasBeenSet = true; m_encryptionConfiguration = value; }
    inline void SetEncryptionConfiguration(EncryptionConfigurationForRepositoryCreationTemplate&& value) { m_encryptionConfigurationHasBeenSet = true; m_encryptionConfiguration = std::move(value); }
    inline RepositoryCreationTemplate& WithEncryptionConfiguration(const EncryptionConfigurationForRepositoryCreationTemplate& value) { SetEncryptionConfiguration(value); return *this;}
    inline RepositoryCreationTemplate& WithEncryptionConfiguration(EncryptionConfigurationForRepositoryCreationTemplate&& value) { SetEncryptionConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The metadata to apply to the repository to help you categorize and organize.
     * Each tag consists of a key and an optional value, both of which you define. Tag
     * keys can have a maximum character length of 128 characters, and tag values can
     * have a maximum length of 256 characters.</p>
     */
    inline const Aws::Vector<Tag>& GetResourceTags() const{ return m_resourceTags; }
    inline bool ResourceTagsHasBeenSet() const { return m_resourceTagsHasBeenSet; }
    inline void SetResourceTags(const Aws::Vector<Tag>& value) { m_resourceTagsHasBeenSet = true; m_resourceTags = value; }
    inline void SetResourceTags(Aws::Vector<Tag>&& value) { m_resourceTagsHasBeenSet = true; m_resourceTags = std::move(value); }
    inline RepositoryCreationTemplate& WithResourceTags(const Aws::Vector<Tag>& value) { SetResourceTags(value); return *this;}
    inline RepositoryCreationTemplate& WithResourceTags(Aws::Vector<Tag>&& value) { SetResourceTags(std::move(value)); return *this;}
    inline RepositoryCreationTemplate& AddResourceTags(const Tag& value) { m_resourceTagsHasBeenSet = true; m_resourceTags.push_back(value); return *this; }
    inline RepositoryCreationTemplate& AddResourceTags(Tag&& value) { m_resourceTagsHasBeenSet = true; m_resourceTags.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The tag mutability setting for the repository. If this parameter is omitted,
     * the default setting of MUTABLE will be used which will allow image tags to be
     * overwritten. If IMMUTABLE is specified, all image tags within the repository
     * will be immutable which will prevent them from being overwritten.</p>
     */
    inline const ImageTagMutability& GetImageTagMutability() const{ return m_imageTagMutability; }
    inline bool ImageTagMutabilityHasBeenSet() const { return m_imageTagMutabilityHasBeenSet; }
    inline void SetImageTagMutability(const ImageTagMutability& value) { m_imageTagMutabilityHasBeenSet = true; m_imageTagMutability = value; }
    inline void SetImageTagMutability(ImageTagMutability&& value) { m_imageTagMutabilityHasBeenSet = true; m_imageTagMutability = std::move(value); }
    inline RepositoryCreationTemplate& WithImageTagMutability(const ImageTagMutability& value) { SetImageTagMutability(value); return *this;}
    inline RepositoryCreationTemplate& WithImageTagMutability(ImageTagMutability&& value) { SetImageTagMutability(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>he repository policy to apply to repositories created using the template. A
     * repository policy is a permissions policy associated with a repository to
     * control access permissions. </p>
     */
    inline const Aws::String& GetRepositoryPolicy() const{ return m_repositoryPolicy; }
    inline bool RepositoryPolicyHasBeenSet() const { return m_repositoryPolicyHasBeenSet; }
    inline void SetRepositoryPolicy(const Aws::String& value) { m_repositoryPolicyHasBeenSet = true; m_repositoryPolicy = value; }
    inline void SetRepositoryPolicy(Aws::String&& value) { m_repositoryPolicyHasBeenSet = true; m_repositoryPolicy = std::move(value); }
    inline void SetRepositoryPolicy(const char* value) { m_repositoryPolicyHasBeenSet = true; m_repositoryPolicy.assign(value); }
    inline RepositoryCreationTemplate& WithRepositoryPolicy(const Aws::String& value) { SetRepositoryPolicy(value); return *this;}
    inline RepositoryCreationTemplate& WithRepositoryPolicy(Aws::String&& value) { SetRepositoryPolicy(std::move(value)); return *this;}
    inline RepositoryCreationTemplate& WithRepositoryPolicy(const char* value) { SetRepositoryPolicy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The lifecycle policy to use for repositories created using the template.</p>
     */
    inline const Aws::String& GetLifecyclePolicy() const{ return m_lifecyclePolicy; }
    inline bool LifecyclePolicyHasBeenSet() const { return m_lifecyclePolicyHasBeenSet; }
    inline void SetLifecyclePolicy(const Aws::String& value) { m_lifecyclePolicyHasBeenSet = true; m_lifecyclePolicy = value; }
    inline void SetLifecyclePolicy(Aws::String&& value) { m_lifecyclePolicyHasBeenSet = true; m_lifecyclePolicy = std::move(value); }
    inline void SetLifecyclePolicy(const char* value) { m_lifecyclePolicyHasBeenSet = true; m_lifecyclePolicy.assign(value); }
    inline RepositoryCreationTemplate& WithLifecyclePolicy(const Aws::String& value) { SetLifecyclePolicy(value); return *this;}
    inline RepositoryCreationTemplate& WithLifecyclePolicy(Aws::String&& value) { SetLifecyclePolicy(std::move(value)); return *this;}
    inline RepositoryCreationTemplate& WithLifecyclePolicy(const char* value) { SetLifecyclePolicy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of enumerable Strings representing the repository creation scenarios
     * that this template will apply towards. The two supported scenarios are
     * PULL_THROUGH_CACHE and REPLICATION</p>
     */
    inline const Aws::Vector<RCTAppliedFor>& GetAppliedFor() const{ return m_appliedFor; }
    inline bool AppliedForHasBeenSet() const { return m_appliedForHasBeenSet; }
    inline void SetAppliedFor(const Aws::Vector<RCTAppliedFor>& value) { m_appliedForHasBeenSet = true; m_appliedFor = value; }
    inline void SetAppliedFor(Aws::Vector<RCTAppliedFor>&& value) { m_appliedForHasBeenSet = true; m_appliedFor = std::move(value); }
    inline RepositoryCreationTemplate& WithAppliedFor(const Aws::Vector<RCTAppliedFor>& value) { SetAppliedFor(value); return *this;}
    inline RepositoryCreationTemplate& WithAppliedFor(Aws::Vector<RCTAppliedFor>&& value) { SetAppliedFor(std::move(value)); return *this;}
    inline RepositoryCreationTemplate& AddAppliedFor(const RCTAppliedFor& value) { m_appliedForHasBeenSet = true; m_appliedFor.push_back(value); return *this; }
    inline RepositoryCreationTemplate& AddAppliedFor(RCTAppliedFor&& value) { m_appliedForHasBeenSet = true; m_appliedFor.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The ARN of the role to be assumed by Amazon ECR. Amazon ECR will assume your
     * supplied role when the customRoleArn is specified. When this field isn't
     * specified, Amazon ECR will use the service-linked role for the repository
     * creation template.</p>
     */
    inline const Aws::String& GetCustomRoleArn() const{ return m_customRoleArn; }
    inline bool CustomRoleArnHasBeenSet() const { return m_customRoleArnHasBeenSet; }
    inline void SetCustomRoleArn(const Aws::String& value) { m_customRoleArnHasBeenSet = true; m_customRoleArn = value; }
    inline void SetCustomRoleArn(Aws::String&& value) { m_customRoleArnHasBeenSet = true; m_customRoleArn = std::move(value); }
    inline void SetCustomRoleArn(const char* value) { m_customRoleArnHasBeenSet = true; m_customRoleArn.assign(value); }
    inline RepositoryCreationTemplate& WithCustomRoleArn(const Aws::String& value) { SetCustomRoleArn(value); return *this;}
    inline RepositoryCreationTemplate& WithCustomRoleArn(Aws::String&& value) { SetCustomRoleArn(std::move(value)); return *this;}
    inline RepositoryCreationTemplate& WithCustomRoleArn(const char* value) { SetCustomRoleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time, in JavaScript date format, when the repository creation
     * template was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }
    inline RepositoryCreationTemplate& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline RepositoryCreationTemplate& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time, in JavaScript date format, when the repository creation
     * template was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const{ return m_updatedAt; }
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
    inline void SetUpdatedAt(const Aws::Utils::DateTime& value) { m_updatedAtHasBeenSet = true; m_updatedAt = value; }
    inline void SetUpdatedAt(Aws::Utils::DateTime&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::move(value); }
    inline RepositoryCreationTemplate& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}
    inline RepositoryCreationTemplate& WithUpdatedAt(Aws::Utils::DateTime&& value) { SetUpdatedAt(std::move(value)); return *this;}
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

    ImageTagMutability m_imageTagMutability;
    bool m_imageTagMutabilityHasBeenSet = false;

    Aws::String m_repositoryPolicy;
    bool m_repositoryPolicyHasBeenSet = false;

    Aws::String m_lifecyclePolicy;
    bool m_lifecyclePolicyHasBeenSet = false;

    Aws::Vector<RCTAppliedFor> m_appliedFor;
    bool m_appliedForHasBeenSet = false;

    Aws::String m_customRoleArn;
    bool m_customRoleArnHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt;
    bool m_updatedAtHasBeenSet = false;
  };

} // namespace Model
} // namespace ECR
} // namespace Aws

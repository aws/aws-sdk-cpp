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
  class UpdateRepositoryCreationTemplateRequest : public ECRRequest
  {
  public:
    AWS_ECR_API UpdateRepositoryCreationTemplateRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateRepositoryCreationTemplate"; }

    AWS_ECR_API Aws::String SerializePayload() const override;

    AWS_ECR_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The repository namespace prefix that matches an existing repository creation
     * template in the registry. All repositories created using this namespace prefix
     * will have the settings defined in this template applied. For example, a prefix
     * of <code>prod</code> would apply to all repositories beginning with
     * <code>prod/</code>. This includes a repository named <code>prod/team1</code> as
     * well as a repository named <code>prod/repository1</code>.</p> <p>To apply a
     * template to all repositories in your registry that don't have an associated
     * creation template, you can use <code>ROOT</code> as the prefix.</p>
     */
    inline const Aws::String& GetPrefix() const{ return m_prefix; }
    inline bool PrefixHasBeenSet() const { return m_prefixHasBeenSet; }
    inline void SetPrefix(const Aws::String& value) { m_prefixHasBeenSet = true; m_prefix = value; }
    inline void SetPrefix(Aws::String&& value) { m_prefixHasBeenSet = true; m_prefix = std::move(value); }
    inline void SetPrefix(const char* value) { m_prefixHasBeenSet = true; m_prefix.assign(value); }
    inline UpdateRepositoryCreationTemplateRequest& WithPrefix(const Aws::String& value) { SetPrefix(value); return *this;}
    inline UpdateRepositoryCreationTemplateRequest& WithPrefix(Aws::String&& value) { SetPrefix(std::move(value)); return *this;}
    inline UpdateRepositoryCreationTemplateRequest& WithPrefix(const char* value) { SetPrefix(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description for the repository creation template.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline UpdateRepositoryCreationTemplateRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline UpdateRepositoryCreationTemplateRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline UpdateRepositoryCreationTemplateRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    
    inline const EncryptionConfigurationForRepositoryCreationTemplate& GetEncryptionConfiguration() const{ return m_encryptionConfiguration; }
    inline bool EncryptionConfigurationHasBeenSet() const { return m_encryptionConfigurationHasBeenSet; }
    inline void SetEncryptionConfiguration(const EncryptionConfigurationForRepositoryCreationTemplate& value) { m_encryptionConfigurationHasBeenSet = true; m_encryptionConfiguration = value; }
    inline void SetEncryptionConfiguration(EncryptionConfigurationForRepositoryCreationTemplate&& value) { m_encryptionConfigurationHasBeenSet = true; m_encryptionConfiguration = std::move(value); }
    inline UpdateRepositoryCreationTemplateRequest& WithEncryptionConfiguration(const EncryptionConfigurationForRepositoryCreationTemplate& value) { SetEncryptionConfiguration(value); return *this;}
    inline UpdateRepositoryCreationTemplateRequest& WithEncryptionConfiguration(EncryptionConfigurationForRepositoryCreationTemplate&& value) { SetEncryptionConfiguration(std::move(value)); return *this;}
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
    inline UpdateRepositoryCreationTemplateRequest& WithResourceTags(const Aws::Vector<Tag>& value) { SetResourceTags(value); return *this;}
    inline UpdateRepositoryCreationTemplateRequest& WithResourceTags(Aws::Vector<Tag>&& value) { SetResourceTags(std::move(value)); return *this;}
    inline UpdateRepositoryCreationTemplateRequest& AddResourceTags(const Tag& value) { m_resourceTagsHasBeenSet = true; m_resourceTags.push_back(value); return *this; }
    inline UpdateRepositoryCreationTemplateRequest& AddResourceTags(Tag&& value) { m_resourceTagsHasBeenSet = true; m_resourceTags.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Updates the tag mutability setting for the repository. If this parameter is
     * omitted, the default setting of <code>MUTABLE</code> will be used which will
     * allow image tags to be overwritten. If <code>IMMUTABLE</code> is specified, all
     * image tags within the repository will be immutable which will prevent them from
     * being overwritten.</p>
     */
    inline const ImageTagMutability& GetImageTagMutability() const{ return m_imageTagMutability; }
    inline bool ImageTagMutabilityHasBeenSet() const { return m_imageTagMutabilityHasBeenSet; }
    inline void SetImageTagMutability(const ImageTagMutability& value) { m_imageTagMutabilityHasBeenSet = true; m_imageTagMutability = value; }
    inline void SetImageTagMutability(ImageTagMutability&& value) { m_imageTagMutabilityHasBeenSet = true; m_imageTagMutability = std::move(value); }
    inline UpdateRepositoryCreationTemplateRequest& WithImageTagMutability(const ImageTagMutability& value) { SetImageTagMutability(value); return *this;}
    inline UpdateRepositoryCreationTemplateRequest& WithImageTagMutability(ImageTagMutability&& value) { SetImageTagMutability(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Updates the repository policy created using the template. A repository policy
     * is a permissions policy associated with a repository to control access
     * permissions. </p>
     */
    inline const Aws::String& GetRepositoryPolicy() const{ return m_repositoryPolicy; }
    inline bool RepositoryPolicyHasBeenSet() const { return m_repositoryPolicyHasBeenSet; }
    inline void SetRepositoryPolicy(const Aws::String& value) { m_repositoryPolicyHasBeenSet = true; m_repositoryPolicy = value; }
    inline void SetRepositoryPolicy(Aws::String&& value) { m_repositoryPolicyHasBeenSet = true; m_repositoryPolicy = std::move(value); }
    inline void SetRepositoryPolicy(const char* value) { m_repositoryPolicyHasBeenSet = true; m_repositoryPolicy.assign(value); }
    inline UpdateRepositoryCreationTemplateRequest& WithRepositoryPolicy(const Aws::String& value) { SetRepositoryPolicy(value); return *this;}
    inline UpdateRepositoryCreationTemplateRequest& WithRepositoryPolicy(Aws::String&& value) { SetRepositoryPolicy(std::move(value)); return *this;}
    inline UpdateRepositoryCreationTemplateRequest& WithRepositoryPolicy(const char* value) { SetRepositoryPolicy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Updates the lifecycle policy associated with the specified repository
     * creation template.</p>
     */
    inline const Aws::String& GetLifecyclePolicy() const{ return m_lifecyclePolicy; }
    inline bool LifecyclePolicyHasBeenSet() const { return m_lifecyclePolicyHasBeenSet; }
    inline void SetLifecyclePolicy(const Aws::String& value) { m_lifecyclePolicyHasBeenSet = true; m_lifecyclePolicy = value; }
    inline void SetLifecyclePolicy(Aws::String&& value) { m_lifecyclePolicyHasBeenSet = true; m_lifecyclePolicy = std::move(value); }
    inline void SetLifecyclePolicy(const char* value) { m_lifecyclePolicyHasBeenSet = true; m_lifecyclePolicy.assign(value); }
    inline UpdateRepositoryCreationTemplateRequest& WithLifecyclePolicy(const Aws::String& value) { SetLifecyclePolicy(value); return *this;}
    inline UpdateRepositoryCreationTemplateRequest& WithLifecyclePolicy(Aws::String&& value) { SetLifecyclePolicy(std::move(value)); return *this;}
    inline UpdateRepositoryCreationTemplateRequest& WithLifecyclePolicy(const char* value) { SetLifecyclePolicy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Updates the list of enumerable strings representing the Amazon ECR repository
     * creation scenarios that this template will apply towards. The two supported
     * scenarios are <code>PULL_THROUGH_CACHE</code> and <code>REPLICATION</code> </p>
     */
    inline const Aws::Vector<RCTAppliedFor>& GetAppliedFor() const{ return m_appliedFor; }
    inline bool AppliedForHasBeenSet() const { return m_appliedForHasBeenSet; }
    inline void SetAppliedFor(const Aws::Vector<RCTAppliedFor>& value) { m_appliedForHasBeenSet = true; m_appliedFor = value; }
    inline void SetAppliedFor(Aws::Vector<RCTAppliedFor>&& value) { m_appliedForHasBeenSet = true; m_appliedFor = std::move(value); }
    inline UpdateRepositoryCreationTemplateRequest& WithAppliedFor(const Aws::Vector<RCTAppliedFor>& value) { SetAppliedFor(value); return *this;}
    inline UpdateRepositoryCreationTemplateRequest& WithAppliedFor(Aws::Vector<RCTAppliedFor>&& value) { SetAppliedFor(std::move(value)); return *this;}
    inline UpdateRepositoryCreationTemplateRequest& AddAppliedFor(const RCTAppliedFor& value) { m_appliedForHasBeenSet = true; m_appliedFor.push_back(value); return *this; }
    inline UpdateRepositoryCreationTemplateRequest& AddAppliedFor(RCTAppliedFor&& value) { m_appliedForHasBeenSet = true; m_appliedFor.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The ARN of the role to be assumed by Amazon ECR. This role must be in the
     * same account as the registry that you are configuring. Amazon ECR will assume
     * your supplied role when the customRoleArn is specified. When this field isn't
     * specified, Amazon ECR will use the service-linked role for the repository
     * creation template.</p>
     */
    inline const Aws::String& GetCustomRoleArn() const{ return m_customRoleArn; }
    inline bool CustomRoleArnHasBeenSet() const { return m_customRoleArnHasBeenSet; }
    inline void SetCustomRoleArn(const Aws::String& value) { m_customRoleArnHasBeenSet = true; m_customRoleArn = value; }
    inline void SetCustomRoleArn(Aws::String&& value) { m_customRoleArnHasBeenSet = true; m_customRoleArn = std::move(value); }
    inline void SetCustomRoleArn(const char* value) { m_customRoleArnHasBeenSet = true; m_customRoleArn.assign(value); }
    inline UpdateRepositoryCreationTemplateRequest& WithCustomRoleArn(const Aws::String& value) { SetCustomRoleArn(value); return *this;}
    inline UpdateRepositoryCreationTemplateRequest& WithCustomRoleArn(Aws::String&& value) { SetCustomRoleArn(std::move(value)); return *this;}
    inline UpdateRepositoryCreationTemplateRequest& WithCustomRoleArn(const char* value) { SetCustomRoleArn(value); return *this;}
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
  };

} // namespace Model
} // namespace ECR
} // namespace Aws

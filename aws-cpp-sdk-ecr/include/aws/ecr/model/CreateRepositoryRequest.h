/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecr/ECR_EXPORTS.h>
#include <aws/ecr/ECRRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ecr/model/ImageTagMutability.h>
#include <aws/ecr/model/ImageScanningConfiguration.h>
#include <aws/ecr/model/EncryptionConfiguration.h>
#include <aws/ecr/model/Tag.h>
#include <utility>

namespace Aws
{
namespace ECR
{
namespace Model
{

  /**
   */
  class CreateRepositoryRequest : public ECRRequest
  {
  public:
    AWS_ECR_API CreateRepositoryRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateRepository"; }

    AWS_ECR_API Aws::String SerializePayload() const override;

    AWS_ECR_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The Amazon Web Services account ID associated with the registry to create the
     * repository. If you do not specify a registry, the default registry is
     * assumed.</p>
     */
    inline const Aws::String& GetRegistryId() const{ return m_registryId; }

    /**
     * <p>The Amazon Web Services account ID associated with the registry to create the
     * repository. If you do not specify a registry, the default registry is
     * assumed.</p>
     */
    inline bool RegistryIdHasBeenSet() const { return m_registryIdHasBeenSet; }

    /**
     * <p>The Amazon Web Services account ID associated with the registry to create the
     * repository. If you do not specify a registry, the default registry is
     * assumed.</p>
     */
    inline void SetRegistryId(const Aws::String& value) { m_registryIdHasBeenSet = true; m_registryId = value; }

    /**
     * <p>The Amazon Web Services account ID associated with the registry to create the
     * repository. If you do not specify a registry, the default registry is
     * assumed.</p>
     */
    inline void SetRegistryId(Aws::String&& value) { m_registryIdHasBeenSet = true; m_registryId = std::move(value); }

    /**
     * <p>The Amazon Web Services account ID associated with the registry to create the
     * repository. If you do not specify a registry, the default registry is
     * assumed.</p>
     */
    inline void SetRegistryId(const char* value) { m_registryIdHasBeenSet = true; m_registryId.assign(value); }

    /**
     * <p>The Amazon Web Services account ID associated with the registry to create the
     * repository. If you do not specify a registry, the default registry is
     * assumed.</p>
     */
    inline CreateRepositoryRequest& WithRegistryId(const Aws::String& value) { SetRegistryId(value); return *this;}

    /**
     * <p>The Amazon Web Services account ID associated with the registry to create the
     * repository. If you do not specify a registry, the default registry is
     * assumed.</p>
     */
    inline CreateRepositoryRequest& WithRegistryId(Aws::String&& value) { SetRegistryId(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services account ID associated with the registry to create the
     * repository. If you do not specify a registry, the default registry is
     * assumed.</p>
     */
    inline CreateRepositoryRequest& WithRegistryId(const char* value) { SetRegistryId(value); return *this;}


    /**
     * <p>The name to use for the repository. The repository name may be specified on
     * its own (such as <code>nginx-web-app</code>) or it can be prepended with a
     * namespace to group the repository into a category (such as
     * <code>project-a/nginx-web-app</code>).</p>
     */
    inline const Aws::String& GetRepositoryName() const{ return m_repositoryName; }

    /**
     * <p>The name to use for the repository. The repository name may be specified on
     * its own (such as <code>nginx-web-app</code>) or it can be prepended with a
     * namespace to group the repository into a category (such as
     * <code>project-a/nginx-web-app</code>).</p>
     */
    inline bool RepositoryNameHasBeenSet() const { return m_repositoryNameHasBeenSet; }

    /**
     * <p>The name to use for the repository. The repository name may be specified on
     * its own (such as <code>nginx-web-app</code>) or it can be prepended with a
     * namespace to group the repository into a category (such as
     * <code>project-a/nginx-web-app</code>).</p>
     */
    inline void SetRepositoryName(const Aws::String& value) { m_repositoryNameHasBeenSet = true; m_repositoryName = value; }

    /**
     * <p>The name to use for the repository. The repository name may be specified on
     * its own (such as <code>nginx-web-app</code>) or it can be prepended with a
     * namespace to group the repository into a category (such as
     * <code>project-a/nginx-web-app</code>).</p>
     */
    inline void SetRepositoryName(Aws::String&& value) { m_repositoryNameHasBeenSet = true; m_repositoryName = std::move(value); }

    /**
     * <p>The name to use for the repository. The repository name may be specified on
     * its own (such as <code>nginx-web-app</code>) or it can be prepended with a
     * namespace to group the repository into a category (such as
     * <code>project-a/nginx-web-app</code>).</p>
     */
    inline void SetRepositoryName(const char* value) { m_repositoryNameHasBeenSet = true; m_repositoryName.assign(value); }

    /**
     * <p>The name to use for the repository. The repository name may be specified on
     * its own (such as <code>nginx-web-app</code>) or it can be prepended with a
     * namespace to group the repository into a category (such as
     * <code>project-a/nginx-web-app</code>).</p>
     */
    inline CreateRepositoryRequest& WithRepositoryName(const Aws::String& value) { SetRepositoryName(value); return *this;}

    /**
     * <p>The name to use for the repository. The repository name may be specified on
     * its own (such as <code>nginx-web-app</code>) or it can be prepended with a
     * namespace to group the repository into a category (such as
     * <code>project-a/nginx-web-app</code>).</p>
     */
    inline CreateRepositoryRequest& WithRepositoryName(Aws::String&& value) { SetRepositoryName(std::move(value)); return *this;}

    /**
     * <p>The name to use for the repository. The repository name may be specified on
     * its own (such as <code>nginx-web-app</code>) or it can be prepended with a
     * namespace to group the repository into a category (such as
     * <code>project-a/nginx-web-app</code>).</p>
     */
    inline CreateRepositoryRequest& WithRepositoryName(const char* value) { SetRepositoryName(value); return *this;}


    /**
     * <p>The metadata that you apply to the repository to help you categorize and
     * organize them. Each tag consists of a key and an optional value, both of which
     * you define. Tag keys can have a maximum character length of 128 characters, and
     * tag values can have a maximum length of 256 characters.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>The metadata that you apply to the repository to help you categorize and
     * organize them. Each tag consists of a key and an optional value, both of which
     * you define. Tag keys can have a maximum character length of 128 characters, and
     * tag values can have a maximum length of 256 characters.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The metadata that you apply to the repository to help you categorize and
     * organize them. Each tag consists of a key and an optional value, both of which
     * you define. Tag keys can have a maximum character length of 128 characters, and
     * tag values can have a maximum length of 256 characters.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The metadata that you apply to the repository to help you categorize and
     * organize them. Each tag consists of a key and an optional value, both of which
     * you define. Tag keys can have a maximum character length of 128 characters, and
     * tag values can have a maximum length of 256 characters.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The metadata that you apply to the repository to help you categorize and
     * organize them. Each tag consists of a key and an optional value, both of which
     * you define. Tag keys can have a maximum character length of 128 characters, and
     * tag values can have a maximum length of 256 characters.</p>
     */
    inline CreateRepositoryRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>The metadata that you apply to the repository to help you categorize and
     * organize them. Each tag consists of a key and an optional value, both of which
     * you define. Tag keys can have a maximum character length of 128 characters, and
     * tag values can have a maximum length of 256 characters.</p>
     */
    inline CreateRepositoryRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The metadata that you apply to the repository to help you categorize and
     * organize them. Each tag consists of a key and an optional value, both of which
     * you define. Tag keys can have a maximum character length of 128 characters, and
     * tag values can have a maximum length of 256 characters.</p>
     */
    inline CreateRepositoryRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>The metadata that you apply to the repository to help you categorize and
     * organize them. Each tag consists of a key and an optional value, both of which
     * you define. Tag keys can have a maximum character length of 128 characters, and
     * tag values can have a maximum length of 256 characters.</p>
     */
    inline CreateRepositoryRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }


    /**
     * <p>The tag mutability setting for the repository. If this parameter is omitted,
     * the default setting of <code>MUTABLE</code> will be used which will allow image
     * tags to be overwritten. If <code>IMMUTABLE</code> is specified, all image tags
     * within the repository will be immutable which will prevent them from being
     * overwritten.</p>
     */
    inline const ImageTagMutability& GetImageTagMutability() const{ return m_imageTagMutability; }

    /**
     * <p>The tag mutability setting for the repository. If this parameter is omitted,
     * the default setting of <code>MUTABLE</code> will be used which will allow image
     * tags to be overwritten. If <code>IMMUTABLE</code> is specified, all image tags
     * within the repository will be immutable which will prevent them from being
     * overwritten.</p>
     */
    inline bool ImageTagMutabilityHasBeenSet() const { return m_imageTagMutabilityHasBeenSet; }

    /**
     * <p>The tag mutability setting for the repository. If this parameter is omitted,
     * the default setting of <code>MUTABLE</code> will be used which will allow image
     * tags to be overwritten. If <code>IMMUTABLE</code> is specified, all image tags
     * within the repository will be immutable which will prevent them from being
     * overwritten.</p>
     */
    inline void SetImageTagMutability(const ImageTagMutability& value) { m_imageTagMutabilityHasBeenSet = true; m_imageTagMutability = value; }

    /**
     * <p>The tag mutability setting for the repository. If this parameter is omitted,
     * the default setting of <code>MUTABLE</code> will be used which will allow image
     * tags to be overwritten. If <code>IMMUTABLE</code> is specified, all image tags
     * within the repository will be immutable which will prevent them from being
     * overwritten.</p>
     */
    inline void SetImageTagMutability(ImageTagMutability&& value) { m_imageTagMutabilityHasBeenSet = true; m_imageTagMutability = std::move(value); }

    /**
     * <p>The tag mutability setting for the repository. If this parameter is omitted,
     * the default setting of <code>MUTABLE</code> will be used which will allow image
     * tags to be overwritten. If <code>IMMUTABLE</code> is specified, all image tags
     * within the repository will be immutable which will prevent them from being
     * overwritten.</p>
     */
    inline CreateRepositoryRequest& WithImageTagMutability(const ImageTagMutability& value) { SetImageTagMutability(value); return *this;}

    /**
     * <p>The tag mutability setting for the repository. If this parameter is omitted,
     * the default setting of <code>MUTABLE</code> will be used which will allow image
     * tags to be overwritten. If <code>IMMUTABLE</code> is specified, all image tags
     * within the repository will be immutable which will prevent them from being
     * overwritten.</p>
     */
    inline CreateRepositoryRequest& WithImageTagMutability(ImageTagMutability&& value) { SetImageTagMutability(std::move(value)); return *this;}


    /**
     * <p>The image scanning configuration for the repository. This determines whether
     * images are scanned for known vulnerabilities after being pushed to the
     * repository.</p>
     */
    inline const ImageScanningConfiguration& GetImageScanningConfiguration() const{ return m_imageScanningConfiguration; }

    /**
     * <p>The image scanning configuration for the repository. This determines whether
     * images are scanned for known vulnerabilities after being pushed to the
     * repository.</p>
     */
    inline bool ImageScanningConfigurationHasBeenSet() const { return m_imageScanningConfigurationHasBeenSet; }

    /**
     * <p>The image scanning configuration for the repository. This determines whether
     * images are scanned for known vulnerabilities after being pushed to the
     * repository.</p>
     */
    inline void SetImageScanningConfiguration(const ImageScanningConfiguration& value) { m_imageScanningConfigurationHasBeenSet = true; m_imageScanningConfiguration = value; }

    /**
     * <p>The image scanning configuration for the repository. This determines whether
     * images are scanned for known vulnerabilities after being pushed to the
     * repository.</p>
     */
    inline void SetImageScanningConfiguration(ImageScanningConfiguration&& value) { m_imageScanningConfigurationHasBeenSet = true; m_imageScanningConfiguration = std::move(value); }

    /**
     * <p>The image scanning configuration for the repository. This determines whether
     * images are scanned for known vulnerabilities after being pushed to the
     * repository.</p>
     */
    inline CreateRepositoryRequest& WithImageScanningConfiguration(const ImageScanningConfiguration& value) { SetImageScanningConfiguration(value); return *this;}

    /**
     * <p>The image scanning configuration for the repository. This determines whether
     * images are scanned for known vulnerabilities after being pushed to the
     * repository.</p>
     */
    inline CreateRepositoryRequest& WithImageScanningConfiguration(ImageScanningConfiguration&& value) { SetImageScanningConfiguration(std::move(value)); return *this;}


    /**
     * <p>The encryption configuration for the repository. This determines how the
     * contents of your repository are encrypted at rest.</p>
     */
    inline const EncryptionConfiguration& GetEncryptionConfiguration() const{ return m_encryptionConfiguration; }

    /**
     * <p>The encryption configuration for the repository. This determines how the
     * contents of your repository are encrypted at rest.</p>
     */
    inline bool EncryptionConfigurationHasBeenSet() const { return m_encryptionConfigurationHasBeenSet; }

    /**
     * <p>The encryption configuration for the repository. This determines how the
     * contents of your repository are encrypted at rest.</p>
     */
    inline void SetEncryptionConfiguration(const EncryptionConfiguration& value) { m_encryptionConfigurationHasBeenSet = true; m_encryptionConfiguration = value; }

    /**
     * <p>The encryption configuration for the repository. This determines how the
     * contents of your repository are encrypted at rest.</p>
     */
    inline void SetEncryptionConfiguration(EncryptionConfiguration&& value) { m_encryptionConfigurationHasBeenSet = true; m_encryptionConfiguration = std::move(value); }

    /**
     * <p>The encryption configuration for the repository. This determines how the
     * contents of your repository are encrypted at rest.</p>
     */
    inline CreateRepositoryRequest& WithEncryptionConfiguration(const EncryptionConfiguration& value) { SetEncryptionConfiguration(value); return *this;}

    /**
     * <p>The encryption configuration for the repository. This determines how the
     * contents of your repository are encrypted at rest.</p>
     */
    inline CreateRepositoryRequest& WithEncryptionConfiguration(EncryptionConfiguration&& value) { SetEncryptionConfiguration(std::move(value)); return *this;}

  private:

    Aws::String m_registryId;
    bool m_registryIdHasBeenSet = false;

    Aws::String m_repositoryName;
    bool m_repositoryNameHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    ImageTagMutability m_imageTagMutability;
    bool m_imageTagMutabilityHasBeenSet = false;

    ImageScanningConfiguration m_imageScanningConfiguration;
    bool m_imageScanningConfigurationHasBeenSet = false;

    EncryptionConfiguration m_encryptionConfiguration;
    bool m_encryptionConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace ECR
} // namespace Aws

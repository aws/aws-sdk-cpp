/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecr/ECR_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/ecr/model/ImageTagMutability.h>
#include <aws/ecr/model/ImageScanningConfiguration.h>
#include <aws/ecr/model/EncryptionConfiguration.h>
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
   * <p>An object representing a repository.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-2015-09-21/Repository">AWS API
   * Reference</a></p>
   */
  class Repository
  {
  public:
    AWS_ECR_API Repository();
    AWS_ECR_API Repository(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECR_API Repository& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) that identifies the repository. The ARN
     * contains the <code>arn:aws:ecr</code> namespace, followed by the region of the
     * repository, Amazon Web Services account ID of the repository owner, repository
     * namespace, and repository name. For example,
     * <code>arn:aws:ecr:region:012345678910:repository-namespace/repository-name</code>.</p>
     */
    inline const Aws::String& GetRepositoryArn() const{ return m_repositoryArn; }
    inline bool RepositoryArnHasBeenSet() const { return m_repositoryArnHasBeenSet; }
    inline void SetRepositoryArn(const Aws::String& value) { m_repositoryArnHasBeenSet = true; m_repositoryArn = value; }
    inline void SetRepositoryArn(Aws::String&& value) { m_repositoryArnHasBeenSet = true; m_repositoryArn = std::move(value); }
    inline void SetRepositoryArn(const char* value) { m_repositoryArnHasBeenSet = true; m_repositoryArn.assign(value); }
    inline Repository& WithRepositoryArn(const Aws::String& value) { SetRepositoryArn(value); return *this;}
    inline Repository& WithRepositoryArn(Aws::String&& value) { SetRepositoryArn(std::move(value)); return *this;}
    inline Repository& WithRepositoryArn(const char* value) { SetRepositoryArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services account ID associated with the registry that contains
     * the repository.</p>
     */
    inline const Aws::String& GetRegistryId() const{ return m_registryId; }
    inline bool RegistryIdHasBeenSet() const { return m_registryIdHasBeenSet; }
    inline void SetRegistryId(const Aws::String& value) { m_registryIdHasBeenSet = true; m_registryId = value; }
    inline void SetRegistryId(Aws::String&& value) { m_registryIdHasBeenSet = true; m_registryId = std::move(value); }
    inline void SetRegistryId(const char* value) { m_registryIdHasBeenSet = true; m_registryId.assign(value); }
    inline Repository& WithRegistryId(const Aws::String& value) { SetRegistryId(value); return *this;}
    inline Repository& WithRegistryId(Aws::String&& value) { SetRegistryId(std::move(value)); return *this;}
    inline Repository& WithRegistryId(const char* value) { SetRegistryId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the repository.</p>
     */
    inline const Aws::String& GetRepositoryName() const{ return m_repositoryName; }
    inline bool RepositoryNameHasBeenSet() const { return m_repositoryNameHasBeenSet; }
    inline void SetRepositoryName(const Aws::String& value) { m_repositoryNameHasBeenSet = true; m_repositoryName = value; }
    inline void SetRepositoryName(Aws::String&& value) { m_repositoryNameHasBeenSet = true; m_repositoryName = std::move(value); }
    inline void SetRepositoryName(const char* value) { m_repositoryNameHasBeenSet = true; m_repositoryName.assign(value); }
    inline Repository& WithRepositoryName(const Aws::String& value) { SetRepositoryName(value); return *this;}
    inline Repository& WithRepositoryName(Aws::String&& value) { SetRepositoryName(std::move(value)); return *this;}
    inline Repository& WithRepositoryName(const char* value) { SetRepositoryName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The URI for the repository. You can use this URI for container image
     * <code>push</code> and <code>pull</code> operations.</p>
     */
    inline const Aws::String& GetRepositoryUri() const{ return m_repositoryUri; }
    inline bool RepositoryUriHasBeenSet() const { return m_repositoryUriHasBeenSet; }
    inline void SetRepositoryUri(const Aws::String& value) { m_repositoryUriHasBeenSet = true; m_repositoryUri = value; }
    inline void SetRepositoryUri(Aws::String&& value) { m_repositoryUriHasBeenSet = true; m_repositoryUri = std::move(value); }
    inline void SetRepositoryUri(const char* value) { m_repositoryUriHasBeenSet = true; m_repositoryUri.assign(value); }
    inline Repository& WithRepositoryUri(const Aws::String& value) { SetRepositoryUri(value); return *this;}
    inline Repository& WithRepositoryUri(Aws::String&& value) { SetRepositoryUri(std::move(value)); return *this;}
    inline Repository& WithRepositoryUri(const char* value) { SetRepositoryUri(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time, in JavaScript date format, when the repository was
     * created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }
    inline Repository& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline Repository& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tag mutability setting for the repository.</p>
     */
    inline const ImageTagMutability& GetImageTagMutability() const{ return m_imageTagMutability; }
    inline bool ImageTagMutabilityHasBeenSet() const { return m_imageTagMutabilityHasBeenSet; }
    inline void SetImageTagMutability(const ImageTagMutability& value) { m_imageTagMutabilityHasBeenSet = true; m_imageTagMutability = value; }
    inline void SetImageTagMutability(ImageTagMutability&& value) { m_imageTagMutabilityHasBeenSet = true; m_imageTagMutability = std::move(value); }
    inline Repository& WithImageTagMutability(const ImageTagMutability& value) { SetImageTagMutability(value); return *this;}
    inline Repository& WithImageTagMutability(ImageTagMutability&& value) { SetImageTagMutability(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const ImageScanningConfiguration& GetImageScanningConfiguration() const{ return m_imageScanningConfiguration; }
    inline bool ImageScanningConfigurationHasBeenSet() const { return m_imageScanningConfigurationHasBeenSet; }
    inline void SetImageScanningConfiguration(const ImageScanningConfiguration& value) { m_imageScanningConfigurationHasBeenSet = true; m_imageScanningConfiguration = value; }
    inline void SetImageScanningConfiguration(ImageScanningConfiguration&& value) { m_imageScanningConfigurationHasBeenSet = true; m_imageScanningConfiguration = std::move(value); }
    inline Repository& WithImageScanningConfiguration(const ImageScanningConfiguration& value) { SetImageScanningConfiguration(value); return *this;}
    inline Repository& WithImageScanningConfiguration(ImageScanningConfiguration&& value) { SetImageScanningConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The encryption configuration for the repository. This determines how the
     * contents of your repository are encrypted at rest.</p>
     */
    inline const EncryptionConfiguration& GetEncryptionConfiguration() const{ return m_encryptionConfiguration; }
    inline bool EncryptionConfigurationHasBeenSet() const { return m_encryptionConfigurationHasBeenSet; }
    inline void SetEncryptionConfiguration(const EncryptionConfiguration& value) { m_encryptionConfigurationHasBeenSet = true; m_encryptionConfiguration = value; }
    inline void SetEncryptionConfiguration(EncryptionConfiguration&& value) { m_encryptionConfigurationHasBeenSet = true; m_encryptionConfiguration = std::move(value); }
    inline Repository& WithEncryptionConfiguration(const EncryptionConfiguration& value) { SetEncryptionConfiguration(value); return *this;}
    inline Repository& WithEncryptionConfiguration(EncryptionConfiguration&& value) { SetEncryptionConfiguration(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_repositoryArn;
    bool m_repositoryArnHasBeenSet = false;

    Aws::String m_registryId;
    bool m_registryIdHasBeenSet = false;

    Aws::String m_repositoryName;
    bool m_repositoryNameHasBeenSet = false;

    Aws::String m_repositoryUri;
    bool m_repositoryUriHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

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

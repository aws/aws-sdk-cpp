/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecr/ECR_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
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
   * <p>The image details of the Amazon ECR container image.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-2015-09-21/AwsEcrContainerImageDetails">AWS
   * API Reference</a></p>
   */
  class AwsEcrContainerImageDetails
  {
  public:
    AWS_ECR_API AwsEcrContainerImageDetails();
    AWS_ECR_API AwsEcrContainerImageDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECR_API AwsEcrContainerImageDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The architecture of the Amazon ECR container image.</p>
     */
    inline const Aws::String& GetArchitecture() const{ return m_architecture; }
    inline bool ArchitectureHasBeenSet() const { return m_architectureHasBeenSet; }
    inline void SetArchitecture(const Aws::String& value) { m_architectureHasBeenSet = true; m_architecture = value; }
    inline void SetArchitecture(Aws::String&& value) { m_architectureHasBeenSet = true; m_architecture = std::move(value); }
    inline void SetArchitecture(const char* value) { m_architectureHasBeenSet = true; m_architecture.assign(value); }
    inline AwsEcrContainerImageDetails& WithArchitecture(const Aws::String& value) { SetArchitecture(value); return *this;}
    inline AwsEcrContainerImageDetails& WithArchitecture(Aws::String&& value) { SetArchitecture(std::move(value)); return *this;}
    inline AwsEcrContainerImageDetails& WithArchitecture(const char* value) { SetArchitecture(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The image author of the Amazon ECR container image.</p>
     */
    inline const Aws::String& GetAuthor() const{ return m_author; }
    inline bool AuthorHasBeenSet() const { return m_authorHasBeenSet; }
    inline void SetAuthor(const Aws::String& value) { m_authorHasBeenSet = true; m_author = value; }
    inline void SetAuthor(Aws::String&& value) { m_authorHasBeenSet = true; m_author = std::move(value); }
    inline void SetAuthor(const char* value) { m_authorHasBeenSet = true; m_author.assign(value); }
    inline AwsEcrContainerImageDetails& WithAuthor(const Aws::String& value) { SetAuthor(value); return *this;}
    inline AwsEcrContainerImageDetails& WithAuthor(Aws::String&& value) { SetAuthor(std::move(value)); return *this;}
    inline AwsEcrContainerImageDetails& WithAuthor(const char* value) { SetAuthor(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The image hash of the Amazon ECR container image.</p>
     */
    inline const Aws::String& GetImageHash() const{ return m_imageHash; }
    inline bool ImageHashHasBeenSet() const { return m_imageHashHasBeenSet; }
    inline void SetImageHash(const Aws::String& value) { m_imageHashHasBeenSet = true; m_imageHash = value; }
    inline void SetImageHash(Aws::String&& value) { m_imageHashHasBeenSet = true; m_imageHash = std::move(value); }
    inline void SetImageHash(const char* value) { m_imageHashHasBeenSet = true; m_imageHash.assign(value); }
    inline AwsEcrContainerImageDetails& WithImageHash(const Aws::String& value) { SetImageHash(value); return *this;}
    inline AwsEcrContainerImageDetails& WithImageHash(Aws::String&& value) { SetImageHash(std::move(value)); return *this;}
    inline AwsEcrContainerImageDetails& WithImageHash(const char* value) { SetImageHash(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The image tags attached to the Amazon ECR container image.</p>
     */
    inline const Aws::Vector<Aws::String>& GetImageTags() const{ return m_imageTags; }
    inline bool ImageTagsHasBeenSet() const { return m_imageTagsHasBeenSet; }
    inline void SetImageTags(const Aws::Vector<Aws::String>& value) { m_imageTagsHasBeenSet = true; m_imageTags = value; }
    inline void SetImageTags(Aws::Vector<Aws::String>&& value) { m_imageTagsHasBeenSet = true; m_imageTags = std::move(value); }
    inline AwsEcrContainerImageDetails& WithImageTags(const Aws::Vector<Aws::String>& value) { SetImageTags(value); return *this;}
    inline AwsEcrContainerImageDetails& WithImageTags(Aws::Vector<Aws::String>&& value) { SetImageTags(std::move(value)); return *this;}
    inline AwsEcrContainerImageDetails& AddImageTags(const Aws::String& value) { m_imageTagsHasBeenSet = true; m_imageTags.push_back(value); return *this; }
    inline AwsEcrContainerImageDetails& AddImageTags(Aws::String&& value) { m_imageTagsHasBeenSet = true; m_imageTags.push_back(std::move(value)); return *this; }
    inline AwsEcrContainerImageDetails& AddImageTags(const char* value) { m_imageTagsHasBeenSet = true; m_imageTags.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The platform of the Amazon ECR container image.</p>
     */
    inline const Aws::String& GetPlatform() const{ return m_platform; }
    inline bool PlatformHasBeenSet() const { return m_platformHasBeenSet; }
    inline void SetPlatform(const Aws::String& value) { m_platformHasBeenSet = true; m_platform = value; }
    inline void SetPlatform(Aws::String&& value) { m_platformHasBeenSet = true; m_platform = std::move(value); }
    inline void SetPlatform(const char* value) { m_platformHasBeenSet = true; m_platform.assign(value); }
    inline AwsEcrContainerImageDetails& WithPlatform(const Aws::String& value) { SetPlatform(value); return *this;}
    inline AwsEcrContainerImageDetails& WithPlatform(Aws::String&& value) { SetPlatform(std::move(value)); return *this;}
    inline AwsEcrContainerImageDetails& WithPlatform(const char* value) { SetPlatform(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time the Amazon ECR container image was pushed.</p>
     */
    inline const Aws::Utils::DateTime& GetPushedAt() const{ return m_pushedAt; }
    inline bool PushedAtHasBeenSet() const { return m_pushedAtHasBeenSet; }
    inline void SetPushedAt(const Aws::Utils::DateTime& value) { m_pushedAtHasBeenSet = true; m_pushedAt = value; }
    inline void SetPushedAt(Aws::Utils::DateTime&& value) { m_pushedAtHasBeenSet = true; m_pushedAt = std::move(value); }
    inline AwsEcrContainerImageDetails& WithPushedAt(const Aws::Utils::DateTime& value) { SetPushedAt(value); return *this;}
    inline AwsEcrContainerImageDetails& WithPushedAt(Aws::Utils::DateTime&& value) { SetPushedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The registry the Amazon ECR container image belongs to.</p>
     */
    inline const Aws::String& GetRegistry() const{ return m_registry; }
    inline bool RegistryHasBeenSet() const { return m_registryHasBeenSet; }
    inline void SetRegistry(const Aws::String& value) { m_registryHasBeenSet = true; m_registry = value; }
    inline void SetRegistry(Aws::String&& value) { m_registryHasBeenSet = true; m_registry = std::move(value); }
    inline void SetRegistry(const char* value) { m_registryHasBeenSet = true; m_registry.assign(value); }
    inline AwsEcrContainerImageDetails& WithRegistry(const Aws::String& value) { SetRegistry(value); return *this;}
    inline AwsEcrContainerImageDetails& WithRegistry(Aws::String&& value) { SetRegistry(std::move(value)); return *this;}
    inline AwsEcrContainerImageDetails& WithRegistry(const char* value) { SetRegistry(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the repository the Amazon ECR container image resides in.</p>
     */
    inline const Aws::String& GetRepositoryName() const{ return m_repositoryName; }
    inline bool RepositoryNameHasBeenSet() const { return m_repositoryNameHasBeenSet; }
    inline void SetRepositoryName(const Aws::String& value) { m_repositoryNameHasBeenSet = true; m_repositoryName = value; }
    inline void SetRepositoryName(Aws::String&& value) { m_repositoryNameHasBeenSet = true; m_repositoryName = std::move(value); }
    inline void SetRepositoryName(const char* value) { m_repositoryNameHasBeenSet = true; m_repositoryName.assign(value); }
    inline AwsEcrContainerImageDetails& WithRepositoryName(const Aws::String& value) { SetRepositoryName(value); return *this;}
    inline AwsEcrContainerImageDetails& WithRepositoryName(Aws::String&& value) { SetRepositoryName(std::move(value)); return *this;}
    inline AwsEcrContainerImageDetails& WithRepositoryName(const char* value) { SetRepositoryName(value); return *this;}
    ///@}
  private:

    Aws::String m_architecture;
    bool m_architectureHasBeenSet = false;

    Aws::String m_author;
    bool m_authorHasBeenSet = false;

    Aws::String m_imageHash;
    bool m_imageHashHasBeenSet = false;

    Aws::Vector<Aws::String> m_imageTags;
    bool m_imageTagsHasBeenSet = false;

    Aws::String m_platform;
    bool m_platformHasBeenSet = false;

    Aws::Utils::DateTime m_pushedAt;
    bool m_pushedAtHasBeenSet = false;

    Aws::String m_registry;
    bool m_registryHasBeenSet = false;

    Aws::String m_repositoryName;
    bool m_repositoryNameHasBeenSet = false;
  };

} // namespace Model
} // namespace ECR
} // namespace Aws

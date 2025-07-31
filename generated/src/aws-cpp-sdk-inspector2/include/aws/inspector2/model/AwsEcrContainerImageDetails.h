/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
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
namespace Inspector2
{
namespace Model
{

  /**
   * <p>The image details of the Amazon ECR container image.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/AwsEcrContainerImageDetails">AWS
   * API Reference</a></p>
   */
  class AwsEcrContainerImageDetails
  {
  public:
    AWS_INSPECTOR2_API AwsEcrContainerImageDetails() = default;
    AWS_INSPECTOR2_API AwsEcrContainerImageDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API AwsEcrContainerImageDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the repository the Amazon ECR container image resides in.</p>
     */
    inline const Aws::String& GetRepositoryName() const { return m_repositoryName; }
    inline bool RepositoryNameHasBeenSet() const { return m_repositoryNameHasBeenSet; }
    template<typename RepositoryNameT = Aws::String>
    void SetRepositoryName(RepositoryNameT&& value) { m_repositoryNameHasBeenSet = true; m_repositoryName = std::forward<RepositoryNameT>(value); }
    template<typename RepositoryNameT = Aws::String>
    AwsEcrContainerImageDetails& WithRepositoryName(RepositoryNameT&& value) { SetRepositoryName(std::forward<RepositoryNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The image tags attached to the Amazon ECR container image.</p>
     */
    inline const Aws::Vector<Aws::String>& GetImageTags() const { return m_imageTags; }
    inline bool ImageTagsHasBeenSet() const { return m_imageTagsHasBeenSet; }
    template<typename ImageTagsT = Aws::Vector<Aws::String>>
    void SetImageTags(ImageTagsT&& value) { m_imageTagsHasBeenSet = true; m_imageTags = std::forward<ImageTagsT>(value); }
    template<typename ImageTagsT = Aws::Vector<Aws::String>>
    AwsEcrContainerImageDetails& WithImageTags(ImageTagsT&& value) { SetImageTags(std::forward<ImageTagsT>(value)); return *this;}
    template<typename ImageTagsT = Aws::String>
    AwsEcrContainerImageDetails& AddImageTags(ImageTagsT&& value) { m_imageTagsHasBeenSet = true; m_imageTags.emplace_back(std::forward<ImageTagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The date and time the Amazon ECR container image was pushed.</p>
     */
    inline const Aws::Utils::DateTime& GetPushedAt() const { return m_pushedAt; }
    inline bool PushedAtHasBeenSet() const { return m_pushedAtHasBeenSet; }
    template<typename PushedAtT = Aws::Utils::DateTime>
    void SetPushedAt(PushedAtT&& value) { m_pushedAtHasBeenSet = true; m_pushedAt = std::forward<PushedAtT>(value); }
    template<typename PushedAtT = Aws::Utils::DateTime>
    AwsEcrContainerImageDetails& WithPushedAt(PushedAtT&& value) { SetPushedAt(std::forward<PushedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The image author of the Amazon ECR container image.</p>
     */
    inline const Aws::String& GetAuthor() const { return m_author; }
    inline bool AuthorHasBeenSet() const { return m_authorHasBeenSet; }
    template<typename AuthorT = Aws::String>
    void SetAuthor(AuthorT&& value) { m_authorHasBeenSet = true; m_author = std::forward<AuthorT>(value); }
    template<typename AuthorT = Aws::String>
    AwsEcrContainerImageDetails& WithAuthor(AuthorT&& value) { SetAuthor(std::forward<AuthorT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The architecture of the Amazon ECR container image.</p>
     */
    inline const Aws::String& GetArchitecture() const { return m_architecture; }
    inline bool ArchitectureHasBeenSet() const { return m_architectureHasBeenSet; }
    template<typename ArchitectureT = Aws::String>
    void SetArchitecture(ArchitectureT&& value) { m_architectureHasBeenSet = true; m_architecture = std::forward<ArchitectureT>(value); }
    template<typename ArchitectureT = Aws::String>
    AwsEcrContainerImageDetails& WithArchitecture(ArchitectureT&& value) { SetArchitecture(std::forward<ArchitectureT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The image hash of the Amazon ECR container image.</p>
     */
    inline const Aws::String& GetImageHash() const { return m_imageHash; }
    inline bool ImageHashHasBeenSet() const { return m_imageHashHasBeenSet; }
    template<typename ImageHashT = Aws::String>
    void SetImageHash(ImageHashT&& value) { m_imageHashHasBeenSet = true; m_imageHash = std::forward<ImageHashT>(value); }
    template<typename ImageHashT = Aws::String>
    AwsEcrContainerImageDetails& WithImageHash(ImageHashT&& value) { SetImageHash(std::forward<ImageHashT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The registry for the Amazon ECR container image.</p>
     */
    inline const Aws::String& GetRegistry() const { return m_registry; }
    inline bool RegistryHasBeenSet() const { return m_registryHasBeenSet; }
    template<typename RegistryT = Aws::String>
    void SetRegistry(RegistryT&& value) { m_registryHasBeenSet = true; m_registry = std::forward<RegistryT>(value); }
    template<typename RegistryT = Aws::String>
    AwsEcrContainerImageDetails& WithRegistry(RegistryT&& value) { SetRegistry(std::forward<RegistryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The platform of the Amazon ECR container image.</p>
     */
    inline const Aws::String& GetPlatform() const { return m_platform; }
    inline bool PlatformHasBeenSet() const { return m_platformHasBeenSet; }
    template<typename PlatformT = Aws::String>
    void SetPlatform(PlatformT&& value) { m_platformHasBeenSet = true; m_platform = std::forward<PlatformT>(value); }
    template<typename PlatformT = Aws::String>
    AwsEcrContainerImageDetails& WithPlatform(PlatformT&& value) { SetPlatform(std::forward<PlatformT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The last time an Amazon ECR image was used in an Amazon ECS task or Amazon
     * EKS pod.</p>
     */
    inline const Aws::Utils::DateTime& GetLastInUseAt() const { return m_lastInUseAt; }
    inline bool LastInUseAtHasBeenSet() const { return m_lastInUseAtHasBeenSet; }
    template<typename LastInUseAtT = Aws::Utils::DateTime>
    void SetLastInUseAt(LastInUseAtT&& value) { m_lastInUseAtHasBeenSet = true; m_lastInUseAt = std::forward<LastInUseAtT>(value); }
    template<typename LastInUseAtT = Aws::Utils::DateTime>
    AwsEcrContainerImageDetails& WithLastInUseAt(LastInUseAtT&& value) { SetLastInUseAt(std::forward<LastInUseAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of Amazon ECS tasks or Amazon EKS pods where the Amazon ECR
     * container image is in use.</p>
     */
    inline long long GetInUseCount() const { return m_inUseCount; }
    inline bool InUseCountHasBeenSet() const { return m_inUseCountHasBeenSet; }
    inline void SetInUseCount(long long value) { m_inUseCountHasBeenSet = true; m_inUseCount = value; }
    inline AwsEcrContainerImageDetails& WithInUseCount(long long value) { SetInUseCount(value); return *this;}
    ///@}
  private:

    Aws::String m_repositoryName;
    bool m_repositoryNameHasBeenSet = false;

    Aws::Vector<Aws::String> m_imageTags;
    bool m_imageTagsHasBeenSet = false;

    Aws::Utils::DateTime m_pushedAt{};
    bool m_pushedAtHasBeenSet = false;

    Aws::String m_author;
    bool m_authorHasBeenSet = false;

    Aws::String m_architecture;
    bool m_architectureHasBeenSet = false;

    Aws::String m_imageHash;
    bool m_imageHashHasBeenSet = false;

    Aws::String m_registry;
    bool m_registryHasBeenSet = false;

    Aws::String m_platform;
    bool m_platformHasBeenSet = false;

    Aws::Utils::DateTime m_lastInUseAt{};
    bool m_lastInUseAtHasBeenSet = false;

    long long m_inUseCount{0};
    bool m_inUseCountHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/inspector2/Inspector2_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Inspector2 {
namespace Model {

/**
 * <p>Contains details about a container image involved in a finding.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/Image">AWS
 * API Reference</a></p>
 */
class Image {
 public:
  AWS_INSPECTOR2_API Image() = default;
  AWS_INSPECTOR2_API Image(Aws::Utils::Json::JsonView jsonValue);
  AWS_INSPECTOR2_API Image& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_INSPECTOR2_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The name of the repository the container image resides in.</p>
   */
  inline const Aws::String& GetRepositoryName() const { return m_repositoryName; }
  inline bool RepositoryNameHasBeenSet() const { return m_repositoryNameHasBeenSet; }
  template <typename RepositoryNameT = Aws::String>
  void SetRepositoryName(RepositoryNameT&& value) {
    m_repositoryNameHasBeenSet = true;
    m_repositoryName = std::forward<RepositoryNameT>(value);
  }
  template <typename RepositoryNameT = Aws::String>
  Image& WithRepositoryName(RepositoryNameT&& value) {
    SetRepositoryName(std::forward<RepositoryNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The registry for the container image.</p>
   */
  inline const Aws::String& GetRegistry() const { return m_registry; }
  inline bool RegistryHasBeenSet() const { return m_registryHasBeenSet; }
  template <typename RegistryT = Aws::String>
  void SetRegistry(RegistryT&& value) {
    m_registryHasBeenSet = true;
    m_registry = std::forward<RegistryT>(value);
  }
  template <typename RegistryT = Aws::String>
  Image& WithRegistry(RegistryT&& value) {
    SetRegistry(std::forward<RegistryT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The image tags attached to the container image.</p>
   */
  inline const Aws::Vector<Aws::String>& GetImageTags() const { return m_imageTags; }
  inline bool ImageTagsHasBeenSet() const { return m_imageTagsHasBeenSet; }
  template <typename ImageTagsT = Aws::Vector<Aws::String>>
  void SetImageTags(ImageTagsT&& value) {
    m_imageTagsHasBeenSet = true;
    m_imageTags = std::forward<ImageTagsT>(value);
  }
  template <typename ImageTagsT = Aws::Vector<Aws::String>>
  Image& WithImageTags(ImageTagsT&& value) {
    SetImageTags(std::forward<ImageTagsT>(value));
    return *this;
  }
  template <typename ImageTagsT = Aws::String>
  Image& AddImageTags(ImageTagsT&& value) {
    m_imageTagsHasBeenSet = true;
    m_imageTags.emplace_back(std::forward<ImageTagsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The image digest of the container image.</p>
   */
  inline const Aws::String& GetImageDigest() const { return m_imageDigest; }
  inline bool ImageDigestHasBeenSet() const { return m_imageDigestHasBeenSet; }
  template <typename ImageDigestT = Aws::String>
  void SetImageDigest(ImageDigestT&& value) {
    m_imageDigestHasBeenSet = true;
    m_imageDigest = std::forward<ImageDigestT>(value);
  }
  template <typename ImageDigestT = Aws::String>
  Image& WithImageDigest(ImageDigestT&& value) {
    SetImageDigest(std::forward<ImageDigestT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time the container image was pushed.</p>
   */
  inline const Aws::Utils::DateTime& GetPushedAt() const { return m_pushedAt; }
  inline bool PushedAtHasBeenSet() const { return m_pushedAtHasBeenSet; }
  template <typename PushedAtT = Aws::Utils::DateTime>
  void SetPushedAt(PushedAtT&& value) {
    m_pushedAtHasBeenSet = true;
    m_pushedAt = std::forward<PushedAtT>(value);
  }
  template <typename PushedAtT = Aws::Utils::DateTime>
  Image& WithPushedAt(PushedAtT&& value) {
    SetPushedAt(std::forward<PushedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The architecture of the container image.</p>
   */
  inline const Aws::String& GetArchitecture() const { return m_architecture; }
  inline bool ArchitectureHasBeenSet() const { return m_architectureHasBeenSet; }
  template <typename ArchitectureT = Aws::String>
  void SetArchitecture(ArchitectureT&& value) {
    m_architectureHasBeenSet = true;
    m_architecture = std::forward<ArchitectureT>(value);
  }
  template <typename ArchitectureT = Aws::String>
  Image& WithArchitecture(ArchitectureT&& value) {
    SetArchitecture(std::forward<ArchitectureT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The author of the container image.</p>
   */
  inline const Aws::String& GetAuthor() const { return m_author; }
  inline bool AuthorHasBeenSet() const { return m_authorHasBeenSet; }
  template <typename AuthorT = Aws::String>
  void SetAuthor(AuthorT&& value) {
    m_authorHasBeenSet = true;
    m_author = std::forward<AuthorT>(value);
  }
  template <typename AuthorT = Aws::String>
  Image& WithAuthor(AuthorT&& value) {
    SetAuthor(std::forward<AuthorT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of times the container image is in use.</p>
   */
  inline long long GetInUseCount() const { return m_inUseCount; }
  inline bool InUseCountHasBeenSet() const { return m_inUseCountHasBeenSet; }
  inline void SetInUseCount(long long value) {
    m_inUseCountHasBeenSet = true;
    m_inUseCount = value;
  }
  inline Image& WithInUseCount(long long value) {
    SetInUseCount(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The last time the container image was in use.</p>
   */
  inline const Aws::Utils::DateTime& GetLastInUseAt() const { return m_lastInUseAt; }
  inline bool LastInUseAtHasBeenSet() const { return m_lastInUseAtHasBeenSet; }
  template <typename LastInUseAtT = Aws::Utils::DateTime>
  void SetLastInUseAt(LastInUseAtT&& value) {
    m_lastInUseAtHasBeenSet = true;
    m_lastInUseAt = std::forward<LastInUseAtT>(value);
  }
  template <typename LastInUseAtT = Aws::Utils::DateTime>
  Image& WithLastInUseAt(LastInUseAtT&& value) {
    SetLastInUseAt(std::forward<LastInUseAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The platform of the container image.</p>
   */
  inline const Aws::String& GetPlatform() const { return m_platform; }
  inline bool PlatformHasBeenSet() const { return m_platformHasBeenSet; }
  template <typename PlatformT = Aws::String>
  void SetPlatform(PlatformT&& value) {
    m_platformHasBeenSet = true;
    m_platform = std::forward<PlatformT>(value);
  }
  template <typename PlatformT = Aws::String>
  Image& WithPlatform(PlatformT&& value) {
    SetPlatform(std::forward<PlatformT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_repositoryName;

  Aws::String m_registry;

  Aws::Vector<Aws::String> m_imageTags;

  Aws::String m_imageDigest;

  Aws::Utils::DateTime m_pushedAt{};

  Aws::String m_architecture;

  Aws::String m_author;

  long long m_inUseCount{0};

  Aws::Utils::DateTime m_lastInUseAt{};

  Aws::String m_platform;
  bool m_repositoryNameHasBeenSet = false;
  bool m_registryHasBeenSet = false;
  bool m_imageTagsHasBeenSet = false;
  bool m_imageDigestHasBeenSet = false;
  bool m_pushedAtHasBeenSet = false;
  bool m_architectureHasBeenSet = false;
  bool m_authorHasBeenSet = false;
  bool m_inUseCountHasBeenSet = false;
  bool m_lastInUseAtHasBeenSet = false;
  bool m_platformHasBeenSet = false;
};

}  // namespace Model
}  // namespace Inspector2
}  // namespace Aws

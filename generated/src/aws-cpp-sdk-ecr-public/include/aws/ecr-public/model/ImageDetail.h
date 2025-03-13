/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecr-public/ECRPublic_EXPORTS.h>
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
namespace ECRPublic
{
namespace Model
{

  /**
   * <p>An object that describes an image that's returned by a <a>DescribeImages</a>
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-public-2020-10-30/ImageDetail">AWS
   * API Reference</a></p>
   */
  class ImageDetail
  {
  public:
    AWS_ECRPUBLIC_API ImageDetail() = default;
    AWS_ECRPUBLIC_API ImageDetail(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECRPUBLIC_API ImageDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECRPUBLIC_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Web Services account ID that's associated with the public registry
     * where this image belongs.</p>
     */
    inline const Aws::String& GetRegistryId() const { return m_registryId; }
    inline bool RegistryIdHasBeenSet() const { return m_registryIdHasBeenSet; }
    template<typename RegistryIdT = Aws::String>
    void SetRegistryId(RegistryIdT&& value) { m_registryIdHasBeenSet = true; m_registryId = std::forward<RegistryIdT>(value); }
    template<typename RegistryIdT = Aws::String>
    ImageDetail& WithRegistryId(RegistryIdT&& value) { SetRegistryId(std::forward<RegistryIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the repository where this image belongs.</p>
     */
    inline const Aws::String& GetRepositoryName() const { return m_repositoryName; }
    inline bool RepositoryNameHasBeenSet() const { return m_repositoryNameHasBeenSet; }
    template<typename RepositoryNameT = Aws::String>
    void SetRepositoryName(RepositoryNameT&& value) { m_repositoryNameHasBeenSet = true; m_repositoryName = std::forward<RepositoryNameT>(value); }
    template<typename RepositoryNameT = Aws::String>
    ImageDetail& WithRepositoryName(RepositoryNameT&& value) { SetRepositoryName(std::forward<RepositoryNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <code>sha256</code> digest of the image manifest.</p>
     */
    inline const Aws::String& GetImageDigest() const { return m_imageDigest; }
    inline bool ImageDigestHasBeenSet() const { return m_imageDigestHasBeenSet; }
    template<typename ImageDigestT = Aws::String>
    void SetImageDigest(ImageDigestT&& value) { m_imageDigestHasBeenSet = true; m_imageDigest = std::forward<ImageDigestT>(value); }
    template<typename ImageDigestT = Aws::String>
    ImageDetail& WithImageDigest(ImageDigestT&& value) { SetImageDigest(std::forward<ImageDigestT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of tags that's associated with this image.</p>
     */
    inline const Aws::Vector<Aws::String>& GetImageTags() const { return m_imageTags; }
    inline bool ImageTagsHasBeenSet() const { return m_imageTagsHasBeenSet; }
    template<typename ImageTagsT = Aws::Vector<Aws::String>>
    void SetImageTags(ImageTagsT&& value) { m_imageTagsHasBeenSet = true; m_imageTags = std::forward<ImageTagsT>(value); }
    template<typename ImageTagsT = Aws::Vector<Aws::String>>
    ImageDetail& WithImageTags(ImageTagsT&& value) { SetImageTags(std::forward<ImageTagsT>(value)); return *this;}
    template<typename ImageTagsT = Aws::String>
    ImageDetail& AddImageTags(ImageTagsT&& value) { m_imageTagsHasBeenSet = true; m_imageTags.emplace_back(std::forward<ImageTagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The size, in bytes, of the image in the repository.</p> <p>If the image is a
     * manifest list, this is the max size of all manifests in the list.</p> 
     * <p>Beginning with Docker version 1.9, the Docker client compresses image layers
     * before pushing them to a V2 Docker registry. The output of the <code>docker
     * images</code> command shows the uncompressed image size, so it might return a
     * larger image size than the image sizes that are returned by
     * <a>DescribeImages</a>.</p> 
     */
    inline long long GetImageSizeInBytes() const { return m_imageSizeInBytes; }
    inline bool ImageSizeInBytesHasBeenSet() const { return m_imageSizeInBytesHasBeenSet; }
    inline void SetImageSizeInBytes(long long value) { m_imageSizeInBytesHasBeenSet = true; m_imageSizeInBytes = value; }
    inline ImageDetail& WithImageSizeInBytes(long long value) { SetImageSizeInBytes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time, expressed in standard JavaScript date format, that the
     * current image was pushed to the repository at. </p>
     */
    inline const Aws::Utils::DateTime& GetImagePushedAt() const { return m_imagePushedAt; }
    inline bool ImagePushedAtHasBeenSet() const { return m_imagePushedAtHasBeenSet; }
    template<typename ImagePushedAtT = Aws::Utils::DateTime>
    void SetImagePushedAt(ImagePushedAtT&& value) { m_imagePushedAtHasBeenSet = true; m_imagePushedAt = std::forward<ImagePushedAtT>(value); }
    template<typename ImagePushedAtT = Aws::Utils::DateTime>
    ImageDetail& WithImagePushedAt(ImagePushedAtT&& value) { SetImagePushedAt(std::forward<ImagePushedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The media type of the image manifest.</p>
     */
    inline const Aws::String& GetImageManifestMediaType() const { return m_imageManifestMediaType; }
    inline bool ImageManifestMediaTypeHasBeenSet() const { return m_imageManifestMediaTypeHasBeenSet; }
    template<typename ImageManifestMediaTypeT = Aws::String>
    void SetImageManifestMediaType(ImageManifestMediaTypeT&& value) { m_imageManifestMediaTypeHasBeenSet = true; m_imageManifestMediaType = std::forward<ImageManifestMediaTypeT>(value); }
    template<typename ImageManifestMediaTypeT = Aws::String>
    ImageDetail& WithImageManifestMediaType(ImageManifestMediaTypeT&& value) { SetImageManifestMediaType(std::forward<ImageManifestMediaTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The artifact media type of the image.</p>
     */
    inline const Aws::String& GetArtifactMediaType() const { return m_artifactMediaType; }
    inline bool ArtifactMediaTypeHasBeenSet() const { return m_artifactMediaTypeHasBeenSet; }
    template<typename ArtifactMediaTypeT = Aws::String>
    void SetArtifactMediaType(ArtifactMediaTypeT&& value) { m_artifactMediaTypeHasBeenSet = true; m_artifactMediaType = std::forward<ArtifactMediaTypeT>(value); }
    template<typename ArtifactMediaTypeT = Aws::String>
    ImageDetail& WithArtifactMediaType(ArtifactMediaTypeT&& value) { SetArtifactMediaType(std::forward<ArtifactMediaTypeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_registryId;
    bool m_registryIdHasBeenSet = false;

    Aws::String m_repositoryName;
    bool m_repositoryNameHasBeenSet = false;

    Aws::String m_imageDigest;
    bool m_imageDigestHasBeenSet = false;

    Aws::Vector<Aws::String> m_imageTags;
    bool m_imageTagsHasBeenSet = false;

    long long m_imageSizeInBytes{0};
    bool m_imageSizeInBytesHasBeenSet = false;

    Aws::Utils::DateTime m_imagePushedAt{};
    bool m_imagePushedAtHasBeenSet = false;

    Aws::String m_imageManifestMediaType;
    bool m_imageManifestMediaTypeHasBeenSet = false;

    Aws::String m_artifactMediaType;
    bool m_artifactMediaTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace ECRPublic
} // namespace Aws

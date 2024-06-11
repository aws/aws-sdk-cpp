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
    AWS_ECRPUBLIC_API ImageDetail();
    AWS_ECRPUBLIC_API ImageDetail(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECRPUBLIC_API ImageDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECRPUBLIC_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Web Services account ID that's associated with the public registry
     * where this image belongs.</p>
     */
    inline const Aws::String& GetRegistryId() const{ return m_registryId; }
    inline bool RegistryIdHasBeenSet() const { return m_registryIdHasBeenSet; }
    inline void SetRegistryId(const Aws::String& value) { m_registryIdHasBeenSet = true; m_registryId = value; }
    inline void SetRegistryId(Aws::String&& value) { m_registryIdHasBeenSet = true; m_registryId = std::move(value); }
    inline void SetRegistryId(const char* value) { m_registryIdHasBeenSet = true; m_registryId.assign(value); }
    inline ImageDetail& WithRegistryId(const Aws::String& value) { SetRegistryId(value); return *this;}
    inline ImageDetail& WithRegistryId(Aws::String&& value) { SetRegistryId(std::move(value)); return *this;}
    inline ImageDetail& WithRegistryId(const char* value) { SetRegistryId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the repository where this image belongs.</p>
     */
    inline const Aws::String& GetRepositoryName() const{ return m_repositoryName; }
    inline bool RepositoryNameHasBeenSet() const { return m_repositoryNameHasBeenSet; }
    inline void SetRepositoryName(const Aws::String& value) { m_repositoryNameHasBeenSet = true; m_repositoryName = value; }
    inline void SetRepositoryName(Aws::String&& value) { m_repositoryNameHasBeenSet = true; m_repositoryName = std::move(value); }
    inline void SetRepositoryName(const char* value) { m_repositoryNameHasBeenSet = true; m_repositoryName.assign(value); }
    inline ImageDetail& WithRepositoryName(const Aws::String& value) { SetRepositoryName(value); return *this;}
    inline ImageDetail& WithRepositoryName(Aws::String&& value) { SetRepositoryName(std::move(value)); return *this;}
    inline ImageDetail& WithRepositoryName(const char* value) { SetRepositoryName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <code>sha256</code> digest of the image manifest.</p>
     */
    inline const Aws::String& GetImageDigest() const{ return m_imageDigest; }
    inline bool ImageDigestHasBeenSet() const { return m_imageDigestHasBeenSet; }
    inline void SetImageDigest(const Aws::String& value) { m_imageDigestHasBeenSet = true; m_imageDigest = value; }
    inline void SetImageDigest(Aws::String&& value) { m_imageDigestHasBeenSet = true; m_imageDigest = std::move(value); }
    inline void SetImageDigest(const char* value) { m_imageDigestHasBeenSet = true; m_imageDigest.assign(value); }
    inline ImageDetail& WithImageDigest(const Aws::String& value) { SetImageDigest(value); return *this;}
    inline ImageDetail& WithImageDigest(Aws::String&& value) { SetImageDigest(std::move(value)); return *this;}
    inline ImageDetail& WithImageDigest(const char* value) { SetImageDigest(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of tags that's associated with this image.</p>
     */
    inline const Aws::Vector<Aws::String>& GetImageTags() const{ return m_imageTags; }
    inline bool ImageTagsHasBeenSet() const { return m_imageTagsHasBeenSet; }
    inline void SetImageTags(const Aws::Vector<Aws::String>& value) { m_imageTagsHasBeenSet = true; m_imageTags = value; }
    inline void SetImageTags(Aws::Vector<Aws::String>&& value) { m_imageTagsHasBeenSet = true; m_imageTags = std::move(value); }
    inline ImageDetail& WithImageTags(const Aws::Vector<Aws::String>& value) { SetImageTags(value); return *this;}
    inline ImageDetail& WithImageTags(Aws::Vector<Aws::String>&& value) { SetImageTags(std::move(value)); return *this;}
    inline ImageDetail& AddImageTags(const Aws::String& value) { m_imageTagsHasBeenSet = true; m_imageTags.push_back(value); return *this; }
    inline ImageDetail& AddImageTags(Aws::String&& value) { m_imageTagsHasBeenSet = true; m_imageTags.push_back(std::move(value)); return *this; }
    inline ImageDetail& AddImageTags(const char* value) { m_imageTagsHasBeenSet = true; m_imageTags.push_back(value); return *this; }
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
    inline long long GetImageSizeInBytes() const{ return m_imageSizeInBytes; }
    inline bool ImageSizeInBytesHasBeenSet() const { return m_imageSizeInBytesHasBeenSet; }
    inline void SetImageSizeInBytes(long long value) { m_imageSizeInBytesHasBeenSet = true; m_imageSizeInBytes = value; }
    inline ImageDetail& WithImageSizeInBytes(long long value) { SetImageSizeInBytes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time, expressed in standard JavaScript date format, that the
     * current image was pushed to the repository at. </p>
     */
    inline const Aws::Utils::DateTime& GetImagePushedAt() const{ return m_imagePushedAt; }
    inline bool ImagePushedAtHasBeenSet() const { return m_imagePushedAtHasBeenSet; }
    inline void SetImagePushedAt(const Aws::Utils::DateTime& value) { m_imagePushedAtHasBeenSet = true; m_imagePushedAt = value; }
    inline void SetImagePushedAt(Aws::Utils::DateTime&& value) { m_imagePushedAtHasBeenSet = true; m_imagePushedAt = std::move(value); }
    inline ImageDetail& WithImagePushedAt(const Aws::Utils::DateTime& value) { SetImagePushedAt(value); return *this;}
    inline ImageDetail& WithImagePushedAt(Aws::Utils::DateTime&& value) { SetImagePushedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The media type of the image manifest.</p>
     */
    inline const Aws::String& GetImageManifestMediaType() const{ return m_imageManifestMediaType; }
    inline bool ImageManifestMediaTypeHasBeenSet() const { return m_imageManifestMediaTypeHasBeenSet; }
    inline void SetImageManifestMediaType(const Aws::String& value) { m_imageManifestMediaTypeHasBeenSet = true; m_imageManifestMediaType = value; }
    inline void SetImageManifestMediaType(Aws::String&& value) { m_imageManifestMediaTypeHasBeenSet = true; m_imageManifestMediaType = std::move(value); }
    inline void SetImageManifestMediaType(const char* value) { m_imageManifestMediaTypeHasBeenSet = true; m_imageManifestMediaType.assign(value); }
    inline ImageDetail& WithImageManifestMediaType(const Aws::String& value) { SetImageManifestMediaType(value); return *this;}
    inline ImageDetail& WithImageManifestMediaType(Aws::String&& value) { SetImageManifestMediaType(std::move(value)); return *this;}
    inline ImageDetail& WithImageManifestMediaType(const char* value) { SetImageManifestMediaType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The artifact media type of the image.</p>
     */
    inline const Aws::String& GetArtifactMediaType() const{ return m_artifactMediaType; }
    inline bool ArtifactMediaTypeHasBeenSet() const { return m_artifactMediaTypeHasBeenSet; }
    inline void SetArtifactMediaType(const Aws::String& value) { m_artifactMediaTypeHasBeenSet = true; m_artifactMediaType = value; }
    inline void SetArtifactMediaType(Aws::String&& value) { m_artifactMediaTypeHasBeenSet = true; m_artifactMediaType = std::move(value); }
    inline void SetArtifactMediaType(const char* value) { m_artifactMediaTypeHasBeenSet = true; m_artifactMediaType.assign(value); }
    inline ImageDetail& WithArtifactMediaType(const Aws::String& value) { SetArtifactMediaType(value); return *this;}
    inline ImageDetail& WithArtifactMediaType(Aws::String&& value) { SetArtifactMediaType(std::move(value)); return *this;}
    inline ImageDetail& WithArtifactMediaType(const char* value) { SetArtifactMediaType(value); return *this;}
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

    long long m_imageSizeInBytes;
    bool m_imageSizeInBytesHasBeenSet = false;

    Aws::Utils::DateTime m_imagePushedAt;
    bool m_imagePushedAtHasBeenSet = false;

    Aws::String m_imageManifestMediaType;
    bool m_imageManifestMediaTypeHasBeenSet = false;

    Aws::String m_artifactMediaType;
    bool m_artifactMediaTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace ECRPublic
} // namespace Aws

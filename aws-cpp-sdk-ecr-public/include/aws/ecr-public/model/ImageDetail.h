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
   * <p>An object that describes an image returned by a <a>DescribeImages</a>
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


    /**
     * <p>The AWS account ID associated with the public registry to which this image
     * belongs.</p>
     */
    inline const Aws::String& GetRegistryId() const{ return m_registryId; }

    /**
     * <p>The AWS account ID associated with the public registry to which this image
     * belongs.</p>
     */
    inline bool RegistryIdHasBeenSet() const { return m_registryIdHasBeenSet; }

    /**
     * <p>The AWS account ID associated with the public registry to which this image
     * belongs.</p>
     */
    inline void SetRegistryId(const Aws::String& value) { m_registryIdHasBeenSet = true; m_registryId = value; }

    /**
     * <p>The AWS account ID associated with the public registry to which this image
     * belongs.</p>
     */
    inline void SetRegistryId(Aws::String&& value) { m_registryIdHasBeenSet = true; m_registryId = std::move(value); }

    /**
     * <p>The AWS account ID associated with the public registry to which this image
     * belongs.</p>
     */
    inline void SetRegistryId(const char* value) { m_registryIdHasBeenSet = true; m_registryId.assign(value); }

    /**
     * <p>The AWS account ID associated with the public registry to which this image
     * belongs.</p>
     */
    inline ImageDetail& WithRegistryId(const Aws::String& value) { SetRegistryId(value); return *this;}

    /**
     * <p>The AWS account ID associated with the public registry to which this image
     * belongs.</p>
     */
    inline ImageDetail& WithRegistryId(Aws::String&& value) { SetRegistryId(std::move(value)); return *this;}

    /**
     * <p>The AWS account ID associated with the public registry to which this image
     * belongs.</p>
     */
    inline ImageDetail& WithRegistryId(const char* value) { SetRegistryId(value); return *this;}


    /**
     * <p>The name of the repository to which this image belongs.</p>
     */
    inline const Aws::String& GetRepositoryName() const{ return m_repositoryName; }

    /**
     * <p>The name of the repository to which this image belongs.</p>
     */
    inline bool RepositoryNameHasBeenSet() const { return m_repositoryNameHasBeenSet; }

    /**
     * <p>The name of the repository to which this image belongs.</p>
     */
    inline void SetRepositoryName(const Aws::String& value) { m_repositoryNameHasBeenSet = true; m_repositoryName = value; }

    /**
     * <p>The name of the repository to which this image belongs.</p>
     */
    inline void SetRepositoryName(Aws::String&& value) { m_repositoryNameHasBeenSet = true; m_repositoryName = std::move(value); }

    /**
     * <p>The name of the repository to which this image belongs.</p>
     */
    inline void SetRepositoryName(const char* value) { m_repositoryNameHasBeenSet = true; m_repositoryName.assign(value); }

    /**
     * <p>The name of the repository to which this image belongs.</p>
     */
    inline ImageDetail& WithRepositoryName(const Aws::String& value) { SetRepositoryName(value); return *this;}

    /**
     * <p>The name of the repository to which this image belongs.</p>
     */
    inline ImageDetail& WithRepositoryName(Aws::String&& value) { SetRepositoryName(std::move(value)); return *this;}

    /**
     * <p>The name of the repository to which this image belongs.</p>
     */
    inline ImageDetail& WithRepositoryName(const char* value) { SetRepositoryName(value); return *this;}


    /**
     * <p>The <code>sha256</code> digest of the image manifest.</p>
     */
    inline const Aws::String& GetImageDigest() const{ return m_imageDigest; }

    /**
     * <p>The <code>sha256</code> digest of the image manifest.</p>
     */
    inline bool ImageDigestHasBeenSet() const { return m_imageDigestHasBeenSet; }

    /**
     * <p>The <code>sha256</code> digest of the image manifest.</p>
     */
    inline void SetImageDigest(const Aws::String& value) { m_imageDigestHasBeenSet = true; m_imageDigest = value; }

    /**
     * <p>The <code>sha256</code> digest of the image manifest.</p>
     */
    inline void SetImageDigest(Aws::String&& value) { m_imageDigestHasBeenSet = true; m_imageDigest = std::move(value); }

    /**
     * <p>The <code>sha256</code> digest of the image manifest.</p>
     */
    inline void SetImageDigest(const char* value) { m_imageDigestHasBeenSet = true; m_imageDigest.assign(value); }

    /**
     * <p>The <code>sha256</code> digest of the image manifest.</p>
     */
    inline ImageDetail& WithImageDigest(const Aws::String& value) { SetImageDigest(value); return *this;}

    /**
     * <p>The <code>sha256</code> digest of the image manifest.</p>
     */
    inline ImageDetail& WithImageDigest(Aws::String&& value) { SetImageDigest(std::move(value)); return *this;}

    /**
     * <p>The <code>sha256</code> digest of the image manifest.</p>
     */
    inline ImageDetail& WithImageDigest(const char* value) { SetImageDigest(value); return *this;}


    /**
     * <p>The list of tags associated with this image.</p>
     */
    inline const Aws::Vector<Aws::String>& GetImageTags() const{ return m_imageTags; }

    /**
     * <p>The list of tags associated with this image.</p>
     */
    inline bool ImageTagsHasBeenSet() const { return m_imageTagsHasBeenSet; }

    /**
     * <p>The list of tags associated with this image.</p>
     */
    inline void SetImageTags(const Aws::Vector<Aws::String>& value) { m_imageTagsHasBeenSet = true; m_imageTags = value; }

    /**
     * <p>The list of tags associated with this image.</p>
     */
    inline void SetImageTags(Aws::Vector<Aws::String>&& value) { m_imageTagsHasBeenSet = true; m_imageTags = std::move(value); }

    /**
     * <p>The list of tags associated with this image.</p>
     */
    inline ImageDetail& WithImageTags(const Aws::Vector<Aws::String>& value) { SetImageTags(value); return *this;}

    /**
     * <p>The list of tags associated with this image.</p>
     */
    inline ImageDetail& WithImageTags(Aws::Vector<Aws::String>&& value) { SetImageTags(std::move(value)); return *this;}

    /**
     * <p>The list of tags associated with this image.</p>
     */
    inline ImageDetail& AddImageTags(const Aws::String& value) { m_imageTagsHasBeenSet = true; m_imageTags.push_back(value); return *this; }

    /**
     * <p>The list of tags associated with this image.</p>
     */
    inline ImageDetail& AddImageTags(Aws::String&& value) { m_imageTagsHasBeenSet = true; m_imageTags.push_back(std::move(value)); return *this; }

    /**
     * <p>The list of tags associated with this image.</p>
     */
    inline ImageDetail& AddImageTags(const char* value) { m_imageTagsHasBeenSet = true; m_imageTags.push_back(value); return *this; }


    /**
     * <p>The size, in bytes, of the image in the repository.</p> <p>If the image is a
     * manifest list, this will be the max size of all manifests in the list.</p>
     *  <p>Beginning with Docker version 1.9, the Docker client compresses image
     * layers before pushing them to a V2 Docker registry. The output of the
     * <code>docker images</code> command shows the uncompressed image size, so it may
     * return a larger image size than the image sizes returned by
     * <a>DescribeImages</a>.</p> 
     */
    inline long long GetImageSizeInBytes() const{ return m_imageSizeInBytes; }

    /**
     * <p>The size, in bytes, of the image in the repository.</p> <p>If the image is a
     * manifest list, this will be the max size of all manifests in the list.</p>
     *  <p>Beginning with Docker version 1.9, the Docker client compresses image
     * layers before pushing them to a V2 Docker registry. The output of the
     * <code>docker images</code> command shows the uncompressed image size, so it may
     * return a larger image size than the image sizes returned by
     * <a>DescribeImages</a>.</p> 
     */
    inline bool ImageSizeInBytesHasBeenSet() const { return m_imageSizeInBytesHasBeenSet; }

    /**
     * <p>The size, in bytes, of the image in the repository.</p> <p>If the image is a
     * manifest list, this will be the max size of all manifests in the list.</p>
     *  <p>Beginning with Docker version 1.9, the Docker client compresses image
     * layers before pushing them to a V2 Docker registry. The output of the
     * <code>docker images</code> command shows the uncompressed image size, so it may
     * return a larger image size than the image sizes returned by
     * <a>DescribeImages</a>.</p> 
     */
    inline void SetImageSizeInBytes(long long value) { m_imageSizeInBytesHasBeenSet = true; m_imageSizeInBytes = value; }

    /**
     * <p>The size, in bytes, of the image in the repository.</p> <p>If the image is a
     * manifest list, this will be the max size of all manifests in the list.</p>
     *  <p>Beginning with Docker version 1.9, the Docker client compresses image
     * layers before pushing them to a V2 Docker registry. The output of the
     * <code>docker images</code> command shows the uncompressed image size, so it may
     * return a larger image size than the image sizes returned by
     * <a>DescribeImages</a>.</p> 
     */
    inline ImageDetail& WithImageSizeInBytes(long long value) { SetImageSizeInBytes(value); return *this;}


    /**
     * <p>The date and time, expressed in standard JavaScript date format, at which the
     * current image was pushed to the repository. </p>
     */
    inline const Aws::Utils::DateTime& GetImagePushedAt() const{ return m_imagePushedAt; }

    /**
     * <p>The date and time, expressed in standard JavaScript date format, at which the
     * current image was pushed to the repository. </p>
     */
    inline bool ImagePushedAtHasBeenSet() const { return m_imagePushedAtHasBeenSet; }

    /**
     * <p>The date and time, expressed in standard JavaScript date format, at which the
     * current image was pushed to the repository. </p>
     */
    inline void SetImagePushedAt(const Aws::Utils::DateTime& value) { m_imagePushedAtHasBeenSet = true; m_imagePushedAt = value; }

    /**
     * <p>The date and time, expressed in standard JavaScript date format, at which the
     * current image was pushed to the repository. </p>
     */
    inline void SetImagePushedAt(Aws::Utils::DateTime&& value) { m_imagePushedAtHasBeenSet = true; m_imagePushedAt = std::move(value); }

    /**
     * <p>The date and time, expressed in standard JavaScript date format, at which the
     * current image was pushed to the repository. </p>
     */
    inline ImageDetail& WithImagePushedAt(const Aws::Utils::DateTime& value) { SetImagePushedAt(value); return *this;}

    /**
     * <p>The date and time, expressed in standard JavaScript date format, at which the
     * current image was pushed to the repository. </p>
     */
    inline ImageDetail& WithImagePushedAt(Aws::Utils::DateTime&& value) { SetImagePushedAt(std::move(value)); return *this;}


    /**
     * <p>The media type of the image manifest.</p>
     */
    inline const Aws::String& GetImageManifestMediaType() const{ return m_imageManifestMediaType; }

    /**
     * <p>The media type of the image manifest.</p>
     */
    inline bool ImageManifestMediaTypeHasBeenSet() const { return m_imageManifestMediaTypeHasBeenSet; }

    /**
     * <p>The media type of the image manifest.</p>
     */
    inline void SetImageManifestMediaType(const Aws::String& value) { m_imageManifestMediaTypeHasBeenSet = true; m_imageManifestMediaType = value; }

    /**
     * <p>The media type of the image manifest.</p>
     */
    inline void SetImageManifestMediaType(Aws::String&& value) { m_imageManifestMediaTypeHasBeenSet = true; m_imageManifestMediaType = std::move(value); }

    /**
     * <p>The media type of the image manifest.</p>
     */
    inline void SetImageManifestMediaType(const char* value) { m_imageManifestMediaTypeHasBeenSet = true; m_imageManifestMediaType.assign(value); }

    /**
     * <p>The media type of the image manifest.</p>
     */
    inline ImageDetail& WithImageManifestMediaType(const Aws::String& value) { SetImageManifestMediaType(value); return *this;}

    /**
     * <p>The media type of the image manifest.</p>
     */
    inline ImageDetail& WithImageManifestMediaType(Aws::String&& value) { SetImageManifestMediaType(std::move(value)); return *this;}

    /**
     * <p>The media type of the image manifest.</p>
     */
    inline ImageDetail& WithImageManifestMediaType(const char* value) { SetImageManifestMediaType(value); return *this;}


    /**
     * <p>The artifact media type of the image.</p>
     */
    inline const Aws::String& GetArtifactMediaType() const{ return m_artifactMediaType; }

    /**
     * <p>The artifact media type of the image.</p>
     */
    inline bool ArtifactMediaTypeHasBeenSet() const { return m_artifactMediaTypeHasBeenSet; }

    /**
     * <p>The artifact media type of the image.</p>
     */
    inline void SetArtifactMediaType(const Aws::String& value) { m_artifactMediaTypeHasBeenSet = true; m_artifactMediaType = value; }

    /**
     * <p>The artifact media type of the image.</p>
     */
    inline void SetArtifactMediaType(Aws::String&& value) { m_artifactMediaTypeHasBeenSet = true; m_artifactMediaType = std::move(value); }

    /**
     * <p>The artifact media type of the image.</p>
     */
    inline void SetArtifactMediaType(const char* value) { m_artifactMediaTypeHasBeenSet = true; m_artifactMediaType.assign(value); }

    /**
     * <p>The artifact media type of the image.</p>
     */
    inline ImageDetail& WithArtifactMediaType(const Aws::String& value) { SetArtifactMediaType(value); return *this;}

    /**
     * <p>The artifact media type of the image.</p>
     */
    inline ImageDetail& WithArtifactMediaType(Aws::String&& value) { SetArtifactMediaType(std::move(value)); return *this;}

    /**
     * <p>The artifact media type of the image.</p>
     */
    inline ImageDetail& WithArtifactMediaType(const char* value) { SetArtifactMediaType(value); return *this;}

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

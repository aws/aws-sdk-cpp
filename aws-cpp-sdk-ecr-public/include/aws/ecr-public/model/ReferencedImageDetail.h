/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecr-public/ECRPublic_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>An object that describes the image tag details returned by a
   * <a>DescribeImageTags</a> action.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-public-2020-10-30/ReferencedImageDetail">AWS
   * API Reference</a></p>
   */
  class ReferencedImageDetail
  {
  public:
    AWS_ECRPUBLIC_API ReferencedImageDetail();
    AWS_ECRPUBLIC_API ReferencedImageDetail(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECRPUBLIC_API ReferencedImageDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECRPUBLIC_API Aws::Utils::Json::JsonValue Jsonize() const;


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
    inline ReferencedImageDetail& WithImageDigest(const Aws::String& value) { SetImageDigest(value); return *this;}

    /**
     * <p>The <code>sha256</code> digest of the image manifest.</p>
     */
    inline ReferencedImageDetail& WithImageDigest(Aws::String&& value) { SetImageDigest(std::move(value)); return *this;}

    /**
     * <p>The <code>sha256</code> digest of the image manifest.</p>
     */
    inline ReferencedImageDetail& WithImageDigest(const char* value) { SetImageDigest(value); return *this;}


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
    inline ReferencedImageDetail& WithImageSizeInBytes(long long value) { SetImageSizeInBytes(value); return *this;}


    /**
     * <p>The date and time, expressed in standard JavaScript date format, at which the
     * current image tag was pushed to the repository.</p>
     */
    inline const Aws::Utils::DateTime& GetImagePushedAt() const{ return m_imagePushedAt; }

    /**
     * <p>The date and time, expressed in standard JavaScript date format, at which the
     * current image tag was pushed to the repository.</p>
     */
    inline bool ImagePushedAtHasBeenSet() const { return m_imagePushedAtHasBeenSet; }

    /**
     * <p>The date and time, expressed in standard JavaScript date format, at which the
     * current image tag was pushed to the repository.</p>
     */
    inline void SetImagePushedAt(const Aws::Utils::DateTime& value) { m_imagePushedAtHasBeenSet = true; m_imagePushedAt = value; }

    /**
     * <p>The date and time, expressed in standard JavaScript date format, at which the
     * current image tag was pushed to the repository.</p>
     */
    inline void SetImagePushedAt(Aws::Utils::DateTime&& value) { m_imagePushedAtHasBeenSet = true; m_imagePushedAt = std::move(value); }

    /**
     * <p>The date and time, expressed in standard JavaScript date format, at which the
     * current image tag was pushed to the repository.</p>
     */
    inline ReferencedImageDetail& WithImagePushedAt(const Aws::Utils::DateTime& value) { SetImagePushedAt(value); return *this;}

    /**
     * <p>The date and time, expressed in standard JavaScript date format, at which the
     * current image tag was pushed to the repository.</p>
     */
    inline ReferencedImageDetail& WithImagePushedAt(Aws::Utils::DateTime&& value) { SetImagePushedAt(std::move(value)); return *this;}


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
    inline ReferencedImageDetail& WithImageManifestMediaType(const Aws::String& value) { SetImageManifestMediaType(value); return *this;}

    /**
     * <p>The media type of the image manifest.</p>
     */
    inline ReferencedImageDetail& WithImageManifestMediaType(Aws::String&& value) { SetImageManifestMediaType(std::move(value)); return *this;}

    /**
     * <p>The media type of the image manifest.</p>
     */
    inline ReferencedImageDetail& WithImageManifestMediaType(const char* value) { SetImageManifestMediaType(value); return *this;}


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
    inline ReferencedImageDetail& WithArtifactMediaType(const Aws::String& value) { SetArtifactMediaType(value); return *this;}

    /**
     * <p>The artifact media type of the image.</p>
     */
    inline ReferencedImageDetail& WithArtifactMediaType(Aws::String&& value) { SetArtifactMediaType(std::move(value)); return *this;}

    /**
     * <p>The artifact media type of the image.</p>
     */
    inline ReferencedImageDetail& WithArtifactMediaType(const char* value) { SetArtifactMediaType(value); return *this;}

  private:

    Aws::String m_imageDigest;
    bool m_imageDigestHasBeenSet = false;

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

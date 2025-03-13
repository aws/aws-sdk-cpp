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
   * <p>An object that describes the image tag details that are returned by a
   * <a>DescribeImageTags</a> action.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-public-2020-10-30/ReferencedImageDetail">AWS
   * API Reference</a></p>
   */
  class ReferencedImageDetail
  {
  public:
    AWS_ECRPUBLIC_API ReferencedImageDetail() = default;
    AWS_ECRPUBLIC_API ReferencedImageDetail(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECRPUBLIC_API ReferencedImageDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECRPUBLIC_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The <code>sha256</code> digest of the image manifest.</p>
     */
    inline const Aws::String& GetImageDigest() const { return m_imageDigest; }
    inline bool ImageDigestHasBeenSet() const { return m_imageDigestHasBeenSet; }
    template<typename ImageDigestT = Aws::String>
    void SetImageDigest(ImageDigestT&& value) { m_imageDigestHasBeenSet = true; m_imageDigest = std::forward<ImageDigestT>(value); }
    template<typename ImageDigestT = Aws::String>
    ReferencedImageDetail& WithImageDigest(ImageDigestT&& value) { SetImageDigest(std::forward<ImageDigestT>(value)); return *this;}
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
    inline ReferencedImageDetail& WithImageSizeInBytes(long long value) { SetImageSizeInBytes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time, expressed in standard JavaScript date format, which the
     * current image tag was pushed to the repository at.</p>
     */
    inline const Aws::Utils::DateTime& GetImagePushedAt() const { return m_imagePushedAt; }
    inline bool ImagePushedAtHasBeenSet() const { return m_imagePushedAtHasBeenSet; }
    template<typename ImagePushedAtT = Aws::Utils::DateTime>
    void SetImagePushedAt(ImagePushedAtT&& value) { m_imagePushedAtHasBeenSet = true; m_imagePushedAt = std::forward<ImagePushedAtT>(value); }
    template<typename ImagePushedAtT = Aws::Utils::DateTime>
    ReferencedImageDetail& WithImagePushedAt(ImagePushedAtT&& value) { SetImagePushedAt(std::forward<ImagePushedAtT>(value)); return *this;}
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
    ReferencedImageDetail& WithImageManifestMediaType(ImageManifestMediaTypeT&& value) { SetImageManifestMediaType(std::forward<ImageManifestMediaTypeT>(value)); return *this;}
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
    ReferencedImageDetail& WithArtifactMediaType(ArtifactMediaTypeT&& value) { SetArtifactMediaType(std::forward<ArtifactMediaTypeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_imageDigest;
    bool m_imageDigestHasBeenSet = false;

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

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecr/ECR_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <aws/ecr/model/ImageScanStatus.h>
#include <aws/ecr/model/ImageScanFindingsSummary.h>
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
   * <p>An object that describes an image returned by a <a>DescribeImages</a>
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-2015-09-21/ImageDetail">AWS API
   * Reference</a></p>
   */
  class ImageDetail
  {
  public:
    AWS_ECR_API ImageDetail() = default;
    AWS_ECR_API ImageDetail(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECR_API ImageDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Web Services account ID associated with the registry to which this
     * image belongs.</p>
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
     * <p>The name of the repository to which this image belongs.</p>
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
     * <p>The list of tags associated with this image.</p>
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
     * manifest list, this will be the max size of all manifests in the list.</p>
     *  <p>Starting with Docker version 1.9, the Docker client compresses image
     * layers before pushing them to a V2 Docker registry. The output of the
     * <code>docker images</code> command shows the uncompressed image size. Therefore,
     * Docker might return a larger image than the image shown in the Amazon Web
     * Services Management Console.</p> 
     */
    inline long long GetImageSizeInBytes() const { return m_imageSizeInBytes; }
    inline bool ImageSizeInBytesHasBeenSet() const { return m_imageSizeInBytesHasBeenSet; }
    inline void SetImageSizeInBytes(long long value) { m_imageSizeInBytesHasBeenSet = true; m_imageSizeInBytes = value; }
    inline ImageDetail& WithImageSizeInBytes(long long value) { SetImageSizeInBytes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time, expressed in standard JavaScript date format, at which the
     * current image was pushed to the repository. </p>
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
     * <p>The current state of the scan.</p>
     */
    inline const ImageScanStatus& GetImageScanStatus() const { return m_imageScanStatus; }
    inline bool ImageScanStatusHasBeenSet() const { return m_imageScanStatusHasBeenSet; }
    template<typename ImageScanStatusT = ImageScanStatus>
    void SetImageScanStatus(ImageScanStatusT&& value) { m_imageScanStatusHasBeenSet = true; m_imageScanStatus = std::forward<ImageScanStatusT>(value); }
    template<typename ImageScanStatusT = ImageScanStatus>
    ImageDetail& WithImageScanStatus(ImageScanStatusT&& value) { SetImageScanStatus(std::forward<ImageScanStatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A summary of the last completed image scan.</p>
     */
    inline const ImageScanFindingsSummary& GetImageScanFindingsSummary() const { return m_imageScanFindingsSummary; }
    inline bool ImageScanFindingsSummaryHasBeenSet() const { return m_imageScanFindingsSummaryHasBeenSet; }
    template<typename ImageScanFindingsSummaryT = ImageScanFindingsSummary>
    void SetImageScanFindingsSummary(ImageScanFindingsSummaryT&& value) { m_imageScanFindingsSummaryHasBeenSet = true; m_imageScanFindingsSummary = std::forward<ImageScanFindingsSummaryT>(value); }
    template<typename ImageScanFindingsSummaryT = ImageScanFindingsSummary>
    ImageDetail& WithImageScanFindingsSummary(ImageScanFindingsSummaryT&& value) { SetImageScanFindingsSummary(std::forward<ImageScanFindingsSummaryT>(value)); return *this;}
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

    ///@{
    /**
     * <p>The date and time, expressed in standard JavaScript date format, when Amazon
     * ECR recorded the last image pull.</p>  <p>Amazon ECR refreshes the last
     * image pull timestamp at least once every 24 hours. For example, if you pull an
     * image once a day then the <code>lastRecordedPullTime</code> timestamp will
     * indicate the exact time that the image was last pulled. However, if you pull an
     * image once an hour, because Amazon ECR refreshes the
     * <code>lastRecordedPullTime</code> timestamp at least once every 24 hours, the
     * result may not be the exact time that the image was last pulled.</p> 
     */
    inline const Aws::Utils::DateTime& GetLastRecordedPullTime() const { return m_lastRecordedPullTime; }
    inline bool LastRecordedPullTimeHasBeenSet() const { return m_lastRecordedPullTimeHasBeenSet; }
    template<typename LastRecordedPullTimeT = Aws::Utils::DateTime>
    void SetLastRecordedPullTime(LastRecordedPullTimeT&& value) { m_lastRecordedPullTimeHasBeenSet = true; m_lastRecordedPullTime = std::forward<LastRecordedPullTimeT>(value); }
    template<typename LastRecordedPullTimeT = Aws::Utils::DateTime>
    ImageDetail& WithLastRecordedPullTime(LastRecordedPullTimeT&& value) { SetLastRecordedPullTime(std::forward<LastRecordedPullTimeT>(value)); return *this;}
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

    ImageScanStatus m_imageScanStatus;
    bool m_imageScanStatusHasBeenSet = false;

    ImageScanFindingsSummary m_imageScanFindingsSummary;
    bool m_imageScanFindingsSummaryHasBeenSet = false;

    Aws::String m_imageManifestMediaType;
    bool m_imageManifestMediaTypeHasBeenSet = false;

    Aws::String m_artifactMediaType;
    bool m_artifactMediaTypeHasBeenSet = false;

    Aws::Utils::DateTime m_lastRecordedPullTime{};
    bool m_lastRecordedPullTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace ECR
} // namespace Aws

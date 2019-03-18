/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
   * <p>An object that describes an image returned by a <a>DescribeImages</a>
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-2015-09-21/ImageDetail">AWS API
   * Reference</a></p>
   */
  class AWS_ECR_API ImageDetail
  {
  public:
    ImageDetail();
    ImageDetail(Aws::Utils::Json::JsonView jsonValue);
    ImageDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The AWS account ID associated with the registry to which this image
     * belongs.</p>
     */
    inline const Aws::String& GetRegistryId() const{ return m_registryId; }

    /**
     * <p>The AWS account ID associated with the registry to which this image
     * belongs.</p>
     */
    inline bool RegistryIdHasBeenSet() const { return m_registryIdHasBeenSet; }

    /**
     * <p>The AWS account ID associated with the registry to which this image
     * belongs.</p>
     */
    inline void SetRegistryId(const Aws::String& value) { m_registryIdHasBeenSet = true; m_registryId = value; }

    /**
     * <p>The AWS account ID associated with the registry to which this image
     * belongs.</p>
     */
    inline void SetRegistryId(Aws::String&& value) { m_registryIdHasBeenSet = true; m_registryId = std::move(value); }

    /**
     * <p>The AWS account ID associated with the registry to which this image
     * belongs.</p>
     */
    inline void SetRegistryId(const char* value) { m_registryIdHasBeenSet = true; m_registryId.assign(value); }

    /**
     * <p>The AWS account ID associated with the registry to which this image
     * belongs.</p>
     */
    inline ImageDetail& WithRegistryId(const Aws::String& value) { SetRegistryId(value); return *this;}

    /**
     * <p>The AWS account ID associated with the registry to which this image
     * belongs.</p>
     */
    inline ImageDetail& WithRegistryId(Aws::String&& value) { SetRegistryId(std::move(value)); return *this;}

    /**
     * <p>The AWS account ID associated with the registry to which this image
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
     * <p>The size, in bytes, of the image in the repository.</p> <note> <p>Beginning
     * with Docker version 1.9, the Docker client compresses image layers before
     * pushing them to a V2 Docker registry. The output of the <code>docker
     * images</code> command shows the uncompressed image size, so it may return a
     * larger image size than the image sizes returned by <a>DescribeImages</a>.</p>
     * </note>
     */
    inline long long GetImageSizeInBytes() const{ return m_imageSizeInBytes; }

    /**
     * <p>The size, in bytes, of the image in the repository.</p> <note> <p>Beginning
     * with Docker version 1.9, the Docker client compresses image layers before
     * pushing them to a V2 Docker registry. The output of the <code>docker
     * images</code> command shows the uncompressed image size, so it may return a
     * larger image size than the image sizes returned by <a>DescribeImages</a>.</p>
     * </note>
     */
    inline bool ImageSizeInBytesHasBeenSet() const { return m_imageSizeInBytesHasBeenSet; }

    /**
     * <p>The size, in bytes, of the image in the repository.</p> <note> <p>Beginning
     * with Docker version 1.9, the Docker client compresses image layers before
     * pushing them to a V2 Docker registry. The output of the <code>docker
     * images</code> command shows the uncompressed image size, so it may return a
     * larger image size than the image sizes returned by <a>DescribeImages</a>.</p>
     * </note>
     */
    inline void SetImageSizeInBytes(long long value) { m_imageSizeInBytesHasBeenSet = true; m_imageSizeInBytes = value; }

    /**
     * <p>The size, in bytes, of the image in the repository.</p> <note> <p>Beginning
     * with Docker version 1.9, the Docker client compresses image layers before
     * pushing them to a V2 Docker registry. The output of the <code>docker
     * images</code> command shows the uncompressed image size, so it may return a
     * larger image size than the image sizes returned by <a>DescribeImages</a>.</p>
     * </note>
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

  private:

    Aws::String m_registryId;
    bool m_registryIdHasBeenSet;

    Aws::String m_repositoryName;
    bool m_repositoryNameHasBeenSet;

    Aws::String m_imageDigest;
    bool m_imageDigestHasBeenSet;

    Aws::Vector<Aws::String> m_imageTags;
    bool m_imageTagsHasBeenSet;

    long long m_imageSizeInBytes;
    bool m_imageSizeInBytesHasBeenSet;

    Aws::Utils::DateTime m_imagePushedAt;
    bool m_imagePushedAtHasBeenSet;
  };

} // namespace Model
} // namespace ECR
} // namespace Aws

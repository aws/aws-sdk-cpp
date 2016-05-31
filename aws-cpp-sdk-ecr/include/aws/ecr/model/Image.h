/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/ecr/model/ImageIdentifier.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace ECR
{
namespace Model
{

  /**
   * <p>Object representing an image.</p>
   */
  class AWS_ECR_API Image
  {
  public:
    Image();
    Image(const Aws::Utils::Json::JsonValue& jsonValue);
    Image& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The AWS account ID associated with the registry containing the image.</p>
     */
    inline const Aws::String& GetRegistryId() const{ return m_registryId; }

    /**
     * <p>The AWS account ID associated with the registry containing the image.</p>
     */
    inline void SetRegistryId(const Aws::String& value) { m_registryIdHasBeenSet = true; m_registryId = value; }

    /**
     * <p>The AWS account ID associated with the registry containing the image.</p>
     */
    inline void SetRegistryId(Aws::String&& value) { m_registryIdHasBeenSet = true; m_registryId = value; }

    /**
     * <p>The AWS account ID associated with the registry containing the image.</p>
     */
    inline void SetRegistryId(const char* value) { m_registryIdHasBeenSet = true; m_registryId.assign(value); }

    /**
     * <p>The AWS account ID associated with the registry containing the image.</p>
     */
    inline Image& WithRegistryId(const Aws::String& value) { SetRegistryId(value); return *this;}

    /**
     * <p>The AWS account ID associated with the registry containing the image.</p>
     */
    inline Image& WithRegistryId(Aws::String&& value) { SetRegistryId(value); return *this;}

    /**
     * <p>The AWS account ID associated with the registry containing the image.</p>
     */
    inline Image& WithRegistryId(const char* value) { SetRegistryId(value); return *this;}

    /**
     * <p>The name of the repository associated with the image.</p>
     */
    inline const Aws::String& GetRepositoryName() const{ return m_repositoryName; }

    /**
     * <p>The name of the repository associated with the image.</p>
     */
    inline void SetRepositoryName(const Aws::String& value) { m_repositoryNameHasBeenSet = true; m_repositoryName = value; }

    /**
     * <p>The name of the repository associated with the image.</p>
     */
    inline void SetRepositoryName(Aws::String&& value) { m_repositoryNameHasBeenSet = true; m_repositoryName = value; }

    /**
     * <p>The name of the repository associated with the image.</p>
     */
    inline void SetRepositoryName(const char* value) { m_repositoryNameHasBeenSet = true; m_repositoryName.assign(value); }

    /**
     * <p>The name of the repository associated with the image.</p>
     */
    inline Image& WithRepositoryName(const Aws::String& value) { SetRepositoryName(value); return *this;}

    /**
     * <p>The name of the repository associated with the image.</p>
     */
    inline Image& WithRepositoryName(Aws::String&& value) { SetRepositoryName(value); return *this;}

    /**
     * <p>The name of the repository associated with the image.</p>
     */
    inline Image& WithRepositoryName(const char* value) { SetRepositoryName(value); return *this;}

    /**
     * <p>An object containing the image tag and image digest associated with an
     * image.</p>
     */
    inline const ImageIdentifier& GetImageId() const{ return m_imageId; }

    /**
     * <p>An object containing the image tag and image digest associated with an
     * image.</p>
     */
    inline void SetImageId(const ImageIdentifier& value) { m_imageIdHasBeenSet = true; m_imageId = value; }

    /**
     * <p>An object containing the image tag and image digest associated with an
     * image.</p>
     */
    inline void SetImageId(ImageIdentifier&& value) { m_imageIdHasBeenSet = true; m_imageId = value; }

    /**
     * <p>An object containing the image tag and image digest associated with an
     * image.</p>
     */
    inline Image& WithImageId(const ImageIdentifier& value) { SetImageId(value); return *this;}

    /**
     * <p>An object containing the image tag and image digest associated with an
     * image.</p>
     */
    inline Image& WithImageId(ImageIdentifier&& value) { SetImageId(value); return *this;}

    /**
     * <p>The image manifest associated with the image.</p>
     */
    inline const Aws::String& GetImageManifest() const{ return m_imageManifest; }

    /**
     * <p>The image manifest associated with the image.</p>
     */
    inline void SetImageManifest(const Aws::String& value) { m_imageManifestHasBeenSet = true; m_imageManifest = value; }

    /**
     * <p>The image manifest associated with the image.</p>
     */
    inline void SetImageManifest(Aws::String&& value) { m_imageManifestHasBeenSet = true; m_imageManifest = value; }

    /**
     * <p>The image manifest associated with the image.</p>
     */
    inline void SetImageManifest(const char* value) { m_imageManifestHasBeenSet = true; m_imageManifest.assign(value); }

    /**
     * <p>The image manifest associated with the image.</p>
     */
    inline Image& WithImageManifest(const Aws::String& value) { SetImageManifest(value); return *this;}

    /**
     * <p>The image manifest associated with the image.</p>
     */
    inline Image& WithImageManifest(Aws::String&& value) { SetImageManifest(value); return *this;}

    /**
     * <p>The image manifest associated with the image.</p>
     */
    inline Image& WithImageManifest(const char* value) { SetImageManifest(value); return *this;}

  private:
    Aws::String m_registryId;
    bool m_registryIdHasBeenSet;
    Aws::String m_repositoryName;
    bool m_repositoryNameHasBeenSet;
    ImageIdentifier m_imageId;
    bool m_imageIdHasBeenSet;
    Aws::String m_imageManifest;
    bool m_imageManifestHasBeenSet;
  };

} // namespace Model
} // namespace ECR
} // namespace Aws

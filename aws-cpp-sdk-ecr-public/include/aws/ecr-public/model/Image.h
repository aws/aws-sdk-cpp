/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecr-public/ECRPublic_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ecr-public/model/ImageIdentifier.h>
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
   * <p>An object representing an Amazon ECR image.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-public-2020-10-30/Image">AWS
   * API Reference</a></p>
   */
  class Image
  {
  public:
    AWS_ECRPUBLIC_API Image();
    AWS_ECRPUBLIC_API Image(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECRPUBLIC_API Image& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECRPUBLIC_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The AWS account ID associated with the registry containing the image.</p>
     */
    inline const Aws::String& GetRegistryId() const{ return m_registryId; }

    /**
     * <p>The AWS account ID associated with the registry containing the image.</p>
     */
    inline bool RegistryIdHasBeenSet() const { return m_registryIdHasBeenSet; }

    /**
     * <p>The AWS account ID associated with the registry containing the image.</p>
     */
    inline void SetRegistryId(const Aws::String& value) { m_registryIdHasBeenSet = true; m_registryId = value; }

    /**
     * <p>The AWS account ID associated with the registry containing the image.</p>
     */
    inline void SetRegistryId(Aws::String&& value) { m_registryIdHasBeenSet = true; m_registryId = std::move(value); }

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
    inline Image& WithRegistryId(Aws::String&& value) { SetRegistryId(std::move(value)); return *this;}

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
    inline bool RepositoryNameHasBeenSet() const { return m_repositoryNameHasBeenSet; }

    /**
     * <p>The name of the repository associated with the image.</p>
     */
    inline void SetRepositoryName(const Aws::String& value) { m_repositoryNameHasBeenSet = true; m_repositoryName = value; }

    /**
     * <p>The name of the repository associated with the image.</p>
     */
    inline void SetRepositoryName(Aws::String&& value) { m_repositoryNameHasBeenSet = true; m_repositoryName = std::move(value); }

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
    inline Image& WithRepositoryName(Aws::String&& value) { SetRepositoryName(std::move(value)); return *this;}

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
    inline bool ImageIdHasBeenSet() const { return m_imageIdHasBeenSet; }

    /**
     * <p>An object containing the image tag and image digest associated with an
     * image.</p>
     */
    inline void SetImageId(const ImageIdentifier& value) { m_imageIdHasBeenSet = true; m_imageId = value; }

    /**
     * <p>An object containing the image tag and image digest associated with an
     * image.</p>
     */
    inline void SetImageId(ImageIdentifier&& value) { m_imageIdHasBeenSet = true; m_imageId = std::move(value); }

    /**
     * <p>An object containing the image tag and image digest associated with an
     * image.</p>
     */
    inline Image& WithImageId(const ImageIdentifier& value) { SetImageId(value); return *this;}

    /**
     * <p>An object containing the image tag and image digest associated with an
     * image.</p>
     */
    inline Image& WithImageId(ImageIdentifier&& value) { SetImageId(std::move(value)); return *this;}


    /**
     * <p>The image manifest associated with the image.</p>
     */
    inline const Aws::String& GetImageManifest() const{ return m_imageManifest; }

    /**
     * <p>The image manifest associated with the image.</p>
     */
    inline bool ImageManifestHasBeenSet() const { return m_imageManifestHasBeenSet; }

    /**
     * <p>The image manifest associated with the image.</p>
     */
    inline void SetImageManifest(const Aws::String& value) { m_imageManifestHasBeenSet = true; m_imageManifest = value; }

    /**
     * <p>The image manifest associated with the image.</p>
     */
    inline void SetImageManifest(Aws::String&& value) { m_imageManifestHasBeenSet = true; m_imageManifest = std::move(value); }

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
    inline Image& WithImageManifest(Aws::String&& value) { SetImageManifest(std::move(value)); return *this;}

    /**
     * <p>The image manifest associated with the image.</p>
     */
    inline Image& WithImageManifest(const char* value) { SetImageManifest(value); return *this;}


    /**
     * <p>The manifest media type of the image.</p>
     */
    inline const Aws::String& GetImageManifestMediaType() const{ return m_imageManifestMediaType; }

    /**
     * <p>The manifest media type of the image.</p>
     */
    inline bool ImageManifestMediaTypeHasBeenSet() const { return m_imageManifestMediaTypeHasBeenSet; }

    /**
     * <p>The manifest media type of the image.</p>
     */
    inline void SetImageManifestMediaType(const Aws::String& value) { m_imageManifestMediaTypeHasBeenSet = true; m_imageManifestMediaType = value; }

    /**
     * <p>The manifest media type of the image.</p>
     */
    inline void SetImageManifestMediaType(Aws::String&& value) { m_imageManifestMediaTypeHasBeenSet = true; m_imageManifestMediaType = std::move(value); }

    /**
     * <p>The manifest media type of the image.</p>
     */
    inline void SetImageManifestMediaType(const char* value) { m_imageManifestMediaTypeHasBeenSet = true; m_imageManifestMediaType.assign(value); }

    /**
     * <p>The manifest media type of the image.</p>
     */
    inline Image& WithImageManifestMediaType(const Aws::String& value) { SetImageManifestMediaType(value); return *this;}

    /**
     * <p>The manifest media type of the image.</p>
     */
    inline Image& WithImageManifestMediaType(Aws::String&& value) { SetImageManifestMediaType(std::move(value)); return *this;}

    /**
     * <p>The manifest media type of the image.</p>
     */
    inline Image& WithImageManifestMediaType(const char* value) { SetImageManifestMediaType(value); return *this;}

  private:

    Aws::String m_registryId;
    bool m_registryIdHasBeenSet = false;

    Aws::String m_repositoryName;
    bool m_repositoryNameHasBeenSet = false;

    ImageIdentifier m_imageId;
    bool m_imageIdHasBeenSet = false;

    Aws::String m_imageManifest;
    bool m_imageManifestHasBeenSet = false;

    Aws::String m_imageManifestMediaType;
    bool m_imageManifestMediaTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace ECRPublic
} // namespace Aws

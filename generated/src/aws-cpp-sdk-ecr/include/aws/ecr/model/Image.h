/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecr/ECR_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ecr/model/ImageIdentifier.h>
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
   * <p>An object representing an Amazon ECR image.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-2015-09-21/Image">AWS API
   * Reference</a></p>
   */
  class Image
  {
  public:
    AWS_ECR_API Image();
    AWS_ECR_API Image(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECR_API Image& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Web Services account ID associated with the registry containing
     * the image.</p>
     */
    inline const Aws::String& GetRegistryId() const{ return m_registryId; }
    inline bool RegistryIdHasBeenSet() const { return m_registryIdHasBeenSet; }
    inline void SetRegistryId(const Aws::String& value) { m_registryIdHasBeenSet = true; m_registryId = value; }
    inline void SetRegistryId(Aws::String&& value) { m_registryIdHasBeenSet = true; m_registryId = std::move(value); }
    inline void SetRegistryId(const char* value) { m_registryIdHasBeenSet = true; m_registryId.assign(value); }
    inline Image& WithRegistryId(const Aws::String& value) { SetRegistryId(value); return *this;}
    inline Image& WithRegistryId(Aws::String&& value) { SetRegistryId(std::move(value)); return *this;}
    inline Image& WithRegistryId(const char* value) { SetRegistryId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the repository associated with the image.</p>
     */
    inline const Aws::String& GetRepositoryName() const{ return m_repositoryName; }
    inline bool RepositoryNameHasBeenSet() const { return m_repositoryNameHasBeenSet; }
    inline void SetRepositoryName(const Aws::String& value) { m_repositoryNameHasBeenSet = true; m_repositoryName = value; }
    inline void SetRepositoryName(Aws::String&& value) { m_repositoryNameHasBeenSet = true; m_repositoryName = std::move(value); }
    inline void SetRepositoryName(const char* value) { m_repositoryNameHasBeenSet = true; m_repositoryName.assign(value); }
    inline Image& WithRepositoryName(const Aws::String& value) { SetRepositoryName(value); return *this;}
    inline Image& WithRepositoryName(Aws::String&& value) { SetRepositoryName(std::move(value)); return *this;}
    inline Image& WithRepositoryName(const char* value) { SetRepositoryName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object containing the image tag and image digest associated with an
     * image.</p>
     */
    inline const ImageIdentifier& GetImageId() const{ return m_imageId; }
    inline bool ImageIdHasBeenSet() const { return m_imageIdHasBeenSet; }
    inline void SetImageId(const ImageIdentifier& value) { m_imageIdHasBeenSet = true; m_imageId = value; }
    inline void SetImageId(ImageIdentifier&& value) { m_imageIdHasBeenSet = true; m_imageId = std::move(value); }
    inline Image& WithImageId(const ImageIdentifier& value) { SetImageId(value); return *this;}
    inline Image& WithImageId(ImageIdentifier&& value) { SetImageId(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The image manifest associated with the image.</p>
     */
    inline const Aws::String& GetImageManifest() const{ return m_imageManifest; }
    inline bool ImageManifestHasBeenSet() const { return m_imageManifestHasBeenSet; }
    inline void SetImageManifest(const Aws::String& value) { m_imageManifestHasBeenSet = true; m_imageManifest = value; }
    inline void SetImageManifest(Aws::String&& value) { m_imageManifestHasBeenSet = true; m_imageManifest = std::move(value); }
    inline void SetImageManifest(const char* value) { m_imageManifestHasBeenSet = true; m_imageManifest.assign(value); }
    inline Image& WithImageManifest(const Aws::String& value) { SetImageManifest(value); return *this;}
    inline Image& WithImageManifest(Aws::String&& value) { SetImageManifest(std::move(value)); return *this;}
    inline Image& WithImageManifest(const char* value) { SetImageManifest(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The manifest media type of the image.</p>
     */
    inline const Aws::String& GetImageManifestMediaType() const{ return m_imageManifestMediaType; }
    inline bool ImageManifestMediaTypeHasBeenSet() const { return m_imageManifestMediaTypeHasBeenSet; }
    inline void SetImageManifestMediaType(const Aws::String& value) { m_imageManifestMediaTypeHasBeenSet = true; m_imageManifestMediaType = value; }
    inline void SetImageManifestMediaType(Aws::String&& value) { m_imageManifestMediaTypeHasBeenSet = true; m_imageManifestMediaType = std::move(value); }
    inline void SetImageManifestMediaType(const char* value) { m_imageManifestMediaTypeHasBeenSet = true; m_imageManifestMediaType.assign(value); }
    inline Image& WithImageManifestMediaType(const Aws::String& value) { SetImageManifestMediaType(value); return *this;}
    inline Image& WithImageManifestMediaType(Aws::String&& value) { SetImageManifestMediaType(std::move(value)); return *this;}
    inline Image& WithImageManifestMediaType(const char* value) { SetImageManifestMediaType(value); return *this;}
    ///@}
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
} // namespace ECR
} // namespace Aws

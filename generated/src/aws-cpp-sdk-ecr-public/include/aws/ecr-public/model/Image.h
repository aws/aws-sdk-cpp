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
   * <p>An object that represents an Amazon ECR image.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-public-2020-10-30/Image">AWS
   * API Reference</a></p>
   */
  class Image
  {
  public:
    AWS_ECRPUBLIC_API Image() = default;
    AWS_ECRPUBLIC_API Image(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECRPUBLIC_API Image& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECRPUBLIC_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Web Services account ID that's associated with the registry
     * containing the image.</p>
     */
    inline const Aws::String& GetRegistryId() const { return m_registryId; }
    inline bool RegistryIdHasBeenSet() const { return m_registryIdHasBeenSet; }
    template<typename RegistryIdT = Aws::String>
    void SetRegistryId(RegistryIdT&& value) { m_registryIdHasBeenSet = true; m_registryId = std::forward<RegistryIdT>(value); }
    template<typename RegistryIdT = Aws::String>
    Image& WithRegistryId(RegistryIdT&& value) { SetRegistryId(std::forward<RegistryIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the repository that's associated with the image.</p>
     */
    inline const Aws::String& GetRepositoryName() const { return m_repositoryName; }
    inline bool RepositoryNameHasBeenSet() const { return m_repositoryNameHasBeenSet; }
    template<typename RepositoryNameT = Aws::String>
    void SetRepositoryName(RepositoryNameT&& value) { m_repositoryNameHasBeenSet = true; m_repositoryName = std::forward<RepositoryNameT>(value); }
    template<typename RepositoryNameT = Aws::String>
    Image& WithRepositoryName(RepositoryNameT&& value) { SetRepositoryName(std::forward<RepositoryNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that contains the image tag and image digest associated with an
     * image.</p>
     */
    inline const ImageIdentifier& GetImageId() const { return m_imageId; }
    inline bool ImageIdHasBeenSet() const { return m_imageIdHasBeenSet; }
    template<typename ImageIdT = ImageIdentifier>
    void SetImageId(ImageIdT&& value) { m_imageIdHasBeenSet = true; m_imageId = std::forward<ImageIdT>(value); }
    template<typename ImageIdT = ImageIdentifier>
    Image& WithImageId(ImageIdT&& value) { SetImageId(std::forward<ImageIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The image manifest that's associated with the image.</p>
     */
    inline const Aws::String& GetImageManifest() const { return m_imageManifest; }
    inline bool ImageManifestHasBeenSet() const { return m_imageManifestHasBeenSet; }
    template<typename ImageManifestT = Aws::String>
    void SetImageManifest(ImageManifestT&& value) { m_imageManifestHasBeenSet = true; m_imageManifest = std::forward<ImageManifestT>(value); }
    template<typename ImageManifestT = Aws::String>
    Image& WithImageManifest(ImageManifestT&& value) { SetImageManifest(std::forward<ImageManifestT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The manifest media type of the image.</p>
     */
    inline const Aws::String& GetImageManifestMediaType() const { return m_imageManifestMediaType; }
    inline bool ImageManifestMediaTypeHasBeenSet() const { return m_imageManifestMediaTypeHasBeenSet; }
    template<typename ImageManifestMediaTypeT = Aws::String>
    void SetImageManifestMediaType(ImageManifestMediaTypeT&& value) { m_imageManifestMediaTypeHasBeenSet = true; m_imageManifestMediaType = std::forward<ImageManifestMediaTypeT>(value); }
    template<typename ImageManifestMediaTypeT = Aws::String>
    Image& WithImageManifestMediaType(ImageManifestMediaTypeT&& value) { SetImageManifestMediaType(std::forward<ImageManifestMediaTypeT>(value)); return *this;}
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
} // namespace ECRPublic
} // namespace Aws

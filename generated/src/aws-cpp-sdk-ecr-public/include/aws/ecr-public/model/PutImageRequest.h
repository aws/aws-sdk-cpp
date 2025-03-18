/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecr-public/ECRPublic_EXPORTS.h>
#include <aws/ecr-public/ECRPublicRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace ECRPublic
{
namespace Model
{

  /**
   */
  class PutImageRequest : public ECRPublicRequest
  {
  public:
    AWS_ECRPUBLIC_API PutImageRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutImage"; }

    AWS_ECRPUBLIC_API Aws::String SerializePayload() const override;

    AWS_ECRPUBLIC_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The Amazon Web Services account ID, or registry alias, that's associated with
     * the public registry that contains the repository where the image is put. If you
     * do not specify a registry, the default public registry is assumed.</p>
     */
    inline const Aws::String& GetRegistryId() const { return m_registryId; }
    inline bool RegistryIdHasBeenSet() const { return m_registryIdHasBeenSet; }
    template<typename RegistryIdT = Aws::String>
    void SetRegistryId(RegistryIdT&& value) { m_registryIdHasBeenSet = true; m_registryId = std::forward<RegistryIdT>(value); }
    template<typename RegistryIdT = Aws::String>
    PutImageRequest& WithRegistryId(RegistryIdT&& value) { SetRegistryId(std::forward<RegistryIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the repository where the image is put.</p>
     */
    inline const Aws::String& GetRepositoryName() const { return m_repositoryName; }
    inline bool RepositoryNameHasBeenSet() const { return m_repositoryNameHasBeenSet; }
    template<typename RepositoryNameT = Aws::String>
    void SetRepositoryName(RepositoryNameT&& value) { m_repositoryNameHasBeenSet = true; m_repositoryName = std::forward<RepositoryNameT>(value); }
    template<typename RepositoryNameT = Aws::String>
    PutImageRequest& WithRepositoryName(RepositoryNameT&& value) { SetRepositoryName(std::forward<RepositoryNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The image manifest that corresponds to the image to be uploaded.</p>
     */
    inline const Aws::String& GetImageManifest() const { return m_imageManifest; }
    inline bool ImageManifestHasBeenSet() const { return m_imageManifestHasBeenSet; }
    template<typename ImageManifestT = Aws::String>
    void SetImageManifest(ImageManifestT&& value) { m_imageManifestHasBeenSet = true; m_imageManifest = std::forward<ImageManifestT>(value); }
    template<typename ImageManifestT = Aws::String>
    PutImageRequest& WithImageManifest(ImageManifestT&& value) { SetImageManifest(std::forward<ImageManifestT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The media type of the image manifest. If you push an image manifest that
     * doesn't contain the <code>mediaType</code> field, you must specify the
     * <code>imageManifestMediaType</code> in the request.</p>
     */
    inline const Aws::String& GetImageManifestMediaType() const { return m_imageManifestMediaType; }
    inline bool ImageManifestMediaTypeHasBeenSet() const { return m_imageManifestMediaTypeHasBeenSet; }
    template<typename ImageManifestMediaTypeT = Aws::String>
    void SetImageManifestMediaType(ImageManifestMediaTypeT&& value) { m_imageManifestMediaTypeHasBeenSet = true; m_imageManifestMediaType = std::forward<ImageManifestMediaTypeT>(value); }
    template<typename ImageManifestMediaTypeT = Aws::String>
    PutImageRequest& WithImageManifestMediaType(ImageManifestMediaTypeT&& value) { SetImageManifestMediaType(std::forward<ImageManifestMediaTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tag to associate with the image. This parameter is required for images
     * that use the Docker Image Manifest V2 Schema 2 or Open Container Initiative
     * (OCI) formats.</p>
     */
    inline const Aws::String& GetImageTag() const { return m_imageTag; }
    inline bool ImageTagHasBeenSet() const { return m_imageTagHasBeenSet; }
    template<typename ImageTagT = Aws::String>
    void SetImageTag(ImageTagT&& value) { m_imageTagHasBeenSet = true; m_imageTag = std::forward<ImageTagT>(value); }
    template<typename ImageTagT = Aws::String>
    PutImageRequest& WithImageTag(ImageTagT&& value) { SetImageTag(std::forward<ImageTagT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The image digest of the image manifest that corresponds to the image.</p>
     */
    inline const Aws::String& GetImageDigest() const { return m_imageDigest; }
    inline bool ImageDigestHasBeenSet() const { return m_imageDigestHasBeenSet; }
    template<typename ImageDigestT = Aws::String>
    void SetImageDigest(ImageDigestT&& value) { m_imageDigestHasBeenSet = true; m_imageDigest = std::forward<ImageDigestT>(value); }
    template<typename ImageDigestT = Aws::String>
    PutImageRequest& WithImageDigest(ImageDigestT&& value) { SetImageDigest(std::forward<ImageDigestT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_registryId;
    bool m_registryIdHasBeenSet = false;

    Aws::String m_repositoryName;
    bool m_repositoryNameHasBeenSet = false;

    Aws::String m_imageManifest;
    bool m_imageManifestHasBeenSet = false;

    Aws::String m_imageManifestMediaType;
    bool m_imageManifestMediaTypeHasBeenSet = false;

    Aws::String m_imageTag;
    bool m_imageTagHasBeenSet = false;

    Aws::String m_imageDigest;
    bool m_imageDigestHasBeenSet = false;
  };

} // namespace Model
} // namespace ECRPublic
} // namespace Aws

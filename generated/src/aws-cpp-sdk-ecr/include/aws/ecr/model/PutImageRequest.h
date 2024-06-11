/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecr/ECR_EXPORTS.h>
#include <aws/ecr/ECRRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace ECR
{
namespace Model
{

  /**
   */
  class PutImageRequest : public ECRRequest
  {
  public:
    AWS_ECR_API PutImageRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutImage"; }

    AWS_ECR_API Aws::String SerializePayload() const override;

    AWS_ECR_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The Amazon Web Services account ID associated with the registry that contains
     * the repository in which to put the image. If you do not specify a registry, the
     * default registry is assumed.</p>
     */
    inline const Aws::String& GetRegistryId() const{ return m_registryId; }
    inline bool RegistryIdHasBeenSet() const { return m_registryIdHasBeenSet; }
    inline void SetRegistryId(const Aws::String& value) { m_registryIdHasBeenSet = true; m_registryId = value; }
    inline void SetRegistryId(Aws::String&& value) { m_registryIdHasBeenSet = true; m_registryId = std::move(value); }
    inline void SetRegistryId(const char* value) { m_registryIdHasBeenSet = true; m_registryId.assign(value); }
    inline PutImageRequest& WithRegistryId(const Aws::String& value) { SetRegistryId(value); return *this;}
    inline PutImageRequest& WithRegistryId(Aws::String&& value) { SetRegistryId(std::move(value)); return *this;}
    inline PutImageRequest& WithRegistryId(const char* value) { SetRegistryId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the repository in which to put the image.</p>
     */
    inline const Aws::String& GetRepositoryName() const{ return m_repositoryName; }
    inline bool RepositoryNameHasBeenSet() const { return m_repositoryNameHasBeenSet; }
    inline void SetRepositoryName(const Aws::String& value) { m_repositoryNameHasBeenSet = true; m_repositoryName = value; }
    inline void SetRepositoryName(Aws::String&& value) { m_repositoryNameHasBeenSet = true; m_repositoryName = std::move(value); }
    inline void SetRepositoryName(const char* value) { m_repositoryNameHasBeenSet = true; m_repositoryName.assign(value); }
    inline PutImageRequest& WithRepositoryName(const Aws::String& value) { SetRepositoryName(value); return *this;}
    inline PutImageRequest& WithRepositoryName(Aws::String&& value) { SetRepositoryName(std::move(value)); return *this;}
    inline PutImageRequest& WithRepositoryName(const char* value) { SetRepositoryName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The image manifest corresponding to the image to be uploaded.</p>
     */
    inline const Aws::String& GetImageManifest() const{ return m_imageManifest; }
    inline bool ImageManifestHasBeenSet() const { return m_imageManifestHasBeenSet; }
    inline void SetImageManifest(const Aws::String& value) { m_imageManifestHasBeenSet = true; m_imageManifest = value; }
    inline void SetImageManifest(Aws::String&& value) { m_imageManifestHasBeenSet = true; m_imageManifest = std::move(value); }
    inline void SetImageManifest(const char* value) { m_imageManifestHasBeenSet = true; m_imageManifest.assign(value); }
    inline PutImageRequest& WithImageManifest(const Aws::String& value) { SetImageManifest(value); return *this;}
    inline PutImageRequest& WithImageManifest(Aws::String&& value) { SetImageManifest(std::move(value)); return *this;}
    inline PutImageRequest& WithImageManifest(const char* value) { SetImageManifest(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The media type of the image manifest. If you push an image manifest that does
     * not contain the <code>mediaType</code> field, you must specify the
     * <code>imageManifestMediaType</code> in the request.</p>
     */
    inline const Aws::String& GetImageManifestMediaType() const{ return m_imageManifestMediaType; }
    inline bool ImageManifestMediaTypeHasBeenSet() const { return m_imageManifestMediaTypeHasBeenSet; }
    inline void SetImageManifestMediaType(const Aws::String& value) { m_imageManifestMediaTypeHasBeenSet = true; m_imageManifestMediaType = value; }
    inline void SetImageManifestMediaType(Aws::String&& value) { m_imageManifestMediaTypeHasBeenSet = true; m_imageManifestMediaType = std::move(value); }
    inline void SetImageManifestMediaType(const char* value) { m_imageManifestMediaTypeHasBeenSet = true; m_imageManifestMediaType.assign(value); }
    inline PutImageRequest& WithImageManifestMediaType(const Aws::String& value) { SetImageManifestMediaType(value); return *this;}
    inline PutImageRequest& WithImageManifestMediaType(Aws::String&& value) { SetImageManifestMediaType(std::move(value)); return *this;}
    inline PutImageRequest& WithImageManifestMediaType(const char* value) { SetImageManifestMediaType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tag to associate with the image. This parameter is required for images
     * that use the Docker Image Manifest V2 Schema 2 or Open Container Initiative
     * (OCI) formats.</p>
     */
    inline const Aws::String& GetImageTag() const{ return m_imageTag; }
    inline bool ImageTagHasBeenSet() const { return m_imageTagHasBeenSet; }
    inline void SetImageTag(const Aws::String& value) { m_imageTagHasBeenSet = true; m_imageTag = value; }
    inline void SetImageTag(Aws::String&& value) { m_imageTagHasBeenSet = true; m_imageTag = std::move(value); }
    inline void SetImageTag(const char* value) { m_imageTagHasBeenSet = true; m_imageTag.assign(value); }
    inline PutImageRequest& WithImageTag(const Aws::String& value) { SetImageTag(value); return *this;}
    inline PutImageRequest& WithImageTag(Aws::String&& value) { SetImageTag(std::move(value)); return *this;}
    inline PutImageRequest& WithImageTag(const char* value) { SetImageTag(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The image digest of the image manifest corresponding to the image.</p>
     */
    inline const Aws::String& GetImageDigest() const{ return m_imageDigest; }
    inline bool ImageDigestHasBeenSet() const { return m_imageDigestHasBeenSet; }
    inline void SetImageDigest(const Aws::String& value) { m_imageDigestHasBeenSet = true; m_imageDigest = value; }
    inline void SetImageDigest(Aws::String&& value) { m_imageDigestHasBeenSet = true; m_imageDigest = std::move(value); }
    inline void SetImageDigest(const char* value) { m_imageDigestHasBeenSet = true; m_imageDigest.assign(value); }
    inline PutImageRequest& WithImageDigest(const Aws::String& value) { SetImageDigest(value); return *this;}
    inline PutImageRequest& WithImageDigest(Aws::String&& value) { SetImageDigest(std::move(value)); return *this;}
    inline PutImageRequest& WithImageDigest(const char* value) { SetImageDigest(value); return *this;}
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
} // namespace ECR
} // namespace Aws

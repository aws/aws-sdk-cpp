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
  class AWS_ECR_API PutImageRequest : public ECRRequest
  {
  public:
    PutImageRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutImage"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The AWS account ID associated with the registry that contains the repository
     * in which to put the image. If you do not specify a registry, the default
     * registry is assumed.</p>
     */
    inline const Aws::String& GetRegistryId() const{ return m_registryId; }

    /**
     * <p>The AWS account ID associated with the registry that contains the repository
     * in which to put the image. If you do not specify a registry, the default
     * registry is assumed.</p>
     */
    inline bool RegistryIdHasBeenSet() const { return m_registryIdHasBeenSet; }

    /**
     * <p>The AWS account ID associated with the registry that contains the repository
     * in which to put the image. If you do not specify a registry, the default
     * registry is assumed.</p>
     */
    inline void SetRegistryId(const Aws::String& value) { m_registryIdHasBeenSet = true; m_registryId = value; }

    /**
     * <p>The AWS account ID associated with the registry that contains the repository
     * in which to put the image. If you do not specify a registry, the default
     * registry is assumed.</p>
     */
    inline void SetRegistryId(Aws::String&& value) { m_registryIdHasBeenSet = true; m_registryId = std::move(value); }

    /**
     * <p>The AWS account ID associated with the registry that contains the repository
     * in which to put the image. If you do not specify a registry, the default
     * registry is assumed.</p>
     */
    inline void SetRegistryId(const char* value) { m_registryIdHasBeenSet = true; m_registryId.assign(value); }

    /**
     * <p>The AWS account ID associated with the registry that contains the repository
     * in which to put the image. If you do not specify a registry, the default
     * registry is assumed.</p>
     */
    inline PutImageRequest& WithRegistryId(const Aws::String& value) { SetRegistryId(value); return *this;}

    /**
     * <p>The AWS account ID associated with the registry that contains the repository
     * in which to put the image. If you do not specify a registry, the default
     * registry is assumed.</p>
     */
    inline PutImageRequest& WithRegistryId(Aws::String&& value) { SetRegistryId(std::move(value)); return *this;}

    /**
     * <p>The AWS account ID associated with the registry that contains the repository
     * in which to put the image. If you do not specify a registry, the default
     * registry is assumed.</p>
     */
    inline PutImageRequest& WithRegistryId(const char* value) { SetRegistryId(value); return *this;}


    /**
     * <p>The name of the repository in which to put the image.</p>
     */
    inline const Aws::String& GetRepositoryName() const{ return m_repositoryName; }

    /**
     * <p>The name of the repository in which to put the image.</p>
     */
    inline bool RepositoryNameHasBeenSet() const { return m_repositoryNameHasBeenSet; }

    /**
     * <p>The name of the repository in which to put the image.</p>
     */
    inline void SetRepositoryName(const Aws::String& value) { m_repositoryNameHasBeenSet = true; m_repositoryName = value; }

    /**
     * <p>The name of the repository in which to put the image.</p>
     */
    inline void SetRepositoryName(Aws::String&& value) { m_repositoryNameHasBeenSet = true; m_repositoryName = std::move(value); }

    /**
     * <p>The name of the repository in which to put the image.</p>
     */
    inline void SetRepositoryName(const char* value) { m_repositoryNameHasBeenSet = true; m_repositoryName.assign(value); }

    /**
     * <p>The name of the repository in which to put the image.</p>
     */
    inline PutImageRequest& WithRepositoryName(const Aws::String& value) { SetRepositoryName(value); return *this;}

    /**
     * <p>The name of the repository in which to put the image.</p>
     */
    inline PutImageRequest& WithRepositoryName(Aws::String&& value) { SetRepositoryName(std::move(value)); return *this;}

    /**
     * <p>The name of the repository in which to put the image.</p>
     */
    inline PutImageRequest& WithRepositoryName(const char* value) { SetRepositoryName(value); return *this;}


    /**
     * <p>The image manifest corresponding to the image to be uploaded.</p>
     */
    inline const Aws::String& GetImageManifest() const{ return m_imageManifest; }

    /**
     * <p>The image manifest corresponding to the image to be uploaded.</p>
     */
    inline bool ImageManifestHasBeenSet() const { return m_imageManifestHasBeenSet; }

    /**
     * <p>The image manifest corresponding to the image to be uploaded.</p>
     */
    inline void SetImageManifest(const Aws::String& value) { m_imageManifestHasBeenSet = true; m_imageManifest = value; }

    /**
     * <p>The image manifest corresponding to the image to be uploaded.</p>
     */
    inline void SetImageManifest(Aws::String&& value) { m_imageManifestHasBeenSet = true; m_imageManifest = std::move(value); }

    /**
     * <p>The image manifest corresponding to the image to be uploaded.</p>
     */
    inline void SetImageManifest(const char* value) { m_imageManifestHasBeenSet = true; m_imageManifest.assign(value); }

    /**
     * <p>The image manifest corresponding to the image to be uploaded.</p>
     */
    inline PutImageRequest& WithImageManifest(const Aws::String& value) { SetImageManifest(value); return *this;}

    /**
     * <p>The image manifest corresponding to the image to be uploaded.</p>
     */
    inline PutImageRequest& WithImageManifest(Aws::String&& value) { SetImageManifest(std::move(value)); return *this;}

    /**
     * <p>The image manifest corresponding to the image to be uploaded.</p>
     */
    inline PutImageRequest& WithImageManifest(const char* value) { SetImageManifest(value); return *this;}


    /**
     * <p>The tag to associate with the image. This parameter is required for images
     * that use the Docker Image Manifest V2 Schema 2 or OCI formats.</p>
     */
    inline const Aws::String& GetImageTag() const{ return m_imageTag; }

    /**
     * <p>The tag to associate with the image. This parameter is required for images
     * that use the Docker Image Manifest V2 Schema 2 or OCI formats.</p>
     */
    inline bool ImageTagHasBeenSet() const { return m_imageTagHasBeenSet; }

    /**
     * <p>The tag to associate with the image. This parameter is required for images
     * that use the Docker Image Manifest V2 Schema 2 or OCI formats.</p>
     */
    inline void SetImageTag(const Aws::String& value) { m_imageTagHasBeenSet = true; m_imageTag = value; }

    /**
     * <p>The tag to associate with the image. This parameter is required for images
     * that use the Docker Image Manifest V2 Schema 2 or OCI formats.</p>
     */
    inline void SetImageTag(Aws::String&& value) { m_imageTagHasBeenSet = true; m_imageTag = std::move(value); }

    /**
     * <p>The tag to associate with the image. This parameter is required for images
     * that use the Docker Image Manifest V2 Schema 2 or OCI formats.</p>
     */
    inline void SetImageTag(const char* value) { m_imageTagHasBeenSet = true; m_imageTag.assign(value); }

    /**
     * <p>The tag to associate with the image. This parameter is required for images
     * that use the Docker Image Manifest V2 Schema 2 or OCI formats.</p>
     */
    inline PutImageRequest& WithImageTag(const Aws::String& value) { SetImageTag(value); return *this;}

    /**
     * <p>The tag to associate with the image. This parameter is required for images
     * that use the Docker Image Manifest V2 Schema 2 or OCI formats.</p>
     */
    inline PutImageRequest& WithImageTag(Aws::String&& value) { SetImageTag(std::move(value)); return *this;}

    /**
     * <p>The tag to associate with the image. This parameter is required for images
     * that use the Docker Image Manifest V2 Schema 2 or OCI formats.</p>
     */
    inline PutImageRequest& WithImageTag(const char* value) { SetImageTag(value); return *this;}

  private:

    Aws::String m_registryId;
    bool m_registryIdHasBeenSet;

    Aws::String m_repositoryName;
    bool m_repositoryNameHasBeenSet;

    Aws::String m_imageManifest;
    bool m_imageManifestHasBeenSet;

    Aws::String m_imageTag;
    bool m_imageTagHasBeenSet;
  };

} // namespace Model
} // namespace ECR
} // namespace Aws

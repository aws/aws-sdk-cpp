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
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ecr/model/ImageIdentifier.h>
#include <utility>

namespace Aws
{
namespace ECR
{
namespace Model
{

  /**
   */
  class AWS_ECR_API BatchGetImageRequest : public ECRRequest
  {
  public:
    BatchGetImageRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "BatchGetImage"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The AWS account ID associated with the registry that contains the images to
     * describe. If you do not specify a registry, the default registry is assumed.</p>
     */
    inline const Aws::String& GetRegistryId() const{ return m_registryId; }

    /**
     * <p>The AWS account ID associated with the registry that contains the images to
     * describe. If you do not specify a registry, the default registry is assumed.</p>
     */
    inline bool RegistryIdHasBeenSet() const { return m_registryIdHasBeenSet; }

    /**
     * <p>The AWS account ID associated with the registry that contains the images to
     * describe. If you do not specify a registry, the default registry is assumed.</p>
     */
    inline void SetRegistryId(const Aws::String& value) { m_registryIdHasBeenSet = true; m_registryId = value; }

    /**
     * <p>The AWS account ID associated with the registry that contains the images to
     * describe. If you do not specify a registry, the default registry is assumed.</p>
     */
    inline void SetRegistryId(Aws::String&& value) { m_registryIdHasBeenSet = true; m_registryId = std::move(value); }

    /**
     * <p>The AWS account ID associated with the registry that contains the images to
     * describe. If you do not specify a registry, the default registry is assumed.</p>
     */
    inline void SetRegistryId(const char* value) { m_registryIdHasBeenSet = true; m_registryId.assign(value); }

    /**
     * <p>The AWS account ID associated with the registry that contains the images to
     * describe. If you do not specify a registry, the default registry is assumed.</p>
     */
    inline BatchGetImageRequest& WithRegistryId(const Aws::String& value) { SetRegistryId(value); return *this;}

    /**
     * <p>The AWS account ID associated with the registry that contains the images to
     * describe. If you do not specify a registry, the default registry is assumed.</p>
     */
    inline BatchGetImageRequest& WithRegistryId(Aws::String&& value) { SetRegistryId(std::move(value)); return *this;}

    /**
     * <p>The AWS account ID associated with the registry that contains the images to
     * describe. If you do not specify a registry, the default registry is assumed.</p>
     */
    inline BatchGetImageRequest& WithRegistryId(const char* value) { SetRegistryId(value); return *this;}


    /**
     * <p>The repository that contains the images to describe.</p>
     */
    inline const Aws::String& GetRepositoryName() const{ return m_repositoryName; }

    /**
     * <p>The repository that contains the images to describe.</p>
     */
    inline bool RepositoryNameHasBeenSet() const { return m_repositoryNameHasBeenSet; }

    /**
     * <p>The repository that contains the images to describe.</p>
     */
    inline void SetRepositoryName(const Aws::String& value) { m_repositoryNameHasBeenSet = true; m_repositoryName = value; }

    /**
     * <p>The repository that contains the images to describe.</p>
     */
    inline void SetRepositoryName(Aws::String&& value) { m_repositoryNameHasBeenSet = true; m_repositoryName = std::move(value); }

    /**
     * <p>The repository that contains the images to describe.</p>
     */
    inline void SetRepositoryName(const char* value) { m_repositoryNameHasBeenSet = true; m_repositoryName.assign(value); }

    /**
     * <p>The repository that contains the images to describe.</p>
     */
    inline BatchGetImageRequest& WithRepositoryName(const Aws::String& value) { SetRepositoryName(value); return *this;}

    /**
     * <p>The repository that contains the images to describe.</p>
     */
    inline BatchGetImageRequest& WithRepositoryName(Aws::String&& value) { SetRepositoryName(std::move(value)); return *this;}

    /**
     * <p>The repository that contains the images to describe.</p>
     */
    inline BatchGetImageRequest& WithRepositoryName(const char* value) { SetRepositoryName(value); return *this;}


    /**
     * <p>A list of image ID references that correspond to images to describe. The
     * format of the <code>imageIds</code> reference is <code>imageTag=tag</code> or
     * <code>imageDigest=digest</code>.</p>
     */
    inline const Aws::Vector<ImageIdentifier>& GetImageIds() const{ return m_imageIds; }

    /**
     * <p>A list of image ID references that correspond to images to describe. The
     * format of the <code>imageIds</code> reference is <code>imageTag=tag</code> or
     * <code>imageDigest=digest</code>.</p>
     */
    inline bool ImageIdsHasBeenSet() const { return m_imageIdsHasBeenSet; }

    /**
     * <p>A list of image ID references that correspond to images to describe. The
     * format of the <code>imageIds</code> reference is <code>imageTag=tag</code> or
     * <code>imageDigest=digest</code>.</p>
     */
    inline void SetImageIds(const Aws::Vector<ImageIdentifier>& value) { m_imageIdsHasBeenSet = true; m_imageIds = value; }

    /**
     * <p>A list of image ID references that correspond to images to describe. The
     * format of the <code>imageIds</code> reference is <code>imageTag=tag</code> or
     * <code>imageDigest=digest</code>.</p>
     */
    inline void SetImageIds(Aws::Vector<ImageIdentifier>&& value) { m_imageIdsHasBeenSet = true; m_imageIds = std::move(value); }

    /**
     * <p>A list of image ID references that correspond to images to describe. The
     * format of the <code>imageIds</code> reference is <code>imageTag=tag</code> or
     * <code>imageDigest=digest</code>.</p>
     */
    inline BatchGetImageRequest& WithImageIds(const Aws::Vector<ImageIdentifier>& value) { SetImageIds(value); return *this;}

    /**
     * <p>A list of image ID references that correspond to images to describe. The
     * format of the <code>imageIds</code> reference is <code>imageTag=tag</code> or
     * <code>imageDigest=digest</code>.</p>
     */
    inline BatchGetImageRequest& WithImageIds(Aws::Vector<ImageIdentifier>&& value) { SetImageIds(std::move(value)); return *this;}

    /**
     * <p>A list of image ID references that correspond to images to describe. The
     * format of the <code>imageIds</code> reference is <code>imageTag=tag</code> or
     * <code>imageDigest=digest</code>.</p>
     */
    inline BatchGetImageRequest& AddImageIds(const ImageIdentifier& value) { m_imageIdsHasBeenSet = true; m_imageIds.push_back(value); return *this; }

    /**
     * <p>A list of image ID references that correspond to images to describe. The
     * format of the <code>imageIds</code> reference is <code>imageTag=tag</code> or
     * <code>imageDigest=digest</code>.</p>
     */
    inline BatchGetImageRequest& AddImageIds(ImageIdentifier&& value) { m_imageIdsHasBeenSet = true; m_imageIds.push_back(std::move(value)); return *this; }


    /**
     * <p>The accepted media types for the request.</p> <p>Valid values:
     * <code>application/vnd.docker.distribution.manifest.v1+json</code> |
     * <code>application/vnd.docker.distribution.manifest.v2+json</code> |
     * <code>application/vnd.oci.image.manifest.v1+json</code> </p>
     */
    inline const Aws::Vector<Aws::String>& GetAcceptedMediaTypes() const{ return m_acceptedMediaTypes; }

    /**
     * <p>The accepted media types for the request.</p> <p>Valid values:
     * <code>application/vnd.docker.distribution.manifest.v1+json</code> |
     * <code>application/vnd.docker.distribution.manifest.v2+json</code> |
     * <code>application/vnd.oci.image.manifest.v1+json</code> </p>
     */
    inline bool AcceptedMediaTypesHasBeenSet() const { return m_acceptedMediaTypesHasBeenSet; }

    /**
     * <p>The accepted media types for the request.</p> <p>Valid values:
     * <code>application/vnd.docker.distribution.manifest.v1+json</code> |
     * <code>application/vnd.docker.distribution.manifest.v2+json</code> |
     * <code>application/vnd.oci.image.manifest.v1+json</code> </p>
     */
    inline void SetAcceptedMediaTypes(const Aws::Vector<Aws::String>& value) { m_acceptedMediaTypesHasBeenSet = true; m_acceptedMediaTypes = value; }

    /**
     * <p>The accepted media types for the request.</p> <p>Valid values:
     * <code>application/vnd.docker.distribution.manifest.v1+json</code> |
     * <code>application/vnd.docker.distribution.manifest.v2+json</code> |
     * <code>application/vnd.oci.image.manifest.v1+json</code> </p>
     */
    inline void SetAcceptedMediaTypes(Aws::Vector<Aws::String>&& value) { m_acceptedMediaTypesHasBeenSet = true; m_acceptedMediaTypes = std::move(value); }

    /**
     * <p>The accepted media types for the request.</p> <p>Valid values:
     * <code>application/vnd.docker.distribution.manifest.v1+json</code> |
     * <code>application/vnd.docker.distribution.manifest.v2+json</code> |
     * <code>application/vnd.oci.image.manifest.v1+json</code> </p>
     */
    inline BatchGetImageRequest& WithAcceptedMediaTypes(const Aws::Vector<Aws::String>& value) { SetAcceptedMediaTypes(value); return *this;}

    /**
     * <p>The accepted media types for the request.</p> <p>Valid values:
     * <code>application/vnd.docker.distribution.manifest.v1+json</code> |
     * <code>application/vnd.docker.distribution.manifest.v2+json</code> |
     * <code>application/vnd.oci.image.manifest.v1+json</code> </p>
     */
    inline BatchGetImageRequest& WithAcceptedMediaTypes(Aws::Vector<Aws::String>&& value) { SetAcceptedMediaTypes(std::move(value)); return *this;}

    /**
     * <p>The accepted media types for the request.</p> <p>Valid values:
     * <code>application/vnd.docker.distribution.manifest.v1+json</code> |
     * <code>application/vnd.docker.distribution.manifest.v2+json</code> |
     * <code>application/vnd.oci.image.manifest.v1+json</code> </p>
     */
    inline BatchGetImageRequest& AddAcceptedMediaTypes(const Aws::String& value) { m_acceptedMediaTypesHasBeenSet = true; m_acceptedMediaTypes.push_back(value); return *this; }

    /**
     * <p>The accepted media types for the request.</p> <p>Valid values:
     * <code>application/vnd.docker.distribution.manifest.v1+json</code> |
     * <code>application/vnd.docker.distribution.manifest.v2+json</code> |
     * <code>application/vnd.oci.image.manifest.v1+json</code> </p>
     */
    inline BatchGetImageRequest& AddAcceptedMediaTypes(Aws::String&& value) { m_acceptedMediaTypesHasBeenSet = true; m_acceptedMediaTypes.push_back(std::move(value)); return *this; }

    /**
     * <p>The accepted media types for the request.</p> <p>Valid values:
     * <code>application/vnd.docker.distribution.manifest.v1+json</code> |
     * <code>application/vnd.docker.distribution.manifest.v2+json</code> |
     * <code>application/vnd.oci.image.manifest.v1+json</code> </p>
     */
    inline BatchGetImageRequest& AddAcceptedMediaTypes(const char* value) { m_acceptedMediaTypesHasBeenSet = true; m_acceptedMediaTypes.push_back(value); return *this; }

  private:

    Aws::String m_registryId;
    bool m_registryIdHasBeenSet;

    Aws::String m_repositoryName;
    bool m_repositoryNameHasBeenSet;

    Aws::Vector<ImageIdentifier> m_imageIds;
    bool m_imageIdsHasBeenSet;

    Aws::Vector<Aws::String> m_acceptedMediaTypes;
    bool m_acceptedMediaTypesHasBeenSet;
  };

} // namespace Model
} // namespace ECR
} // namespace Aws

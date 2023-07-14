﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
   * <p>Deletes specified images within a specified repository. Images are specified
   * with either the <code>imageTag</code> or <code>imageDigest</code>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-2015-09-21/BatchDeleteImageRequest">AWS
   * API Reference</a></p>
   */
  class AWS_ECR_API BatchDeleteImageRequest : public ECRRequest
  {
  public:
    BatchDeleteImageRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "BatchDeleteImage"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The Amazon Web Services account ID associated with the registry that contains
     * the image to delete. If you do not specify a registry, the default registry is
     * assumed.</p>
     */
    inline const Aws::String& GetRegistryId() const{ return m_registryId; }

    /**
     * <p>The Amazon Web Services account ID associated with the registry that contains
     * the image to delete. If you do not specify a registry, the default registry is
     * assumed.</p>
     */
    inline bool RegistryIdHasBeenSet() const { return m_registryIdHasBeenSet; }

    /**
     * <p>The Amazon Web Services account ID associated with the registry that contains
     * the image to delete. If you do not specify a registry, the default registry is
     * assumed.</p>
     */
    inline void SetRegistryId(const Aws::String& value) { m_registryIdHasBeenSet = true; m_registryId = value; }

    /**
     * <p>The Amazon Web Services account ID associated with the registry that contains
     * the image to delete. If you do not specify a registry, the default registry is
     * assumed.</p>
     */
    inline void SetRegistryId(Aws::String&& value) { m_registryIdHasBeenSet = true; m_registryId = std::move(value); }

    /**
     * <p>The Amazon Web Services account ID associated with the registry that contains
     * the image to delete. If you do not specify a registry, the default registry is
     * assumed.</p>
     */
    inline void SetRegistryId(const char* value) { m_registryIdHasBeenSet = true; m_registryId.assign(value); }

    /**
     * <p>The Amazon Web Services account ID associated with the registry that contains
     * the image to delete. If you do not specify a registry, the default registry is
     * assumed.</p>
     */
    inline BatchDeleteImageRequest& WithRegistryId(const Aws::String& value) { SetRegistryId(value); return *this;}

    /**
     * <p>The Amazon Web Services account ID associated with the registry that contains
     * the image to delete. If you do not specify a registry, the default registry is
     * assumed.</p>
     */
    inline BatchDeleteImageRequest& WithRegistryId(Aws::String&& value) { SetRegistryId(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services account ID associated with the registry that contains
     * the image to delete. If you do not specify a registry, the default registry is
     * assumed.</p>
     */
    inline BatchDeleteImageRequest& WithRegistryId(const char* value) { SetRegistryId(value); return *this;}


    /**
     * <p>The repository that contains the image to delete.</p>
     */
    inline const Aws::String& GetRepositoryName() const{ return m_repositoryName; }

    /**
     * <p>The repository that contains the image to delete.</p>
     */
    inline bool RepositoryNameHasBeenSet() const { return m_repositoryNameHasBeenSet; }

    /**
     * <p>The repository that contains the image to delete.</p>
     */
    inline void SetRepositoryName(const Aws::String& value) { m_repositoryNameHasBeenSet = true; m_repositoryName = value; }

    /**
     * <p>The repository that contains the image to delete.</p>
     */
    inline void SetRepositoryName(Aws::String&& value) { m_repositoryNameHasBeenSet = true; m_repositoryName = std::move(value); }

    /**
     * <p>The repository that contains the image to delete.</p>
     */
    inline void SetRepositoryName(const char* value) { m_repositoryNameHasBeenSet = true; m_repositoryName.assign(value); }

    /**
     * <p>The repository that contains the image to delete.</p>
     */
    inline BatchDeleteImageRequest& WithRepositoryName(const Aws::String& value) { SetRepositoryName(value); return *this;}

    /**
     * <p>The repository that contains the image to delete.</p>
     */
    inline BatchDeleteImageRequest& WithRepositoryName(Aws::String&& value) { SetRepositoryName(std::move(value)); return *this;}

    /**
     * <p>The repository that contains the image to delete.</p>
     */
    inline BatchDeleteImageRequest& WithRepositoryName(const char* value) { SetRepositoryName(value); return *this;}


    /**
     * <p>A list of image ID references that correspond to images to delete. The format
     * of the <code>imageIds</code> reference is <code>imageTag=tag</code> or
     * <code>imageDigest=digest</code>.</p>
     */
    inline const Aws::Vector<ImageIdentifier>& GetImageIds() const{ return m_imageIds; }

    /**
     * <p>A list of image ID references that correspond to images to delete. The format
     * of the <code>imageIds</code> reference is <code>imageTag=tag</code> or
     * <code>imageDigest=digest</code>.</p>
     */
    inline bool ImageIdsHasBeenSet() const { return m_imageIdsHasBeenSet; }

    /**
     * <p>A list of image ID references that correspond to images to delete. The format
     * of the <code>imageIds</code> reference is <code>imageTag=tag</code> or
     * <code>imageDigest=digest</code>.</p>
     */
    inline void SetImageIds(const Aws::Vector<ImageIdentifier>& value) { m_imageIdsHasBeenSet = true; m_imageIds = value; }

    /**
     * <p>A list of image ID references that correspond to images to delete. The format
     * of the <code>imageIds</code> reference is <code>imageTag=tag</code> or
     * <code>imageDigest=digest</code>.</p>
     */
    inline void SetImageIds(Aws::Vector<ImageIdentifier>&& value) { m_imageIdsHasBeenSet = true; m_imageIds = std::move(value); }

    /**
     * <p>A list of image ID references that correspond to images to delete. The format
     * of the <code>imageIds</code> reference is <code>imageTag=tag</code> or
     * <code>imageDigest=digest</code>.</p>
     */
    inline BatchDeleteImageRequest& WithImageIds(const Aws::Vector<ImageIdentifier>& value) { SetImageIds(value); return *this;}

    /**
     * <p>A list of image ID references that correspond to images to delete. The format
     * of the <code>imageIds</code> reference is <code>imageTag=tag</code> or
     * <code>imageDigest=digest</code>.</p>
     */
    inline BatchDeleteImageRequest& WithImageIds(Aws::Vector<ImageIdentifier>&& value) { SetImageIds(std::move(value)); return *this;}

    /**
     * <p>A list of image ID references that correspond to images to delete. The format
     * of the <code>imageIds</code> reference is <code>imageTag=tag</code> or
     * <code>imageDigest=digest</code>.</p>
     */
    inline BatchDeleteImageRequest& AddImageIds(const ImageIdentifier& value) { m_imageIdsHasBeenSet = true; m_imageIds.push_back(value); return *this; }

    /**
     * <p>A list of image ID references that correspond to images to delete. The format
     * of the <code>imageIds</code> reference is <code>imageTag=tag</code> or
     * <code>imageDigest=digest</code>.</p>
     */
    inline BatchDeleteImageRequest& AddImageIds(ImageIdentifier&& value) { m_imageIdsHasBeenSet = true; m_imageIds.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_registryId;
    bool m_registryIdHasBeenSet;

    Aws::String m_repositoryName;
    bool m_repositoryNameHasBeenSet;

    Aws::Vector<ImageIdentifier> m_imageIds;
    bool m_imageIdsHasBeenSet;
  };

} // namespace Model
} // namespace ECR
} // namespace Aws

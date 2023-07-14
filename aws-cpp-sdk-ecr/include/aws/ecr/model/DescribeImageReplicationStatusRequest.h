﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecr/ECR_EXPORTS.h>
#include <aws/ecr/ECRRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class AWS_ECR_API DescribeImageReplicationStatusRequest : public ECRRequest
  {
  public:
    DescribeImageReplicationStatusRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeImageReplicationStatus"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the repository that the image is in.</p>
     */
    inline const Aws::String& GetRepositoryName() const{ return m_repositoryName; }

    /**
     * <p>The name of the repository that the image is in.</p>
     */
    inline bool RepositoryNameHasBeenSet() const { return m_repositoryNameHasBeenSet; }

    /**
     * <p>The name of the repository that the image is in.</p>
     */
    inline void SetRepositoryName(const Aws::String& value) { m_repositoryNameHasBeenSet = true; m_repositoryName = value; }

    /**
     * <p>The name of the repository that the image is in.</p>
     */
    inline void SetRepositoryName(Aws::String&& value) { m_repositoryNameHasBeenSet = true; m_repositoryName = std::move(value); }

    /**
     * <p>The name of the repository that the image is in.</p>
     */
    inline void SetRepositoryName(const char* value) { m_repositoryNameHasBeenSet = true; m_repositoryName.assign(value); }

    /**
     * <p>The name of the repository that the image is in.</p>
     */
    inline DescribeImageReplicationStatusRequest& WithRepositoryName(const Aws::String& value) { SetRepositoryName(value); return *this;}

    /**
     * <p>The name of the repository that the image is in.</p>
     */
    inline DescribeImageReplicationStatusRequest& WithRepositoryName(Aws::String&& value) { SetRepositoryName(std::move(value)); return *this;}

    /**
     * <p>The name of the repository that the image is in.</p>
     */
    inline DescribeImageReplicationStatusRequest& WithRepositoryName(const char* value) { SetRepositoryName(value); return *this;}


    
    inline const ImageIdentifier& GetImageId() const{ return m_imageId; }

    
    inline bool ImageIdHasBeenSet() const { return m_imageIdHasBeenSet; }

    
    inline void SetImageId(const ImageIdentifier& value) { m_imageIdHasBeenSet = true; m_imageId = value; }

    
    inline void SetImageId(ImageIdentifier&& value) { m_imageIdHasBeenSet = true; m_imageId = std::move(value); }

    
    inline DescribeImageReplicationStatusRequest& WithImageId(const ImageIdentifier& value) { SetImageId(value); return *this;}

    
    inline DescribeImageReplicationStatusRequest& WithImageId(ImageIdentifier&& value) { SetImageId(std::move(value)); return *this;}


    /**
     * <p>The Amazon Web Services account ID associated with the registry. If you do
     * not specify a registry, the default registry is assumed.</p>
     */
    inline const Aws::String& GetRegistryId() const{ return m_registryId; }

    /**
     * <p>The Amazon Web Services account ID associated with the registry. If you do
     * not specify a registry, the default registry is assumed.</p>
     */
    inline bool RegistryIdHasBeenSet() const { return m_registryIdHasBeenSet; }

    /**
     * <p>The Amazon Web Services account ID associated with the registry. If you do
     * not specify a registry, the default registry is assumed.</p>
     */
    inline void SetRegistryId(const Aws::String& value) { m_registryIdHasBeenSet = true; m_registryId = value; }

    /**
     * <p>The Amazon Web Services account ID associated with the registry. If you do
     * not specify a registry, the default registry is assumed.</p>
     */
    inline void SetRegistryId(Aws::String&& value) { m_registryIdHasBeenSet = true; m_registryId = std::move(value); }

    /**
     * <p>The Amazon Web Services account ID associated with the registry. If you do
     * not specify a registry, the default registry is assumed.</p>
     */
    inline void SetRegistryId(const char* value) { m_registryIdHasBeenSet = true; m_registryId.assign(value); }

    /**
     * <p>The Amazon Web Services account ID associated with the registry. If you do
     * not specify a registry, the default registry is assumed.</p>
     */
    inline DescribeImageReplicationStatusRequest& WithRegistryId(const Aws::String& value) { SetRegistryId(value); return *this;}

    /**
     * <p>The Amazon Web Services account ID associated with the registry. If you do
     * not specify a registry, the default registry is assumed.</p>
     */
    inline DescribeImageReplicationStatusRequest& WithRegistryId(Aws::String&& value) { SetRegistryId(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services account ID associated with the registry. If you do
     * not specify a registry, the default registry is assumed.</p>
     */
    inline DescribeImageReplicationStatusRequest& WithRegistryId(const char* value) { SetRegistryId(value); return *this;}

  private:

    Aws::String m_repositoryName;
    bool m_repositoryNameHasBeenSet;

    ImageIdentifier m_imageId;
    bool m_imageIdHasBeenSet;

    Aws::String m_registryId;
    bool m_registryIdHasBeenSet;
  };

} // namespace Model
} // namespace ECR
} // namespace Aws

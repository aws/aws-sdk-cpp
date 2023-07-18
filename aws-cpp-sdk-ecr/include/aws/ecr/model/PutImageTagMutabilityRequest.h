﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecr/ECR_EXPORTS.h>
#include <aws/ecr/ECRRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ecr/model/ImageTagMutability.h>
#include <utility>

namespace Aws
{
namespace ECR
{
namespace Model
{

  /**
   */
  class AWS_ECR_API PutImageTagMutabilityRequest : public ECRRequest
  {
  public:
    PutImageTagMutabilityRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutImageTagMutability"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The Amazon Web Services account ID associated with the registry that contains
     * the repository in which to update the image tag mutability settings. If you do
     * not specify a registry, the default registry is assumed.</p>
     */
    inline const Aws::String& GetRegistryId() const{ return m_registryId; }

    /**
     * <p>The Amazon Web Services account ID associated with the registry that contains
     * the repository in which to update the image tag mutability settings. If you do
     * not specify a registry, the default registry is assumed.</p>
     */
    inline bool RegistryIdHasBeenSet() const { return m_registryIdHasBeenSet; }

    /**
     * <p>The Amazon Web Services account ID associated with the registry that contains
     * the repository in which to update the image tag mutability settings. If you do
     * not specify a registry, the default registry is assumed.</p>
     */
    inline void SetRegistryId(const Aws::String& value) { m_registryIdHasBeenSet = true; m_registryId = value; }

    /**
     * <p>The Amazon Web Services account ID associated with the registry that contains
     * the repository in which to update the image tag mutability settings. If you do
     * not specify a registry, the default registry is assumed.</p>
     */
    inline void SetRegistryId(Aws::String&& value) { m_registryIdHasBeenSet = true; m_registryId = std::move(value); }

    /**
     * <p>The Amazon Web Services account ID associated with the registry that contains
     * the repository in which to update the image tag mutability settings. If you do
     * not specify a registry, the default registry is assumed.</p>
     */
    inline void SetRegistryId(const char* value) { m_registryIdHasBeenSet = true; m_registryId.assign(value); }

    /**
     * <p>The Amazon Web Services account ID associated with the registry that contains
     * the repository in which to update the image tag mutability settings. If you do
     * not specify a registry, the default registry is assumed.</p>
     */
    inline PutImageTagMutabilityRequest& WithRegistryId(const Aws::String& value) { SetRegistryId(value); return *this;}

    /**
     * <p>The Amazon Web Services account ID associated with the registry that contains
     * the repository in which to update the image tag mutability settings. If you do
     * not specify a registry, the default registry is assumed.</p>
     */
    inline PutImageTagMutabilityRequest& WithRegistryId(Aws::String&& value) { SetRegistryId(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services account ID associated with the registry that contains
     * the repository in which to update the image tag mutability settings. If you do
     * not specify a registry, the default registry is assumed.</p>
     */
    inline PutImageTagMutabilityRequest& WithRegistryId(const char* value) { SetRegistryId(value); return *this;}


    /**
     * <p>The name of the repository in which to update the image tag mutability
     * settings.</p>
     */
    inline const Aws::String& GetRepositoryName() const{ return m_repositoryName; }

    /**
     * <p>The name of the repository in which to update the image tag mutability
     * settings.</p>
     */
    inline bool RepositoryNameHasBeenSet() const { return m_repositoryNameHasBeenSet; }

    /**
     * <p>The name of the repository in which to update the image tag mutability
     * settings.</p>
     */
    inline void SetRepositoryName(const Aws::String& value) { m_repositoryNameHasBeenSet = true; m_repositoryName = value; }

    /**
     * <p>The name of the repository in which to update the image tag mutability
     * settings.</p>
     */
    inline void SetRepositoryName(Aws::String&& value) { m_repositoryNameHasBeenSet = true; m_repositoryName = std::move(value); }

    /**
     * <p>The name of the repository in which to update the image tag mutability
     * settings.</p>
     */
    inline void SetRepositoryName(const char* value) { m_repositoryNameHasBeenSet = true; m_repositoryName.assign(value); }

    /**
     * <p>The name of the repository in which to update the image tag mutability
     * settings.</p>
     */
    inline PutImageTagMutabilityRequest& WithRepositoryName(const Aws::String& value) { SetRepositoryName(value); return *this;}

    /**
     * <p>The name of the repository in which to update the image tag mutability
     * settings.</p>
     */
    inline PutImageTagMutabilityRequest& WithRepositoryName(Aws::String&& value) { SetRepositoryName(std::move(value)); return *this;}

    /**
     * <p>The name of the repository in which to update the image tag mutability
     * settings.</p>
     */
    inline PutImageTagMutabilityRequest& WithRepositoryName(const char* value) { SetRepositoryName(value); return *this;}


    /**
     * <p>The tag mutability setting for the repository. If <code>MUTABLE</code> is
     * specified, image tags can be overwritten. If <code>IMMUTABLE</code> is
     * specified, all image tags within the repository will be immutable which will
     * prevent them from being overwritten.</p>
     */
    inline const ImageTagMutability& GetImageTagMutability() const{ return m_imageTagMutability; }

    /**
     * <p>The tag mutability setting for the repository. If <code>MUTABLE</code> is
     * specified, image tags can be overwritten. If <code>IMMUTABLE</code> is
     * specified, all image tags within the repository will be immutable which will
     * prevent them from being overwritten.</p>
     */
    inline bool ImageTagMutabilityHasBeenSet() const { return m_imageTagMutabilityHasBeenSet; }

    /**
     * <p>The tag mutability setting for the repository. If <code>MUTABLE</code> is
     * specified, image tags can be overwritten. If <code>IMMUTABLE</code> is
     * specified, all image tags within the repository will be immutable which will
     * prevent them from being overwritten.</p>
     */
    inline void SetImageTagMutability(const ImageTagMutability& value) { m_imageTagMutabilityHasBeenSet = true; m_imageTagMutability = value; }

    /**
     * <p>The tag mutability setting for the repository. If <code>MUTABLE</code> is
     * specified, image tags can be overwritten. If <code>IMMUTABLE</code> is
     * specified, all image tags within the repository will be immutable which will
     * prevent them from being overwritten.</p>
     */
    inline void SetImageTagMutability(ImageTagMutability&& value) { m_imageTagMutabilityHasBeenSet = true; m_imageTagMutability = std::move(value); }

    /**
     * <p>The tag mutability setting for the repository. If <code>MUTABLE</code> is
     * specified, image tags can be overwritten. If <code>IMMUTABLE</code> is
     * specified, all image tags within the repository will be immutable which will
     * prevent them from being overwritten.</p>
     */
    inline PutImageTagMutabilityRequest& WithImageTagMutability(const ImageTagMutability& value) { SetImageTagMutability(value); return *this;}

    /**
     * <p>The tag mutability setting for the repository. If <code>MUTABLE</code> is
     * specified, image tags can be overwritten. If <code>IMMUTABLE</code> is
     * specified, all image tags within the repository will be immutable which will
     * prevent them from being overwritten.</p>
     */
    inline PutImageTagMutabilityRequest& WithImageTagMutability(ImageTagMutability&& value) { SetImageTagMutability(std::move(value)); return *this;}

  private:

    Aws::String m_registryId;
    bool m_registryIdHasBeenSet;

    Aws::String m_repositoryName;
    bool m_repositoryNameHasBeenSet;

    ImageTagMutability m_imageTagMutability;
    bool m_imageTagMutabilityHasBeenSet;
  };

} // namespace Model
} // namespace ECR
} // namespace Aws

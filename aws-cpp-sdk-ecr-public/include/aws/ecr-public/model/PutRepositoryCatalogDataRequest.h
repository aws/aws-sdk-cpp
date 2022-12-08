/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecr-public/ECRPublic_EXPORTS.h>
#include <aws/ecr-public/ECRPublicRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ecr-public/model/RepositoryCatalogDataInput.h>
#include <utility>

namespace Aws
{
namespace ECRPublic
{
namespace Model
{

  /**
   */
  class PutRepositoryCatalogDataRequest : public ECRPublicRequest
  {
  public:
    AWS_ECRPUBLIC_API PutRepositoryCatalogDataRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutRepositoryCatalogData"; }

    AWS_ECRPUBLIC_API Aws::String SerializePayload() const override;

    AWS_ECRPUBLIC_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The AWS account ID associated with the public registry the repository is in.
     * If you do not specify a registry, the default public registry is assumed.</p>
     */
    inline const Aws::String& GetRegistryId() const{ return m_registryId; }

    /**
     * <p>The AWS account ID associated with the public registry the repository is in.
     * If you do not specify a registry, the default public registry is assumed.</p>
     */
    inline bool RegistryIdHasBeenSet() const { return m_registryIdHasBeenSet; }

    /**
     * <p>The AWS account ID associated with the public registry the repository is in.
     * If you do not specify a registry, the default public registry is assumed.</p>
     */
    inline void SetRegistryId(const Aws::String& value) { m_registryIdHasBeenSet = true; m_registryId = value; }

    /**
     * <p>The AWS account ID associated with the public registry the repository is in.
     * If you do not specify a registry, the default public registry is assumed.</p>
     */
    inline void SetRegistryId(Aws::String&& value) { m_registryIdHasBeenSet = true; m_registryId = std::move(value); }

    /**
     * <p>The AWS account ID associated with the public registry the repository is in.
     * If you do not specify a registry, the default public registry is assumed.</p>
     */
    inline void SetRegistryId(const char* value) { m_registryIdHasBeenSet = true; m_registryId.assign(value); }

    /**
     * <p>The AWS account ID associated with the public registry the repository is in.
     * If you do not specify a registry, the default public registry is assumed.</p>
     */
    inline PutRepositoryCatalogDataRequest& WithRegistryId(const Aws::String& value) { SetRegistryId(value); return *this;}

    /**
     * <p>The AWS account ID associated with the public registry the repository is in.
     * If you do not specify a registry, the default public registry is assumed.</p>
     */
    inline PutRepositoryCatalogDataRequest& WithRegistryId(Aws::String&& value) { SetRegistryId(std::move(value)); return *this;}

    /**
     * <p>The AWS account ID associated with the public registry the repository is in.
     * If you do not specify a registry, the default public registry is assumed.</p>
     */
    inline PutRepositoryCatalogDataRequest& WithRegistryId(const char* value) { SetRegistryId(value); return *this;}


    /**
     * <p>The name of the repository to create or update the catalog data for.</p>
     */
    inline const Aws::String& GetRepositoryName() const{ return m_repositoryName; }

    /**
     * <p>The name of the repository to create or update the catalog data for.</p>
     */
    inline bool RepositoryNameHasBeenSet() const { return m_repositoryNameHasBeenSet; }

    /**
     * <p>The name of the repository to create or update the catalog data for.</p>
     */
    inline void SetRepositoryName(const Aws::String& value) { m_repositoryNameHasBeenSet = true; m_repositoryName = value; }

    /**
     * <p>The name of the repository to create or update the catalog data for.</p>
     */
    inline void SetRepositoryName(Aws::String&& value) { m_repositoryNameHasBeenSet = true; m_repositoryName = std::move(value); }

    /**
     * <p>The name of the repository to create or update the catalog data for.</p>
     */
    inline void SetRepositoryName(const char* value) { m_repositoryNameHasBeenSet = true; m_repositoryName.assign(value); }

    /**
     * <p>The name of the repository to create or update the catalog data for.</p>
     */
    inline PutRepositoryCatalogDataRequest& WithRepositoryName(const Aws::String& value) { SetRepositoryName(value); return *this;}

    /**
     * <p>The name of the repository to create or update the catalog data for.</p>
     */
    inline PutRepositoryCatalogDataRequest& WithRepositoryName(Aws::String&& value) { SetRepositoryName(std::move(value)); return *this;}

    /**
     * <p>The name of the repository to create or update the catalog data for.</p>
     */
    inline PutRepositoryCatalogDataRequest& WithRepositoryName(const char* value) { SetRepositoryName(value); return *this;}


    /**
     * <p>An object containing the catalog data for a repository. This data is publicly
     * visible in the Amazon ECR Public Gallery.</p>
     */
    inline const RepositoryCatalogDataInput& GetCatalogData() const{ return m_catalogData; }

    /**
     * <p>An object containing the catalog data for a repository. This data is publicly
     * visible in the Amazon ECR Public Gallery.</p>
     */
    inline bool CatalogDataHasBeenSet() const { return m_catalogDataHasBeenSet; }

    /**
     * <p>An object containing the catalog data for a repository. This data is publicly
     * visible in the Amazon ECR Public Gallery.</p>
     */
    inline void SetCatalogData(const RepositoryCatalogDataInput& value) { m_catalogDataHasBeenSet = true; m_catalogData = value; }

    /**
     * <p>An object containing the catalog data for a repository. This data is publicly
     * visible in the Amazon ECR Public Gallery.</p>
     */
    inline void SetCatalogData(RepositoryCatalogDataInput&& value) { m_catalogDataHasBeenSet = true; m_catalogData = std::move(value); }

    /**
     * <p>An object containing the catalog data for a repository. This data is publicly
     * visible in the Amazon ECR Public Gallery.</p>
     */
    inline PutRepositoryCatalogDataRequest& WithCatalogData(const RepositoryCatalogDataInput& value) { SetCatalogData(value); return *this;}

    /**
     * <p>An object containing the catalog data for a repository. This data is publicly
     * visible in the Amazon ECR Public Gallery.</p>
     */
    inline PutRepositoryCatalogDataRequest& WithCatalogData(RepositoryCatalogDataInput&& value) { SetCatalogData(std::move(value)); return *this;}

  private:

    Aws::String m_registryId;
    bool m_registryIdHasBeenSet = false;

    Aws::String m_repositoryName;
    bool m_repositoryNameHasBeenSet = false;

    RepositoryCatalogDataInput m_catalogData;
    bool m_catalogDataHasBeenSet = false;
  };

} // namespace Model
} // namespace ECRPublic
} // namespace Aws

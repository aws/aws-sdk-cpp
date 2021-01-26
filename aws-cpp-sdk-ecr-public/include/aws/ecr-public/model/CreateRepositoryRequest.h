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
  class AWS_ECRPUBLIC_API CreateRepositoryRequest : public ECRPublicRequest
  {
  public:
    CreateRepositoryRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateRepository"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name to use for the repository. This appears publicly in the Amazon ECR
     * Public Gallery. The repository name may be specified on its own (such as
     * <code>nginx-web-app</code>) or it can be prepended with a namespace to group the
     * repository into a category (such as <code>project-a/nginx-web-app</code>).</p>
     */
    inline const Aws::String& GetRepositoryName() const{ return m_repositoryName; }

    /**
     * <p>The name to use for the repository. This appears publicly in the Amazon ECR
     * Public Gallery. The repository name may be specified on its own (such as
     * <code>nginx-web-app</code>) or it can be prepended with a namespace to group the
     * repository into a category (such as <code>project-a/nginx-web-app</code>).</p>
     */
    inline bool RepositoryNameHasBeenSet() const { return m_repositoryNameHasBeenSet; }

    /**
     * <p>The name to use for the repository. This appears publicly in the Amazon ECR
     * Public Gallery. The repository name may be specified on its own (such as
     * <code>nginx-web-app</code>) or it can be prepended with a namespace to group the
     * repository into a category (such as <code>project-a/nginx-web-app</code>).</p>
     */
    inline void SetRepositoryName(const Aws::String& value) { m_repositoryNameHasBeenSet = true; m_repositoryName = value; }

    /**
     * <p>The name to use for the repository. This appears publicly in the Amazon ECR
     * Public Gallery. The repository name may be specified on its own (such as
     * <code>nginx-web-app</code>) or it can be prepended with a namespace to group the
     * repository into a category (such as <code>project-a/nginx-web-app</code>).</p>
     */
    inline void SetRepositoryName(Aws::String&& value) { m_repositoryNameHasBeenSet = true; m_repositoryName = std::move(value); }

    /**
     * <p>The name to use for the repository. This appears publicly in the Amazon ECR
     * Public Gallery. The repository name may be specified on its own (such as
     * <code>nginx-web-app</code>) or it can be prepended with a namespace to group the
     * repository into a category (such as <code>project-a/nginx-web-app</code>).</p>
     */
    inline void SetRepositoryName(const char* value) { m_repositoryNameHasBeenSet = true; m_repositoryName.assign(value); }

    /**
     * <p>The name to use for the repository. This appears publicly in the Amazon ECR
     * Public Gallery. The repository name may be specified on its own (such as
     * <code>nginx-web-app</code>) or it can be prepended with a namespace to group the
     * repository into a category (such as <code>project-a/nginx-web-app</code>).</p>
     */
    inline CreateRepositoryRequest& WithRepositoryName(const Aws::String& value) { SetRepositoryName(value); return *this;}

    /**
     * <p>The name to use for the repository. This appears publicly in the Amazon ECR
     * Public Gallery. The repository name may be specified on its own (such as
     * <code>nginx-web-app</code>) or it can be prepended with a namespace to group the
     * repository into a category (such as <code>project-a/nginx-web-app</code>).</p>
     */
    inline CreateRepositoryRequest& WithRepositoryName(Aws::String&& value) { SetRepositoryName(std::move(value)); return *this;}

    /**
     * <p>The name to use for the repository. This appears publicly in the Amazon ECR
     * Public Gallery. The repository name may be specified on its own (such as
     * <code>nginx-web-app</code>) or it can be prepended with a namespace to group the
     * repository into a category (such as <code>project-a/nginx-web-app</code>).</p>
     */
    inline CreateRepositoryRequest& WithRepositoryName(const char* value) { SetRepositoryName(value); return *this;}


    /**
     * <p>The details about the repository that are publicly visible in the Amazon ECR
     * Public Gallery.</p>
     */
    inline const RepositoryCatalogDataInput& GetCatalogData() const{ return m_catalogData; }

    /**
     * <p>The details about the repository that are publicly visible in the Amazon ECR
     * Public Gallery.</p>
     */
    inline bool CatalogDataHasBeenSet() const { return m_catalogDataHasBeenSet; }

    /**
     * <p>The details about the repository that are publicly visible in the Amazon ECR
     * Public Gallery.</p>
     */
    inline void SetCatalogData(const RepositoryCatalogDataInput& value) { m_catalogDataHasBeenSet = true; m_catalogData = value; }

    /**
     * <p>The details about the repository that are publicly visible in the Amazon ECR
     * Public Gallery.</p>
     */
    inline void SetCatalogData(RepositoryCatalogDataInput&& value) { m_catalogDataHasBeenSet = true; m_catalogData = std::move(value); }

    /**
     * <p>The details about the repository that are publicly visible in the Amazon ECR
     * Public Gallery.</p>
     */
    inline CreateRepositoryRequest& WithCatalogData(const RepositoryCatalogDataInput& value) { SetCatalogData(value); return *this;}

    /**
     * <p>The details about the repository that are publicly visible in the Amazon ECR
     * Public Gallery.</p>
     */
    inline CreateRepositoryRequest& WithCatalogData(RepositoryCatalogDataInput&& value) { SetCatalogData(std::move(value)); return *this;}

  private:

    Aws::String m_repositoryName;
    bool m_repositoryNameHasBeenSet;

    RepositoryCatalogDataInput m_catalogData;
    bool m_catalogDataHasBeenSet;
  };

} // namespace Model
} // namespace ECRPublic
} // namespace Aws

﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecr-public/ECRPublic_EXPORTS.h>
#include <aws/ecr-public/ECRPublicRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ecr-public/model/RepositoryCatalogDataInput.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ecr-public/model/Tag.h>
#include <utility>

namespace Aws
{
namespace ECRPublic
{
namespace Model
{

  /**
   */
  class CreateRepositoryRequest : public ECRPublicRequest
  {
  public:
    AWS_ECRPUBLIC_API CreateRepositoryRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateRepository"; }

    AWS_ECRPUBLIC_API Aws::String SerializePayload() const override;

    AWS_ECRPUBLIC_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name to use for the repository. This appears publicly in the Amazon ECR
     * Public Gallery. The repository name can be specified on its own (for example
     * <code>nginx-web-app</code>) or prepended with a namespace to group the
     * repository into a category (for example
     * <code>project-a/nginx-web-app</code>).</p>
     */
    inline const Aws::String& GetRepositoryName() const{ return m_repositoryName; }
    inline bool RepositoryNameHasBeenSet() const { return m_repositoryNameHasBeenSet; }
    inline void SetRepositoryName(const Aws::String& value) { m_repositoryNameHasBeenSet = true; m_repositoryName = value; }
    inline void SetRepositoryName(Aws::String&& value) { m_repositoryNameHasBeenSet = true; m_repositoryName = std::move(value); }
    inline void SetRepositoryName(const char* value) { m_repositoryNameHasBeenSet = true; m_repositoryName.assign(value); }
    inline CreateRepositoryRequest& WithRepositoryName(const Aws::String& value) { SetRepositoryName(value); return *this;}
    inline CreateRepositoryRequest& WithRepositoryName(Aws::String&& value) { SetRepositoryName(std::move(value)); return *this;}
    inline CreateRepositoryRequest& WithRepositoryName(const char* value) { SetRepositoryName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The details about the repository that are publicly visible in the Amazon ECR
     * Public Gallery.</p>
     */
    inline const RepositoryCatalogDataInput& GetCatalogData() const{ return m_catalogData; }
    inline bool CatalogDataHasBeenSet() const { return m_catalogDataHasBeenSet; }
    inline void SetCatalogData(const RepositoryCatalogDataInput& value) { m_catalogDataHasBeenSet = true; m_catalogData = value; }
    inline void SetCatalogData(RepositoryCatalogDataInput&& value) { m_catalogDataHasBeenSet = true; m_catalogData = std::move(value); }
    inline CreateRepositoryRequest& WithCatalogData(const RepositoryCatalogDataInput& value) { SetCatalogData(value); return *this;}
    inline CreateRepositoryRequest& WithCatalogData(RepositoryCatalogDataInput&& value) { SetCatalogData(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The metadata that you apply to each repository to help categorize and
     * organize your repositories. Each tag consists of a key and an optional value.
     * You define both of them. Tag keys can have a maximum character length of 128
     * characters, and tag values can have a maximum length of 256 characters.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline CreateRepositoryRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline CreateRepositoryRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateRepositoryRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline CreateRepositoryRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_repositoryName;
    bool m_repositoryNameHasBeenSet = false;

    RepositoryCatalogDataInput m_catalogData;
    bool m_catalogDataHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace ECRPublic
} // namespace Aws

/**
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
    AWS_ECRPUBLIC_API CreateRepositoryRequest() = default;

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
    inline const Aws::String& GetRepositoryName() const { return m_repositoryName; }
    inline bool RepositoryNameHasBeenSet() const { return m_repositoryNameHasBeenSet; }
    template<typename RepositoryNameT = Aws::String>
    void SetRepositoryName(RepositoryNameT&& value) { m_repositoryNameHasBeenSet = true; m_repositoryName = std::forward<RepositoryNameT>(value); }
    template<typename RepositoryNameT = Aws::String>
    CreateRepositoryRequest& WithRepositoryName(RepositoryNameT&& value) { SetRepositoryName(std::forward<RepositoryNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The details about the repository that are publicly visible in the Amazon ECR
     * Public Gallery.</p>
     */
    inline const RepositoryCatalogDataInput& GetCatalogData() const { return m_catalogData; }
    inline bool CatalogDataHasBeenSet() const { return m_catalogDataHasBeenSet; }
    template<typename CatalogDataT = RepositoryCatalogDataInput>
    void SetCatalogData(CatalogDataT&& value) { m_catalogDataHasBeenSet = true; m_catalogData = std::forward<CatalogDataT>(value); }
    template<typename CatalogDataT = RepositoryCatalogDataInput>
    CreateRepositoryRequest& WithCatalogData(CatalogDataT&& value) { SetCatalogData(std::forward<CatalogDataT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The metadata that you apply to each repository to help categorize and
     * organize your repositories. Each tag consists of a key and an optional value.
     * You define both of them. Tag keys can have a maximum character length of 128
     * characters, and tag values can have a maximum length of 256 characters.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    CreateRepositoryRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    CreateRepositoryRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
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

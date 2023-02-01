/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/inspector2/model/AwsEcrContainerSortBy.h>
#include <aws/inspector2/model/SortOrder.h>
#include <aws/inspector2/model/StringFilter.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Inspector2
{
namespace Model
{

  /**
   * <p>An aggregation of information about Amazon ECR containers.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/AwsEcrContainerAggregation">AWS
   * API Reference</a></p>
   */
  class AwsEcrContainerAggregation
  {
  public:
    AWS_INSPECTOR2_API AwsEcrContainerAggregation();
    AWS_INSPECTOR2_API AwsEcrContainerAggregation(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API AwsEcrContainerAggregation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The architecture of the containers.</p>
     */
    inline const Aws::Vector<StringFilter>& GetArchitectures() const{ return m_architectures; }

    /**
     * <p>The architecture of the containers.</p>
     */
    inline bool ArchitecturesHasBeenSet() const { return m_architecturesHasBeenSet; }

    /**
     * <p>The architecture of the containers.</p>
     */
    inline void SetArchitectures(const Aws::Vector<StringFilter>& value) { m_architecturesHasBeenSet = true; m_architectures = value; }

    /**
     * <p>The architecture of the containers.</p>
     */
    inline void SetArchitectures(Aws::Vector<StringFilter>&& value) { m_architecturesHasBeenSet = true; m_architectures = std::move(value); }

    /**
     * <p>The architecture of the containers.</p>
     */
    inline AwsEcrContainerAggregation& WithArchitectures(const Aws::Vector<StringFilter>& value) { SetArchitectures(value); return *this;}

    /**
     * <p>The architecture of the containers.</p>
     */
    inline AwsEcrContainerAggregation& WithArchitectures(Aws::Vector<StringFilter>&& value) { SetArchitectures(std::move(value)); return *this;}

    /**
     * <p>The architecture of the containers.</p>
     */
    inline AwsEcrContainerAggregation& AddArchitectures(const StringFilter& value) { m_architecturesHasBeenSet = true; m_architectures.push_back(value); return *this; }

    /**
     * <p>The architecture of the containers.</p>
     */
    inline AwsEcrContainerAggregation& AddArchitectures(StringFilter&& value) { m_architecturesHasBeenSet = true; m_architectures.push_back(std::move(value)); return *this; }


    /**
     * <p>The image SHA values.</p>
     */
    inline const Aws::Vector<StringFilter>& GetImageShas() const{ return m_imageShas; }

    /**
     * <p>The image SHA values.</p>
     */
    inline bool ImageShasHasBeenSet() const { return m_imageShasHasBeenSet; }

    /**
     * <p>The image SHA values.</p>
     */
    inline void SetImageShas(const Aws::Vector<StringFilter>& value) { m_imageShasHasBeenSet = true; m_imageShas = value; }

    /**
     * <p>The image SHA values.</p>
     */
    inline void SetImageShas(Aws::Vector<StringFilter>&& value) { m_imageShasHasBeenSet = true; m_imageShas = std::move(value); }

    /**
     * <p>The image SHA values.</p>
     */
    inline AwsEcrContainerAggregation& WithImageShas(const Aws::Vector<StringFilter>& value) { SetImageShas(value); return *this;}

    /**
     * <p>The image SHA values.</p>
     */
    inline AwsEcrContainerAggregation& WithImageShas(Aws::Vector<StringFilter>&& value) { SetImageShas(std::move(value)); return *this;}

    /**
     * <p>The image SHA values.</p>
     */
    inline AwsEcrContainerAggregation& AddImageShas(const StringFilter& value) { m_imageShasHasBeenSet = true; m_imageShas.push_back(value); return *this; }

    /**
     * <p>The image SHA values.</p>
     */
    inline AwsEcrContainerAggregation& AddImageShas(StringFilter&& value) { m_imageShasHasBeenSet = true; m_imageShas.push_back(std::move(value)); return *this; }


    /**
     * <p>The image tags.</p>
     */
    inline const Aws::Vector<StringFilter>& GetImageTags() const{ return m_imageTags; }

    /**
     * <p>The image tags.</p>
     */
    inline bool ImageTagsHasBeenSet() const { return m_imageTagsHasBeenSet; }

    /**
     * <p>The image tags.</p>
     */
    inline void SetImageTags(const Aws::Vector<StringFilter>& value) { m_imageTagsHasBeenSet = true; m_imageTags = value; }

    /**
     * <p>The image tags.</p>
     */
    inline void SetImageTags(Aws::Vector<StringFilter>&& value) { m_imageTagsHasBeenSet = true; m_imageTags = std::move(value); }

    /**
     * <p>The image tags.</p>
     */
    inline AwsEcrContainerAggregation& WithImageTags(const Aws::Vector<StringFilter>& value) { SetImageTags(value); return *this;}

    /**
     * <p>The image tags.</p>
     */
    inline AwsEcrContainerAggregation& WithImageTags(Aws::Vector<StringFilter>&& value) { SetImageTags(std::move(value)); return *this;}

    /**
     * <p>The image tags.</p>
     */
    inline AwsEcrContainerAggregation& AddImageTags(const StringFilter& value) { m_imageTagsHasBeenSet = true; m_imageTags.push_back(value); return *this; }

    /**
     * <p>The image tags.</p>
     */
    inline AwsEcrContainerAggregation& AddImageTags(StringFilter&& value) { m_imageTagsHasBeenSet = true; m_imageTags.push_back(std::move(value)); return *this; }


    /**
     * <p>The container repositories.</p>
     */
    inline const Aws::Vector<StringFilter>& GetRepositories() const{ return m_repositories; }

    /**
     * <p>The container repositories.</p>
     */
    inline bool RepositoriesHasBeenSet() const { return m_repositoriesHasBeenSet; }

    /**
     * <p>The container repositories.</p>
     */
    inline void SetRepositories(const Aws::Vector<StringFilter>& value) { m_repositoriesHasBeenSet = true; m_repositories = value; }

    /**
     * <p>The container repositories.</p>
     */
    inline void SetRepositories(Aws::Vector<StringFilter>&& value) { m_repositoriesHasBeenSet = true; m_repositories = std::move(value); }

    /**
     * <p>The container repositories.</p>
     */
    inline AwsEcrContainerAggregation& WithRepositories(const Aws::Vector<StringFilter>& value) { SetRepositories(value); return *this;}

    /**
     * <p>The container repositories.</p>
     */
    inline AwsEcrContainerAggregation& WithRepositories(Aws::Vector<StringFilter>&& value) { SetRepositories(std::move(value)); return *this;}

    /**
     * <p>The container repositories.</p>
     */
    inline AwsEcrContainerAggregation& AddRepositories(const StringFilter& value) { m_repositoriesHasBeenSet = true; m_repositories.push_back(value); return *this; }

    /**
     * <p>The container repositories.</p>
     */
    inline AwsEcrContainerAggregation& AddRepositories(StringFilter&& value) { m_repositoriesHasBeenSet = true; m_repositories.push_back(std::move(value)); return *this; }


    /**
     * <p>The container resource IDs.</p>
     */
    inline const Aws::Vector<StringFilter>& GetResourceIds() const{ return m_resourceIds; }

    /**
     * <p>The container resource IDs.</p>
     */
    inline bool ResourceIdsHasBeenSet() const { return m_resourceIdsHasBeenSet; }

    /**
     * <p>The container resource IDs.</p>
     */
    inline void SetResourceIds(const Aws::Vector<StringFilter>& value) { m_resourceIdsHasBeenSet = true; m_resourceIds = value; }

    /**
     * <p>The container resource IDs.</p>
     */
    inline void SetResourceIds(Aws::Vector<StringFilter>&& value) { m_resourceIdsHasBeenSet = true; m_resourceIds = std::move(value); }

    /**
     * <p>The container resource IDs.</p>
     */
    inline AwsEcrContainerAggregation& WithResourceIds(const Aws::Vector<StringFilter>& value) { SetResourceIds(value); return *this;}

    /**
     * <p>The container resource IDs.</p>
     */
    inline AwsEcrContainerAggregation& WithResourceIds(Aws::Vector<StringFilter>&& value) { SetResourceIds(std::move(value)); return *this;}

    /**
     * <p>The container resource IDs.</p>
     */
    inline AwsEcrContainerAggregation& AddResourceIds(const StringFilter& value) { m_resourceIdsHasBeenSet = true; m_resourceIds.push_back(value); return *this; }

    /**
     * <p>The container resource IDs.</p>
     */
    inline AwsEcrContainerAggregation& AddResourceIds(StringFilter&& value) { m_resourceIdsHasBeenSet = true; m_resourceIds.push_back(std::move(value)); return *this; }


    /**
     * <p>The value to sort by.</p>
     */
    inline const AwsEcrContainerSortBy& GetSortBy() const{ return m_sortBy; }

    /**
     * <p>The value to sort by.</p>
     */
    inline bool SortByHasBeenSet() const { return m_sortByHasBeenSet; }

    /**
     * <p>The value to sort by.</p>
     */
    inline void SetSortBy(const AwsEcrContainerSortBy& value) { m_sortByHasBeenSet = true; m_sortBy = value; }

    /**
     * <p>The value to sort by.</p>
     */
    inline void SetSortBy(AwsEcrContainerSortBy&& value) { m_sortByHasBeenSet = true; m_sortBy = std::move(value); }

    /**
     * <p>The value to sort by.</p>
     */
    inline AwsEcrContainerAggregation& WithSortBy(const AwsEcrContainerSortBy& value) { SetSortBy(value); return *this;}

    /**
     * <p>The value to sort by.</p>
     */
    inline AwsEcrContainerAggregation& WithSortBy(AwsEcrContainerSortBy&& value) { SetSortBy(std::move(value)); return *this;}


    /**
     * <p>The sort order (ascending or descending).</p>
     */
    inline const SortOrder& GetSortOrder() const{ return m_sortOrder; }

    /**
     * <p>The sort order (ascending or descending).</p>
     */
    inline bool SortOrderHasBeenSet() const { return m_sortOrderHasBeenSet; }

    /**
     * <p>The sort order (ascending or descending).</p>
     */
    inline void SetSortOrder(const SortOrder& value) { m_sortOrderHasBeenSet = true; m_sortOrder = value; }

    /**
     * <p>The sort order (ascending or descending).</p>
     */
    inline void SetSortOrder(SortOrder&& value) { m_sortOrderHasBeenSet = true; m_sortOrder = std::move(value); }

    /**
     * <p>The sort order (ascending or descending).</p>
     */
    inline AwsEcrContainerAggregation& WithSortOrder(const SortOrder& value) { SetSortOrder(value); return *this;}

    /**
     * <p>The sort order (ascending or descending).</p>
     */
    inline AwsEcrContainerAggregation& WithSortOrder(SortOrder&& value) { SetSortOrder(std::move(value)); return *this;}

  private:

    Aws::Vector<StringFilter> m_architectures;
    bool m_architecturesHasBeenSet = false;

    Aws::Vector<StringFilter> m_imageShas;
    bool m_imageShasHasBeenSet = false;

    Aws::Vector<StringFilter> m_imageTags;
    bool m_imageTagsHasBeenSet = false;

    Aws::Vector<StringFilter> m_repositories;
    bool m_repositoriesHasBeenSet = false;

    Aws::Vector<StringFilter> m_resourceIds;
    bool m_resourceIdsHasBeenSet = false;

    AwsEcrContainerSortBy m_sortBy;
    bool m_sortByHasBeenSet = false;

    SortOrder m_sortOrder;
    bool m_sortOrderHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws

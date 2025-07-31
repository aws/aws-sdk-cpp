/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/inspector2/model/SortOrder.h>
#include <aws/inspector2/model/AwsEcrContainerSortBy.h>
#include <aws/inspector2/model/StringFilter.h>
#include <aws/inspector2/model/DateFilter.h>
#include <aws/inspector2/model/NumberFilter.h>
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
    AWS_INSPECTOR2_API AwsEcrContainerAggregation() = default;
    AWS_INSPECTOR2_API AwsEcrContainerAggregation(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API AwsEcrContainerAggregation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The container resource IDs.</p>
     */
    inline const Aws::Vector<StringFilter>& GetResourceIds() const { return m_resourceIds; }
    inline bool ResourceIdsHasBeenSet() const { return m_resourceIdsHasBeenSet; }
    template<typename ResourceIdsT = Aws::Vector<StringFilter>>
    void SetResourceIds(ResourceIdsT&& value) { m_resourceIdsHasBeenSet = true; m_resourceIds = std::forward<ResourceIdsT>(value); }
    template<typename ResourceIdsT = Aws::Vector<StringFilter>>
    AwsEcrContainerAggregation& WithResourceIds(ResourceIdsT&& value) { SetResourceIds(std::forward<ResourceIdsT>(value)); return *this;}
    template<typename ResourceIdsT = StringFilter>
    AwsEcrContainerAggregation& AddResourceIds(ResourceIdsT&& value) { m_resourceIdsHasBeenSet = true; m_resourceIds.emplace_back(std::forward<ResourceIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The image SHA values.</p>
     */
    inline const Aws::Vector<StringFilter>& GetImageShas() const { return m_imageShas; }
    inline bool ImageShasHasBeenSet() const { return m_imageShasHasBeenSet; }
    template<typename ImageShasT = Aws::Vector<StringFilter>>
    void SetImageShas(ImageShasT&& value) { m_imageShasHasBeenSet = true; m_imageShas = std::forward<ImageShasT>(value); }
    template<typename ImageShasT = Aws::Vector<StringFilter>>
    AwsEcrContainerAggregation& WithImageShas(ImageShasT&& value) { SetImageShas(std::forward<ImageShasT>(value)); return *this;}
    template<typename ImageShasT = StringFilter>
    AwsEcrContainerAggregation& AddImageShas(ImageShasT&& value) { m_imageShasHasBeenSet = true; m_imageShas.emplace_back(std::forward<ImageShasT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The container repositories.</p>
     */
    inline const Aws::Vector<StringFilter>& GetRepositories() const { return m_repositories; }
    inline bool RepositoriesHasBeenSet() const { return m_repositoriesHasBeenSet; }
    template<typename RepositoriesT = Aws::Vector<StringFilter>>
    void SetRepositories(RepositoriesT&& value) { m_repositoriesHasBeenSet = true; m_repositories = std::forward<RepositoriesT>(value); }
    template<typename RepositoriesT = Aws::Vector<StringFilter>>
    AwsEcrContainerAggregation& WithRepositories(RepositoriesT&& value) { SetRepositories(std::forward<RepositoriesT>(value)); return *this;}
    template<typename RepositoriesT = StringFilter>
    AwsEcrContainerAggregation& AddRepositories(RepositoriesT&& value) { m_repositoriesHasBeenSet = true; m_repositories.emplace_back(std::forward<RepositoriesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The architecture of the containers.</p>
     */
    inline const Aws::Vector<StringFilter>& GetArchitectures() const { return m_architectures; }
    inline bool ArchitecturesHasBeenSet() const { return m_architecturesHasBeenSet; }
    template<typename ArchitecturesT = Aws::Vector<StringFilter>>
    void SetArchitectures(ArchitecturesT&& value) { m_architecturesHasBeenSet = true; m_architectures = std::forward<ArchitecturesT>(value); }
    template<typename ArchitecturesT = Aws::Vector<StringFilter>>
    AwsEcrContainerAggregation& WithArchitectures(ArchitecturesT&& value) { SetArchitectures(std::forward<ArchitecturesT>(value)); return *this;}
    template<typename ArchitecturesT = StringFilter>
    AwsEcrContainerAggregation& AddArchitectures(ArchitecturesT&& value) { m_architecturesHasBeenSet = true; m_architectures.emplace_back(std::forward<ArchitecturesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The image tags.</p>
     */
    inline const Aws::Vector<StringFilter>& GetImageTags() const { return m_imageTags; }
    inline bool ImageTagsHasBeenSet() const { return m_imageTagsHasBeenSet; }
    template<typename ImageTagsT = Aws::Vector<StringFilter>>
    void SetImageTags(ImageTagsT&& value) { m_imageTagsHasBeenSet = true; m_imageTags = std::forward<ImageTagsT>(value); }
    template<typename ImageTagsT = Aws::Vector<StringFilter>>
    AwsEcrContainerAggregation& WithImageTags(ImageTagsT&& value) { SetImageTags(std::forward<ImageTagsT>(value)); return *this;}
    template<typename ImageTagsT = StringFilter>
    AwsEcrContainerAggregation& AddImageTags(ImageTagsT&& value) { m_imageTagsHasBeenSet = true; m_imageTags.emplace_back(std::forward<ImageTagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The sort order (ascending or descending).</p>
     */
    inline SortOrder GetSortOrder() const { return m_sortOrder; }
    inline bool SortOrderHasBeenSet() const { return m_sortOrderHasBeenSet; }
    inline void SetSortOrder(SortOrder value) { m_sortOrderHasBeenSet = true; m_sortOrder = value; }
    inline AwsEcrContainerAggregation& WithSortOrder(SortOrder value) { SetSortOrder(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value to sort by.</p>
     */
    inline AwsEcrContainerSortBy GetSortBy() const { return m_sortBy; }
    inline bool SortByHasBeenSet() const { return m_sortByHasBeenSet; }
    inline void SetSortBy(AwsEcrContainerSortBy value) { m_sortByHasBeenSet = true; m_sortBy = value; }
    inline AwsEcrContainerAggregation& WithSortBy(AwsEcrContainerSortBy value) { SetSortBy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The last time an Amazon ECR image was used in an Amazon ECS task or Amazon
     * EKS pod.</p>
     */
    inline const Aws::Vector<DateFilter>& GetLastInUseAt() const { return m_lastInUseAt; }
    inline bool LastInUseAtHasBeenSet() const { return m_lastInUseAtHasBeenSet; }
    template<typename LastInUseAtT = Aws::Vector<DateFilter>>
    void SetLastInUseAt(LastInUseAtT&& value) { m_lastInUseAtHasBeenSet = true; m_lastInUseAt = std::forward<LastInUseAtT>(value); }
    template<typename LastInUseAtT = Aws::Vector<DateFilter>>
    AwsEcrContainerAggregation& WithLastInUseAt(LastInUseAtT&& value) { SetLastInUseAt(std::forward<LastInUseAtT>(value)); return *this;}
    template<typename LastInUseAtT = DateFilter>
    AwsEcrContainerAggregation& AddLastInUseAt(LastInUseAtT&& value) { m_lastInUseAtHasBeenSet = true; m_lastInUseAt.emplace_back(std::forward<LastInUseAtT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The number of Amazon ECS tasks or Amazon EKS pods where the Amazon ECR
     * container image is in use.</p>
     */
    inline const Aws::Vector<NumberFilter>& GetInUseCount() const { return m_inUseCount; }
    inline bool InUseCountHasBeenSet() const { return m_inUseCountHasBeenSet; }
    template<typename InUseCountT = Aws::Vector<NumberFilter>>
    void SetInUseCount(InUseCountT&& value) { m_inUseCountHasBeenSet = true; m_inUseCount = std::forward<InUseCountT>(value); }
    template<typename InUseCountT = Aws::Vector<NumberFilter>>
    AwsEcrContainerAggregation& WithInUseCount(InUseCountT&& value) { SetInUseCount(std::forward<InUseCountT>(value)); return *this;}
    template<typename InUseCountT = NumberFilter>
    AwsEcrContainerAggregation& AddInUseCount(InUseCountT&& value) { m_inUseCountHasBeenSet = true; m_inUseCount.emplace_back(std::forward<InUseCountT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<StringFilter> m_resourceIds;
    bool m_resourceIdsHasBeenSet = false;

    Aws::Vector<StringFilter> m_imageShas;
    bool m_imageShasHasBeenSet = false;

    Aws::Vector<StringFilter> m_repositories;
    bool m_repositoriesHasBeenSet = false;

    Aws::Vector<StringFilter> m_architectures;
    bool m_architecturesHasBeenSet = false;

    Aws::Vector<StringFilter> m_imageTags;
    bool m_imageTagsHasBeenSet = false;

    SortOrder m_sortOrder{SortOrder::NOT_SET};
    bool m_sortOrderHasBeenSet = false;

    AwsEcrContainerSortBy m_sortBy{AwsEcrContainerSortBy::NOT_SET};
    bool m_sortByHasBeenSet = false;

    Aws::Vector<DateFilter> m_lastInUseAt;
    bool m_lastInUseAtHasBeenSet = false;

    Aws::Vector<NumberFilter> m_inUseCount;
    bool m_inUseCountHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws

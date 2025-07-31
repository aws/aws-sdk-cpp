/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/inspector2/model/SortOrder.h>
#include <aws/inspector2/model/ImageLayerSortBy.h>
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
   * <p>The details that define an aggregation based on container image
   * layers.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/ImageLayerAggregation">AWS
   * API Reference</a></p>
   */
  class ImageLayerAggregation
  {
  public:
    AWS_INSPECTOR2_API ImageLayerAggregation() = default;
    AWS_INSPECTOR2_API ImageLayerAggregation(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API ImageLayerAggregation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The repository associated with the container image hosting the layers.</p>
     */
    inline const Aws::Vector<StringFilter>& GetRepositories() const { return m_repositories; }
    inline bool RepositoriesHasBeenSet() const { return m_repositoriesHasBeenSet; }
    template<typename RepositoriesT = Aws::Vector<StringFilter>>
    void SetRepositories(RepositoriesT&& value) { m_repositoriesHasBeenSet = true; m_repositories = std::forward<RepositoriesT>(value); }
    template<typename RepositoriesT = Aws::Vector<StringFilter>>
    ImageLayerAggregation& WithRepositories(RepositoriesT&& value) { SetRepositories(std::forward<RepositoriesT>(value)); return *this;}
    template<typename RepositoriesT = StringFilter>
    ImageLayerAggregation& AddRepositories(RepositoriesT&& value) { m_repositoriesHasBeenSet = true; m_repositories.emplace_back(std::forward<RepositoriesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The ID of the container image layer.</p>
     */
    inline const Aws::Vector<StringFilter>& GetResourceIds() const { return m_resourceIds; }
    inline bool ResourceIdsHasBeenSet() const { return m_resourceIdsHasBeenSet; }
    template<typename ResourceIdsT = Aws::Vector<StringFilter>>
    void SetResourceIds(ResourceIdsT&& value) { m_resourceIdsHasBeenSet = true; m_resourceIds = std::forward<ResourceIdsT>(value); }
    template<typename ResourceIdsT = Aws::Vector<StringFilter>>
    ImageLayerAggregation& WithResourceIds(ResourceIdsT&& value) { SetResourceIds(std::forward<ResourceIdsT>(value)); return *this;}
    template<typename ResourceIdsT = StringFilter>
    ImageLayerAggregation& AddResourceIds(ResourceIdsT&& value) { m_resourceIdsHasBeenSet = true; m_resourceIds.emplace_back(std::forward<ResourceIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The hashes associated with the layers.</p>
     */
    inline const Aws::Vector<StringFilter>& GetLayerHashes() const { return m_layerHashes; }
    inline bool LayerHashesHasBeenSet() const { return m_layerHashesHasBeenSet; }
    template<typename LayerHashesT = Aws::Vector<StringFilter>>
    void SetLayerHashes(LayerHashesT&& value) { m_layerHashesHasBeenSet = true; m_layerHashes = std::forward<LayerHashesT>(value); }
    template<typename LayerHashesT = Aws::Vector<StringFilter>>
    ImageLayerAggregation& WithLayerHashes(LayerHashesT&& value) { SetLayerHashes(std::forward<LayerHashesT>(value)); return *this;}
    template<typename LayerHashesT = StringFilter>
    ImageLayerAggregation& AddLayerHashes(LayerHashesT&& value) { m_layerHashesHasBeenSet = true; m_layerHashes.emplace_back(std::forward<LayerHashesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The order to sort results by.</p>
     */
    inline SortOrder GetSortOrder() const { return m_sortOrder; }
    inline bool SortOrderHasBeenSet() const { return m_sortOrderHasBeenSet; }
    inline void SetSortOrder(SortOrder value) { m_sortOrderHasBeenSet = true; m_sortOrder = value; }
    inline ImageLayerAggregation& WithSortOrder(SortOrder value) { SetSortOrder(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value to sort results by.</p>
     */
    inline ImageLayerSortBy GetSortBy() const { return m_sortBy; }
    inline bool SortByHasBeenSet() const { return m_sortByHasBeenSet; }
    inline void SetSortBy(ImageLayerSortBy value) { m_sortByHasBeenSet = true; m_sortBy = value; }
    inline ImageLayerAggregation& WithSortBy(ImageLayerSortBy value) { SetSortBy(value); return *this;}
    ///@}
  private:

    Aws::Vector<StringFilter> m_repositories;
    bool m_repositoriesHasBeenSet = false;

    Aws::Vector<StringFilter> m_resourceIds;
    bool m_resourceIdsHasBeenSet = false;

    Aws::Vector<StringFilter> m_layerHashes;
    bool m_layerHashesHasBeenSet = false;

    SortOrder m_sortOrder{SortOrder::NOT_SET};
    bool m_sortOrderHasBeenSet = false;

    ImageLayerSortBy m_sortBy{ImageLayerSortBy::NOT_SET};
    bool m_sortByHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws

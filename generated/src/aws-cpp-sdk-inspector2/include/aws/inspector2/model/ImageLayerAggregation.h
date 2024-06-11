/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/inspector2/model/ImageLayerSortBy.h>
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
   * <p>The details that define an aggregation based on container image
   * layers.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/ImageLayerAggregation">AWS
   * API Reference</a></p>
   */
  class ImageLayerAggregation
  {
  public:
    AWS_INSPECTOR2_API ImageLayerAggregation();
    AWS_INSPECTOR2_API ImageLayerAggregation(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API ImageLayerAggregation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The hashes associated with the layers.</p>
     */
    inline const Aws::Vector<StringFilter>& GetLayerHashes() const{ return m_layerHashes; }
    inline bool LayerHashesHasBeenSet() const { return m_layerHashesHasBeenSet; }
    inline void SetLayerHashes(const Aws::Vector<StringFilter>& value) { m_layerHashesHasBeenSet = true; m_layerHashes = value; }
    inline void SetLayerHashes(Aws::Vector<StringFilter>&& value) { m_layerHashesHasBeenSet = true; m_layerHashes = std::move(value); }
    inline ImageLayerAggregation& WithLayerHashes(const Aws::Vector<StringFilter>& value) { SetLayerHashes(value); return *this;}
    inline ImageLayerAggregation& WithLayerHashes(Aws::Vector<StringFilter>&& value) { SetLayerHashes(std::move(value)); return *this;}
    inline ImageLayerAggregation& AddLayerHashes(const StringFilter& value) { m_layerHashesHasBeenSet = true; m_layerHashes.push_back(value); return *this; }
    inline ImageLayerAggregation& AddLayerHashes(StringFilter&& value) { m_layerHashesHasBeenSet = true; m_layerHashes.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The repository associated with the container image hosting the layers.</p>
     */
    inline const Aws::Vector<StringFilter>& GetRepositories() const{ return m_repositories; }
    inline bool RepositoriesHasBeenSet() const { return m_repositoriesHasBeenSet; }
    inline void SetRepositories(const Aws::Vector<StringFilter>& value) { m_repositoriesHasBeenSet = true; m_repositories = value; }
    inline void SetRepositories(Aws::Vector<StringFilter>&& value) { m_repositoriesHasBeenSet = true; m_repositories = std::move(value); }
    inline ImageLayerAggregation& WithRepositories(const Aws::Vector<StringFilter>& value) { SetRepositories(value); return *this;}
    inline ImageLayerAggregation& WithRepositories(Aws::Vector<StringFilter>&& value) { SetRepositories(std::move(value)); return *this;}
    inline ImageLayerAggregation& AddRepositories(const StringFilter& value) { m_repositoriesHasBeenSet = true; m_repositories.push_back(value); return *this; }
    inline ImageLayerAggregation& AddRepositories(StringFilter&& value) { m_repositoriesHasBeenSet = true; m_repositories.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The ID of the container image layer.</p>
     */
    inline const Aws::Vector<StringFilter>& GetResourceIds() const{ return m_resourceIds; }
    inline bool ResourceIdsHasBeenSet() const { return m_resourceIdsHasBeenSet; }
    inline void SetResourceIds(const Aws::Vector<StringFilter>& value) { m_resourceIdsHasBeenSet = true; m_resourceIds = value; }
    inline void SetResourceIds(Aws::Vector<StringFilter>&& value) { m_resourceIdsHasBeenSet = true; m_resourceIds = std::move(value); }
    inline ImageLayerAggregation& WithResourceIds(const Aws::Vector<StringFilter>& value) { SetResourceIds(value); return *this;}
    inline ImageLayerAggregation& WithResourceIds(Aws::Vector<StringFilter>&& value) { SetResourceIds(std::move(value)); return *this;}
    inline ImageLayerAggregation& AddResourceIds(const StringFilter& value) { m_resourceIdsHasBeenSet = true; m_resourceIds.push_back(value); return *this; }
    inline ImageLayerAggregation& AddResourceIds(StringFilter&& value) { m_resourceIdsHasBeenSet = true; m_resourceIds.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The value to sort results by.</p>
     */
    inline const ImageLayerSortBy& GetSortBy() const{ return m_sortBy; }
    inline bool SortByHasBeenSet() const { return m_sortByHasBeenSet; }
    inline void SetSortBy(const ImageLayerSortBy& value) { m_sortByHasBeenSet = true; m_sortBy = value; }
    inline void SetSortBy(ImageLayerSortBy&& value) { m_sortByHasBeenSet = true; m_sortBy = std::move(value); }
    inline ImageLayerAggregation& WithSortBy(const ImageLayerSortBy& value) { SetSortBy(value); return *this;}
    inline ImageLayerAggregation& WithSortBy(ImageLayerSortBy&& value) { SetSortBy(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The order to sort results by.</p>
     */
    inline const SortOrder& GetSortOrder() const{ return m_sortOrder; }
    inline bool SortOrderHasBeenSet() const { return m_sortOrderHasBeenSet; }
    inline void SetSortOrder(const SortOrder& value) { m_sortOrderHasBeenSet = true; m_sortOrder = value; }
    inline void SetSortOrder(SortOrder&& value) { m_sortOrderHasBeenSet = true; m_sortOrder = std::move(value); }
    inline ImageLayerAggregation& WithSortOrder(const SortOrder& value) { SetSortOrder(value); return *this;}
    inline ImageLayerAggregation& WithSortOrder(SortOrder&& value) { SetSortOrder(std::move(value)); return *this;}
    ///@}
  private:

    Aws::Vector<StringFilter> m_layerHashes;
    bool m_layerHashesHasBeenSet = false;

    Aws::Vector<StringFilter> m_repositories;
    bool m_repositoriesHasBeenSet = false;

    Aws::Vector<StringFilter> m_resourceIds;
    bool m_resourceIdsHasBeenSet = false;

    ImageLayerSortBy m_sortBy;
    bool m_sortByHasBeenSet = false;

    SortOrder m_sortOrder;
    bool m_sortOrderHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws

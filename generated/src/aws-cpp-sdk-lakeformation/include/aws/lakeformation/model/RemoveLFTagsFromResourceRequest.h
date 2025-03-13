/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lakeformation/LakeFormation_EXPORTS.h>
#include <aws/lakeformation/LakeFormationRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lakeformation/model/Resource.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lakeformation/model/LFTagPair.h>
#include <utility>

namespace Aws
{
namespace LakeFormation
{
namespace Model
{

  /**
   */
  class RemoveLFTagsFromResourceRequest : public LakeFormationRequest
  {
  public:
    AWS_LAKEFORMATION_API RemoveLFTagsFromResourceRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RemoveLFTagsFromResource"; }

    AWS_LAKEFORMATION_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The identifier for the Data Catalog. By default, the account ID. The Data
     * Catalog is the persistent metadata store. It contains database definitions,
     * table definitions, and other control information to manage your Lake Formation
     * environment. </p>
     */
    inline const Aws::String& GetCatalogId() const { return m_catalogId; }
    inline bool CatalogIdHasBeenSet() const { return m_catalogIdHasBeenSet; }
    template<typename CatalogIdT = Aws::String>
    void SetCatalogId(CatalogIdT&& value) { m_catalogIdHasBeenSet = true; m_catalogId = std::forward<CatalogIdT>(value); }
    template<typename CatalogIdT = Aws::String>
    RemoveLFTagsFromResourceRequest& WithCatalogId(CatalogIdT&& value) { SetCatalogId(std::forward<CatalogIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The database, table, or column resource where you want to remove an
     * LF-tag.</p>
     */
    inline const Resource& GetResource() const { return m_resource; }
    inline bool ResourceHasBeenSet() const { return m_resourceHasBeenSet; }
    template<typename ResourceT = Resource>
    void SetResource(ResourceT&& value) { m_resourceHasBeenSet = true; m_resource = std::forward<ResourceT>(value); }
    template<typename ResourceT = Resource>
    RemoveLFTagsFromResourceRequest& WithResource(ResourceT&& value) { SetResource(std::forward<ResourceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The LF-tags to be removed from the resource.</p>
     */
    inline const Aws::Vector<LFTagPair>& GetLFTags() const { return m_lFTags; }
    inline bool LFTagsHasBeenSet() const { return m_lFTagsHasBeenSet; }
    template<typename LFTagsT = Aws::Vector<LFTagPair>>
    void SetLFTags(LFTagsT&& value) { m_lFTagsHasBeenSet = true; m_lFTags = std::forward<LFTagsT>(value); }
    template<typename LFTagsT = Aws::Vector<LFTagPair>>
    RemoveLFTagsFromResourceRequest& WithLFTags(LFTagsT&& value) { SetLFTags(std::forward<LFTagsT>(value)); return *this;}
    template<typename LFTagsT = LFTagPair>
    RemoveLFTagsFromResourceRequest& AddLFTags(LFTagsT&& value) { m_lFTagsHasBeenSet = true; m_lFTags.emplace_back(std::forward<LFTagsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_catalogId;
    bool m_catalogIdHasBeenSet = false;

    Resource m_resource;
    bool m_resourceHasBeenSet = false;

    Aws::Vector<LFTagPair> m_lFTags;
    bool m_lFTagsHasBeenSet = false;
  };

} // namespace Model
} // namespace LakeFormation
} // namespace Aws

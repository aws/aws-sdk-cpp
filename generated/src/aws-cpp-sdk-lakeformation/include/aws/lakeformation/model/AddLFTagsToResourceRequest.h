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
  class AddLFTagsToResourceRequest : public LakeFormationRequest
  {
  public:
    AWS_LAKEFORMATION_API AddLFTagsToResourceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AddLFTagsToResource"; }

    AWS_LAKEFORMATION_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The identifier for the Data Catalog. By default, the account ID. The Data
     * Catalog is the persistent metadata store. It contains database definitions,
     * table definitions, and other control information to manage your Lake Formation
     * environment. </p>
     */
    inline const Aws::String& GetCatalogId() const{ return m_catalogId; }
    inline bool CatalogIdHasBeenSet() const { return m_catalogIdHasBeenSet; }
    inline void SetCatalogId(const Aws::String& value) { m_catalogIdHasBeenSet = true; m_catalogId = value; }
    inline void SetCatalogId(Aws::String&& value) { m_catalogIdHasBeenSet = true; m_catalogId = std::move(value); }
    inline void SetCatalogId(const char* value) { m_catalogIdHasBeenSet = true; m_catalogId.assign(value); }
    inline AddLFTagsToResourceRequest& WithCatalogId(const Aws::String& value) { SetCatalogId(value); return *this;}
    inline AddLFTagsToResourceRequest& WithCatalogId(Aws::String&& value) { SetCatalogId(std::move(value)); return *this;}
    inline AddLFTagsToResourceRequest& WithCatalogId(const char* value) { SetCatalogId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The database, table, or column resource to which to attach an LF-tag.</p>
     */
    inline const Resource& GetResource() const{ return m_resource; }
    inline bool ResourceHasBeenSet() const { return m_resourceHasBeenSet; }
    inline void SetResource(const Resource& value) { m_resourceHasBeenSet = true; m_resource = value; }
    inline void SetResource(Resource&& value) { m_resourceHasBeenSet = true; m_resource = std::move(value); }
    inline AddLFTagsToResourceRequest& WithResource(const Resource& value) { SetResource(value); return *this;}
    inline AddLFTagsToResourceRequest& WithResource(Resource&& value) { SetResource(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The LF-tags to attach to the resource.</p>
     */
    inline const Aws::Vector<LFTagPair>& GetLFTags() const{ return m_lFTags; }
    inline bool LFTagsHasBeenSet() const { return m_lFTagsHasBeenSet; }
    inline void SetLFTags(const Aws::Vector<LFTagPair>& value) { m_lFTagsHasBeenSet = true; m_lFTags = value; }
    inline void SetLFTags(Aws::Vector<LFTagPair>&& value) { m_lFTagsHasBeenSet = true; m_lFTags = std::move(value); }
    inline AddLFTagsToResourceRequest& WithLFTags(const Aws::Vector<LFTagPair>& value) { SetLFTags(value); return *this;}
    inline AddLFTagsToResourceRequest& WithLFTags(Aws::Vector<LFTagPair>&& value) { SetLFTags(std::move(value)); return *this;}
    inline AddLFTagsToResourceRequest& AddLFTags(const LFTagPair& value) { m_lFTagsHasBeenSet = true; m_lFTags.push_back(value); return *this; }
    inline AddLFTagsToResourceRequest& AddLFTags(LFTagPair&& value) { m_lFTagsHasBeenSet = true; m_lFTags.push_back(std::move(value)); return *this; }
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

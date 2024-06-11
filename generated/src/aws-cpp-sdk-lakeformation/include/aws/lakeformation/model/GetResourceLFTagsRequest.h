/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lakeformation/LakeFormation_EXPORTS.h>
#include <aws/lakeformation/LakeFormationRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lakeformation/model/Resource.h>
#include <utility>

namespace Aws
{
namespace LakeFormation
{
namespace Model
{

  /**
   */
  class GetResourceLFTagsRequest : public LakeFormationRequest
  {
  public:
    AWS_LAKEFORMATION_API GetResourceLFTagsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetResourceLFTags"; }

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
    inline GetResourceLFTagsRequest& WithCatalogId(const Aws::String& value) { SetCatalogId(value); return *this;}
    inline GetResourceLFTagsRequest& WithCatalogId(Aws::String&& value) { SetCatalogId(std::move(value)); return *this;}
    inline GetResourceLFTagsRequest& WithCatalogId(const char* value) { SetCatalogId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The database, table, or column resource for which you want to return
     * LF-tags.</p>
     */
    inline const Resource& GetResource() const{ return m_resource; }
    inline bool ResourceHasBeenSet() const { return m_resourceHasBeenSet; }
    inline void SetResource(const Resource& value) { m_resourceHasBeenSet = true; m_resource = value; }
    inline void SetResource(Resource&& value) { m_resourceHasBeenSet = true; m_resource = std::move(value); }
    inline GetResourceLFTagsRequest& WithResource(const Resource& value) { SetResource(value); return *this;}
    inline GetResourceLFTagsRequest& WithResource(Resource&& value) { SetResource(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether to show the assigned LF-tags.</p>
     */
    inline bool GetShowAssignedLFTags() const{ return m_showAssignedLFTags; }
    inline bool ShowAssignedLFTagsHasBeenSet() const { return m_showAssignedLFTagsHasBeenSet; }
    inline void SetShowAssignedLFTags(bool value) { m_showAssignedLFTagsHasBeenSet = true; m_showAssignedLFTags = value; }
    inline GetResourceLFTagsRequest& WithShowAssignedLFTags(bool value) { SetShowAssignedLFTags(value); return *this;}
    ///@}
  private:

    Aws::String m_catalogId;
    bool m_catalogIdHasBeenSet = false;

    Resource m_resource;
    bool m_resourceHasBeenSet = false;

    bool m_showAssignedLFTags;
    bool m_showAssignedLFTagsHasBeenSet = false;
  };

} // namespace Model
} // namespace LakeFormation
} // namespace Aws

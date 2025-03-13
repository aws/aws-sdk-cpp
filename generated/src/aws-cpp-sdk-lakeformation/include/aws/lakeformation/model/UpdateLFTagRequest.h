/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lakeformation/LakeFormation_EXPORTS.h>
#include <aws/lakeformation/LakeFormationRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace LakeFormation
{
namespace Model
{

  /**
   */
  class UpdateLFTagRequest : public LakeFormationRequest
  {
  public:
    AWS_LAKEFORMATION_API UpdateLFTagRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateLFTag"; }

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
    UpdateLFTagRequest& WithCatalogId(CatalogIdT&& value) { SetCatalogId(std::forward<CatalogIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The key-name for the LF-tag for which to add or delete values.</p>
     */
    inline const Aws::String& GetTagKey() const { return m_tagKey; }
    inline bool TagKeyHasBeenSet() const { return m_tagKeyHasBeenSet; }
    template<typename TagKeyT = Aws::String>
    void SetTagKey(TagKeyT&& value) { m_tagKeyHasBeenSet = true; m_tagKey = std::forward<TagKeyT>(value); }
    template<typename TagKeyT = Aws::String>
    UpdateLFTagRequest& WithTagKey(TagKeyT&& value) { SetTagKey(std::forward<TagKeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of LF-tag values to delete from the LF-tag.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTagValuesToDelete() const { return m_tagValuesToDelete; }
    inline bool TagValuesToDeleteHasBeenSet() const { return m_tagValuesToDeleteHasBeenSet; }
    template<typename TagValuesToDeleteT = Aws::Vector<Aws::String>>
    void SetTagValuesToDelete(TagValuesToDeleteT&& value) { m_tagValuesToDeleteHasBeenSet = true; m_tagValuesToDelete = std::forward<TagValuesToDeleteT>(value); }
    template<typename TagValuesToDeleteT = Aws::Vector<Aws::String>>
    UpdateLFTagRequest& WithTagValuesToDelete(TagValuesToDeleteT&& value) { SetTagValuesToDelete(std::forward<TagValuesToDeleteT>(value)); return *this;}
    template<typename TagValuesToDeleteT = Aws::String>
    UpdateLFTagRequest& AddTagValuesToDelete(TagValuesToDeleteT&& value) { m_tagValuesToDeleteHasBeenSet = true; m_tagValuesToDelete.emplace_back(std::forward<TagValuesToDeleteT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of LF-tag values to add from the LF-tag.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTagValuesToAdd() const { return m_tagValuesToAdd; }
    inline bool TagValuesToAddHasBeenSet() const { return m_tagValuesToAddHasBeenSet; }
    template<typename TagValuesToAddT = Aws::Vector<Aws::String>>
    void SetTagValuesToAdd(TagValuesToAddT&& value) { m_tagValuesToAddHasBeenSet = true; m_tagValuesToAdd = std::forward<TagValuesToAddT>(value); }
    template<typename TagValuesToAddT = Aws::Vector<Aws::String>>
    UpdateLFTagRequest& WithTagValuesToAdd(TagValuesToAddT&& value) { SetTagValuesToAdd(std::forward<TagValuesToAddT>(value)); return *this;}
    template<typename TagValuesToAddT = Aws::String>
    UpdateLFTagRequest& AddTagValuesToAdd(TagValuesToAddT&& value) { m_tagValuesToAddHasBeenSet = true; m_tagValuesToAdd.emplace_back(std::forward<TagValuesToAddT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_catalogId;
    bool m_catalogIdHasBeenSet = false;

    Aws::String m_tagKey;
    bool m_tagKeyHasBeenSet = false;

    Aws::Vector<Aws::String> m_tagValuesToDelete;
    bool m_tagValuesToDeleteHasBeenSet = false;

    Aws::Vector<Aws::String> m_tagValuesToAdd;
    bool m_tagValuesToAddHasBeenSet = false;
  };

} // namespace Model
} // namespace LakeFormation
} // namespace Aws

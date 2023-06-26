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
    AWS_LAKEFORMATION_API UpdateLFTagRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateLFTag"; }

    AWS_LAKEFORMATION_API Aws::String SerializePayload() const override;


    /**
     * <p>The identifier for the Data Catalog. By default, the account ID. The Data
     * Catalog is the persistent metadata store. It contains database definitions,
     * table definitions, and other control information to manage your Lake Formation
     * environment. </p>
     */
    inline const Aws::String& GetCatalogId() const{ return m_catalogId; }

    /**
     * <p>The identifier for the Data Catalog. By default, the account ID. The Data
     * Catalog is the persistent metadata store. It contains database definitions,
     * table definitions, and other control information to manage your Lake Formation
     * environment. </p>
     */
    inline bool CatalogIdHasBeenSet() const { return m_catalogIdHasBeenSet; }

    /**
     * <p>The identifier for the Data Catalog. By default, the account ID. The Data
     * Catalog is the persistent metadata store. It contains database definitions,
     * table definitions, and other control information to manage your Lake Formation
     * environment. </p>
     */
    inline void SetCatalogId(const Aws::String& value) { m_catalogIdHasBeenSet = true; m_catalogId = value; }

    /**
     * <p>The identifier for the Data Catalog. By default, the account ID. The Data
     * Catalog is the persistent metadata store. It contains database definitions,
     * table definitions, and other control information to manage your Lake Formation
     * environment. </p>
     */
    inline void SetCatalogId(Aws::String&& value) { m_catalogIdHasBeenSet = true; m_catalogId = std::move(value); }

    /**
     * <p>The identifier for the Data Catalog. By default, the account ID. The Data
     * Catalog is the persistent metadata store. It contains database definitions,
     * table definitions, and other control information to manage your Lake Formation
     * environment. </p>
     */
    inline void SetCatalogId(const char* value) { m_catalogIdHasBeenSet = true; m_catalogId.assign(value); }

    /**
     * <p>The identifier for the Data Catalog. By default, the account ID. The Data
     * Catalog is the persistent metadata store. It contains database definitions,
     * table definitions, and other control information to manage your Lake Formation
     * environment. </p>
     */
    inline UpdateLFTagRequest& WithCatalogId(const Aws::String& value) { SetCatalogId(value); return *this;}

    /**
     * <p>The identifier for the Data Catalog. By default, the account ID. The Data
     * Catalog is the persistent metadata store. It contains database definitions,
     * table definitions, and other control information to manage your Lake Formation
     * environment. </p>
     */
    inline UpdateLFTagRequest& WithCatalogId(Aws::String&& value) { SetCatalogId(std::move(value)); return *this;}

    /**
     * <p>The identifier for the Data Catalog. By default, the account ID. The Data
     * Catalog is the persistent metadata store. It contains database definitions,
     * table definitions, and other control information to manage your Lake Formation
     * environment. </p>
     */
    inline UpdateLFTagRequest& WithCatalogId(const char* value) { SetCatalogId(value); return *this;}


    /**
     * <p>The key-name for the LF-tag for which to add or delete values.</p>
     */
    inline const Aws::String& GetTagKey() const{ return m_tagKey; }

    /**
     * <p>The key-name for the LF-tag for which to add or delete values.</p>
     */
    inline bool TagKeyHasBeenSet() const { return m_tagKeyHasBeenSet; }

    /**
     * <p>The key-name for the LF-tag for which to add or delete values.</p>
     */
    inline void SetTagKey(const Aws::String& value) { m_tagKeyHasBeenSet = true; m_tagKey = value; }

    /**
     * <p>The key-name for the LF-tag for which to add or delete values.</p>
     */
    inline void SetTagKey(Aws::String&& value) { m_tagKeyHasBeenSet = true; m_tagKey = std::move(value); }

    /**
     * <p>The key-name for the LF-tag for which to add or delete values.</p>
     */
    inline void SetTagKey(const char* value) { m_tagKeyHasBeenSet = true; m_tagKey.assign(value); }

    /**
     * <p>The key-name for the LF-tag for which to add or delete values.</p>
     */
    inline UpdateLFTagRequest& WithTagKey(const Aws::String& value) { SetTagKey(value); return *this;}

    /**
     * <p>The key-name for the LF-tag for which to add or delete values.</p>
     */
    inline UpdateLFTagRequest& WithTagKey(Aws::String&& value) { SetTagKey(std::move(value)); return *this;}

    /**
     * <p>The key-name for the LF-tag for which to add or delete values.</p>
     */
    inline UpdateLFTagRequest& WithTagKey(const char* value) { SetTagKey(value); return *this;}


    /**
     * <p>A list of LF-tag values to delete from the LF-tag.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTagValuesToDelete() const{ return m_tagValuesToDelete; }

    /**
     * <p>A list of LF-tag values to delete from the LF-tag.</p>
     */
    inline bool TagValuesToDeleteHasBeenSet() const { return m_tagValuesToDeleteHasBeenSet; }

    /**
     * <p>A list of LF-tag values to delete from the LF-tag.</p>
     */
    inline void SetTagValuesToDelete(const Aws::Vector<Aws::String>& value) { m_tagValuesToDeleteHasBeenSet = true; m_tagValuesToDelete = value; }

    /**
     * <p>A list of LF-tag values to delete from the LF-tag.</p>
     */
    inline void SetTagValuesToDelete(Aws::Vector<Aws::String>&& value) { m_tagValuesToDeleteHasBeenSet = true; m_tagValuesToDelete = std::move(value); }

    /**
     * <p>A list of LF-tag values to delete from the LF-tag.</p>
     */
    inline UpdateLFTagRequest& WithTagValuesToDelete(const Aws::Vector<Aws::String>& value) { SetTagValuesToDelete(value); return *this;}

    /**
     * <p>A list of LF-tag values to delete from the LF-tag.</p>
     */
    inline UpdateLFTagRequest& WithTagValuesToDelete(Aws::Vector<Aws::String>&& value) { SetTagValuesToDelete(std::move(value)); return *this;}

    /**
     * <p>A list of LF-tag values to delete from the LF-tag.</p>
     */
    inline UpdateLFTagRequest& AddTagValuesToDelete(const Aws::String& value) { m_tagValuesToDeleteHasBeenSet = true; m_tagValuesToDelete.push_back(value); return *this; }

    /**
     * <p>A list of LF-tag values to delete from the LF-tag.</p>
     */
    inline UpdateLFTagRequest& AddTagValuesToDelete(Aws::String&& value) { m_tagValuesToDeleteHasBeenSet = true; m_tagValuesToDelete.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of LF-tag values to delete from the LF-tag.</p>
     */
    inline UpdateLFTagRequest& AddTagValuesToDelete(const char* value) { m_tagValuesToDeleteHasBeenSet = true; m_tagValuesToDelete.push_back(value); return *this; }


    /**
     * <p>A list of LF-tag values to add from the LF-tag.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTagValuesToAdd() const{ return m_tagValuesToAdd; }

    /**
     * <p>A list of LF-tag values to add from the LF-tag.</p>
     */
    inline bool TagValuesToAddHasBeenSet() const { return m_tagValuesToAddHasBeenSet; }

    /**
     * <p>A list of LF-tag values to add from the LF-tag.</p>
     */
    inline void SetTagValuesToAdd(const Aws::Vector<Aws::String>& value) { m_tagValuesToAddHasBeenSet = true; m_tagValuesToAdd = value; }

    /**
     * <p>A list of LF-tag values to add from the LF-tag.</p>
     */
    inline void SetTagValuesToAdd(Aws::Vector<Aws::String>&& value) { m_tagValuesToAddHasBeenSet = true; m_tagValuesToAdd = std::move(value); }

    /**
     * <p>A list of LF-tag values to add from the LF-tag.</p>
     */
    inline UpdateLFTagRequest& WithTagValuesToAdd(const Aws::Vector<Aws::String>& value) { SetTagValuesToAdd(value); return *this;}

    /**
     * <p>A list of LF-tag values to add from the LF-tag.</p>
     */
    inline UpdateLFTagRequest& WithTagValuesToAdd(Aws::Vector<Aws::String>&& value) { SetTagValuesToAdd(std::move(value)); return *this;}

    /**
     * <p>A list of LF-tag values to add from the LF-tag.</p>
     */
    inline UpdateLFTagRequest& AddTagValuesToAdd(const Aws::String& value) { m_tagValuesToAddHasBeenSet = true; m_tagValuesToAdd.push_back(value); return *this; }

    /**
     * <p>A list of LF-tag values to add from the LF-tag.</p>
     */
    inline UpdateLFTagRequest& AddTagValuesToAdd(Aws::String&& value) { m_tagValuesToAddHasBeenSet = true; m_tagValuesToAdd.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of LF-tag values to add from the LF-tag.</p>
     */
    inline UpdateLFTagRequest& AddTagValuesToAdd(const char* value) { m_tagValuesToAddHasBeenSet = true; m_tagValuesToAdd.push_back(value); return *this; }

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

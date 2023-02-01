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
  class CreateLFTagRequest : public LakeFormationRequest
  {
  public:
    AWS_LAKEFORMATION_API CreateLFTagRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateLFTag"; }

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
    inline CreateLFTagRequest& WithCatalogId(const Aws::String& value) { SetCatalogId(value); return *this;}

    /**
     * <p>The identifier for the Data Catalog. By default, the account ID. The Data
     * Catalog is the persistent metadata store. It contains database definitions,
     * table definitions, and other control information to manage your Lake Formation
     * environment. </p>
     */
    inline CreateLFTagRequest& WithCatalogId(Aws::String&& value) { SetCatalogId(std::move(value)); return *this;}

    /**
     * <p>The identifier for the Data Catalog. By default, the account ID. The Data
     * Catalog is the persistent metadata store. It contains database definitions,
     * table definitions, and other control information to manage your Lake Formation
     * environment. </p>
     */
    inline CreateLFTagRequest& WithCatalogId(const char* value) { SetCatalogId(value); return *this;}


    /**
     * <p>The key-name for the LF-tag.</p>
     */
    inline const Aws::String& GetTagKey() const{ return m_tagKey; }

    /**
     * <p>The key-name for the LF-tag.</p>
     */
    inline bool TagKeyHasBeenSet() const { return m_tagKeyHasBeenSet; }

    /**
     * <p>The key-name for the LF-tag.</p>
     */
    inline void SetTagKey(const Aws::String& value) { m_tagKeyHasBeenSet = true; m_tagKey = value; }

    /**
     * <p>The key-name for the LF-tag.</p>
     */
    inline void SetTagKey(Aws::String&& value) { m_tagKeyHasBeenSet = true; m_tagKey = std::move(value); }

    /**
     * <p>The key-name for the LF-tag.</p>
     */
    inline void SetTagKey(const char* value) { m_tagKeyHasBeenSet = true; m_tagKey.assign(value); }

    /**
     * <p>The key-name for the LF-tag.</p>
     */
    inline CreateLFTagRequest& WithTagKey(const Aws::String& value) { SetTagKey(value); return *this;}

    /**
     * <p>The key-name for the LF-tag.</p>
     */
    inline CreateLFTagRequest& WithTagKey(Aws::String&& value) { SetTagKey(std::move(value)); return *this;}

    /**
     * <p>The key-name for the LF-tag.</p>
     */
    inline CreateLFTagRequest& WithTagKey(const char* value) { SetTagKey(value); return *this;}


    /**
     * <p>A list of possible values an attribute can take.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTagValues() const{ return m_tagValues; }

    /**
     * <p>A list of possible values an attribute can take.</p>
     */
    inline bool TagValuesHasBeenSet() const { return m_tagValuesHasBeenSet; }

    /**
     * <p>A list of possible values an attribute can take.</p>
     */
    inline void SetTagValues(const Aws::Vector<Aws::String>& value) { m_tagValuesHasBeenSet = true; m_tagValues = value; }

    /**
     * <p>A list of possible values an attribute can take.</p>
     */
    inline void SetTagValues(Aws::Vector<Aws::String>&& value) { m_tagValuesHasBeenSet = true; m_tagValues = std::move(value); }

    /**
     * <p>A list of possible values an attribute can take.</p>
     */
    inline CreateLFTagRequest& WithTagValues(const Aws::Vector<Aws::String>& value) { SetTagValues(value); return *this;}

    /**
     * <p>A list of possible values an attribute can take.</p>
     */
    inline CreateLFTagRequest& WithTagValues(Aws::Vector<Aws::String>&& value) { SetTagValues(std::move(value)); return *this;}

    /**
     * <p>A list of possible values an attribute can take.</p>
     */
    inline CreateLFTagRequest& AddTagValues(const Aws::String& value) { m_tagValuesHasBeenSet = true; m_tagValues.push_back(value); return *this; }

    /**
     * <p>A list of possible values an attribute can take.</p>
     */
    inline CreateLFTagRequest& AddTagValues(Aws::String&& value) { m_tagValuesHasBeenSet = true; m_tagValues.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of possible values an attribute can take.</p>
     */
    inline CreateLFTagRequest& AddTagValues(const char* value) { m_tagValuesHasBeenSet = true; m_tagValues.push_back(value); return *this; }

  private:

    Aws::String m_catalogId;
    bool m_catalogIdHasBeenSet = false;

    Aws::String m_tagKey;
    bool m_tagKeyHasBeenSet = false;

    Aws::Vector<Aws::String> m_tagValues;
    bool m_tagValuesHasBeenSet = false;
  };

} // namespace Model
} // namespace LakeFormation
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lakeformation/LakeFormation_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace LakeFormation
{
namespace Model
{

  /**
   * <p>A structure containing an LF-tag key-value pair.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lakeformation-2017-03-31/LFTagPair">AWS
   * API Reference</a></p>
   */
  class LFTagPair
  {
  public:
    AWS_LAKEFORMATION_API LFTagPair();
    AWS_LAKEFORMATION_API LFTagPair(Aws::Utils::Json::JsonView jsonValue);
    AWS_LAKEFORMATION_API LFTagPair& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LAKEFORMATION_API Aws::Utils::Json::JsonValue Jsonize() const;


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
    inline LFTagPair& WithCatalogId(const Aws::String& value) { SetCatalogId(value); return *this;}

    /**
     * <p>The identifier for the Data Catalog. By default, the account ID. The Data
     * Catalog is the persistent metadata store. It contains database definitions,
     * table definitions, and other control information to manage your Lake Formation
     * environment. </p>
     */
    inline LFTagPair& WithCatalogId(Aws::String&& value) { SetCatalogId(std::move(value)); return *this;}

    /**
     * <p>The identifier for the Data Catalog. By default, the account ID. The Data
     * Catalog is the persistent metadata store. It contains database definitions,
     * table definitions, and other control information to manage your Lake Formation
     * environment. </p>
     */
    inline LFTagPair& WithCatalogId(const char* value) { SetCatalogId(value); return *this;}


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
    inline LFTagPair& WithTagKey(const Aws::String& value) { SetTagKey(value); return *this;}

    /**
     * <p>The key-name for the LF-tag.</p>
     */
    inline LFTagPair& WithTagKey(Aws::String&& value) { SetTagKey(std::move(value)); return *this;}

    /**
     * <p>The key-name for the LF-tag.</p>
     */
    inline LFTagPair& WithTagKey(const char* value) { SetTagKey(value); return *this;}


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
    inline LFTagPair& WithTagValues(const Aws::Vector<Aws::String>& value) { SetTagValues(value); return *this;}

    /**
     * <p>A list of possible values an attribute can take.</p>
     */
    inline LFTagPair& WithTagValues(Aws::Vector<Aws::String>&& value) { SetTagValues(std::move(value)); return *this;}

    /**
     * <p>A list of possible values an attribute can take.</p>
     */
    inline LFTagPair& AddTagValues(const Aws::String& value) { m_tagValuesHasBeenSet = true; m_tagValues.push_back(value); return *this; }

    /**
     * <p>A list of possible values an attribute can take.</p>
     */
    inline LFTagPair& AddTagValues(Aws::String&& value) { m_tagValuesHasBeenSet = true; m_tagValues.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of possible values an attribute can take.</p>
     */
    inline LFTagPair& AddTagValues(const char* value) { m_tagValuesHasBeenSet = true; m_tagValues.push_back(value); return *this; }

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

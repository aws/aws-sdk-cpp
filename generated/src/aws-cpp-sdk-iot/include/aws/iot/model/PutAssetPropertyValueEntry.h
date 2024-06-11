﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iot/model/AssetPropertyValue.h>
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
namespace IoT
{
namespace Model
{

  /**
   * <p>An asset property value entry containing the following
   * information.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/PutAssetPropertyValueEntry">AWS
   * API Reference</a></p>
   */
  class PutAssetPropertyValueEntry
  {
  public:
    AWS_IOT_API PutAssetPropertyValueEntry();
    AWS_IOT_API PutAssetPropertyValueEntry(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API PutAssetPropertyValueEntry& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Optional. A unique identifier for this entry that you can define to better
     * track which message caused an error in case of failure. Accepts substitution
     * templates. Defaults to a new UUID.</p>
     */
    inline const Aws::String& GetEntryId() const{ return m_entryId; }
    inline bool EntryIdHasBeenSet() const { return m_entryIdHasBeenSet; }
    inline void SetEntryId(const Aws::String& value) { m_entryIdHasBeenSet = true; m_entryId = value; }
    inline void SetEntryId(Aws::String&& value) { m_entryIdHasBeenSet = true; m_entryId = std::move(value); }
    inline void SetEntryId(const char* value) { m_entryIdHasBeenSet = true; m_entryId.assign(value); }
    inline PutAssetPropertyValueEntry& WithEntryId(const Aws::String& value) { SetEntryId(value); return *this;}
    inline PutAssetPropertyValueEntry& WithEntryId(Aws::String&& value) { SetEntryId(std::move(value)); return *this;}
    inline PutAssetPropertyValueEntry& WithEntryId(const char* value) { SetEntryId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the IoT SiteWise asset. You must specify either a
     * <code>propertyAlias</code> or both an <code>aliasId</code> and a
     * <code>propertyId</code>. Accepts substitution templates.</p>
     */
    inline const Aws::String& GetAssetId() const{ return m_assetId; }
    inline bool AssetIdHasBeenSet() const { return m_assetIdHasBeenSet; }
    inline void SetAssetId(const Aws::String& value) { m_assetIdHasBeenSet = true; m_assetId = value; }
    inline void SetAssetId(Aws::String&& value) { m_assetIdHasBeenSet = true; m_assetId = std::move(value); }
    inline void SetAssetId(const char* value) { m_assetIdHasBeenSet = true; m_assetId.assign(value); }
    inline PutAssetPropertyValueEntry& WithAssetId(const Aws::String& value) { SetAssetId(value); return *this;}
    inline PutAssetPropertyValueEntry& WithAssetId(Aws::String&& value) { SetAssetId(std::move(value)); return *this;}
    inline PutAssetPropertyValueEntry& WithAssetId(const char* value) { SetAssetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the asset's property. You must specify either a
     * <code>propertyAlias</code> or both an <code>aliasId</code> and a
     * <code>propertyId</code>. Accepts substitution templates.</p>
     */
    inline const Aws::String& GetPropertyId() const{ return m_propertyId; }
    inline bool PropertyIdHasBeenSet() const { return m_propertyIdHasBeenSet; }
    inline void SetPropertyId(const Aws::String& value) { m_propertyIdHasBeenSet = true; m_propertyId = value; }
    inline void SetPropertyId(Aws::String&& value) { m_propertyIdHasBeenSet = true; m_propertyId = std::move(value); }
    inline void SetPropertyId(const char* value) { m_propertyIdHasBeenSet = true; m_propertyId.assign(value); }
    inline PutAssetPropertyValueEntry& WithPropertyId(const Aws::String& value) { SetPropertyId(value); return *this;}
    inline PutAssetPropertyValueEntry& WithPropertyId(Aws::String&& value) { SetPropertyId(std::move(value)); return *this;}
    inline PutAssetPropertyValueEntry& WithPropertyId(const char* value) { SetPropertyId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the property alias associated with your asset property. You must
     * specify either a <code>propertyAlias</code> or both an <code>aliasId</code> and
     * a <code>propertyId</code>. Accepts substitution templates.</p>
     */
    inline const Aws::String& GetPropertyAlias() const{ return m_propertyAlias; }
    inline bool PropertyAliasHasBeenSet() const { return m_propertyAliasHasBeenSet; }
    inline void SetPropertyAlias(const Aws::String& value) { m_propertyAliasHasBeenSet = true; m_propertyAlias = value; }
    inline void SetPropertyAlias(Aws::String&& value) { m_propertyAliasHasBeenSet = true; m_propertyAlias = std::move(value); }
    inline void SetPropertyAlias(const char* value) { m_propertyAliasHasBeenSet = true; m_propertyAlias.assign(value); }
    inline PutAssetPropertyValueEntry& WithPropertyAlias(const Aws::String& value) { SetPropertyAlias(value); return *this;}
    inline PutAssetPropertyValueEntry& WithPropertyAlias(Aws::String&& value) { SetPropertyAlias(std::move(value)); return *this;}
    inline PutAssetPropertyValueEntry& WithPropertyAlias(const char* value) { SetPropertyAlias(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of property values to insert that each contain timestamp, quality, and
     * value (TQV) information.</p>
     */
    inline const Aws::Vector<AssetPropertyValue>& GetPropertyValues() const{ return m_propertyValues; }
    inline bool PropertyValuesHasBeenSet() const { return m_propertyValuesHasBeenSet; }
    inline void SetPropertyValues(const Aws::Vector<AssetPropertyValue>& value) { m_propertyValuesHasBeenSet = true; m_propertyValues = value; }
    inline void SetPropertyValues(Aws::Vector<AssetPropertyValue>&& value) { m_propertyValuesHasBeenSet = true; m_propertyValues = std::move(value); }
    inline PutAssetPropertyValueEntry& WithPropertyValues(const Aws::Vector<AssetPropertyValue>& value) { SetPropertyValues(value); return *this;}
    inline PutAssetPropertyValueEntry& WithPropertyValues(Aws::Vector<AssetPropertyValue>&& value) { SetPropertyValues(std::move(value)); return *this;}
    inline PutAssetPropertyValueEntry& AddPropertyValues(const AssetPropertyValue& value) { m_propertyValuesHasBeenSet = true; m_propertyValues.push_back(value); return *this; }
    inline PutAssetPropertyValueEntry& AddPropertyValues(AssetPropertyValue&& value) { m_propertyValuesHasBeenSet = true; m_propertyValues.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_entryId;
    bool m_entryIdHasBeenSet = false;

    Aws::String m_assetId;
    bool m_assetIdHasBeenSet = false;

    Aws::String m_propertyId;
    bool m_propertyIdHasBeenSet = false;

    Aws::String m_propertyAlias;
    bool m_propertyAliasHasBeenSet = false;

    Aws::Vector<AssetPropertyValue> m_propertyValues;
    bool m_propertyValuesHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws

/**
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
    AWS_IOT_API PutAssetPropertyValueEntry() = default;
    AWS_IOT_API PutAssetPropertyValueEntry(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API PutAssetPropertyValueEntry& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Optional. A unique identifier for this entry that you can define to better
     * track which message caused an error in case of failure. Accepts substitution
     * templates. Defaults to a new UUID.</p>
     */
    inline const Aws::String& GetEntryId() const { return m_entryId; }
    inline bool EntryIdHasBeenSet() const { return m_entryIdHasBeenSet; }
    template<typename EntryIdT = Aws::String>
    void SetEntryId(EntryIdT&& value) { m_entryIdHasBeenSet = true; m_entryId = std::forward<EntryIdT>(value); }
    template<typename EntryIdT = Aws::String>
    PutAssetPropertyValueEntry& WithEntryId(EntryIdT&& value) { SetEntryId(std::forward<EntryIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the IoT SiteWise asset. You must specify either a
     * <code>propertyAlias</code> or both an <code>aliasId</code> and a
     * <code>propertyId</code>. Accepts substitution templates.</p>
     */
    inline const Aws::String& GetAssetId() const { return m_assetId; }
    inline bool AssetIdHasBeenSet() const { return m_assetIdHasBeenSet; }
    template<typename AssetIdT = Aws::String>
    void SetAssetId(AssetIdT&& value) { m_assetIdHasBeenSet = true; m_assetId = std::forward<AssetIdT>(value); }
    template<typename AssetIdT = Aws::String>
    PutAssetPropertyValueEntry& WithAssetId(AssetIdT&& value) { SetAssetId(std::forward<AssetIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the asset's property. You must specify either a
     * <code>propertyAlias</code> or both an <code>aliasId</code> and a
     * <code>propertyId</code>. Accepts substitution templates.</p>
     */
    inline const Aws::String& GetPropertyId() const { return m_propertyId; }
    inline bool PropertyIdHasBeenSet() const { return m_propertyIdHasBeenSet; }
    template<typename PropertyIdT = Aws::String>
    void SetPropertyId(PropertyIdT&& value) { m_propertyIdHasBeenSet = true; m_propertyId = std::forward<PropertyIdT>(value); }
    template<typename PropertyIdT = Aws::String>
    PutAssetPropertyValueEntry& WithPropertyId(PropertyIdT&& value) { SetPropertyId(std::forward<PropertyIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the property alias associated with your asset property. You must
     * specify either a <code>propertyAlias</code> or both an <code>aliasId</code> and
     * a <code>propertyId</code>. Accepts substitution templates.</p>
     */
    inline const Aws::String& GetPropertyAlias() const { return m_propertyAlias; }
    inline bool PropertyAliasHasBeenSet() const { return m_propertyAliasHasBeenSet; }
    template<typename PropertyAliasT = Aws::String>
    void SetPropertyAlias(PropertyAliasT&& value) { m_propertyAliasHasBeenSet = true; m_propertyAlias = std::forward<PropertyAliasT>(value); }
    template<typename PropertyAliasT = Aws::String>
    PutAssetPropertyValueEntry& WithPropertyAlias(PropertyAliasT&& value) { SetPropertyAlias(std::forward<PropertyAliasT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of property values to insert that each contain timestamp, quality, and
     * value (TQV) information.</p>
     */
    inline const Aws::Vector<AssetPropertyValue>& GetPropertyValues() const { return m_propertyValues; }
    inline bool PropertyValuesHasBeenSet() const { return m_propertyValuesHasBeenSet; }
    template<typename PropertyValuesT = Aws::Vector<AssetPropertyValue>>
    void SetPropertyValues(PropertyValuesT&& value) { m_propertyValuesHasBeenSet = true; m_propertyValues = std::forward<PropertyValuesT>(value); }
    template<typename PropertyValuesT = Aws::Vector<AssetPropertyValue>>
    PutAssetPropertyValueEntry& WithPropertyValues(PropertyValuesT&& value) { SetPropertyValues(std::forward<PropertyValuesT>(value)); return *this;}
    template<typename PropertyValuesT = AssetPropertyValue>
    PutAssetPropertyValueEntry& AddPropertyValues(PropertyValuesT&& value) { m_propertyValuesHasBeenSet = true; m_propertyValues.emplace_back(std::forward<PropertyValuesT>(value)); return *this; }
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

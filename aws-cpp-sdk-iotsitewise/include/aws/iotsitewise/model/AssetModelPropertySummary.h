/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotsitewise/model/PropertyDataType.h>
#include <aws/iotsitewise/model/PropertyType.h>
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
namespace IoTSiteWise
{
namespace Model
{

  /**
   * <p>Contains a summary of a property associated with a model.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/AssetModelPropertySummary">AWS
   * API Reference</a></p>
   */
  class AssetModelPropertySummary
  {
  public:
    AWS_IOTSITEWISE_API AssetModelPropertySummary();
    AWS_IOTSITEWISE_API AssetModelPropertySummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTSITEWISE_API AssetModelPropertySummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTSITEWISE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID of the property.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The ID of the property.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The ID of the property.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The ID of the property.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The ID of the property.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The ID of the property.</p>
     */
    inline AssetModelPropertySummary& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The ID of the property.</p>
     */
    inline AssetModelPropertySummary& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The ID of the property.</p>
     */
    inline AssetModelPropertySummary& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The name of the property.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the property.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the property.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the property.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the property.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the property.</p>
     */
    inline AssetModelPropertySummary& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the property.</p>
     */
    inline AssetModelPropertySummary& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the property.</p>
     */
    inline AssetModelPropertySummary& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The data type of the property.</p>
     */
    inline const PropertyDataType& GetDataType() const{ return m_dataType; }

    /**
     * <p>The data type of the property.</p>
     */
    inline bool DataTypeHasBeenSet() const { return m_dataTypeHasBeenSet; }

    /**
     * <p>The data type of the property.</p>
     */
    inline void SetDataType(const PropertyDataType& value) { m_dataTypeHasBeenSet = true; m_dataType = value; }

    /**
     * <p>The data type of the property.</p>
     */
    inline void SetDataType(PropertyDataType&& value) { m_dataTypeHasBeenSet = true; m_dataType = std::move(value); }

    /**
     * <p>The data type of the property.</p>
     */
    inline AssetModelPropertySummary& WithDataType(const PropertyDataType& value) { SetDataType(value); return *this;}

    /**
     * <p>The data type of the property.</p>
     */
    inline AssetModelPropertySummary& WithDataType(PropertyDataType&& value) { SetDataType(std::move(value)); return *this;}


    /**
     * <p>The data type of the structure for this property. This parameter exists on
     * properties that have the <code>STRUCT</code> data type.</p>
     */
    inline const Aws::String& GetDataTypeSpec() const{ return m_dataTypeSpec; }

    /**
     * <p>The data type of the structure for this property. This parameter exists on
     * properties that have the <code>STRUCT</code> data type.</p>
     */
    inline bool DataTypeSpecHasBeenSet() const { return m_dataTypeSpecHasBeenSet; }

    /**
     * <p>The data type of the structure for this property. This parameter exists on
     * properties that have the <code>STRUCT</code> data type.</p>
     */
    inline void SetDataTypeSpec(const Aws::String& value) { m_dataTypeSpecHasBeenSet = true; m_dataTypeSpec = value; }

    /**
     * <p>The data type of the structure for this property. This parameter exists on
     * properties that have the <code>STRUCT</code> data type.</p>
     */
    inline void SetDataTypeSpec(Aws::String&& value) { m_dataTypeSpecHasBeenSet = true; m_dataTypeSpec = std::move(value); }

    /**
     * <p>The data type of the structure for this property. This parameter exists on
     * properties that have the <code>STRUCT</code> data type.</p>
     */
    inline void SetDataTypeSpec(const char* value) { m_dataTypeSpecHasBeenSet = true; m_dataTypeSpec.assign(value); }

    /**
     * <p>The data type of the structure for this property. This parameter exists on
     * properties that have the <code>STRUCT</code> data type.</p>
     */
    inline AssetModelPropertySummary& WithDataTypeSpec(const Aws::String& value) { SetDataTypeSpec(value); return *this;}

    /**
     * <p>The data type of the structure for this property. This parameter exists on
     * properties that have the <code>STRUCT</code> data type.</p>
     */
    inline AssetModelPropertySummary& WithDataTypeSpec(Aws::String&& value) { SetDataTypeSpec(std::move(value)); return *this;}

    /**
     * <p>The data type of the structure for this property. This parameter exists on
     * properties that have the <code>STRUCT</code> data type.</p>
     */
    inline AssetModelPropertySummary& WithDataTypeSpec(const char* value) { SetDataTypeSpec(value); return *this;}


    /**
     * <p>The unit (such as <code>Newtons</code> or <code>RPM</code>) of the
     * property.</p>
     */
    inline const Aws::String& GetUnit() const{ return m_unit; }

    /**
     * <p>The unit (such as <code>Newtons</code> or <code>RPM</code>) of the
     * property.</p>
     */
    inline bool UnitHasBeenSet() const { return m_unitHasBeenSet; }

    /**
     * <p>The unit (such as <code>Newtons</code> or <code>RPM</code>) of the
     * property.</p>
     */
    inline void SetUnit(const Aws::String& value) { m_unitHasBeenSet = true; m_unit = value; }

    /**
     * <p>The unit (such as <code>Newtons</code> or <code>RPM</code>) of the
     * property.</p>
     */
    inline void SetUnit(Aws::String&& value) { m_unitHasBeenSet = true; m_unit = std::move(value); }

    /**
     * <p>The unit (such as <code>Newtons</code> or <code>RPM</code>) of the
     * property.</p>
     */
    inline void SetUnit(const char* value) { m_unitHasBeenSet = true; m_unit.assign(value); }

    /**
     * <p>The unit (such as <code>Newtons</code> or <code>RPM</code>) of the
     * property.</p>
     */
    inline AssetModelPropertySummary& WithUnit(const Aws::String& value) { SetUnit(value); return *this;}

    /**
     * <p>The unit (such as <code>Newtons</code> or <code>RPM</code>) of the
     * property.</p>
     */
    inline AssetModelPropertySummary& WithUnit(Aws::String&& value) { SetUnit(std::move(value)); return *this;}

    /**
     * <p>The unit (such as <code>Newtons</code> or <code>RPM</code>) of the
     * property.</p>
     */
    inline AssetModelPropertySummary& WithUnit(const char* value) { SetUnit(value); return *this;}


    
    inline const PropertyType& GetType() const{ return m_type; }

    
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    
    inline void SetType(const PropertyType& value) { m_typeHasBeenSet = true; m_type = value; }

    
    inline void SetType(PropertyType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    
    inline AssetModelPropertySummary& WithType(const PropertyType& value) { SetType(value); return *this;}

    
    inline AssetModelPropertySummary& WithType(PropertyType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p> The ID of the composite model that contains the asset model property. </p>
     */
    inline const Aws::String& GetAssetModelCompositeModelId() const{ return m_assetModelCompositeModelId; }

    /**
     * <p> The ID of the composite model that contains the asset model property. </p>
     */
    inline bool AssetModelCompositeModelIdHasBeenSet() const { return m_assetModelCompositeModelIdHasBeenSet; }

    /**
     * <p> The ID of the composite model that contains the asset model property. </p>
     */
    inline void SetAssetModelCompositeModelId(const Aws::String& value) { m_assetModelCompositeModelIdHasBeenSet = true; m_assetModelCompositeModelId = value; }

    /**
     * <p> The ID of the composite model that contains the asset model property. </p>
     */
    inline void SetAssetModelCompositeModelId(Aws::String&& value) { m_assetModelCompositeModelIdHasBeenSet = true; m_assetModelCompositeModelId = std::move(value); }

    /**
     * <p> The ID of the composite model that contains the asset model property. </p>
     */
    inline void SetAssetModelCompositeModelId(const char* value) { m_assetModelCompositeModelIdHasBeenSet = true; m_assetModelCompositeModelId.assign(value); }

    /**
     * <p> The ID of the composite model that contains the asset model property. </p>
     */
    inline AssetModelPropertySummary& WithAssetModelCompositeModelId(const Aws::String& value) { SetAssetModelCompositeModelId(value); return *this;}

    /**
     * <p> The ID of the composite model that contains the asset model property. </p>
     */
    inline AssetModelPropertySummary& WithAssetModelCompositeModelId(Aws::String&& value) { SetAssetModelCompositeModelId(std::move(value)); return *this;}

    /**
     * <p> The ID of the composite model that contains the asset model property. </p>
     */
    inline AssetModelPropertySummary& WithAssetModelCompositeModelId(const char* value) { SetAssetModelCompositeModelId(value); return *this;}

  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    PropertyDataType m_dataType;
    bool m_dataTypeHasBeenSet = false;

    Aws::String m_dataTypeSpec;
    bool m_dataTypeSpecHasBeenSet = false;

    Aws::String m_unit;
    bool m_unitHasBeenSet = false;

    PropertyType m_type;
    bool m_typeHasBeenSet = false;

    Aws::String m_assetModelCompositeModelId;
    bool m_assetModelCompositeModelIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws

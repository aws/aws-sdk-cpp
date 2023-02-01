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
   * <p>Contains information about an asset model property.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/AssetModelProperty">AWS
   * API Reference</a></p>
   */
  class AssetModelProperty
  {
  public:
    AWS_IOTSITEWISE_API AssetModelProperty();
    AWS_IOTSITEWISE_API AssetModelProperty(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTSITEWISE_API AssetModelProperty& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTSITEWISE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID of the asset model property.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The ID of the asset model property.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The ID of the asset model property.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The ID of the asset model property.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The ID of the asset model property.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The ID of the asset model property.</p>
     */
    inline AssetModelProperty& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The ID of the asset model property.</p>
     */
    inline AssetModelProperty& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The ID of the asset model property.</p>
     */
    inline AssetModelProperty& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The name of the asset model property.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the asset model property.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the asset model property.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the asset model property.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the asset model property.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the asset model property.</p>
     */
    inline AssetModelProperty& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the asset model property.</p>
     */
    inline AssetModelProperty& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the asset model property.</p>
     */
    inline AssetModelProperty& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The data type of the asset model property.</p>
     */
    inline const PropertyDataType& GetDataType() const{ return m_dataType; }

    /**
     * <p>The data type of the asset model property.</p>
     */
    inline bool DataTypeHasBeenSet() const { return m_dataTypeHasBeenSet; }

    /**
     * <p>The data type of the asset model property.</p>
     */
    inline void SetDataType(const PropertyDataType& value) { m_dataTypeHasBeenSet = true; m_dataType = value; }

    /**
     * <p>The data type of the asset model property.</p>
     */
    inline void SetDataType(PropertyDataType&& value) { m_dataTypeHasBeenSet = true; m_dataType = std::move(value); }

    /**
     * <p>The data type of the asset model property.</p>
     */
    inline AssetModelProperty& WithDataType(const PropertyDataType& value) { SetDataType(value); return *this;}

    /**
     * <p>The data type of the asset model property.</p>
     */
    inline AssetModelProperty& WithDataType(PropertyDataType&& value) { SetDataType(std::move(value)); return *this;}


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
    inline AssetModelProperty& WithDataTypeSpec(const Aws::String& value) { SetDataTypeSpec(value); return *this;}

    /**
     * <p>The data type of the structure for this property. This parameter exists on
     * properties that have the <code>STRUCT</code> data type.</p>
     */
    inline AssetModelProperty& WithDataTypeSpec(Aws::String&& value) { SetDataTypeSpec(std::move(value)); return *this;}

    /**
     * <p>The data type of the structure for this property. This parameter exists on
     * properties that have the <code>STRUCT</code> data type.</p>
     */
    inline AssetModelProperty& WithDataTypeSpec(const char* value) { SetDataTypeSpec(value); return *this;}


    /**
     * <p>The unit of the asset model property, such as <code>Newtons</code> or
     * <code>RPM</code>.</p>
     */
    inline const Aws::String& GetUnit() const{ return m_unit; }

    /**
     * <p>The unit of the asset model property, such as <code>Newtons</code> or
     * <code>RPM</code>.</p>
     */
    inline bool UnitHasBeenSet() const { return m_unitHasBeenSet; }

    /**
     * <p>The unit of the asset model property, such as <code>Newtons</code> or
     * <code>RPM</code>.</p>
     */
    inline void SetUnit(const Aws::String& value) { m_unitHasBeenSet = true; m_unit = value; }

    /**
     * <p>The unit of the asset model property, such as <code>Newtons</code> or
     * <code>RPM</code>.</p>
     */
    inline void SetUnit(Aws::String&& value) { m_unitHasBeenSet = true; m_unit = std::move(value); }

    /**
     * <p>The unit of the asset model property, such as <code>Newtons</code> or
     * <code>RPM</code>.</p>
     */
    inline void SetUnit(const char* value) { m_unitHasBeenSet = true; m_unit.assign(value); }

    /**
     * <p>The unit of the asset model property, such as <code>Newtons</code> or
     * <code>RPM</code>.</p>
     */
    inline AssetModelProperty& WithUnit(const Aws::String& value) { SetUnit(value); return *this;}

    /**
     * <p>The unit of the asset model property, such as <code>Newtons</code> or
     * <code>RPM</code>.</p>
     */
    inline AssetModelProperty& WithUnit(Aws::String&& value) { SetUnit(std::move(value)); return *this;}

    /**
     * <p>The unit of the asset model property, such as <code>Newtons</code> or
     * <code>RPM</code>.</p>
     */
    inline AssetModelProperty& WithUnit(const char* value) { SetUnit(value); return *this;}


    /**
     * <p>The property type (see <code>PropertyType</code>).</p>
     */
    inline const PropertyType& GetType() const{ return m_type; }

    /**
     * <p>The property type (see <code>PropertyType</code>).</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The property type (see <code>PropertyType</code>).</p>
     */
    inline void SetType(const PropertyType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The property type (see <code>PropertyType</code>).</p>
     */
    inline void SetType(PropertyType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The property type (see <code>PropertyType</code>).</p>
     */
    inline AssetModelProperty& WithType(const PropertyType& value) { SetType(value); return *this;}

    /**
     * <p>The property type (see <code>PropertyType</code>).</p>
     */
    inline AssetModelProperty& WithType(PropertyType&& value) { SetType(std::move(value)); return *this;}

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
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws

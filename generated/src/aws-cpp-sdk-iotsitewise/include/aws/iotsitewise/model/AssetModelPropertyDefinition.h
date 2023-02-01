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
   * <p>Contains an asset model property definition. This property definition is
   * applied to all assets created from the asset model.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/AssetModelPropertyDefinition">AWS
   * API Reference</a></p>
   */
  class AssetModelPropertyDefinition
  {
  public:
    AWS_IOTSITEWISE_API AssetModelPropertyDefinition();
    AWS_IOTSITEWISE_API AssetModelPropertyDefinition(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTSITEWISE_API AssetModelPropertyDefinition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTSITEWISE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the property definition.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the property definition.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the property definition.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the property definition.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the property definition.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the property definition.</p>
     */
    inline AssetModelPropertyDefinition& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the property definition.</p>
     */
    inline AssetModelPropertyDefinition& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the property definition.</p>
     */
    inline AssetModelPropertyDefinition& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The data type of the property definition.</p> <p>If you specify
     * <code>STRUCT</code>, you must also specify <code>dataTypeSpec</code> to identify
     * the type of the structure for this property.</p>
     */
    inline const PropertyDataType& GetDataType() const{ return m_dataType; }

    /**
     * <p>The data type of the property definition.</p> <p>If you specify
     * <code>STRUCT</code>, you must also specify <code>dataTypeSpec</code> to identify
     * the type of the structure for this property.</p>
     */
    inline bool DataTypeHasBeenSet() const { return m_dataTypeHasBeenSet; }

    /**
     * <p>The data type of the property definition.</p> <p>If you specify
     * <code>STRUCT</code>, you must also specify <code>dataTypeSpec</code> to identify
     * the type of the structure for this property.</p>
     */
    inline void SetDataType(const PropertyDataType& value) { m_dataTypeHasBeenSet = true; m_dataType = value; }

    /**
     * <p>The data type of the property definition.</p> <p>If you specify
     * <code>STRUCT</code>, you must also specify <code>dataTypeSpec</code> to identify
     * the type of the structure for this property.</p>
     */
    inline void SetDataType(PropertyDataType&& value) { m_dataTypeHasBeenSet = true; m_dataType = std::move(value); }

    /**
     * <p>The data type of the property definition.</p> <p>If you specify
     * <code>STRUCT</code>, you must also specify <code>dataTypeSpec</code> to identify
     * the type of the structure for this property.</p>
     */
    inline AssetModelPropertyDefinition& WithDataType(const PropertyDataType& value) { SetDataType(value); return *this;}

    /**
     * <p>The data type of the property definition.</p> <p>If you specify
     * <code>STRUCT</code>, you must also specify <code>dataTypeSpec</code> to identify
     * the type of the structure for this property.</p>
     */
    inline AssetModelPropertyDefinition& WithDataType(PropertyDataType&& value) { SetDataType(std::move(value)); return *this;}


    /**
     * <p>The data type of the structure for this property. This parameter is required
     * on properties that have the <code>STRUCT</code> data type.</p> <p>The options
     * for this parameter depend on the type of the composite model in which you define
     * this property. Use <code>AWS/ALARM_STATE</code> for alarm state in alarm
     * composite models.</p>
     */
    inline const Aws::String& GetDataTypeSpec() const{ return m_dataTypeSpec; }

    /**
     * <p>The data type of the structure for this property. This parameter is required
     * on properties that have the <code>STRUCT</code> data type.</p> <p>The options
     * for this parameter depend on the type of the composite model in which you define
     * this property. Use <code>AWS/ALARM_STATE</code> for alarm state in alarm
     * composite models.</p>
     */
    inline bool DataTypeSpecHasBeenSet() const { return m_dataTypeSpecHasBeenSet; }

    /**
     * <p>The data type of the structure for this property. This parameter is required
     * on properties that have the <code>STRUCT</code> data type.</p> <p>The options
     * for this parameter depend on the type of the composite model in which you define
     * this property. Use <code>AWS/ALARM_STATE</code> for alarm state in alarm
     * composite models.</p>
     */
    inline void SetDataTypeSpec(const Aws::String& value) { m_dataTypeSpecHasBeenSet = true; m_dataTypeSpec = value; }

    /**
     * <p>The data type of the structure for this property. This parameter is required
     * on properties that have the <code>STRUCT</code> data type.</p> <p>The options
     * for this parameter depend on the type of the composite model in which you define
     * this property. Use <code>AWS/ALARM_STATE</code> for alarm state in alarm
     * composite models.</p>
     */
    inline void SetDataTypeSpec(Aws::String&& value) { m_dataTypeSpecHasBeenSet = true; m_dataTypeSpec = std::move(value); }

    /**
     * <p>The data type of the structure for this property. This parameter is required
     * on properties that have the <code>STRUCT</code> data type.</p> <p>The options
     * for this parameter depend on the type of the composite model in which you define
     * this property. Use <code>AWS/ALARM_STATE</code> for alarm state in alarm
     * composite models.</p>
     */
    inline void SetDataTypeSpec(const char* value) { m_dataTypeSpecHasBeenSet = true; m_dataTypeSpec.assign(value); }

    /**
     * <p>The data type of the structure for this property. This parameter is required
     * on properties that have the <code>STRUCT</code> data type.</p> <p>The options
     * for this parameter depend on the type of the composite model in which you define
     * this property. Use <code>AWS/ALARM_STATE</code> for alarm state in alarm
     * composite models.</p>
     */
    inline AssetModelPropertyDefinition& WithDataTypeSpec(const Aws::String& value) { SetDataTypeSpec(value); return *this;}

    /**
     * <p>The data type of the structure for this property. This parameter is required
     * on properties that have the <code>STRUCT</code> data type.</p> <p>The options
     * for this parameter depend on the type of the composite model in which you define
     * this property. Use <code>AWS/ALARM_STATE</code> for alarm state in alarm
     * composite models.</p>
     */
    inline AssetModelPropertyDefinition& WithDataTypeSpec(Aws::String&& value) { SetDataTypeSpec(std::move(value)); return *this;}

    /**
     * <p>The data type of the structure for this property. This parameter is required
     * on properties that have the <code>STRUCT</code> data type.</p> <p>The options
     * for this parameter depend on the type of the composite model in which you define
     * this property. Use <code>AWS/ALARM_STATE</code> for alarm state in alarm
     * composite models.</p>
     */
    inline AssetModelPropertyDefinition& WithDataTypeSpec(const char* value) { SetDataTypeSpec(value); return *this;}


    /**
     * <p>The unit of the property definition, such as <code>Newtons</code> or
     * <code>RPM</code>.</p>
     */
    inline const Aws::String& GetUnit() const{ return m_unit; }

    /**
     * <p>The unit of the property definition, such as <code>Newtons</code> or
     * <code>RPM</code>.</p>
     */
    inline bool UnitHasBeenSet() const { return m_unitHasBeenSet; }

    /**
     * <p>The unit of the property definition, such as <code>Newtons</code> or
     * <code>RPM</code>.</p>
     */
    inline void SetUnit(const Aws::String& value) { m_unitHasBeenSet = true; m_unit = value; }

    /**
     * <p>The unit of the property definition, such as <code>Newtons</code> or
     * <code>RPM</code>.</p>
     */
    inline void SetUnit(Aws::String&& value) { m_unitHasBeenSet = true; m_unit = std::move(value); }

    /**
     * <p>The unit of the property definition, such as <code>Newtons</code> or
     * <code>RPM</code>.</p>
     */
    inline void SetUnit(const char* value) { m_unitHasBeenSet = true; m_unit.assign(value); }

    /**
     * <p>The unit of the property definition, such as <code>Newtons</code> or
     * <code>RPM</code>.</p>
     */
    inline AssetModelPropertyDefinition& WithUnit(const Aws::String& value) { SetUnit(value); return *this;}

    /**
     * <p>The unit of the property definition, such as <code>Newtons</code> or
     * <code>RPM</code>.</p>
     */
    inline AssetModelPropertyDefinition& WithUnit(Aws::String&& value) { SetUnit(std::move(value)); return *this;}

    /**
     * <p>The unit of the property definition, such as <code>Newtons</code> or
     * <code>RPM</code>.</p>
     */
    inline AssetModelPropertyDefinition& WithUnit(const char* value) { SetUnit(value); return *this;}


    /**
     * <p>The property definition type (see <code>PropertyType</code>). You can only
     * specify one type in a property definition.</p>
     */
    inline const PropertyType& GetType() const{ return m_type; }

    /**
     * <p>The property definition type (see <code>PropertyType</code>). You can only
     * specify one type in a property definition.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The property definition type (see <code>PropertyType</code>). You can only
     * specify one type in a property definition.</p>
     */
    inline void SetType(const PropertyType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The property definition type (see <code>PropertyType</code>). You can only
     * specify one type in a property definition.</p>
     */
    inline void SetType(PropertyType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The property definition type (see <code>PropertyType</code>). You can only
     * specify one type in a property definition.</p>
     */
    inline AssetModelPropertyDefinition& WithType(const PropertyType& value) { SetType(value); return *this;}

    /**
     * <p>The property definition type (see <code>PropertyType</code>). You can only
     * specify one type in a property definition.</p>
     */
    inline AssetModelPropertyDefinition& WithType(PropertyType&& value) { SetType(std::move(value)); return *this;}

  private:

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

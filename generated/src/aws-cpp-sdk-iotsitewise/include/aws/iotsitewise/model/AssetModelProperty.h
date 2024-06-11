﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotsitewise/model/PropertyDataType.h>
#include <aws/iotsitewise/model/PropertyType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iotsitewise/model/AssetModelPropertyPathSegment.h>
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


    ///@{
    /**
     * <p>The ID of the asset model property.</p> <ul> <li> <p>If you are callling <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/APIReference/API_UpdateAssetModel.html">UpdateAssetModel</a>
     * to create a <i>new</i> property: You can specify its ID here, if desired. IoT
     * SiteWise automatically generates a unique ID for you, so this parameter is never
     * required. However, if you prefer to supply your own ID instead, you can specify
     * it here in UUID format. If you specify your own ID, it must be globally
     * unique.</p> </li> <li> <p>If you are calling UpdateAssetModel to modify an
     * <i>existing</i> property: This can be either the actual ID in UUID format, or
     * else <code>externalId:</code> followed by the external ID, if it has one. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/object-ids.html#external-id-references">Referencing
     * objects with external IDs</a> in the <i>IoT SiteWise User Guide</i>.</p> </li>
     * </ul>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline AssetModelProperty& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline AssetModelProperty& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline AssetModelProperty& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the asset model property.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline AssetModelProperty& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline AssetModelProperty& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline AssetModelProperty& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The data type of the asset model property.</p>
     */
    inline const PropertyDataType& GetDataType() const{ return m_dataType; }
    inline bool DataTypeHasBeenSet() const { return m_dataTypeHasBeenSet; }
    inline void SetDataType(const PropertyDataType& value) { m_dataTypeHasBeenSet = true; m_dataType = value; }
    inline void SetDataType(PropertyDataType&& value) { m_dataTypeHasBeenSet = true; m_dataType = std::move(value); }
    inline AssetModelProperty& WithDataType(const PropertyDataType& value) { SetDataType(value); return *this;}
    inline AssetModelProperty& WithDataType(PropertyDataType&& value) { SetDataType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The data type of the structure for this property. This parameter exists on
     * properties that have the <code>STRUCT</code> data type.</p>
     */
    inline const Aws::String& GetDataTypeSpec() const{ return m_dataTypeSpec; }
    inline bool DataTypeSpecHasBeenSet() const { return m_dataTypeSpecHasBeenSet; }
    inline void SetDataTypeSpec(const Aws::String& value) { m_dataTypeSpecHasBeenSet = true; m_dataTypeSpec = value; }
    inline void SetDataTypeSpec(Aws::String&& value) { m_dataTypeSpecHasBeenSet = true; m_dataTypeSpec = std::move(value); }
    inline void SetDataTypeSpec(const char* value) { m_dataTypeSpecHasBeenSet = true; m_dataTypeSpec.assign(value); }
    inline AssetModelProperty& WithDataTypeSpec(const Aws::String& value) { SetDataTypeSpec(value); return *this;}
    inline AssetModelProperty& WithDataTypeSpec(Aws::String&& value) { SetDataTypeSpec(std::move(value)); return *this;}
    inline AssetModelProperty& WithDataTypeSpec(const char* value) { SetDataTypeSpec(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unit of the asset model property, such as <code>Newtons</code> or
     * <code>RPM</code>.</p>
     */
    inline const Aws::String& GetUnit() const{ return m_unit; }
    inline bool UnitHasBeenSet() const { return m_unitHasBeenSet; }
    inline void SetUnit(const Aws::String& value) { m_unitHasBeenSet = true; m_unit = value; }
    inline void SetUnit(Aws::String&& value) { m_unitHasBeenSet = true; m_unit = std::move(value); }
    inline void SetUnit(const char* value) { m_unitHasBeenSet = true; m_unit.assign(value); }
    inline AssetModelProperty& WithUnit(const Aws::String& value) { SetUnit(value); return *this;}
    inline AssetModelProperty& WithUnit(Aws::String&& value) { SetUnit(std::move(value)); return *this;}
    inline AssetModelProperty& WithUnit(const char* value) { SetUnit(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The property type (see <code>PropertyType</code>).</p>
     */
    inline const PropertyType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const PropertyType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(PropertyType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline AssetModelProperty& WithType(const PropertyType& value) { SetType(value); return *this;}
    inline AssetModelProperty& WithType(PropertyType&& value) { SetType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The structured path to the property from the root of the asset model.</p>
     */
    inline const Aws::Vector<AssetModelPropertyPathSegment>& GetPath() const{ return m_path; }
    inline bool PathHasBeenSet() const { return m_pathHasBeenSet; }
    inline void SetPath(const Aws::Vector<AssetModelPropertyPathSegment>& value) { m_pathHasBeenSet = true; m_path = value; }
    inline void SetPath(Aws::Vector<AssetModelPropertyPathSegment>&& value) { m_pathHasBeenSet = true; m_path = std::move(value); }
    inline AssetModelProperty& WithPath(const Aws::Vector<AssetModelPropertyPathSegment>& value) { SetPath(value); return *this;}
    inline AssetModelProperty& WithPath(Aws::Vector<AssetModelPropertyPathSegment>&& value) { SetPath(std::move(value)); return *this;}
    inline AssetModelProperty& AddPath(const AssetModelPropertyPathSegment& value) { m_pathHasBeenSet = true; m_path.push_back(value); return *this; }
    inline AssetModelProperty& AddPath(AssetModelPropertyPathSegment&& value) { m_pathHasBeenSet = true; m_path.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The external ID (if any) provided in the <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/APIReference/API_CreateAssetModel.html">CreateAssetModel</a>
     * or <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/APIReference/API_UpdateAssetModel.html">UpdateAssetModel</a>
     * operation. You can assign an external ID by specifying this value as part of a
     * call to <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/APIReference/API_UpdateAssetModel.html">UpdateAssetModel</a>.
     * However, you can't change the external ID if one is already assigned. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/object-ids.html#external-ids">Using
     * external IDs</a> in the <i>IoT SiteWise User Guide</i>.</p>
     */
    inline const Aws::String& GetExternalId() const{ return m_externalId; }
    inline bool ExternalIdHasBeenSet() const { return m_externalIdHasBeenSet; }
    inline void SetExternalId(const Aws::String& value) { m_externalIdHasBeenSet = true; m_externalId = value; }
    inline void SetExternalId(Aws::String&& value) { m_externalIdHasBeenSet = true; m_externalId = std::move(value); }
    inline void SetExternalId(const char* value) { m_externalIdHasBeenSet = true; m_externalId.assign(value); }
    inline AssetModelProperty& WithExternalId(const Aws::String& value) { SetExternalId(value); return *this;}
    inline AssetModelProperty& WithExternalId(Aws::String&& value) { SetExternalId(std::move(value)); return *this;}
    inline AssetModelProperty& WithExternalId(const char* value) { SetExternalId(value); return *this;}
    ///@}
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

    Aws::Vector<AssetModelPropertyPathSegment> m_path;
    bool m_pathHasBeenSet = false;

    Aws::String m_externalId;
    bool m_externalIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws

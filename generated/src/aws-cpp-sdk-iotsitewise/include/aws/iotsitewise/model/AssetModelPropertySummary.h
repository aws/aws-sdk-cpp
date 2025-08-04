/**
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
#include <aws/iotsitewise/model/InterfaceSummary.h>
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
   * <p>Contains a summary of a property associated with a model. This includes
   * information about which interfaces the property belongs to, if
   * any.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/AssetModelPropertySummary">AWS
   * API Reference</a></p>
   */
  class AssetModelPropertySummary
  {
  public:
    AWS_IOTSITEWISE_API AssetModelPropertySummary() = default;
    AWS_IOTSITEWISE_API AssetModelPropertySummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTSITEWISE_API AssetModelPropertySummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTSITEWISE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the property.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    AssetModelPropertySummary& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The external ID of the property. For more information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/object-ids.html#external-ids">Using
     * external IDs</a> in the <i>IoT SiteWise User Guide</i>.</p>
     */
    inline const Aws::String& GetExternalId() const { return m_externalId; }
    inline bool ExternalIdHasBeenSet() const { return m_externalIdHasBeenSet; }
    template<typename ExternalIdT = Aws::String>
    void SetExternalId(ExternalIdT&& value) { m_externalIdHasBeenSet = true; m_externalId = std::forward<ExternalIdT>(value); }
    template<typename ExternalIdT = Aws::String>
    AssetModelPropertySummary& WithExternalId(ExternalIdT&& value) { SetExternalId(std::forward<ExternalIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the property.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    AssetModelPropertySummary& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The data type of the property.</p>
     */
    inline PropertyDataType GetDataType() const { return m_dataType; }
    inline bool DataTypeHasBeenSet() const { return m_dataTypeHasBeenSet; }
    inline void SetDataType(PropertyDataType value) { m_dataTypeHasBeenSet = true; m_dataType = value; }
    inline AssetModelPropertySummary& WithDataType(PropertyDataType value) { SetDataType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The data type of the structure for this property. This parameter exists on
     * properties that have the <code>STRUCT</code> data type.</p>
     */
    inline const Aws::String& GetDataTypeSpec() const { return m_dataTypeSpec; }
    inline bool DataTypeSpecHasBeenSet() const { return m_dataTypeSpecHasBeenSet; }
    template<typename DataTypeSpecT = Aws::String>
    void SetDataTypeSpec(DataTypeSpecT&& value) { m_dataTypeSpecHasBeenSet = true; m_dataTypeSpec = std::forward<DataTypeSpecT>(value); }
    template<typename DataTypeSpecT = Aws::String>
    AssetModelPropertySummary& WithDataTypeSpec(DataTypeSpecT&& value) { SetDataTypeSpec(std::forward<DataTypeSpecT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unit (such as <code>Newtons</code> or <code>RPM</code>) of the
     * property.</p>
     */
    inline const Aws::String& GetUnit() const { return m_unit; }
    inline bool UnitHasBeenSet() const { return m_unitHasBeenSet; }
    template<typename UnitT = Aws::String>
    void SetUnit(UnitT&& value) { m_unitHasBeenSet = true; m_unit = std::forward<UnitT>(value); }
    template<typename UnitT = Aws::String>
    AssetModelPropertySummary& WithUnit(UnitT&& value) { SetUnit(std::forward<UnitT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const PropertyType& GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    template<typename TypeT = PropertyType>
    void SetType(TypeT&& value) { m_typeHasBeenSet = true; m_type = std::forward<TypeT>(value); }
    template<typename TypeT = PropertyType>
    AssetModelPropertySummary& WithType(TypeT&& value) { SetType(std::forward<TypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The ID of the composite model that contains the asset model property. </p>
     */
    inline const Aws::String& GetAssetModelCompositeModelId() const { return m_assetModelCompositeModelId; }
    inline bool AssetModelCompositeModelIdHasBeenSet() const { return m_assetModelCompositeModelIdHasBeenSet; }
    template<typename AssetModelCompositeModelIdT = Aws::String>
    void SetAssetModelCompositeModelId(AssetModelCompositeModelIdT&& value) { m_assetModelCompositeModelIdHasBeenSet = true; m_assetModelCompositeModelId = std::forward<AssetModelCompositeModelIdT>(value); }
    template<typename AssetModelCompositeModelIdT = Aws::String>
    AssetModelPropertySummary& WithAssetModelCompositeModelId(AssetModelCompositeModelIdT&& value) { SetAssetModelCompositeModelId(std::forward<AssetModelCompositeModelIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The structured path to the property from the root of the asset model.</p>
     */
    inline const Aws::Vector<AssetModelPropertyPathSegment>& GetPath() const { return m_path; }
    inline bool PathHasBeenSet() const { return m_pathHasBeenSet; }
    template<typename PathT = Aws::Vector<AssetModelPropertyPathSegment>>
    void SetPath(PathT&& value) { m_pathHasBeenSet = true; m_path = std::forward<PathT>(value); }
    template<typename PathT = Aws::Vector<AssetModelPropertyPathSegment>>
    AssetModelPropertySummary& WithPath(PathT&& value) { SetPath(std::forward<PathT>(value)); return *this;}
    template<typename PathT = AssetModelPropertyPathSegment>
    AssetModelPropertySummary& AddPath(PathT&& value) { m_pathHasBeenSet = true; m_path.emplace_back(std::forward<PathT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of interface summaries that describe which interfaces this property
     * belongs to, including the interface asset model ID and the corresponding
     * property ID in the interface.</p>
     */
    inline const Aws::Vector<InterfaceSummary>& GetInterfaceSummaries() const { return m_interfaceSummaries; }
    inline bool InterfaceSummariesHasBeenSet() const { return m_interfaceSummariesHasBeenSet; }
    template<typename InterfaceSummariesT = Aws::Vector<InterfaceSummary>>
    void SetInterfaceSummaries(InterfaceSummariesT&& value) { m_interfaceSummariesHasBeenSet = true; m_interfaceSummaries = std::forward<InterfaceSummariesT>(value); }
    template<typename InterfaceSummariesT = Aws::Vector<InterfaceSummary>>
    AssetModelPropertySummary& WithInterfaceSummaries(InterfaceSummariesT&& value) { SetInterfaceSummaries(std::forward<InterfaceSummariesT>(value)); return *this;}
    template<typename InterfaceSummariesT = InterfaceSummary>
    AssetModelPropertySummary& AddInterfaceSummaries(InterfaceSummariesT&& value) { m_interfaceSummariesHasBeenSet = true; m_interfaceSummaries.emplace_back(std::forward<InterfaceSummariesT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_externalId;
    bool m_externalIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    PropertyDataType m_dataType{PropertyDataType::NOT_SET};
    bool m_dataTypeHasBeenSet = false;

    Aws::String m_dataTypeSpec;
    bool m_dataTypeSpecHasBeenSet = false;

    Aws::String m_unit;
    bool m_unitHasBeenSet = false;

    PropertyType m_type;
    bool m_typeHasBeenSet = false;

    Aws::String m_assetModelCompositeModelId;
    bool m_assetModelCompositeModelIdHasBeenSet = false;

    Aws::Vector<AssetModelPropertyPathSegment> m_path;
    bool m_pathHasBeenSet = false;

    Aws::Vector<InterfaceSummary> m_interfaceSummaries;
    bool m_interfaceSummariesHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws

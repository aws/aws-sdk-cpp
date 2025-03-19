/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Identifies a property value used in an expression.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/VariableValue">AWS
   * API Reference</a></p>
   */
  class VariableValue
  {
  public:
    AWS_IOTSITEWISE_API VariableValue() = default;
    AWS_IOTSITEWISE_API VariableValue(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTSITEWISE_API VariableValue& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTSITEWISE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the property to use as the variable. You can use the property
     * <code>name</code> if it's from the same asset model. If the property has an
     * external ID, you can specify <code>externalId:</code> followed by the external
     * ID. For more information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/object-ids.html#external-ids">Using
     * external IDs</a> in the <i>IoT SiteWise User Guide</i>.</p>
     */
    inline const Aws::String& GetPropertyId() const { return m_propertyId; }
    inline bool PropertyIdHasBeenSet() const { return m_propertyIdHasBeenSet; }
    template<typename PropertyIdT = Aws::String>
    void SetPropertyId(PropertyIdT&& value) { m_propertyIdHasBeenSet = true; m_propertyId = std::forward<PropertyIdT>(value); }
    template<typename PropertyIdT = Aws::String>
    VariableValue& WithPropertyId(PropertyIdT&& value) { SetPropertyId(std::forward<PropertyIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the hierarchy to query for the property ID. You can use the
     * hierarchy's name instead of the hierarchy's ID. If the hierarchy has an external
     * ID, you can specify <code>externalId:</code> followed by the external ID. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/object-ids.html#external-ids">Using
     * external IDs</a> in the <i>IoT SiteWise User Guide</i>.</p> <p>You use a
     * hierarchy ID instead of a model ID because you can have several hierarchies
     * using the same model and therefore the same <code>propertyId</code>. For
     * example, you might have separately grouped assets that come from the same asset
     * model. For more information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/asset-hierarchies.html">Asset
     * hierarchies</a> in the <i>IoT SiteWise User Guide</i>.</p>
     */
    inline const Aws::String& GetHierarchyId() const { return m_hierarchyId; }
    inline bool HierarchyIdHasBeenSet() const { return m_hierarchyIdHasBeenSet; }
    template<typename HierarchyIdT = Aws::String>
    void SetHierarchyId(HierarchyIdT&& value) { m_hierarchyIdHasBeenSet = true; m_hierarchyId = std::forward<HierarchyIdT>(value); }
    template<typename HierarchyIdT = Aws::String>
    VariableValue& WithHierarchyId(HierarchyIdT&& value) { SetHierarchyId(std::forward<HierarchyIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The path of the property.</p>
     */
    inline const Aws::Vector<AssetModelPropertyPathSegment>& GetPropertyPath() const { return m_propertyPath; }
    inline bool PropertyPathHasBeenSet() const { return m_propertyPathHasBeenSet; }
    template<typename PropertyPathT = Aws::Vector<AssetModelPropertyPathSegment>>
    void SetPropertyPath(PropertyPathT&& value) { m_propertyPathHasBeenSet = true; m_propertyPath = std::forward<PropertyPathT>(value); }
    template<typename PropertyPathT = Aws::Vector<AssetModelPropertyPathSegment>>
    VariableValue& WithPropertyPath(PropertyPathT&& value) { SetPropertyPath(std::forward<PropertyPathT>(value)); return *this;}
    template<typename PropertyPathT = AssetModelPropertyPathSegment>
    VariableValue& AddPropertyPath(PropertyPathT&& value) { m_propertyPathHasBeenSet = true; m_propertyPath.emplace_back(std::forward<PropertyPathT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_propertyId;
    bool m_propertyIdHasBeenSet = false;

    Aws::String m_hierarchyId;
    bool m_hierarchyIdHasBeenSet = false;

    Aws::Vector<AssetModelPropertyPathSegment> m_propertyPath;
    bool m_propertyPathHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws

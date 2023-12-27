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
    AWS_IOTSITEWISE_API VariableValue();
    AWS_IOTSITEWISE_API VariableValue(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTSITEWISE_API VariableValue& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTSITEWISE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID of the property to use as the variable. You can use the property
     * <code>name</code> if it's from the same asset model. If the property has an
     * external ID, you can specify <code>externalId:</code> followed by the external
     * ID. For more information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/object-ids.html#external-ids">Using
     * external IDs</a> in the <i>IoT SiteWise User Guide</i>.</p>
     */
    inline const Aws::String& GetPropertyId() const{ return m_propertyId; }

    /**
     * <p>The ID of the property to use as the variable. You can use the property
     * <code>name</code> if it's from the same asset model. If the property has an
     * external ID, you can specify <code>externalId:</code> followed by the external
     * ID. For more information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/object-ids.html#external-ids">Using
     * external IDs</a> in the <i>IoT SiteWise User Guide</i>.</p>
     */
    inline bool PropertyIdHasBeenSet() const { return m_propertyIdHasBeenSet; }

    /**
     * <p>The ID of the property to use as the variable. You can use the property
     * <code>name</code> if it's from the same asset model. If the property has an
     * external ID, you can specify <code>externalId:</code> followed by the external
     * ID. For more information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/object-ids.html#external-ids">Using
     * external IDs</a> in the <i>IoT SiteWise User Guide</i>.</p>
     */
    inline void SetPropertyId(const Aws::String& value) { m_propertyIdHasBeenSet = true; m_propertyId = value; }

    /**
     * <p>The ID of the property to use as the variable. You can use the property
     * <code>name</code> if it's from the same asset model. If the property has an
     * external ID, you can specify <code>externalId:</code> followed by the external
     * ID. For more information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/object-ids.html#external-ids">Using
     * external IDs</a> in the <i>IoT SiteWise User Guide</i>.</p>
     */
    inline void SetPropertyId(Aws::String&& value) { m_propertyIdHasBeenSet = true; m_propertyId = std::move(value); }

    /**
     * <p>The ID of the property to use as the variable. You can use the property
     * <code>name</code> if it's from the same asset model. If the property has an
     * external ID, you can specify <code>externalId:</code> followed by the external
     * ID. For more information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/object-ids.html#external-ids">Using
     * external IDs</a> in the <i>IoT SiteWise User Guide</i>.</p>
     */
    inline void SetPropertyId(const char* value) { m_propertyIdHasBeenSet = true; m_propertyId.assign(value); }

    /**
     * <p>The ID of the property to use as the variable. You can use the property
     * <code>name</code> if it's from the same asset model. If the property has an
     * external ID, you can specify <code>externalId:</code> followed by the external
     * ID. For more information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/object-ids.html#external-ids">Using
     * external IDs</a> in the <i>IoT SiteWise User Guide</i>.</p>
     */
    inline VariableValue& WithPropertyId(const Aws::String& value) { SetPropertyId(value); return *this;}

    /**
     * <p>The ID of the property to use as the variable. You can use the property
     * <code>name</code> if it's from the same asset model. If the property has an
     * external ID, you can specify <code>externalId:</code> followed by the external
     * ID. For more information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/object-ids.html#external-ids">Using
     * external IDs</a> in the <i>IoT SiteWise User Guide</i>.</p>
     */
    inline VariableValue& WithPropertyId(Aws::String&& value) { SetPropertyId(std::move(value)); return *this;}

    /**
     * <p>The ID of the property to use as the variable. You can use the property
     * <code>name</code> if it's from the same asset model. If the property has an
     * external ID, you can specify <code>externalId:</code> followed by the external
     * ID. For more information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/object-ids.html#external-ids">Using
     * external IDs</a> in the <i>IoT SiteWise User Guide</i>.</p>
     */
    inline VariableValue& WithPropertyId(const char* value) { SetPropertyId(value); return *this;}


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
    inline const Aws::String& GetHierarchyId() const{ return m_hierarchyId; }

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
    inline bool HierarchyIdHasBeenSet() const { return m_hierarchyIdHasBeenSet; }

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
    inline void SetHierarchyId(const Aws::String& value) { m_hierarchyIdHasBeenSet = true; m_hierarchyId = value; }

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
    inline void SetHierarchyId(Aws::String&& value) { m_hierarchyIdHasBeenSet = true; m_hierarchyId = std::move(value); }

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
    inline void SetHierarchyId(const char* value) { m_hierarchyIdHasBeenSet = true; m_hierarchyId.assign(value); }

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
    inline VariableValue& WithHierarchyId(const Aws::String& value) { SetHierarchyId(value); return *this;}

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
    inline VariableValue& WithHierarchyId(Aws::String&& value) { SetHierarchyId(std::move(value)); return *this;}

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
    inline VariableValue& WithHierarchyId(const char* value) { SetHierarchyId(value); return *this;}


    /**
     * <p>The path of the property.</p>
     */
    inline const Aws::Vector<AssetModelPropertyPathSegment>& GetPropertyPath() const{ return m_propertyPath; }

    /**
     * <p>The path of the property.</p>
     */
    inline bool PropertyPathHasBeenSet() const { return m_propertyPathHasBeenSet; }

    /**
     * <p>The path of the property.</p>
     */
    inline void SetPropertyPath(const Aws::Vector<AssetModelPropertyPathSegment>& value) { m_propertyPathHasBeenSet = true; m_propertyPath = value; }

    /**
     * <p>The path of the property.</p>
     */
    inline void SetPropertyPath(Aws::Vector<AssetModelPropertyPathSegment>&& value) { m_propertyPathHasBeenSet = true; m_propertyPath = std::move(value); }

    /**
     * <p>The path of the property.</p>
     */
    inline VariableValue& WithPropertyPath(const Aws::Vector<AssetModelPropertyPathSegment>& value) { SetPropertyPath(value); return *this;}

    /**
     * <p>The path of the property.</p>
     */
    inline VariableValue& WithPropertyPath(Aws::Vector<AssetModelPropertyPathSegment>&& value) { SetPropertyPath(std::move(value)); return *this;}

    /**
     * <p>The path of the property.</p>
     */
    inline VariableValue& AddPropertyPath(const AssetModelPropertyPathSegment& value) { m_propertyPathHasBeenSet = true; m_propertyPath.push_back(value); return *this; }

    /**
     * <p>The path of the property.</p>
     */
    inline VariableValue& AddPropertyPath(AssetModelPropertyPathSegment&& value) { m_propertyPathHasBeenSet = true; m_propertyPath.push_back(std::move(value)); return *this; }

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

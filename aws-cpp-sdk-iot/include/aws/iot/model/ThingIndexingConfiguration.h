/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/iot/model/ThingIndexingMode.h>
#include <aws/iot/model/ThingConnectivityIndexingMode.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iot/model/Field.h>
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
   * <p>The thing indexing configuration. For more information, see <a
   * href="https://docs.aws.amazon.com/iot/latest/developerguide/managing-index.html">Managing
   * Thing Indexing</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/ThingIndexingConfiguration">AWS
   * API Reference</a></p>
   */
  class AWS_IOT_API ThingIndexingConfiguration
  {
  public:
    ThingIndexingConfiguration();
    ThingIndexingConfiguration(Aws::Utils::Json::JsonView jsonValue);
    ThingIndexingConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Thing indexing mode. Valid values are:</p> <ul> <li> <p>REGISTRY – Your thing
     * index contains registry data only.</p> </li> <li> <p>REGISTRY_AND_SHADOW - Your
     * thing index contains registry and shadow data.</p> </li> <li> <p>OFF - Thing
     * indexing is disabled.</p> </li> </ul>
     */
    inline const ThingIndexingMode& GetThingIndexingMode() const{ return m_thingIndexingMode; }

    /**
     * <p>Thing indexing mode. Valid values are:</p> <ul> <li> <p>REGISTRY – Your thing
     * index contains registry data only.</p> </li> <li> <p>REGISTRY_AND_SHADOW - Your
     * thing index contains registry and shadow data.</p> </li> <li> <p>OFF - Thing
     * indexing is disabled.</p> </li> </ul>
     */
    inline bool ThingIndexingModeHasBeenSet() const { return m_thingIndexingModeHasBeenSet; }

    /**
     * <p>Thing indexing mode. Valid values are:</p> <ul> <li> <p>REGISTRY – Your thing
     * index contains registry data only.</p> </li> <li> <p>REGISTRY_AND_SHADOW - Your
     * thing index contains registry and shadow data.</p> </li> <li> <p>OFF - Thing
     * indexing is disabled.</p> </li> </ul>
     */
    inline void SetThingIndexingMode(const ThingIndexingMode& value) { m_thingIndexingModeHasBeenSet = true; m_thingIndexingMode = value; }

    /**
     * <p>Thing indexing mode. Valid values are:</p> <ul> <li> <p>REGISTRY – Your thing
     * index contains registry data only.</p> </li> <li> <p>REGISTRY_AND_SHADOW - Your
     * thing index contains registry and shadow data.</p> </li> <li> <p>OFF - Thing
     * indexing is disabled.</p> </li> </ul>
     */
    inline void SetThingIndexingMode(ThingIndexingMode&& value) { m_thingIndexingModeHasBeenSet = true; m_thingIndexingMode = std::move(value); }

    /**
     * <p>Thing indexing mode. Valid values are:</p> <ul> <li> <p>REGISTRY – Your thing
     * index contains registry data only.</p> </li> <li> <p>REGISTRY_AND_SHADOW - Your
     * thing index contains registry and shadow data.</p> </li> <li> <p>OFF - Thing
     * indexing is disabled.</p> </li> </ul>
     */
    inline ThingIndexingConfiguration& WithThingIndexingMode(const ThingIndexingMode& value) { SetThingIndexingMode(value); return *this;}

    /**
     * <p>Thing indexing mode. Valid values are:</p> <ul> <li> <p>REGISTRY – Your thing
     * index contains registry data only.</p> </li> <li> <p>REGISTRY_AND_SHADOW - Your
     * thing index contains registry and shadow data.</p> </li> <li> <p>OFF - Thing
     * indexing is disabled.</p> </li> </ul>
     */
    inline ThingIndexingConfiguration& WithThingIndexingMode(ThingIndexingMode&& value) { SetThingIndexingMode(std::move(value)); return *this;}


    /**
     * <p>Thing connectivity indexing mode. Valid values are: </p> <ul> <li> <p>STATUS
     * – Your thing index contains connectivity status. To enable thing connectivity
     * indexing, thingIndexMode must not be set to OFF.</p> </li> <li> <p>OFF - Thing
     * connectivity status indexing is disabled.</p> </li> </ul>
     */
    inline const ThingConnectivityIndexingMode& GetThingConnectivityIndexingMode() const{ return m_thingConnectivityIndexingMode; }

    /**
     * <p>Thing connectivity indexing mode. Valid values are: </p> <ul> <li> <p>STATUS
     * – Your thing index contains connectivity status. To enable thing connectivity
     * indexing, thingIndexMode must not be set to OFF.</p> </li> <li> <p>OFF - Thing
     * connectivity status indexing is disabled.</p> </li> </ul>
     */
    inline bool ThingConnectivityIndexingModeHasBeenSet() const { return m_thingConnectivityIndexingModeHasBeenSet; }

    /**
     * <p>Thing connectivity indexing mode. Valid values are: </p> <ul> <li> <p>STATUS
     * – Your thing index contains connectivity status. To enable thing connectivity
     * indexing, thingIndexMode must not be set to OFF.</p> </li> <li> <p>OFF - Thing
     * connectivity status indexing is disabled.</p> </li> </ul>
     */
    inline void SetThingConnectivityIndexingMode(const ThingConnectivityIndexingMode& value) { m_thingConnectivityIndexingModeHasBeenSet = true; m_thingConnectivityIndexingMode = value; }

    /**
     * <p>Thing connectivity indexing mode. Valid values are: </p> <ul> <li> <p>STATUS
     * – Your thing index contains connectivity status. To enable thing connectivity
     * indexing, thingIndexMode must not be set to OFF.</p> </li> <li> <p>OFF - Thing
     * connectivity status indexing is disabled.</p> </li> </ul>
     */
    inline void SetThingConnectivityIndexingMode(ThingConnectivityIndexingMode&& value) { m_thingConnectivityIndexingModeHasBeenSet = true; m_thingConnectivityIndexingMode = std::move(value); }

    /**
     * <p>Thing connectivity indexing mode. Valid values are: </p> <ul> <li> <p>STATUS
     * – Your thing index contains connectivity status. To enable thing connectivity
     * indexing, thingIndexMode must not be set to OFF.</p> </li> <li> <p>OFF - Thing
     * connectivity status indexing is disabled.</p> </li> </ul>
     */
    inline ThingIndexingConfiguration& WithThingConnectivityIndexingMode(const ThingConnectivityIndexingMode& value) { SetThingConnectivityIndexingMode(value); return *this;}

    /**
     * <p>Thing connectivity indexing mode. Valid values are: </p> <ul> <li> <p>STATUS
     * – Your thing index contains connectivity status. To enable thing connectivity
     * indexing, thingIndexMode must not be set to OFF.</p> </li> <li> <p>OFF - Thing
     * connectivity status indexing is disabled.</p> </li> </ul>
     */
    inline ThingIndexingConfiguration& WithThingConnectivityIndexingMode(ThingConnectivityIndexingMode&& value) { SetThingConnectivityIndexingMode(std::move(value)); return *this;}


    /**
     * <p>Contains fields that are indexed and whose types are already known by the
     * Fleet Indexing service.</p>
     */
    inline const Aws::Vector<Field>& GetManagedFields() const{ return m_managedFields; }

    /**
     * <p>Contains fields that are indexed and whose types are already known by the
     * Fleet Indexing service.</p>
     */
    inline bool ManagedFieldsHasBeenSet() const { return m_managedFieldsHasBeenSet; }

    /**
     * <p>Contains fields that are indexed and whose types are already known by the
     * Fleet Indexing service.</p>
     */
    inline void SetManagedFields(const Aws::Vector<Field>& value) { m_managedFieldsHasBeenSet = true; m_managedFields = value; }

    /**
     * <p>Contains fields that are indexed and whose types are already known by the
     * Fleet Indexing service.</p>
     */
    inline void SetManagedFields(Aws::Vector<Field>&& value) { m_managedFieldsHasBeenSet = true; m_managedFields = std::move(value); }

    /**
     * <p>Contains fields that are indexed and whose types are already known by the
     * Fleet Indexing service.</p>
     */
    inline ThingIndexingConfiguration& WithManagedFields(const Aws::Vector<Field>& value) { SetManagedFields(value); return *this;}

    /**
     * <p>Contains fields that are indexed and whose types are already known by the
     * Fleet Indexing service.</p>
     */
    inline ThingIndexingConfiguration& WithManagedFields(Aws::Vector<Field>&& value) { SetManagedFields(std::move(value)); return *this;}

    /**
     * <p>Contains fields that are indexed and whose types are already known by the
     * Fleet Indexing service.</p>
     */
    inline ThingIndexingConfiguration& AddManagedFields(const Field& value) { m_managedFieldsHasBeenSet = true; m_managedFields.push_back(value); return *this; }

    /**
     * <p>Contains fields that are indexed and whose types are already known by the
     * Fleet Indexing service.</p>
     */
    inline ThingIndexingConfiguration& AddManagedFields(Field&& value) { m_managedFieldsHasBeenSet = true; m_managedFields.push_back(std::move(value)); return *this; }


    /**
     * <p>Contains custom field names and their data type.</p>
     */
    inline const Aws::Vector<Field>& GetCustomFields() const{ return m_customFields; }

    /**
     * <p>Contains custom field names and their data type.</p>
     */
    inline bool CustomFieldsHasBeenSet() const { return m_customFieldsHasBeenSet; }

    /**
     * <p>Contains custom field names and their data type.</p>
     */
    inline void SetCustomFields(const Aws::Vector<Field>& value) { m_customFieldsHasBeenSet = true; m_customFields = value; }

    /**
     * <p>Contains custom field names and their data type.</p>
     */
    inline void SetCustomFields(Aws::Vector<Field>&& value) { m_customFieldsHasBeenSet = true; m_customFields = std::move(value); }

    /**
     * <p>Contains custom field names and their data type.</p>
     */
    inline ThingIndexingConfiguration& WithCustomFields(const Aws::Vector<Field>& value) { SetCustomFields(value); return *this;}

    /**
     * <p>Contains custom field names and their data type.</p>
     */
    inline ThingIndexingConfiguration& WithCustomFields(Aws::Vector<Field>&& value) { SetCustomFields(std::move(value)); return *this;}

    /**
     * <p>Contains custom field names and their data type.</p>
     */
    inline ThingIndexingConfiguration& AddCustomFields(const Field& value) { m_customFieldsHasBeenSet = true; m_customFields.push_back(value); return *this; }

    /**
     * <p>Contains custom field names and their data type.</p>
     */
    inline ThingIndexingConfiguration& AddCustomFields(Field&& value) { m_customFieldsHasBeenSet = true; m_customFields.push_back(std::move(value)); return *this; }

  private:

    ThingIndexingMode m_thingIndexingMode;
    bool m_thingIndexingModeHasBeenSet;

    ThingConnectivityIndexingMode m_thingConnectivityIndexingMode;
    bool m_thingConnectivityIndexingModeHasBeenSet;

    Aws::Vector<Field> m_managedFields;
    bool m_managedFieldsHasBeenSet;

    Aws::Vector<Field> m_customFields;
    bool m_customFieldsHasBeenSet;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/iot/model/ThingGroupIndexingMode.h>
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
   * <p>Thing group indexing configuration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/ThingGroupIndexingConfiguration">AWS
   * API Reference</a></p>
   */
  class ThingGroupIndexingConfiguration
  {
  public:
    AWS_IOT_API ThingGroupIndexingConfiguration();
    AWS_IOT_API ThingGroupIndexingConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API ThingGroupIndexingConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Thing group indexing mode.</p>
     */
    inline const ThingGroupIndexingMode& GetThingGroupIndexingMode() const{ return m_thingGroupIndexingMode; }

    /**
     * <p>Thing group indexing mode.</p>
     */
    inline bool ThingGroupIndexingModeHasBeenSet() const { return m_thingGroupIndexingModeHasBeenSet; }

    /**
     * <p>Thing group indexing mode.</p>
     */
    inline void SetThingGroupIndexingMode(const ThingGroupIndexingMode& value) { m_thingGroupIndexingModeHasBeenSet = true; m_thingGroupIndexingMode = value; }

    /**
     * <p>Thing group indexing mode.</p>
     */
    inline void SetThingGroupIndexingMode(ThingGroupIndexingMode&& value) { m_thingGroupIndexingModeHasBeenSet = true; m_thingGroupIndexingMode = std::move(value); }

    /**
     * <p>Thing group indexing mode.</p>
     */
    inline ThingGroupIndexingConfiguration& WithThingGroupIndexingMode(const ThingGroupIndexingMode& value) { SetThingGroupIndexingMode(value); return *this;}

    /**
     * <p>Thing group indexing mode.</p>
     */
    inline ThingGroupIndexingConfiguration& WithThingGroupIndexingMode(ThingGroupIndexingMode&& value) { SetThingGroupIndexingMode(std::move(value)); return *this;}


    /**
     * <p>Contains fields that are indexed and whose types are already known by the
     * Fleet Indexing service. This is an optional field. For more information, see <a
     * href="https://docs.aws.amazon.com/iot/latest/developerguide/managing-fleet-index.html#managed-field">Managed
     * fields</a> in the <i>Amazon Web Services IoT Core Developer Guide</i>.</p>
     */
    inline const Aws::Vector<Field>& GetManagedFields() const{ return m_managedFields; }

    /**
     * <p>Contains fields that are indexed and whose types are already known by the
     * Fleet Indexing service. This is an optional field. For more information, see <a
     * href="https://docs.aws.amazon.com/iot/latest/developerguide/managing-fleet-index.html#managed-field">Managed
     * fields</a> in the <i>Amazon Web Services IoT Core Developer Guide</i>.</p>
     */
    inline bool ManagedFieldsHasBeenSet() const { return m_managedFieldsHasBeenSet; }

    /**
     * <p>Contains fields that are indexed and whose types are already known by the
     * Fleet Indexing service. This is an optional field. For more information, see <a
     * href="https://docs.aws.amazon.com/iot/latest/developerguide/managing-fleet-index.html#managed-field">Managed
     * fields</a> in the <i>Amazon Web Services IoT Core Developer Guide</i>.</p>
     */
    inline void SetManagedFields(const Aws::Vector<Field>& value) { m_managedFieldsHasBeenSet = true; m_managedFields = value; }

    /**
     * <p>Contains fields that are indexed and whose types are already known by the
     * Fleet Indexing service. This is an optional field. For more information, see <a
     * href="https://docs.aws.amazon.com/iot/latest/developerguide/managing-fleet-index.html#managed-field">Managed
     * fields</a> in the <i>Amazon Web Services IoT Core Developer Guide</i>.</p>
     */
    inline void SetManagedFields(Aws::Vector<Field>&& value) { m_managedFieldsHasBeenSet = true; m_managedFields = std::move(value); }

    /**
     * <p>Contains fields that are indexed and whose types are already known by the
     * Fleet Indexing service. This is an optional field. For more information, see <a
     * href="https://docs.aws.amazon.com/iot/latest/developerguide/managing-fleet-index.html#managed-field">Managed
     * fields</a> in the <i>Amazon Web Services IoT Core Developer Guide</i>.</p>
     */
    inline ThingGroupIndexingConfiguration& WithManagedFields(const Aws::Vector<Field>& value) { SetManagedFields(value); return *this;}

    /**
     * <p>Contains fields that are indexed and whose types are already known by the
     * Fleet Indexing service. This is an optional field. For more information, see <a
     * href="https://docs.aws.amazon.com/iot/latest/developerguide/managing-fleet-index.html#managed-field">Managed
     * fields</a> in the <i>Amazon Web Services IoT Core Developer Guide</i>.</p>
     */
    inline ThingGroupIndexingConfiguration& WithManagedFields(Aws::Vector<Field>&& value) { SetManagedFields(std::move(value)); return *this;}

    /**
     * <p>Contains fields that are indexed and whose types are already known by the
     * Fleet Indexing service. This is an optional field. For more information, see <a
     * href="https://docs.aws.amazon.com/iot/latest/developerguide/managing-fleet-index.html#managed-field">Managed
     * fields</a> in the <i>Amazon Web Services IoT Core Developer Guide</i>.</p>
     */
    inline ThingGroupIndexingConfiguration& AddManagedFields(const Field& value) { m_managedFieldsHasBeenSet = true; m_managedFields.push_back(value); return *this; }

    /**
     * <p>Contains fields that are indexed and whose types are already known by the
     * Fleet Indexing service. This is an optional field. For more information, see <a
     * href="https://docs.aws.amazon.com/iot/latest/developerguide/managing-fleet-index.html#managed-field">Managed
     * fields</a> in the <i>Amazon Web Services IoT Core Developer Guide</i>.</p>
     */
    inline ThingGroupIndexingConfiguration& AddManagedFields(Field&& value) { m_managedFieldsHasBeenSet = true; m_managedFields.push_back(std::move(value)); return *this; }


    /**
     * <p>A list of thing group fields to index. This list cannot contain any managed
     * fields. Use the GetIndexingConfiguration API to get a list of managed
     * fields.</p> <p>Contains custom field names and their data type.</p>
     */
    inline const Aws::Vector<Field>& GetCustomFields() const{ return m_customFields; }

    /**
     * <p>A list of thing group fields to index. This list cannot contain any managed
     * fields. Use the GetIndexingConfiguration API to get a list of managed
     * fields.</p> <p>Contains custom field names and their data type.</p>
     */
    inline bool CustomFieldsHasBeenSet() const { return m_customFieldsHasBeenSet; }

    /**
     * <p>A list of thing group fields to index. This list cannot contain any managed
     * fields. Use the GetIndexingConfiguration API to get a list of managed
     * fields.</p> <p>Contains custom field names and their data type.</p>
     */
    inline void SetCustomFields(const Aws::Vector<Field>& value) { m_customFieldsHasBeenSet = true; m_customFields = value; }

    /**
     * <p>A list of thing group fields to index. This list cannot contain any managed
     * fields. Use the GetIndexingConfiguration API to get a list of managed
     * fields.</p> <p>Contains custom field names and their data type.</p>
     */
    inline void SetCustomFields(Aws::Vector<Field>&& value) { m_customFieldsHasBeenSet = true; m_customFields = std::move(value); }

    /**
     * <p>A list of thing group fields to index. This list cannot contain any managed
     * fields. Use the GetIndexingConfiguration API to get a list of managed
     * fields.</p> <p>Contains custom field names and their data type.</p>
     */
    inline ThingGroupIndexingConfiguration& WithCustomFields(const Aws::Vector<Field>& value) { SetCustomFields(value); return *this;}

    /**
     * <p>A list of thing group fields to index. This list cannot contain any managed
     * fields. Use the GetIndexingConfiguration API to get a list of managed
     * fields.</p> <p>Contains custom field names and their data type.</p>
     */
    inline ThingGroupIndexingConfiguration& WithCustomFields(Aws::Vector<Field>&& value) { SetCustomFields(std::move(value)); return *this;}

    /**
     * <p>A list of thing group fields to index. This list cannot contain any managed
     * fields. Use the GetIndexingConfiguration API to get a list of managed
     * fields.</p> <p>Contains custom field names and their data type.</p>
     */
    inline ThingGroupIndexingConfiguration& AddCustomFields(const Field& value) { m_customFieldsHasBeenSet = true; m_customFields.push_back(value); return *this; }

    /**
     * <p>A list of thing group fields to index. This list cannot contain any managed
     * fields. Use the GetIndexingConfiguration API to get a list of managed
     * fields.</p> <p>Contains custom field names and their data type.</p>
     */
    inline ThingGroupIndexingConfiguration& AddCustomFields(Field&& value) { m_customFieldsHasBeenSet = true; m_customFields.push_back(std::move(value)); return *this; }

  private:

    ThingGroupIndexingMode m_thingGroupIndexingMode;
    bool m_thingGroupIndexingModeHasBeenSet = false;

    Aws::Vector<Field> m_managedFields;
    bool m_managedFieldsHasBeenSet = false;

    Aws::Vector<Field> m_customFields;
    bool m_customFieldsHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws

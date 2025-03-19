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
    AWS_IOT_API ThingGroupIndexingConfiguration() = default;
    AWS_IOT_API ThingGroupIndexingConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API ThingGroupIndexingConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Thing group indexing mode.</p>
     */
    inline ThingGroupIndexingMode GetThingGroupIndexingMode() const { return m_thingGroupIndexingMode; }
    inline bool ThingGroupIndexingModeHasBeenSet() const { return m_thingGroupIndexingModeHasBeenSet; }
    inline void SetThingGroupIndexingMode(ThingGroupIndexingMode value) { m_thingGroupIndexingModeHasBeenSet = true; m_thingGroupIndexingMode = value; }
    inline ThingGroupIndexingConfiguration& WithThingGroupIndexingMode(ThingGroupIndexingMode value) { SetThingGroupIndexingMode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains fields that are indexed and whose types are already known by the
     * Fleet Indexing service. This is an optional field. For more information, see <a
     * href="https://docs.aws.amazon.com/iot/latest/developerguide/managing-fleet-index.html#managed-field">Managed
     * fields</a> in the <i>Amazon Web Services IoT Core Developer Guide</i>.</p>
     *  <p>You can't modify managed fields by updating fleet indexing
     * configuration.</p> 
     */
    inline const Aws::Vector<Field>& GetManagedFields() const { return m_managedFields; }
    inline bool ManagedFieldsHasBeenSet() const { return m_managedFieldsHasBeenSet; }
    template<typename ManagedFieldsT = Aws::Vector<Field>>
    void SetManagedFields(ManagedFieldsT&& value) { m_managedFieldsHasBeenSet = true; m_managedFields = std::forward<ManagedFieldsT>(value); }
    template<typename ManagedFieldsT = Aws::Vector<Field>>
    ThingGroupIndexingConfiguration& WithManagedFields(ManagedFieldsT&& value) { SetManagedFields(std::forward<ManagedFieldsT>(value)); return *this;}
    template<typename ManagedFieldsT = Field>
    ThingGroupIndexingConfiguration& AddManagedFields(ManagedFieldsT&& value) { m_managedFieldsHasBeenSet = true; m_managedFields.emplace_back(std::forward<ManagedFieldsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of thing group fields to index. This list cannot contain any managed
     * fields. Use the GetIndexingConfiguration API to get a list of managed
     * fields.</p> <p>Contains custom field names and their data type.</p>
     */
    inline const Aws::Vector<Field>& GetCustomFields() const { return m_customFields; }
    inline bool CustomFieldsHasBeenSet() const { return m_customFieldsHasBeenSet; }
    template<typename CustomFieldsT = Aws::Vector<Field>>
    void SetCustomFields(CustomFieldsT&& value) { m_customFieldsHasBeenSet = true; m_customFields = std::forward<CustomFieldsT>(value); }
    template<typename CustomFieldsT = Aws::Vector<Field>>
    ThingGroupIndexingConfiguration& WithCustomFields(CustomFieldsT&& value) { SetCustomFields(std::forward<CustomFieldsT>(value)); return *this;}
    template<typename CustomFieldsT = Field>
    ThingGroupIndexingConfiguration& AddCustomFields(CustomFieldsT&& value) { m_customFieldsHasBeenSet = true; m_customFields.emplace_back(std::forward<CustomFieldsT>(value)); return *this; }
    ///@}
  private:

    ThingGroupIndexingMode m_thingGroupIndexingMode{ThingGroupIndexingMode::NOT_SET};
    bool m_thingGroupIndexingModeHasBeenSet = false;

    Aws::Vector<Field> m_managedFields;
    bool m_managedFieldsHasBeenSet = false;

    Aws::Vector<Field> m_customFields;
    bool m_customFieldsHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws

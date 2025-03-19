/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iottwinmaker/IoTTwinMaker_EXPORTS.h>
#include <aws/iottwinmaker/model/EntityPropertyReference.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iottwinmaker/model/PropertyValue.h>
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
namespace IoTTwinMaker
{
namespace Model
{

  /**
   * <p>The history of values for a time series property.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iottwinmaker-2021-11-29/PropertyValueHistory">AWS
   * API Reference</a></p>
   */
  class PropertyValueHistory
  {
  public:
    AWS_IOTTWINMAKER_API PropertyValueHistory() = default;
    AWS_IOTTWINMAKER_API PropertyValueHistory(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTTWINMAKER_API PropertyValueHistory& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTTWINMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An object that uniquely identifies an entity property.</p>
     */
    inline const EntityPropertyReference& GetEntityPropertyReference() const { return m_entityPropertyReference; }
    inline bool EntityPropertyReferenceHasBeenSet() const { return m_entityPropertyReferenceHasBeenSet; }
    template<typename EntityPropertyReferenceT = EntityPropertyReference>
    void SetEntityPropertyReference(EntityPropertyReferenceT&& value) { m_entityPropertyReferenceHasBeenSet = true; m_entityPropertyReference = std::forward<EntityPropertyReferenceT>(value); }
    template<typename EntityPropertyReferenceT = EntityPropertyReference>
    PropertyValueHistory& WithEntityPropertyReference(EntityPropertyReferenceT&& value) { SetEntityPropertyReference(std::forward<EntityPropertyReferenceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of objects that contain information about the values in the history of
     * a time series property.</p>
     */
    inline const Aws::Vector<PropertyValue>& GetValues() const { return m_values; }
    inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }
    template<typename ValuesT = Aws::Vector<PropertyValue>>
    void SetValues(ValuesT&& value) { m_valuesHasBeenSet = true; m_values = std::forward<ValuesT>(value); }
    template<typename ValuesT = Aws::Vector<PropertyValue>>
    PropertyValueHistory& WithValues(ValuesT&& value) { SetValues(std::forward<ValuesT>(value)); return *this;}
    template<typename ValuesT = PropertyValue>
    PropertyValueHistory& AddValues(ValuesT&& value) { m_valuesHasBeenSet = true; m_values.emplace_back(std::forward<ValuesT>(value)); return *this; }
    ///@}
  private:

    EntityPropertyReference m_entityPropertyReference;
    bool m_entityPropertyReferenceHasBeenSet = false;

    Aws::Vector<PropertyValue> m_values;
    bool m_valuesHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTTwinMaker
} // namespace Aws

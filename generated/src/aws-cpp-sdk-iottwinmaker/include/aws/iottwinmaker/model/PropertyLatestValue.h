/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iottwinmaker/IoTTwinMaker_EXPORTS.h>
#include <aws/iottwinmaker/model/EntityPropertyReference.h>
#include <aws/iottwinmaker/model/DataValue.h>
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
   * <p>The latest value of the property.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iottwinmaker-2021-11-29/PropertyLatestValue">AWS
   * API Reference</a></p>
   */
  class PropertyLatestValue
  {
  public:
    AWS_IOTTWINMAKER_API PropertyLatestValue() = default;
    AWS_IOTTWINMAKER_API PropertyLatestValue(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTTWINMAKER_API PropertyLatestValue& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTTWINMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An object that specifies information about a property.</p>
     */
    inline const EntityPropertyReference& GetPropertyReference() const { return m_propertyReference; }
    inline bool PropertyReferenceHasBeenSet() const { return m_propertyReferenceHasBeenSet; }
    template<typename PropertyReferenceT = EntityPropertyReference>
    void SetPropertyReference(PropertyReferenceT&& value) { m_propertyReferenceHasBeenSet = true; m_propertyReference = std::forward<PropertyReferenceT>(value); }
    template<typename PropertyReferenceT = EntityPropertyReference>
    PropertyLatestValue& WithPropertyReference(PropertyReferenceT&& value) { SetPropertyReference(std::forward<PropertyReferenceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value of the property.</p>
     */
    inline const DataValue& GetPropertyValue() const { return m_propertyValue; }
    inline bool PropertyValueHasBeenSet() const { return m_propertyValueHasBeenSet; }
    template<typename PropertyValueT = DataValue>
    void SetPropertyValue(PropertyValueT&& value) { m_propertyValueHasBeenSet = true; m_propertyValue = std::forward<PropertyValueT>(value); }
    template<typename PropertyValueT = DataValue>
    PropertyLatestValue& WithPropertyValue(PropertyValueT&& value) { SetPropertyValue(std::forward<PropertyValueT>(value)); return *this;}
    ///@}
  private:

    EntityPropertyReference m_propertyReference;
    bool m_propertyReferenceHasBeenSet = false;

    DataValue m_propertyValue;
    bool m_propertyValueHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTTwinMaker
} // namespace Aws

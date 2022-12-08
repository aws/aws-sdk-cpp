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
   * <p>An object that specifies information about time series property values. This
   * object is used and consumed by the <a
   * href="https://docs.aws.amazon.com/iot-twinmaker/latest/apireference/API_BatchPutPropertyValues.html">BatchPutPropertyValues</a>
   * action.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iottwinmaker-2021-11-29/PropertyValueEntry">AWS
   * API Reference</a></p>
   */
  class PropertyValueEntry
  {
  public:
    AWS_IOTTWINMAKER_API PropertyValueEntry();
    AWS_IOTTWINMAKER_API PropertyValueEntry(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTTWINMAKER_API PropertyValueEntry& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTTWINMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>An object that contains information about the entity that has the
     * property.</p>
     */
    inline const EntityPropertyReference& GetEntityPropertyReference() const{ return m_entityPropertyReference; }

    /**
     * <p>An object that contains information about the entity that has the
     * property.</p>
     */
    inline bool EntityPropertyReferenceHasBeenSet() const { return m_entityPropertyReferenceHasBeenSet; }

    /**
     * <p>An object that contains information about the entity that has the
     * property.</p>
     */
    inline void SetEntityPropertyReference(const EntityPropertyReference& value) { m_entityPropertyReferenceHasBeenSet = true; m_entityPropertyReference = value; }

    /**
     * <p>An object that contains information about the entity that has the
     * property.</p>
     */
    inline void SetEntityPropertyReference(EntityPropertyReference&& value) { m_entityPropertyReferenceHasBeenSet = true; m_entityPropertyReference = std::move(value); }

    /**
     * <p>An object that contains information about the entity that has the
     * property.</p>
     */
    inline PropertyValueEntry& WithEntityPropertyReference(const EntityPropertyReference& value) { SetEntityPropertyReference(value); return *this;}

    /**
     * <p>An object that contains information about the entity that has the
     * property.</p>
     */
    inline PropertyValueEntry& WithEntityPropertyReference(EntityPropertyReference&& value) { SetEntityPropertyReference(std::move(value)); return *this;}


    /**
     * <p>A list of objects that specify time series property values.</p>
     */
    inline const Aws::Vector<PropertyValue>& GetPropertyValues() const{ return m_propertyValues; }

    /**
     * <p>A list of objects that specify time series property values.</p>
     */
    inline bool PropertyValuesHasBeenSet() const { return m_propertyValuesHasBeenSet; }

    /**
     * <p>A list of objects that specify time series property values.</p>
     */
    inline void SetPropertyValues(const Aws::Vector<PropertyValue>& value) { m_propertyValuesHasBeenSet = true; m_propertyValues = value; }

    /**
     * <p>A list of objects that specify time series property values.</p>
     */
    inline void SetPropertyValues(Aws::Vector<PropertyValue>&& value) { m_propertyValuesHasBeenSet = true; m_propertyValues = std::move(value); }

    /**
     * <p>A list of objects that specify time series property values.</p>
     */
    inline PropertyValueEntry& WithPropertyValues(const Aws::Vector<PropertyValue>& value) { SetPropertyValues(value); return *this;}

    /**
     * <p>A list of objects that specify time series property values.</p>
     */
    inline PropertyValueEntry& WithPropertyValues(Aws::Vector<PropertyValue>&& value) { SetPropertyValues(std::move(value)); return *this;}

    /**
     * <p>A list of objects that specify time series property values.</p>
     */
    inline PropertyValueEntry& AddPropertyValues(const PropertyValue& value) { m_propertyValuesHasBeenSet = true; m_propertyValues.push_back(value); return *this; }

    /**
     * <p>A list of objects that specify time series property values.</p>
     */
    inline PropertyValueEntry& AddPropertyValues(PropertyValue&& value) { m_propertyValuesHasBeenSet = true; m_propertyValues.push_back(std::move(value)); return *this; }

  private:

    EntityPropertyReference m_entityPropertyReference;
    bool m_entityPropertyReferenceHasBeenSet = false;

    Aws::Vector<PropertyValue> m_propertyValues;
    bool m_propertyValuesHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTTwinMaker
} // namespace Aws
